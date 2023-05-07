using System;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;
using Whisper.Utils;
using Whisper;

public class VoiceControl : MonoBehaviour
{
    public WhisperManager whisper;
    public MicrophoneRecord microphoneRecord;
    public bool streamSegments = true;
    public bool printLanguage = true;

    [Header("UI")]
    public Button button;
    public Text buttonText;
    public Text outputText;
    public Text timeText;

    private string _buffer;

    // Start is called before the first frame update
    void Awake()
    {
        button.onClick.AddListener(OnButtonPressed);
        microphoneRecord.OnRecordStop += Transcribe;
    }

    private void OnButtonPressed()
    {
        if (!microphoneRecord.IsRecording)
            microphoneRecord.StartRecord();
        else
            microphoneRecord.StopRecord();

        if (buttonText)
            buttonText.text = microphoneRecord.IsRecording ? "Stop" : "Record";
    }

    private async void Transcribe(float[] data, int frequency, int channels, float length)
    {
        _buffer = "";

        var sw = new Stopwatch();
        sw.Start();

        var res = await whisper.GetTextAsync(data, frequency, channels);

        var time = sw.ElapsedMilliseconds;
        var rate = length / (time * 0.001f);
        timeText.text = $"Time: {time} ms\nRate: {rate:F1}x";
        if (res == null)
            return;

        var text = res.Result;
        if (printLanguage)
            text += $"\n\nLanguage: {res.Language}";
        outputText.text = text;

    }
}
