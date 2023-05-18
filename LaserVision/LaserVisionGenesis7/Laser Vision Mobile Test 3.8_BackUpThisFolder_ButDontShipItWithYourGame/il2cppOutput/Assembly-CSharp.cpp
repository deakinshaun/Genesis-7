#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Photon.Bolt.Collections.BoltDoubleList`1<Photon.Bolt.Internal.GlobalEventListenerBase>
struct BoltDoubleList_1_t2F0E19BAB3CA7567E5600D1EE23786A1BAE0FE92;
// Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>
struct EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB;
// Photon.Bolt.EntityBehaviour`1<System.Object>
struct EntityBehaviour_1_t6EA9044D66B2024D72CE93CBD0A3EA440EF9A6B9;
// System.Func`3<Photon.Bolt.BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_3_t21D93F5234711121A023A827D18B31328ECE216C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct IEnumerator_1_t624E4ACED0595D86B82D760C85467E4E14C56461;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>>
struct IEnumerator_1_t1C6680AD02745FBC419AC12A66AB772A80188925;
// UdpKit.Map`2<System.Guid,System.Object>
struct Map_2_t9B9A32BAB6B65441FDCBB6779EA913BB502A239D;
// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>
struct Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Photon.Bolt.BoltEntity
struct BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE;
// Camera
struct Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Drawing
struct Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918;
// DrawingRelease
struct DrawingRelease_tBE3093841A8A1CD14B0CF594ED6B6A0453C0F04E;
// Photon.Bolt.Entity
struct Entity_tC6B001F98F62A243289C392B1E300E20F6B3DEC5;
// Photon.Bolt.EntityBehaviour
struct EntityBehaviour_tDE1DB84EC8CE8F3C2F53190B69AFA8452CDD2490;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Photon.Bolt.GlobalEventListener
struct GlobalEventListener_t1936EE2D62093CA230BC2F1615BD3AB59F253CD3;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// Photon.Bolt.IPlayerState1
struct IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4;
// Photon.Bolt.IProtocolToken
struct IProtocolToken_tB524DC17264ED5B421A139F373F65FF712065B83;
// LaserActivation
struct LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NetworkCallbacks
struct NetworkCallbacks_t670F890E2D3703BF2EFE9B954BBDED7FF063A654;
// PlayerJoined
struct PlayerJoined_t10CDC69CC8B001DAA3CFCDE49C0199E4DB6C7E1B;
// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// TrackGyro
struct TrackGyro_t9D68451D8A9E2965BC3228E47FBFCAFE2333120A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UdpKit.UdpSession
struct UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1C6680AD02745FBC419AC12A66AB772A80188925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_t407C6799D8A49D5EF7F1A7EDFB8D0467FC4D7843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral9D7CB6782CB44622C0AC0B072BC7B8822D13C508;
IL2CPP_EXTERN_C const RuntimeMethod* Drawing_DrawR_m6628B84833DF7FF01C23DED50D237E47E840B8B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Drawing_Draw_m03E5F74CB613785D8A4A9115E8CBF25AA2AD1F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2E43A5C4EB50F321A20D8C8CDEC7D2A022E36912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LaserActivation_LasersR_mC601BC4EC81473CD716E25B826593ED2FF67E881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LaserActivation_Lasers_mB5A6AC3C1916A070361E698201BE8A4516F38D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Map_2_GetEnumerator_mB8E5CD654C473E77A876965812B0708D0B5B540D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UdpKit.UdpSession
struct UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Photon.Bolt.Collections.DoubleBuffer`1<UnityEngine.Quaternion>
struct DoubleBuffer_1_t44030E253F101D850836E08791AD8280B3012E19 
{
	// T Photon.Bolt.Collections.DoubleBuffer`1::Previous
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Previous_0;
	// T Photon.Bolt.Collections.DoubleBuffer`1::Current
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Current_1;
};

// Photon.Bolt.Collections.DoubleBuffer`1<UnityEngine.Vector3>
struct DoubleBuffer_1_t9B64DEFE235CE5B294E4AAA0D552D0ED641452C8 
{
	// T Photon.Bolt.Collections.DoubleBuffer`1::Previous
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Previous_0;
	// T Photon.Bolt.Collections.DoubleBuffer`1::Current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Current_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>
struct KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___value_1;
};

// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>
struct Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3  : public RuntimeObject
{
	// K UdpKit.Map`2::_key
	Guid_t ____key_1;
	// V UdpKit.Map`2::_value
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ____value_2;
	// System.Int32 UdpKit.Map`2::_count
	int32_t ____count_3;
	// System.Int32 UdpKit.Map`2::_height
	int32_t ____height_4;
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_left
	Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* ____left_5;
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_right
	Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* ____right_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Photon.Bolt.NetworkTransform
struct NetworkTransform_t7704DAF3F6E7BBE5D0E8B9AD76DE586F71CA483B  : public RuntimeObject
{
	// System.Int32 Photon.Bolt.NetworkTransform::PropertyIndex
	int32_t ___PropertyIndex_0;
	// UnityEngine.Transform Photon.Bolt.NetworkTransform::Render
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Render_1;
	// UnityEngine.Transform Photon.Bolt.NetworkTransform::Simulate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Simulate_2;
	// System.Boolean Photon.Bolt.NetworkTransform::SkipInterpolation
	bool ___SkipInterpolation_3;
	// System.Func`3<Photon.Bolt.BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3> Photon.Bolt.NetworkTransform::Clamper
	Func_3_t21D93F5234711121A023A827D18B31328ECE216C* ___Clamper_4;
	// Photon.Bolt.Collections.DoubleBuffer`1<UnityEngine.Vector3> Photon.Bolt.NetworkTransform::RenderDoubleBufferPosition
	DoubleBuffer_1_t9B64DEFE235CE5B294E4AAA0D552D0ED641452C8 ___RenderDoubleBufferPosition_5;
	// Photon.Bolt.Collections.DoubleBuffer`1<UnityEngine.Quaternion> Photon.Bolt.NetworkTransform::RenderDoubleBufferRotation
	DoubleBuffer_1_t44030E253F101D850836E08791AD8280B3012E19 ___RenderDoubleBufferRotation_6;
	// Photon.Bolt.TransformSpaces Photon.Bolt.NetworkTransform::space
	int32_t ___space_7;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Bolt.BoltEntity
struct BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Bolt.Entity Photon.Bolt.BoltEntity::_entity
	Entity_tC6B001F98F62A243289C392B1E300E20F6B3DEC5* ____entity_4;
	// System.String Photon.Bolt.BoltEntity::_sceneGuid
	String_t* ____sceneGuid_5;
	// System.String Photon.Bolt.BoltEntity::_serializerGuid
	String_t* ____serializerGuid_6;
	// System.Int32 Photon.Bolt.BoltEntity::_prefabId
	int32_t ____prefabId_7;
	// System.Int32 Photon.Bolt.BoltEntity::_updateRate
	int32_t ____updateRate_8;
	// System.Int32 Photon.Bolt.BoltEntity::_autoFreezeProxyFrames
	int32_t ____autoFreezeProxyFrames_9;
	// System.Boolean Photon.Bolt.BoltEntity::_clientPredicted
	bool ____clientPredicted_10;
	// System.Boolean Photon.Bolt.BoltEntity::_allowInstantiateOnClient
	bool ____allowInstantiateOnClient_11;
	// System.Boolean Photon.Bolt.BoltEntity::_persistThroughSceneLoads
	bool ____persistThroughSceneLoads_12;
	// System.Boolean Photon.Bolt.BoltEntity::_sceneObjectDestroyOnDetach
	bool ____sceneObjectDestroyOnDetach_13;
	// System.Boolean Photon.Bolt.BoltEntity::_sceneObjectAutoAttach
	bool ____sceneObjectAutoAttach_14;
	// System.Boolean Photon.Bolt.BoltEntity::_alwaysProxy
	bool ____alwaysProxy_15;
	// System.Boolean Photon.Bolt.BoltEntity::_detachOnDisable
	bool ____detachOnDisable_16;
	// System.Boolean Photon.Bolt.BoltEntity::_allowFirstReplicationWhenFrozen
	bool ____allowFirstReplicationWhenFrozen_17;
	// System.Boolean Photon.Bolt.BoltEntity::_autoRemoveChildEntities
	bool ____autoRemoveChildEntities_18;
	// Photon.Bolt.QueryComponentOptions Photon.Bolt.BoltEntity::_entityBehaviourQueryOption
	int32_t ____entityBehaviourQueryOption_19;
	// Photon.Bolt.QueryComponentOptions Photon.Bolt.BoltEntity::_entityPriorityCalculatorQueryOption
	int32_t ____entityPriorityCalculatorQueryOption_20;
	// Photon.Bolt.QueryComponentOptions Photon.Bolt.BoltEntity::_entityReplicationFilterQueryOption
	int32_t ____entityReplicationFilterQueryOption_21;
	// Photon.Bolt.BoltEntity Photon.Bolt.BoltEntity::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.BoltEntity>.prev>k__BackingField
	BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_BoltEntityU3E_prevU3Ek__BackingField_22;
	// Photon.Bolt.BoltEntity Photon.Bolt.BoltEntity::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.BoltEntity>.next>k__BackingField
	BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_BoltEntityU3E_nextU3Ek__BackingField_23;
	// System.Object Photon.Bolt.BoltEntity::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.BoltEntity>.list>k__BackingField
	RuntimeObject* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_BoltEntityU3E_listU3Ek__BackingField_24;
};

// DrawingRelease
struct DrawingRelease_tBE3093841A8A1CD14B0CF594ED6B6A0453C0F04E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Bolt.EntityBehaviour
struct EntityBehaviour_tDE1DB84EC8CE8F3C2F53190B69AFA8452CDD2490  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Bolt.BoltEntity Photon.Bolt.EntityBehaviour::_entity
	BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* ____entity_4;
};

// Photon.Bolt.Internal.GlobalEventListenerBase
struct GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Bolt.Internal.GlobalEventListenerBase Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.prev>k__BackingField
	GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5;
	// Photon.Bolt.Internal.GlobalEventListenerBase Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.next>k__BackingField
	GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6;
	// System.Object Photon.Bolt.Internal.GlobalEventListenerBase::<Photon.Bolt.Collections.IBoltListNode<Photon.Bolt.Internal.GlobalEventListenerBase>.list>k__BackingField
	RuntimeObject* ___U3CPhoton_Bolt_Collections_IBoltListNodeU3CPhoton_Bolt_Internal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7;
};

// TrackGyro
struct TrackGyro_t9D68451D8A9E2965BC3228E47FBFCAFE2333120A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>
struct EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB  : public EntityBehaviour_tDE1DB84EC8CE8F3C2F53190B69AFA8452CDD2490
{
};

// Photon.Bolt.GlobalEventListener
struct GlobalEventListener_t1936EE2D62093CA230BC2F1615BD3AB59F253CD3  : public GlobalEventListenerBase_tC37D45E919EC0341DAE3AD17676CDD9011E99EE4
{
};

// Camera
struct Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24  : public EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB
{
	// UnityEngine.Material Camera::camMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___camMaterial_5;
	// UnityEngine.WebCamTexture Camera::wcTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ___wcTexture_6;
};

// Drawing
struct Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918  : public EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB
{
	// UnityEngine.GameObject Drawing::drawPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawPoint_5;
	// UnityEngine.GameObject Drawing::drawSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___drawSpawn_6;
};

// LaserActivation
struct LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4  : public EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB
{
	// UnityEngine.GameObject LaserActivation::lasers
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lasers_5;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public GlobalEventListener_t1936EE2D62093CA230BC2F1615BD3AB59F253CD3
{
};

// NetworkCallbacks
struct NetworkCallbacks_t670F890E2D3703BF2EFE9B954BBDED7FF063A654  : public GlobalEventListener_t1936EE2D62093CA230BC2F1615BD3AB59F253CD3
{
	// UnityEngine.GameObject NetworkCallbacks::hostPlayer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hostPlayer_8;
};

// PlayerJoined
struct PlayerJoined_t10CDC69CC8B001DAA3CFCDE49C0199E4DB6C7E1B  : public EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB
{
	// Camera PlayerJoined::entityCamera
	Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* ___entityCamera_5;
};

// PlayerMovement
struct PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351  : public EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB
{
};

// <Module>

// <Module>

// UnityEngine.Gyroscope

// UnityEngine.Gyroscope

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UdpKit.UdpSession

// UdpKit.UdpSession

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>

// System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>

// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>
struct Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3_StaticFields
{
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_empty
	Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* ____empty_0;
};

// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// Photon.Bolt.NetworkTransform

// Photon.Bolt.NetworkTransform

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Action

// System.Action

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.WebCamTexture

// UnityEngine.WebCamTexture

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Photon.Bolt.BoltEntity

// Photon.Bolt.BoltEntity

// DrawingRelease

// DrawingRelease

// Photon.Bolt.EntityBehaviour

// Photon.Bolt.EntityBehaviour

// TrackGyro

// TrackGyro

// Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>

// Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>

// Photon.Bolt.GlobalEventListener

// Photon.Bolt.GlobalEventListener

// Camera

// Camera

// Drawing

// Drawing

// LaserActivation

// LaserActivation

// Menu

// Menu

// NetworkCallbacks

// NetworkCallbacks

// PlayerJoined

// PlayerJoined

// PlayerMovement

// PlayerMovement
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Photon.Bolt.EntityBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityBehaviour_1__ctor_m72ACFCA5031580CE122CCDA7505F6C6067B328D5_gshared (EntityBehaviour_1_t6EA9044D66B2024D72CE93CBD0A3EA440EF9A6B9* __this, const RuntimeMethod* method) ;
// TState Photon.Bolt.EntityBehaviour`1<System.Object>::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EntityBehaviour_1_get_state_m422F181219FA3692605092241C8943E4DE728048_gshared (EntityBehaviour_1_t6EA9044D66B2024D72CE93CBD0A3EA440EF9A6B9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<K,V>> UdpKit.Map`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Map_2_GetEnumerator_mDAA61B911432237681EF0F1F4F229B5740FB01BE_gshared (Map_2_t9B9A32BAB6B65441FDCBB6779EA913BB502A239D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) ;

// Photon.Bolt.BoltEntity Photon.Bolt.EntityBehaviour::get_entity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8 (EntityBehaviour_tDE1DB84EC8CE8F3C2F53190B69AFA8452CDD2490* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Bolt.BoltEntity::get_IsOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5 (BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26 (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* __this, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>::.ctor()
inline void EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E (EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB* __this, const RuntimeMethod* method)
{
	((  void (*) (EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB*, const RuntimeMethod*))EntityBehaviour_1__ctor_m72ACFCA5031580CE122CCDA7505F6C6067B328D5_gshared)(__this, method);
}
// TState Photon.Bolt.EntityBehaviour`1<Photon.Bolt.IPlayerState1>::get_state()
inline RuntimeObject* EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB (EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (EntityBehaviour_1_t5453FC18B8B51FA94E4695FD9437AFE1EE326FEB*, const RuntimeMethod*))EntityBehaviour_1_get_state_m422F181219FA3692605092241C8943E4DE728048_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltLauncher::StartServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartServer_m53E129FF44CB9190BBF0F7847720021009E8C8FB (int32_t ___0_port, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.Matchmaking.BoltMatchmaking::CreateSession(System.String,Photon.Bolt.IProtocolToken,System.String,Photon.Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltMatchmaking_CreateSession_mEB09EB50E84DCABEB23CFD73FEAB2BA440AF55BB (String_t* ___0_sessionID, RuntimeObject* ___1_token, String_t* ___2_sceneToLoad, RuntimeObject* ___3_sceneToken, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.BoltLauncher::StartClient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartClient_m7387795EFA20B5CF7E032EE45C6E1A20AB4DFEAA (int32_t ___0_port, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<K,V>> UdpKit.Map`2<System.Guid,UdpKit.UdpSession>::GetEnumerator()
inline RuntimeObject* Map_2_GetEnumerator_mB8E5CD654C473E77A876965812B0708D0B5B540D (Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3*, const RuntimeMethod*))Map_2_GetEnumerator_mDAA61B911432237681EF0F1F4F229B5740FB01BE_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>::get_Value()
inline UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* KeyValuePair_2_get_Value_m2E43A5C4EB50F321A20D8C8CDEC7D2A022E36912_inline (KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3* __this, const RuntimeMethod* method)
{
	return ((  UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* (*) (KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline)(__this, method);
}
// System.Void Photon.Bolt.Matchmaking.BoltMatchmaking::JoinSession(UdpKit.UdpSession,Photon.Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltMatchmaking_JoinSession_mDD08EF62D22F5E04BBC151E09CF0CBA81CF67921 (UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* ___0_session, RuntimeObject* ___1_token, const RuntimeMethod* method) ;
// System.Void Photon.Bolt.GlobalEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventListener__ctor_m8B35A1C34BCEE7C5178539220063EA8B1DAD3E22 (GlobalEventListener_t1936EE2D62093CA230BC2F1615BD3AB59F253CD3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// Photon.Bolt.BoltEntity Photon.Bolt.BoltNetwork::Instantiate(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* BoltNetwork_Instantiate_mE7B2770C76FA7259500A321FC1208D852A16F43B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Camera::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Attached_m2D325FD68C6816141BE26DEDDD030604EB9DBD26 (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (entity.IsOwner)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// wcTexture = new WebCamTexture();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_2 = (WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749*)il2cpp_codegen_object_new(WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebCamTexture__ctor_mCDCF373E41263EE323147C4A50609EBE9FA28269(L_2, NULL);
		__this->___wcTexture_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wcTexture_6), (void*)L_2);
		// camMaterial.mainTexture = wcTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___camMaterial_5;
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___wcTexture_6;
		NullCheck(L_3);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_3, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Camera::SimulateOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_SimulateOwner_m136E3B638784BA5DBF381A429330C2B3C87D6EBF (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	{
		// if (!wcTexture.isPlaying && entity.IsOwner)
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_0 = __this->___wcTexture_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = WebCamTexture_get_isPlaying_mE53901F249CD5FFF9D1C31DDCC2FC331DCEA80CF(L_0, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_2;
		L_2 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// wcTexture.Play();
		WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* L_4 = __this->___wcTexture_6;
		NullCheck(L_4);
		WebCamTexture_Play_mAB313C6F98D5433C414DA31DD96316BDE8D19A26(L_4, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera__ctor_m25E6BFC52C3B33D00EB7D3809145AB3A385B3EFC (Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E(__this, EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Drawing::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing_Attached_m6DE3736C6FA7E055E43A6922C299DC4D9E622CDA (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Drawing_DrawR_m6628B84833DF7FF01C23DED50D237E47E840B8B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Drawing_Draw_m03E5F74CB613785D8A4A9115E8CBF25AA2AD1F4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.OnDraw = Draw;
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)Drawing_Draw_m03E5F74CB613785D8A4A9115E8CBF25AA2AD1F4D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Void Photon.Bolt.IPlayerState1::set_OnDraw(System.Action) */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0, L_1);
		// state.OnDrawR = DrawR;
		RuntimeObject* L_2;
		L_2 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)Drawing_DrawR_m6628B84833DF7FF01C23DED50D237E47E840B8B0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(4 /* System.Void Photon.Bolt.IPlayerState1::set_OnDrawR(System.Action) */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Drawing::Draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing_Draw_m03E5F74CB613785D8A4A9115E8CBF25AA2AD1F4D (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (entity.IsOwner)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Instantiate(drawPoint, drawSpawn.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___drawPoint_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___drawSpawn_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Drawing::DrawR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing_DrawR_m6628B84833DF7FF01C23DED50D237E47E840B8B0 (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	{
		// if (entity.IsOwner)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// drawSpawn.transform.DetachChildren();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___drawSpawn_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_DetachChildren_m7E4B3405F2F053B059E76EC1DF0F235EED335D69(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Drawing::drawingPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing_drawingPress_m53EED7E73B546DE05204EF34B2B1B9FA55F8BDED (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.Draw();
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Photon.Bolt.IPlayerState1::Draw() */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Drawing::drawingRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing_drawingRelease_m8B7C93F3C172CC5755DF18615B3830AB3F7D586A (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.DrawR();
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Photon.Bolt.IPlayerState1::DrawR() */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Drawing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawing__ctor_mBD3DA2CC02A72B118AB85E2D73B537AF1A3F649C (Drawing_t8A457FA9D4D22521773160B84F3332A896BF0918* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E(__this, EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DrawingRelease::drawingRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingRelease_drawingRelease_m2735D9A7840CD2F6D97C5C2484A6739FBC1C01AD (DrawingRelease_tBE3093841A8A1CD14B0CF594ED6B6A0453C0F04E* __this, const RuntimeMethod* method) 
{
	{
		// transform.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void DrawingRelease::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawingRelease__ctor_m078FDC8FAB4B74FDCDF65810CCE1ED76D39438A8 (DrawingRelease_tBE3093841A8A1CD14B0CF594ED6B6A0453C0F04E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LaserActivation::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation_Attached_mC578B82ABF0BA6CE69888CC7C3F4E2ADAB81BABC (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserActivation_LasersR_mC601BC4EC81473CD716E25B826593ED2FF67E881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserActivation_Lasers_mB5A6AC3C1916A070361E698201BE8A4516F38D73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.OnLasers = Lasers;
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)LaserActivation_Lasers_mB5A6AC3C1916A070361E698201BE8A4516F38D73_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(6 /* System.Void Photon.Bolt.IPlayerState1::set_OnLasers(System.Action) */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0, L_1);
		// state.OnLasersR = LasersR;
		RuntimeObject* L_2;
		L_2 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)LaserActivation_LasersR_mC601BC4EC81473CD716E25B826593ED2FF67E881_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(8 /* System.Void Photon.Bolt.IPlayerState1::set_OnLasersR(System.Action) */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void LaserActivation::Lasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation_Lasers_mB5A6AC3C1916A070361E698201BE8A4516F38D73 (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	{
		// if (entity.IsOwner)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// lasers.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___lasers_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LaserActivation::LasersR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation_LasersR_mC601BC4EC81473CD716E25B826593ED2FF67E881 (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	{
		// if (entity.IsOwner)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// lasers.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___lasers_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void LaserActivation::activateLasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation_activateLasers_mFBB3B78F9354D8C28BD4D56D1E15F4D2C7306F0F (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.Lasers();
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Photon.Bolt.IPlayerState1::Lasers() */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void LaserActivation::removeLasers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation_removeLasers_m3568CF8CF96D361574896273FA47275FAE746893 (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.LasersR();
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Photon.Bolt.IPlayerState1::LasersR() */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void LaserActivation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserActivation__ctor_mB0E28B943392F956E4AAB91EECA9C4E9A2CA51DA (LaserActivation_t05D1BA768E4C44E1DAABE1BE293396D647242FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E(__this, EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartServer_m3D9219BB578DDA9BAA1A36EBE4B5C1661C339EC7 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// BoltLauncher.StartServer();
		BoltLauncher_StartServer_m53E129FF44CB9190BBF0F7847720021009E8C8FB((-1), NULL);
		// }
		return;
	}
}
// System.Void Menu::BoltStartDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_BoltStartDone_mC6C4103A8321B3FAF12EAC3913FB73915B5585B4 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D7CB6782CB44622C0AC0B072BC7B8822D13C508);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoltMatchmaking.CreateSession(sessionID: "LaserVision", sceneToLoad: "Game");
		BoltMatchmaking_CreateSession_mEB09EB50E84DCABEB23CFD73FEAB2BA440AF55BB(_stringLiteral9D7CB6782CB44622C0AC0B072BC7B8822D13C508, (RuntimeObject*)NULL, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Menu::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartClient_m2C8013EA19FA795F4155BCC2FEA5434D4E536B94 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// BoltLauncher.StartClient();
		BoltLauncher_StartClient_m7387795EFA20B5CF7E032EE45C6E1A20AB4DFEAA((-1), NULL);
		// }
		return;
	}
}
// System.Void Menu::SessionListUpdated(UdpKit.Map`2<System.Guid,UdpKit.UdpSession>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SessionListUpdated_m6AACF9CD0286CA5042A14B15851C538FE065F38A (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* ___0_sessionList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1C6680AD02745FBC419AC12A66AB772A80188925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2E43A5C4EB50F321A20D8C8CDEC7D2A022E36912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Map_2_GetEnumerator_mB8E5CD654C473E77A876965812B0708D0B5B540D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* V_2 = NULL;
	{
		// foreach (var session in sessionList)
		Map_2_tE45AE3DCF45DDA1A562FEAE11D6123757921E0D3* L_0 = ___0_sessionList;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Map_2_GetEnumerator_mB8E5CD654C473E77A876965812B0708D0B5B540D(L_0, Map_2_GetEnumerator_mB8E5CD654C473E77A876965812B0708D0B5B540D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0009_1:
			{
				// foreach (var session in sessionList)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tE97238FC3BBBA85DB1F8E54C8D44F30E0AC3BEC3 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>>::get_Current() */, IEnumerator_1_t1C6680AD02745FBC419AC12A66AB772A80188925_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// UdpSession photonSession = session.Value as UdpSession;
				UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_6;
				L_6 = KeyValuePair_2_get_Value_m2E43A5C4EB50F321A20D8C8CDEC7D2A022E36912_inline((&V_1), KeyValuePair_2_get_Value_m2E43A5C4EB50F321A20D8C8CDEC7D2A022E36912_RuntimeMethod_var);
				V_2 = L_6;
				// if(photonSession.Source == UdpSessionSource.Photon)
				UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_7 = V_2;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* UdpKit.UdpSessionSource UdpKit.UdpSession::get_Source() */, L_7);
				if ((!(((uint32_t)L_8) == ((uint32_t)1))))
				{
					goto IL_0028_1;
				}
			}
			{
				// BoltMatchmaking.JoinSession(photonSession);
				UdpSession_t8F3C627097E1BBAF406ABA81251BD689205E92E4* L_9 = V_2;
				BoltMatchmaking_JoinSession_mDD08EF62D22F5E04BBC151E09CF0CBA81CF67921(L_9, (RuntimeObject*)NULL, NULL);
			}

IL_0028_1:
			{
				// foreach (var session in sessionList)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		GlobalEventListener__ctor_m8B35A1C34BCEE7C5178539220063EA8B1DAD3E22(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkCallbacks::SceneLoadLocalDone(System.String,Photon.Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCallbacks_SceneLoadLocalDone_m460838A7DB2223F9DC179485637A4F5CFE04F61F (NetworkCallbacks_t670F890E2D3703BF2EFE9B954BBDED7FF063A654* __this, String_t* ___0_scene, RuntimeObject* ___1_ipt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var spawnPos = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), (0.0f), NULL);
		// BoltNetwork.Instantiate(hostPlayer, spawnPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hostPlayer_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(BoltNetwork_t089758D07E24A397C5DB492715117C30154CD81C_il2cpp_TypeInfo_var);
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_3;
		L_3 = BoltNetwork_Instantiate_mE7B2770C76FA7259500A321FC1208D852A16F43B(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void NetworkCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCallbacks__ctor_m08E46541A8F06A9A5D7EB561D80C96B4030F3DF7 (NetworkCallbacks_t670F890E2D3703BF2EFE9B954BBDED7FF063A654* __this, const RuntimeMethod* method) 
{
	{
		GlobalEventListener__ctor_m8B35A1C34BCEE7C5178539220063EA8B1DAD3E22(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerJoined::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJoined_Attached_m9B3F515D5E0659F5B466510F6C7835C52D4EE45F (PlayerJoined_t10CDC69CC8B001DAA3CFCDE49C0199E4DB6C7E1B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerJoined::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJoined_Update_m23F9C41E104C0899BB6DBF928CD591B4BFECD83B (PlayerJoined_t10CDC69CC8B001DAA3CFCDE49C0199E4DB6C7E1B* __this, const RuntimeMethod* method) 
{
	{
		// if (entity.IsOwner && entityCamera.gameObject.activeInHierarchy == false)
		BoltEntity_t8C34CCE4400AF4068CEC5925CA85AF69BDDCE4FE* L_0;
		L_0 = EntityBehaviour_get_entity_m2405ED964BD234CEA262839135B61E1478A20AD8(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BoltEntity_get_IsOwner_m34D2FB858E206DA116F729AEFDA7708AF65FB5B5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* L_2 = __this->___entityCamera_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		// entityCamera.gameObject.SetActive(true);
		Camera_t9FA9D68A2946676AA0E9C404046C831F5535DB24* L_5 = __this->___entityCamera_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void PlayerJoined::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerJoined__ctor_m4957EF1C58978E1793C35015614C9E7F5188360E (PlayerJoined_t10CDC69CC8B001DAA3CFCDE49C0199E4DB6C7E1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E(__this, EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Attached_mDF21600D9C336C1717470C5B62FD9FE9DA11940B (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IState_t407C6799D8A49D5EF7F1A7EDFB8D0467FC4D7843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.SetTransforms(state.PlayerTransform, transform);
		RuntimeObject* L_0;
		L_0 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB(__this, EntityBehaviour_1_get_state_m32C34CDF233992CFD6B0880BE1FE40B94FB97BFB_RuntimeMethod_var);
		NullCheck(L_1);
		NetworkTransform_t7704DAF3F6E7BBE5D0E8B9AD76DE586F71CA483B* L_2;
		L_2 = InterfaceFuncInvoker0< NetworkTransform_t7704DAF3F6E7BBE5D0E8B9AD76DE586F71CA483B* >::Invoke(0 /* Photon.Bolt.NetworkTransform Photon.Bolt.IPlayerState1::get_PlayerTransform() */, IPlayerState1_t18610C8865CC13F8C602B8B38FC6B2015190B1C4_il2cpp_TypeInfo_var, L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< NetworkTransform_t7704DAF3F6E7BBE5D0E8B9AD76DE586F71CA483B*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(14 /* System.Void Photon.Bolt.IState::SetTransforms(Photon.Bolt.NetworkTransform,UnityEngine.Transform) */, IState_t407C6799D8A49D5EF7F1A7EDFB8D0467FC4D7843_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_4;
		L_4 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_4);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::SimulateOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_SimulateOwner_mC18D3B2991CF134AC411171A66F0E60405A3287C (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.rotation = Quaternion.Euler(90, 0, 90) * Input.gyro.attitude * Quaternion.Euler(180, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), (0.0f), (90.0f), NULL);
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((180.0f), (180.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mB37559C5B0638161878D20E00B7C672FC38BBBAA (PlayerMovement_t4A0A0A8C937BC1D4FC570D1B5B50847338423351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E(__this, EntityBehaviour_1__ctor_m02F06474C77F9FA872143EF5D7F281B3B7ED1D3E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackGyro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackGyro_Start_m921BD5ADD95F1F6227E7B940D848841165A2B043 (TrackGyro_t9D68451D8A9E2965BC3228E47FBFCAFE2333120A* __this, const RuntimeMethod* method) 
{
	{
		// Input.gyro.enabled = true;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_0);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TrackGyro::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackGyro_Update_mDB3505CCC0F04B06832BB3B9DCC34E29B82B6EA9 (TrackGyro_t9D68451D8A9E2965BC3228E47FBFCAFE2333120A* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.rotation = Quaternion.Euler(90, 0, 90) * Input.gyro.attitude * Quaternion.Euler(180, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), (0.0f), (90.0f), NULL);
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m895498B803FE9A3124FBFE3C05966431F8840548(NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((180.0f), (180.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void TrackGyro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackGyro__ctor_m8E99316F0DC25A577EB2F44C3ED420CE809FFE15 (TrackGyro_t9D68451D8A9E2965BC3228E47FBFCAFE2333120A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m2A56B01BF54F80055FA9D4B744AD9DBDC6EAE22D_gshared_inline (KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
