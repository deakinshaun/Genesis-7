using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public static class TextureFilter
{
    public static void Convolution(Texture2D sourceTex, Texture2D targetTex, float[,] kernel, float factor)
    {
        int kernelSize = kernel.GetLength(0);
        int halfKernelSize = kernelSize / 2;

        Color[] sourcePixels = sourceTex.GetPixels();
        Color[] targetPixels = new Color[sourcePixels.Length];

        int width = sourceTex.width;
        int height = sourceTex.height;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                float r = 0, g = 0, b = 0;

                for (int ky = 0; ky < kernelSize; ky++)
                {
                    for (int kx = 0; kx < kernelSize; kx++)
                    {
                        int pixelX = Mathf.Clamp(x + kx - halfKernelSize, 0, width - 1);
                        int pixelY = Mathf.Clamp(y + ky - halfKernelSize, 0, height - 1);
                        int pixelIndex = pixelY * width + pixelX;
                        Color pixel = sourcePixels[pixelIndex];

                        float kernelValue = kernel[ky, kx];

                        r += pixel.r * kernelValue;
                        g += pixel.g * kernelValue;
                        b += pixel.b * kernelValue;
                    }
                }

                int index = y * width + x;
                targetPixels[index] = new Color(r * factor, g * factor, b * factor);
            }
        }

        targetTex.SetPixels(targetPixels);
        targetTex.Apply();
    }
}


