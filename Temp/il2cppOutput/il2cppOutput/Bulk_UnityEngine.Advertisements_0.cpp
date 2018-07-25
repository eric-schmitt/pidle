﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct Action_1_t535963774;
// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>[]
struct Action_1U5BU5D_t3839123403;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t3243021218;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t3055037934;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1747829908;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>
struct Transform_1_t1106172177;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t2127073292;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t286439485;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1444694249;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3877623603;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t4177511560;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t1252675087;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct Dictionary_2_t3724735600;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t2160873542;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct Dictionary_2_t337966759;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct Dictionary_2_t1276718557;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1613291102;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t380635627;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t4011493774;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t2188586991;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t624724933;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct IDictionary_2_t3096785446;
// System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_t4035537244;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3280590014;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t3161555474;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t3962162136;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400637802;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907;
// System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>[]
struct KeyValuePair_2U5BU5D_t2255760461;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct Queue_1_t382223268;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Enum
struct Enum_t4135868527;
// System.EventArgs
struct EventArgs_t3591816995;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t177306446;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t908338235;
// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2768214265;
// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t2215985868;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Net.WebRequest
struct WebRequest_t1939381076;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t3941511869;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0
struct U3CShowU3Ec__AnonStorey0_t3170924441;
// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1
struct U3CShowU3Ec__AnonStorey1_t3170924442;
// UnityEngine.Advertisements.Android.Platform
struct Platform_t1698302846;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4
struct U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5
struct U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2
struct U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3
struct U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0
struct U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815;
// UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1
struct U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353;
// UnityEngine.Advertisements.CallbackExecutor
struct CallbackExecutor_t363496179;
// UnityEngine.Advertisements.Editor.Configuration
struct Configuration_t1722493896;
// UnityEngine.Advertisements.Editor.Placeholder
struct Placeholder_t2906495853;
// UnityEngine.Advertisements.Editor.Platform
struct Platform_t2756657262;
// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t2183256279;
// UnityEngine.Advertisements.ErrorEventArgs
struct ErrorEventArgs_t2253147013;
// UnityEngine.Advertisements.FinishEventArgs
struct FinishEventArgs_t2984178802;
// UnityEngine.Advertisements.IPlatform
struct IPlatform_t2298261414;
// UnityEngine.Advertisements.MetaData
struct MetaData_t2274729001;
// UnityEngine.Advertisements.ReadyEventArgs
struct ReadyEventArgs_t549087536;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t990845000;
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t1906253538;
// UnityEngine.Advertisements.SimpleJson.JsonArray
struct JsonArray_t3985338818;
// UnityEngine.Advertisements.SimpleJson.JsonObject
struct JsonObject_t1327569318;
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t3624702326;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils
struct ReflectionUtils_t1067364495;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0
struct U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t3127338789;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t3939479301;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate[]
struct GetDelegateU5BU5D_t3276661576;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t920366853;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t964932841;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionaryValueFactory_2_t2993261231;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t1170354448;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t2109106246;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t28734647;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ThreadSafeDictionary_2_t2057063037;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t234156254;
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionary_2_t1172908052;
// UnityEngine.Advertisements.StartEventArgs
struct StartEventArgs_t4291826435;
// UnityEngine.Advertisements.UnsupportedPlatform
struct UnsupportedPlatform_t2036049172;
// UnityEngine.Advertisements.iOS.Platform
struct Platform_t1647901813;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3
struct U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4
struct U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2
struct U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642;
// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct unityAdsDidError_t1993223595;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct unityAdsDidFinish_t3747416149;
// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct unityAdsDidStart_t1058412932;
// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct unityAdsReady_t96934738;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t32045322;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t2835824643;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;

extern RuntimeClass* Action_1_t535963774_il2cpp_TypeInfo_var;
extern RuntimeClass* Advertisement_t842671397_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Configuration_t1722493896_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorDelegate_t3127338789_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffset_t3229287507_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1252675087_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3724735600_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4177511560_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t524577942_il2cpp_TypeInfo_var;
extern RuntimeClass* ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t177306446_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2215985868_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t2768214265_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t908338235_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FinishEventArgs_t2984178802_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* GetDelegate_t3939479301_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1613291102_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3796219568_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2188586991_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3096785446_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t4011493774_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t4035537244_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t624724933_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t96558379_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2059959053_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2630200143_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3161555474_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3280590014_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3962162136_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t4242887519_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t807293360_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1119912419_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1400637802_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2260010939_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t319305757_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3512676632_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4082917722_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t438340297_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IJsonSerializerStrategy_t1906253538_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t600458651_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* IPlatform_t2298261414_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonArray_t3985338818_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonObject_t1327569318_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* MetaData_t2274729001_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t1647901813_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t1698302846_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t2756657262_il2cpp_TypeInfo_var;
extern RuntimeClass* PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t382223268_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadyEventArgs_t549087536_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionUtils_t1067364495_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializationException_t3941511869_il2cpp_TypeInfo_var;
extern RuntimeClass* SetDelegate_t920366853_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleJson_t791838946_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StartEventArgs_t4291826435_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t1170354448_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t2109106246_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionaryValueFactory_2_t2993261231_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t1172908052_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t2057063037_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeDictionary_2_t234156254_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t2183256279_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CShowU3Ec__AnonStorey0_t3170924441_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CShowU3Ec__AnonStorey1_t3170924442_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815_il2cpp_TypeInfo_var;
extern RuntimeClass* U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t1939381076_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidError_t1993223595_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var;
extern RuntimeClass* unityAdsReady_t96934738_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1157834939;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1223721476;
extern String_t* _stringLiteral1263578497;
extern String_t* _stringLiteral1332923527;
extern String_t* _stringLiteral1376854336;
extern String_t* _stringLiteral1746845353;
extern String_t* _stringLiteral1778249823;
extern String_t* _stringLiteral1858654798;
extern String_t* _stringLiteral1861407333;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral1947076759;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral2143220806;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral2170070431;
extern String_t* _stringLiteral2206812729;
extern String_t* _stringLiteral2258625258;
extern String_t* _stringLiteral2261821926;
extern String_t* _stringLiteral2354794577;
extern String_t* _stringLiteral2428876507;
extern String_t* _stringLiteral2540211304;
extern String_t* _stringLiteral2553217811;
extern String_t* _stringLiteral2694997814;
extern String_t* _stringLiteral2998687031;
extern String_t* _stringLiteral3040706120;
extern String_t* _stringLiteral3133685381;
extern String_t* _stringLiteral3217210809;
extern String_t* _stringLiteral3236072574;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral3342921282;
extern String_t* _stringLiteral3378743801;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3451893639;
extern String_t* _stringLiteral3452315504;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614587;
extern String_t* _stringLiteral3452614606;
extern String_t* _stringLiteral3452614611;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3452614620;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455432692;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3463586438;
extern String_t* _stringLiteral3483484711;
extern String_t* _stringLiteral3486120287;
extern String_t* _stringLiteral352322198;
extern String_t* _stringLiteral3541090105;
extern String_t* _stringLiteral3580575796;
extern String_t* _stringLiteral3735224595;
extern String_t* _stringLiteral3735244631;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral3894938408;
extern String_t* _stringLiteral3899542074;
extern String_t* _stringLiteral3902473660;
extern String_t* _stringLiteral399103237;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral4028036860;
extern String_t* _stringLiteral4032983950;
extern String_t* _stringLiteral4034890030;
extern String_t* _stringLiteral4068039089;
extern String_t* _stringLiteral4081536298;
extern String_t* _stringLiteral4107934516;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral637845977;
extern String_t* _stringLiteral645957545;
extern String_t* _stringLiteral646178060;
extern String_t* _stringLiteral797640427;
extern String_t* _stringLiteral818277059;
extern String_t* _stringLiteral823543098;
extern String_t* _stringLiteral930268361;
extern String_t* _stringLiteral945277909;
extern const RuntimeMethod* Action_1_Invoke_m345301731_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m860665472_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m246329423_RuntimeMethod_var;
extern const RuntimeMethod* Advertisement_U3CInitializeU3Em__0_m2484897031_RuntimeMethod_var;
extern const RuntimeMethod* Advertisement_U3CInitializeU3Em__1_m2109031916_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m2571575926_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m100625750_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1195623271_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m95414296_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3222456405_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1412659484_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3582166299_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m821420568_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1784025370_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m107220533_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2310724936_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2587506542_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3920175150_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m501509644_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m855809970_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1201568812_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2791382321_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3494146125_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1150370094_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Values_m1765249039_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m464101897_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1199075846_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1200448648_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3162226611_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m743178406_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m1760330498_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m247885508_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109_RuntimeMethod_var;
extern const RuntimeMethod* JsonObject_CopyTo_m3543164959_RuntimeMethod_var;
extern const RuntimeMethod* JsonObject_GetAtIndex_m2667387776_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m867700299_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3192674138_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4117927069_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m497613733_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1644022012_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3057102946_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3789007266_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3947764094_RuntimeMethod_var;
extern const RuntimeMethod* Placeholder_ModalWindowFunction_m1854716751_RuntimeMethod_var;
extern const RuntimeMethod* Platform_U3CPlatformU3Em__0_m2859748733_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidError_m3621980989_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidFinish_m4137038415_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsDidStart_m971319454_RuntimeMethod_var;
extern const RuntimeMethod* Platform_UnityAdsReady_m2855172723_RuntimeMethod_var;
extern const RuntimeMethod* PocoJsonSerializerStrategy_DeserializeObject_m2189978591_RuntimeMethod_var;
extern const RuntimeMethod* PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m216984246_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m2377473102_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m3882925169_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m401901252_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m2643849061_RuntimeMethod_var;
extern const RuntimeMethod* SimpleJson_ConvertFromUtf32_m3524675725_RuntimeMethod_var;
extern const RuntimeMethod* SimpleJson_DeserializeObject_m1425654463_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m2125044720_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m3064671815_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionaryValueFactory_2__ctor_m4005509887_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m1062633995_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m464228881_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeDictionary_2__ctor_m975429584_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2583475376_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1455314588_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1185220208_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m3481553378_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2261238226_RuntimeMethod_var;
extern const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_RuntimeMethod_var;
extern const RuntimeMethod* U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_RuntimeMethod_var;
extern const RuntimeMethod* U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_RuntimeMethod_var;
extern const RuntimeMethod* U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_RuntimeMethod_var;
extern const RuntimeMethod* U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_RuntimeMethod_var;
extern const RuntimeMethod* U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_RuntimeMethod_var;
extern const RuntimeMethod* U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_RuntimeMethod_var;
extern const RuntimeMethod* U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_RuntimeMethod_var;
extern const RuntimeMethod* U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_RuntimeMethod_var;
extern const RuntimeMethod* U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_RuntimeMethod_var;
extern const RuntimeType* DateTimeOffset_t3229287507_0_0_0_var;
extern const RuntimeType* DateTime_t3738529785_0_0_0_var;
extern const RuntimeType* Dictionary_2_t3621973219_0_0_0_var;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Guid_t_0_0_0_var;
extern const RuntimeType* ICollection_1_t1449021101_0_0_0_var;
extern const RuntimeType* IConvertible_t2977365677_0_0_0_var;
extern const RuntimeType* IDictionary_2_t3177279192_0_0_0_var;
extern const RuntimeType* IDictionary_t1363984059_0_0_0_var;
extern const RuntimeType* IEnumerable_1_t1615002100_0_0_0_var;
extern const RuntimeType* IList_1_t523203890_0_0_0_var;
extern const RuntimeType* IList_t2094931216_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern const RuntimeType* List_1_t284568025_0_0_0_var;
extern const RuntimeType* Nullable_1_t3772285925_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const uint32_t Advertisement_GetPlacementState_m2232065044_MetadataUsageId;
extern const uint32_t Advertisement_GetPlacementState_m4001863134_MetadataUsageId;
extern const uint32_t Advertisement_Initialize_m1051450402_MetadataUsageId;
extern const uint32_t Advertisement_Initialize_m111792659_MetadataUsageId;
extern const uint32_t Advertisement_IsReady_m2166462196_MetadataUsageId;
extern const uint32_t Advertisement_IsReady_m2792558112_MetadataUsageId;
extern const uint32_t Advertisement_LoadEditor_m2032877435_MetadataUsageId;
extern const uint32_t Advertisement_LoadRuntime_m1930758518_MetadataUsageId;
extern const uint32_t Advertisement_Load_m3998104966_MetadataUsageId;
extern const uint32_t Advertisement_SetMetaData_m3821393482_MetadataUsageId;
extern const uint32_t Advertisement_Show_m1413788125_MetadataUsageId;
extern const uint32_t Advertisement_Show_m2619871676_MetadataUsageId;
extern const uint32_t Advertisement_Show_m53580060_MetadataUsageId;
extern const uint32_t Advertisement_Show_m663301454_MetadataUsageId;
extern const uint32_t Advertisement_U3CInitializeU3Em__0_m2484897031_MetadataUsageId;
extern const uint32_t Advertisement_U3CInitializeU3Em__1_m2109031916_MetadataUsageId;
extern const uint32_t Advertisement__cctor_m2698673428_MetadataUsageId;
extern const uint32_t Advertisement_get_debugLevel_m112247691_MetadataUsageId;
extern const uint32_t Advertisement_get_debugMode_m2131110715_MetadataUsageId;
extern const uint32_t Advertisement_get_isInitialized_m2728189845_MetadataUsageId;
extern const uint32_t Advertisement_get_isShowing_m3507224835_MetadataUsageId;
extern const uint32_t Advertisement_get_isSupported_m1369507557_MetadataUsageId;
extern const uint32_t Advertisement_get_version_m3333841984_MetadataUsageId;
extern const uint32_t Advertisement_set_debugLevel_m748244073_MetadataUsageId;
extern const uint32_t Advertisement_set_debugMode_m152285871_MetadataUsageId;
extern const uint32_t Advertisement_set_isInitialized_m177689357_MetadataUsageId;
extern const uint32_t Advertisement_set_isShowing_m1653892022_MetadataUsageId;
extern const uint32_t CallbackExecutor_Post_m2417625912_MetadataUsageId;
extern const uint32_t CallbackExecutor_Update_m1131287156_MetadataUsageId;
extern const uint32_t CallbackExecutor__ctor_m543356810_MetadataUsageId;
extern const uint32_t Configuration__ctor_m2049560937_MetadataUsageId;
extern const uint32_t ErrorEventArgs__ctor_m2417395018_MetadataUsageId;
extern const uint32_t FinishEventArgs__ctor_m50835730_MetadataUsageId;
extern const uint32_t JsonArray_ToString_m1915038716_MetadataUsageId;
extern const uint32_t JsonArray__ctor_m2862279773_MetadataUsageId;
extern const uint32_t JsonArray__ctor_m323727826_MetadataUsageId;
extern const uint32_t JsonObject_Add_m366352540_MetadataUsageId;
extern const uint32_t JsonObject_Add_m3872440787_MetadataUsageId;
extern const uint32_t JsonObject_Clear_m523182586_MetadataUsageId;
extern const uint32_t JsonObject_ContainsKey_m1727368843_MetadataUsageId;
extern const uint32_t JsonObject_Contains_m3458256145_MetadataUsageId;
extern const uint32_t JsonObject_CopyTo_m3543164959_MetadataUsageId;
extern const uint32_t JsonObject_GetAtIndex_m2667387776_MetadataUsageId;
extern const uint32_t JsonObject_GetEnumerator_m2239729578_MetadataUsageId;
extern const uint32_t JsonObject_Remove_m1653245258_MetadataUsageId;
extern const uint32_t JsonObject_Remove_m194222694_MetadataUsageId;
extern const uint32_t JsonObject_System_Collections_IEnumerable_GetEnumerator_m3393416258_MetadataUsageId;
extern const uint32_t JsonObject_TryGetValue_m1180475790_MetadataUsageId;
extern const uint32_t JsonObject__ctor_m3891241071_MetadataUsageId;
extern const uint32_t JsonObject__ctor_m4078194387_MetadataUsageId;
extern const uint32_t JsonObject_get_Count_m362114336_MetadataUsageId;
extern const uint32_t JsonObject_get_Item_m721570366_MetadataUsageId;
extern const uint32_t JsonObject_get_Keys_m3274395107_MetadataUsageId;
extern const uint32_t JsonObject_get_Values_m495674565_MetadataUsageId;
extern const uint32_t JsonObject_set_Item_m3669904913_MetadataUsageId;
extern const uint32_t MetaData_Get_m3626153543_MetadataUsageId;
extern const uint32_t MetaData_Set_m2920014032_MetadataUsageId;
extern const uint32_t MetaData__ctor_m191542684_MetadataUsageId;
extern const uint32_t Placeholder_Load_m1103501462_MetadataUsageId;
extern const uint32_t Placeholder_ModalWindowFunction_m1854716751_MetadataUsageId;
extern const uint32_t Placeholder_OnGUI_m2560125389_MetadataUsageId;
extern const uint32_t Placeholder_TextureFromFile_m291359667_MetadataUsageId;
extern const uint32_t Placeholder_add_OnFinish_m3075927457_MetadataUsageId;
extern const uint32_t Placeholder_remove_OnFinish_m2422778168_MetadataUsageId;
extern const uint32_t Platform_GetPlacementState_m57946683_MetadataUsageId;
extern const uint32_t Platform_Initialize_m1938088921_MetadataUsageId;
extern const uint32_t Platform_Initialize_m82924387_MetadataUsageId;
extern const uint32_t Platform_IsReady_m1007373777_MetadataUsageId;
extern const uint32_t Platform_IsReady_m1225029571_MetadataUsageId;
extern const uint32_t Platform_SetMetaData_m3645297404_MetadataUsageId;
extern const uint32_t Platform_Show_m1063852283_MetadataUsageId;
extern const uint32_t Platform_Show_m2242650914_MetadataUsageId;
extern const uint32_t Platform_U3CPlatformU3Em__0_m2859748733_MetadataUsageId;
extern const uint32_t Platform_UnityAdsDidError_m3621980989_MetadataUsageId;
extern const uint32_t Platform_UnityAdsDidFinish_m4137038415_MetadataUsageId;
extern const uint32_t Platform_UnityAdsDidStart_m971319454_MetadataUsageId;
extern const uint32_t Platform_UnityAdsReady_m2855172723_MetadataUsageId;
extern const uint32_t Platform__cctor_m2711454710_MetadataUsageId;
extern const uint32_t Platform__ctor_m3233182567_MetadataUsageId;
extern const uint32_t Platform__ctor_m3887152146_MetadataUsageId;
extern const uint32_t Platform__ctor_m3929159556_MetadataUsageId;
extern const uint32_t Platform_add_OnError_m2772632147_MetadataUsageId;
extern const uint32_t Platform_add_OnError_m3811019260_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m2427335122_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m3107184672_MetadataUsageId;
extern const uint32_t Platform_add_OnFinish_m568677360_MetadataUsageId;
extern const uint32_t Platform_add_OnReady_m2575728458_MetadataUsageId;
extern const uint32_t Platform_add_OnReady_m3299334683_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m1356999936_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m534126228_MetadataUsageId;
extern const uint32_t Platform_add_OnStart_m996194638_MetadataUsageId;
extern const uint32_t Platform_get_debugMode_m1274978797_MetadataUsageId;
extern const uint32_t Platform_get_isInitialized_m4196749938_MetadataUsageId;
extern const uint32_t Platform_get_isSupported_m3096644395_MetadataUsageId;
extern const uint32_t Platform_get_version_m2737893346_MetadataUsageId;
extern const uint32_t Platform_get_version_m2863392885_MetadataUsageId;
extern const uint32_t Platform_onUnityAdsError_m2818265370_MetadataUsageId;
extern const uint32_t Platform_onUnityAdsFinish_m1351724442_MetadataUsageId;
extern const uint32_t Platform_onUnityAdsReady_m1835805958_MetadataUsageId;
extern const uint32_t Platform_onUnityAdsStart_m2863714750_MetadataUsageId;
extern const uint32_t Platform_remove_OnError_m1044860335_MetadataUsageId;
extern const uint32_t Platform_remove_OnError_m4035102861_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m2807117244_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m2870282854_MetadataUsageId;
extern const uint32_t Platform_remove_OnFinish_m3829156301_MetadataUsageId;
extern const uint32_t Platform_remove_OnReady_m502422865_MetadataUsageId;
extern const uint32_t Platform_remove_OnReady_m644170545_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m2706477467_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m3220674594_MetadataUsageId;
extern const uint32_t Platform_remove_OnStart_m392217845_MetadataUsageId;
extern const uint32_t Platform_set_debugMode_m1126448795_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_ContructorDelegateFactory_m1684034988_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_DeserializeObject_m2189978591_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_GetterValueFactory_m3716839077_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_SerializeEnum_m2782598723_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_SetterValueFactory_m2866435791_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3127380522_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m216984246_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy__cctor_m4090673315_MetadataUsageId;
extern const uint32_t PocoJsonSerializerStrategy__ctor_m1974455660_MetadataUsageId;
extern const uint32_t ReadyEventArgs__ctor_m1307451034_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetConstructorByReflection_m1171983073_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetConstructorByReflection_m3309638613_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetConstructorInfo_m4058025074_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetContructor_m198753871_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetContructor_m4133798270_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethodByReflection_m1109098923_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethodByReflection_m1467673197_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethod_m2084983952_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetGetMethod_m4152947020_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethodByReflection_m3021719649_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethodByReflection_m4007754765_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethod_m1283009144_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetSetMethod_m2132891088_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsNullableType_m1498686771_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsTypeDictionary_m177769241_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsTypeGenericeCollectionInterface_m3907525460_MetadataUsageId;
extern const uint32_t ReflectionUtils_ToNullableType_m2914598057_MetadataUsageId;
extern const uint32_t ReflectionUtils__cctor_m1591577905_MetadataUsageId;
extern const uint32_t SimpleJson_ConvertFromUtf32_m3524675725_MetadataUsageId;
extern const uint32_t SimpleJson_DeserializeObject_m1425654463_MetadataUsageId;
extern const uint32_t SimpleJson_DeserializeObject_m2354421515_MetadataUsageId;
extern const uint32_t SimpleJson_EatWhitespace_m1817791116_MetadataUsageId;
extern const uint32_t SimpleJson_EscapeToJavascriptString_m491568181_MetadataUsageId;
extern const uint32_t SimpleJson_GetLastIndexOfNumber_m2808520754_MetadataUsageId;
extern const uint32_t SimpleJson_IsNumeric_m2920591434_MetadataUsageId;
extern const uint32_t SimpleJson_ParseArray_m3075552440_MetadataUsageId;
extern const uint32_t SimpleJson_ParseNumber_m2532261654_MetadataUsageId;
extern const uint32_t SimpleJson_ParseObject_m1274236714_MetadataUsageId;
extern const uint32_t SimpleJson_ParseString_m3397641657_MetadataUsageId;
extern const uint32_t SimpleJson_ParseValue_m2036273466_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeArray_m2078464785_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeNumber_m2117551856_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeObject_m3878482345_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeObject_m481844464_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeString_m1870114522_MetadataUsageId;
extern const uint32_t SimpleJson_SerializeValue_m1475951719_MetadataUsageId;
extern const uint32_t SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593_MetadataUsageId;
extern const uint32_t SimpleJson_get_PocoJsonSerializerStrategy_m1523450673_MetadataUsageId;
extern const uint32_t SimpleJson_set_CurrentJsonSerializerStrategy_m3827067284_MetadataUsageId;
extern const uint32_t StartEventArgs__ctor_m1521341003_MetadataUsageId;
extern const uint32_t U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1455314588_MetadataUsageId;
extern const uint32_t U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m3481553378_MetadataUsageId;
extern const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_MetadataUsageId;
extern const uint32_t U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_MetadataUsageId;
extern const uint32_t U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_MetadataUsageId;
extern const uint32_t U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_MetadataUsageId;
extern const uint32_t U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_MetadataUsageId;
extern const uint32_t U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_MetadataUsageId;
extern const uint32_t U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_MetadataUsageId;
extern const uint32_t U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_Show_m236483508_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_add_OnFinish_m1575365808_MetadataUsageId;
extern const uint32_t UnsupportedPlatform_remove_OnFinish_m2418915001_MetadataUsageId;
extern const uint32_t unityAdsDidError_BeginInvoke_m3034855061_MetadataUsageId;
extern const uint32_t unityAdsDidFinish_BeginInvoke_m2033378741_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct KeyValuePair_2U5BU5D_t1898447907;
struct ObjectU5BU5D_t2843939325;
struct ConstructorInfoU5BU5D_t881249896;
struct FieldInfoU5BU5D_t846150980;
struct ParameterInfoU5BU5D_t390618515;
struct PropertyInfoU5BU5D_t1461822886;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef KEYCOLLECTION_T3055037934_H
#define KEYCOLLECTION_T3055037934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct  KeyCollection_t3055037934  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3055037934, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3055037934_H
#ifndef VALUECOLLECTION_T286439485_H
#define VALUECOLLECTION_T286439485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct  ValueCollection_t286439485  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t286439485, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T286439485_H
#ifndef DICTIONARY_2_T4177511560_H
#define DICTIONARY_2_T4177511560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t4177511560  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t2897418192* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___valueSlots_7)); }
	inline BooleanU5BU5D_t2897418192* get_valueSlots_7() const { return ___valueSlots_7; }
	inline BooleanU5BU5D_t2897418192** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(BooleanU5BU5D_t2897418192* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4177511560_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1747829908 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4177511560_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1747829908 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1747829908 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1747829908 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4177511560_H
#ifndef DICTIONARY_2_T1252675087_H
#define DICTIONARY_2_T1252675087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct  Dictionary_2_t1252675087  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	KeyValuePair_2U5BU5D_t2255760461* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___valueSlots_7)); }
	inline KeyValuePair_2U5BU5D_t2255760461* get_valueSlots_7() const { return ___valueSlots_7; }
	inline KeyValuePair_2U5BU5D_t2255760461** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(KeyValuePair_2U5BU5D_t2255760461* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1252675087_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1106172177 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1252675087_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1106172177 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1106172177 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1106172177 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1252675087_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef DICTIONARY_2_T3724735600_H
#define DICTIONARY_2_T3724735600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct  Dictionary_2_t3724735600  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GetDelegateU5BU5D_t3276661576* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___valueSlots_7)); }
	inline GetDelegateU5BU5D_t3276661576* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GetDelegateU5BU5D_t3276661576** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GetDelegateU5BU5D_t3276661576* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3724735600_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2127073292 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3724735600_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2127073292 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2127073292 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2127073292 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3724735600_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef QUEUE_1_T382223268_H
#define QUEUE_1_T382223268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct  Queue_1_t382223268  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Action_1U5BU5D_t3839123403* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____array_0)); }
	inline Action_1U5BU5D_t3839123403* get__array_0() const { return ____array_0; }
	inline Action_1U5BU5D_t3839123403** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Action_1U5BU5D_t3839123403* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t382223268, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T382223268_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#define U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0
struct  U3CShowU3Ec__AnonStorey0_t3170924441  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::showOptions
	ShowOptions_t990845000 * ___showOptions_0;

public:
	inline static int32_t get_offset_of_showOptions_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey0_t3170924441, ___showOptions_0)); }
	inline ShowOptions_t990845000 * get_showOptions_0() const { return ___showOptions_0; }
	inline ShowOptions_t990845000 ** get_address_of_showOptions_0() { return &___showOptions_0; }
	inline void set_showOptions_0(ShowOptions_t990845000 * value)
	{
		___showOptions_0 = value;
		Il2CppCodeGenWriteBarrier((&___showOptions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWU3EC__ANONSTOREY0_T3170924441_H
#ifndef U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#define U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1
struct  U3CShowU3Ec__AnonStorey1_t3170924442  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::finishHandler
	EventHandler_1_t908338235 * ___finishHandler_0;
	// UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0 UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::<>f__ref$0
	U3CShowU3Ec__AnonStorey0_t3170924441 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_finishHandler_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t3170924442, ___finishHandler_0)); }
	inline EventHandler_1_t908338235 * get_finishHandler_0() const { return ___finishHandler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_finishHandler_0() { return &___finishHandler_0; }
	inline void set_finishHandler_0(EventHandler_1_t908338235 * value)
	{
		___finishHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___finishHandler_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey1_t3170924442, ___U3CU3Ef__refU240_1)); }
	inline U3CShowU3Ec__AnonStorey0_t3170924441 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CShowU3Ec__AnonStorey0_t3170924441 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CShowU3Ec__AnonStorey0_t3170924441 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWU3EC__ANONSTOREY1_T3170924442_H
#ifndef U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#define U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4
struct  U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::handler
	EventHandler_1_t177306446 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::message
	String_t* ___message_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___handler_0)); }
	inline EventHandler_1_t177306446 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t177306446 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t177306446 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((&___message_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSERRORU3EC__ANONSTOREY4_T981031180_H
#ifndef U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#define U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5
struct  U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::error
	int64_t ___error_0;
	// UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4 UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::<>f__ref$4
	U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * ___U3CU3Ef__refU244_1;

public:
	inline static int32_t get_offset_of_error_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535, ___error_0)); }
	inline int64_t get_error_0() const { return ___error_0; }
	inline int64_t* get_address_of_error_0() { return &___error_0; }
	inline void set_error_0(int64_t value)
	{
		___error_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU244_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535, ___U3CU3Ef__refU244_1)); }
	inline U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * get_U3CU3Ef__refU244_1() const { return ___U3CU3Ef__refU244_1; }
	inline U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 ** get_address_of_U3CU3Ef__refU244_1() { return &___U3CU3Ef__refU244_1; }
	inline void set_U3CU3Ef__refU244_1(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * value)
	{
		___U3CU3Ef__refU244_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU244_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSERRORU3EC__ANONSTOREY5_T3709914535_H
#ifndef U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#define U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2
struct  U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::handler
	EventHandler_1_t908338235 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___handler_0)); }
	inline EventHandler_1_t908338235 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t908338235 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSFINISHU3EC__ANONSTOREY2_T696879596_H
#ifndef U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#define U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0
struct  U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_t2768214265 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___handler_0)); }
	inline EventHandler_1_t2768214265 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2768214265 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2768214265 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSREADYU3EC__ANONSTOREY0_T2484343815_H
#ifndef U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#define U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1
struct  U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::handler
	EventHandler_1_t2215985868 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::$this
	Platform_t1698302846 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___handler_0)); }
	inline EventHandler_1_t2215985868 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2215985868 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2215985868 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353, ___U24this_2)); }
	inline Platform_t1698302846 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t1698302846 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t1698302846 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSSTARTU3EC__ANONSTOREY1_T2789353_H
#ifndef CONFIGURATION_T1722493896_H
#define CONFIGURATION_T1722493896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Configuration
struct  Configuration_t1722493896  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Configuration::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Editor.Configuration::<defaultPlacement>k__BackingField
	String_t* ___U3CdefaultPlacementU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::<placements>k__BackingField
	Dictionary_2_t4177511560 * ___U3CplacementsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CenabledU3Ek__BackingField_0)); }
	inline bool get_U3CenabledU3Ek__BackingField_0() const { return ___U3CenabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_0() { return &___U3CenabledU3Ek__BackingField_0; }
	inline void set_U3CenabledU3Ek__BackingField_0(bool value)
	{
		___U3CenabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultPlacementU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CdefaultPlacementU3Ek__BackingField_1)); }
	inline String_t* get_U3CdefaultPlacementU3Ek__BackingField_1() const { return ___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdefaultPlacementU3Ek__BackingField_1() { return &___U3CdefaultPlacementU3Ek__BackingField_1; }
	inline void set_U3CdefaultPlacementU3Ek__BackingField_1(String_t* value)
	{
		___U3CdefaultPlacementU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdefaultPlacementU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CplacementsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t1722493896, ___U3CplacementsU3Ek__BackingField_2)); }
	inline Dictionary_2_t4177511560 * get_U3CplacementsU3Ek__BackingField_2() const { return ___U3CplacementsU3Ek__BackingField_2; }
	inline Dictionary_2_t4177511560 ** get_address_of_U3CplacementsU3Ek__BackingField_2() { return &___U3CplacementsU3Ek__BackingField_2; }
	inline void set_U3CplacementsU3Ek__BackingField_2(Dictionary_2_t4177511560 * value)
	{
		___U3CplacementsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATION_T1722493896_H
#ifndef PLATFORM_T2756657262_H
#define PLATFORM_T2756657262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform
struct  Platform_t2756657262  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Advertisements.Editor.Platform::m_DebugMode
	bool ___m_DebugMode_1;
	// UnityEngine.Advertisements.Editor.Configuration UnityEngine.Advertisements.Editor.Platform::m_Configuration
	Configuration_t1722493896 * ___m_Configuration_2;
	// UnityEngine.Advertisements.Editor.Placeholder UnityEngine.Advertisements.Editor.Platform::m_Placeholder
	Placeholder_t2906495853 * ___m_Placeholder_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Editor.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_5;

public:
	inline static int32_t get_offset_of_m_DebugMode_1() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_DebugMode_1)); }
	inline bool get_m_DebugMode_1() const { return ___m_DebugMode_1; }
	inline bool* get_address_of_m_DebugMode_1() { return &___m_DebugMode_1; }
	inline void set_m_DebugMode_1(bool value)
	{
		___m_DebugMode_1 = value;
	}

	inline static int32_t get_offset_of_m_Configuration_2() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_Configuration_2)); }
	inline Configuration_t1722493896 * get_m_Configuration_2() const { return ___m_Configuration_2; }
	inline Configuration_t1722493896 ** get_address_of_m_Configuration_2() { return &___m_Configuration_2; }
	inline void set_m_Configuration_2(Configuration_t1722493896 * value)
	{
		___m_Configuration_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Configuration_2), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_3() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___m_Placeholder_3)); }
	inline Placeholder_t2906495853 * get_m_Placeholder_3() const { return ___m_Placeholder_3; }
	inline Placeholder_t2906495853 ** get_address_of_m_Placeholder_3() { return &___m_Placeholder_3; }
	inline void set_m_Placeholder_3(Placeholder_t2906495853 * value)
	{
		___m_Placeholder_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_3), value);
	}

	inline static int32_t get_offset_of_OnStart_4() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___OnStart_4)); }
	inline EventHandler_1_t2215985868 * get_OnStart_4() const { return ___OnStart_4; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_4() { return &___OnStart_4; }
	inline void set_OnStart_4(EventHandler_1_t2215985868 * value)
	{
		___OnStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_4), value);
	}

	inline static int32_t get_offset_of_OnFinish_5() { return static_cast<int32_t>(offsetof(Platform_t2756657262, ___OnFinish_5)); }
	inline EventHandler_1_t908338235 * get_OnFinish_5() const { return ___OnFinish_5; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_5() { return &___OnFinish_5; }
	inline void set_OnFinish_5(EventHandler_1_t908338235 * value)
	{
		___OnFinish_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_5), value);
	}
};

struct Platform_t2756657262_StaticFields
{
public:
	// System.String UnityEngine.Advertisements.Editor.Platform::s_BaseUrl
	String_t* ___s_BaseUrl_0;

public:
	inline static int32_t get_offset_of_s_BaseUrl_0() { return static_cast<int32_t>(offsetof(Platform_t2756657262_StaticFields, ___s_BaseUrl_0)); }
	inline String_t* get_s_BaseUrl_0() const { return ___s_BaseUrl_0; }
	inline String_t** get_address_of_s_BaseUrl_0() { return &___s_BaseUrl_0; }
	inline void set_s_BaseUrl_0(String_t* value)
	{
		___s_BaseUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_BaseUrl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T2756657262_H
#ifndef U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
#define U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t2183256279  : public RuntimeObject
{
public:
	// System.Net.WebRequest UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::request
	WebRequest_t1939381076 * ___request_0;
	// System.String UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::gameId
	String_t* ___gameId_1;
	// UnityEngine.Advertisements.Editor.Platform UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::$this
	Platform_t2756657262 * ___U24this_2;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___request_0)); }
	inline WebRequest_t1939381076 * get_request_0() const { return ___request_0; }
	inline WebRequest_t1939381076 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(WebRequest_t1939381076 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((&___request_0), value);
	}

	inline static int32_t get_offset_of_gameId_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___gameId_1)); }
	inline String_t* get_gameId_1() const { return ___gameId_1; }
	inline String_t** get_address_of_gameId_1() { return &___gameId_1; }
	inline void set_gameId_1(String_t* value)
	{
		___gameId_1 = value;
		Il2CppCodeGenWriteBarrier((&___gameId_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t2183256279, ___U24this_2)); }
	inline Platform_t2756657262 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t2756657262 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t2756657262 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITIALIZEU3EC__ANONSTOREY0_T2183256279_H
#ifndef METADATA_T2274729001_H
#define METADATA_T2274729001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.MetaData
struct  MetaData_t2274729001  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MetaData_0), value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t2274729001, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcategoryU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATA_T2274729001_H
#ifndef SHOWOPTIONS_T990845000_H
#define SHOWOPTIONS_T990845000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowOptions
struct  ShowOptions_t990845000  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::<resultCallback>k__BackingField
	Action_1_t3243021218 * ___U3CresultCallbackU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CresultCallbackU3Ek__BackingField_0)); }
	inline Action_1_t3243021218 * get_U3CresultCallbackU3Ek__BackingField_0() const { return ___U3CresultCallbackU3Ek__BackingField_0; }
	inline Action_1_t3243021218 ** get_address_of_U3CresultCallbackU3Ek__BackingField_0() { return &___U3CresultCallbackU3Ek__BackingField_0; }
	inline void set_U3CresultCallbackU3Ek__BackingField_0(Action_1_t3243021218 * value)
	{
		___U3CresultCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CresultCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowOptions_t990845000, ___U3CgamerSidU3Ek__BackingField_1)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_1() const { return ___U3CgamerSidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_1() { return &___U3CgamerSidU3Ek__BackingField_1; }
	inline void set_U3CgamerSidU3Ek__BackingField_1(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgamerSidU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWOPTIONS_T990845000_H
#ifndef JSONOBJECT_T1327569318_H
#define JSONOBJECT_T1327569318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.JsonObject
struct  JsonObject_t1327569318  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.JsonObject::_members
	Dictionary_2_t2865362463 * ____members_0;

public:
	inline static int32_t get_offset_of__members_0() { return static_cast<int32_t>(offsetof(JsonObject_t1327569318, ____members_0)); }
	inline Dictionary_2_t2865362463 * get__members_0() const { return ____members_0; }
	inline Dictionary_2_t2865362463 ** get_address_of__members_0() { return &____members_0; }
	inline void set__members_0(Dictionary_2_t2865362463 * value)
	{
		____members_0 = value;
		Il2CppCodeGenWriteBarrier((&____members_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T1327569318_H
#ifndef POCOJSONSERIALIZERSTRATEGY_T3624702326_H
#define POCOJSONSERIALIZERSTRATEGY_T3624702326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t3624702326  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ConstructorCache
	RuntimeObject* ___ConstructorCache_0;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::GetCache
	RuntimeObject* ___GetCache_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SetCache
	RuntimeObject* ___SetCache_2;

public:
	inline static int32_t get_offset_of_ConstructorCache_0() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326, ___ConstructorCache_0)); }
	inline RuntimeObject* get_ConstructorCache_0() const { return ___ConstructorCache_0; }
	inline RuntimeObject** get_address_of_ConstructorCache_0() { return &___ConstructorCache_0; }
	inline void set_ConstructorCache_0(RuntimeObject* value)
	{
		___ConstructorCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorCache_0), value);
	}

	inline static int32_t get_offset_of_GetCache_1() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326, ___GetCache_1)); }
	inline RuntimeObject* get_GetCache_1() const { return ___GetCache_1; }
	inline RuntimeObject** get_address_of_GetCache_1() { return &___GetCache_1; }
	inline void set_GetCache_1(RuntimeObject* value)
	{
		___GetCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___GetCache_1), value);
	}

	inline static int32_t get_offset_of_SetCache_2() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326, ___SetCache_2)); }
	inline RuntimeObject* get_SetCache_2() const { return ___SetCache_2; }
	inline RuntimeObject** get_address_of_SetCache_2() { return &___SetCache_2; }
	inline void set_SetCache_2(RuntimeObject* value)
	{
		___SetCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___SetCache_2), value);
	}
};

struct PocoJsonSerializerStrategy_t3624702326_StaticFields
{
public:
	// System.Type[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Type[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ArrayConstructorParameterTypes
	TypeU5BU5D_t3940880105* ___ArrayConstructorParameterTypes_4;
	// System.String[] UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t1281789340* ___Iso8601Format_5;

public:
	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_ArrayConstructorParameterTypes_4() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326_StaticFields, ___ArrayConstructorParameterTypes_4)); }
	inline TypeU5BU5D_t3940880105* get_ArrayConstructorParameterTypes_4() const { return ___ArrayConstructorParameterTypes_4; }
	inline TypeU5BU5D_t3940880105** get_address_of_ArrayConstructorParameterTypes_4() { return &___ArrayConstructorParameterTypes_4; }
	inline void set_ArrayConstructorParameterTypes_4(TypeU5BU5D_t3940880105* value)
	{
		___ArrayConstructorParameterTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayConstructorParameterTypes_4), value);
	}

	inline static int32_t get_offset_of_Iso8601Format_5() { return static_cast<int32_t>(offsetof(PocoJsonSerializerStrategy_t3624702326_StaticFields, ___Iso8601Format_5)); }
	inline StringU5BU5D_t1281789340* get_Iso8601Format_5() const { return ___Iso8601Format_5; }
	inline StringU5BU5D_t1281789340** get_address_of_Iso8601Format_5() { return &___Iso8601Format_5; }
	inline void set_Iso8601Format_5(StringU5BU5D_t1281789340* value)
	{
		___Iso8601Format_5 = value;
		Il2CppCodeGenWriteBarrier((&___Iso8601Format_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POCOJSONSERIALIZERSTRATEGY_T3624702326_H
#ifndef REFLECTIONUTILS_T1067364495_H
#define REFLECTIONUTILS_T1067364495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils
struct  ReflectionUtils_t1067364495  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t1067364495_StaticFields
{
public:
	// System.Object[] UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::EmptyObjects
	ObjectU5BU5D_t2843939325* ___EmptyObjects_0;

public:
	inline static int32_t get_offset_of_EmptyObjects_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t1067364495_StaticFields, ___EmptyObjects_0)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyObjects_0() const { return ___EmptyObjects_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyObjects_0() { return &___EmptyObjects_0; }
	inline void set_EmptyObjects_0(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyObjects_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyObjects_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONUTILS_T1067364495_H
#ifndef U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T3903434793_H
#define U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T3903434793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0
struct  U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::constructorInfo
	ConstructorInfo_t5769829 * ___constructorInfo_0;

public:
	inline static int32_t get_offset_of_constructorInfo_0() { return static_cast<int32_t>(offsetof(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793, ___constructorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_constructorInfo_0() const { return ___constructorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_constructorInfo_0() { return &___constructorInfo_0; }
	inline void set_constructorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___constructorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___constructorInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETCONSTRUCTORBYREFLECTIONU3EC__ANONSTOREY0_T3903434793_H
#ifndef U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T1858150574_H
#define U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T1858150574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY1_T1858150574_H
#ifndef U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T1858150577_H
#define U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T1858150577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
struct  U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETGETMETHODBYREFLECTIONU3EC__ANONSTOREY2_T1858150577_H
#ifndef U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T651529835_H
#define U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T651529835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::methodInfo
	MethodInfo_t * ___methodInfo_0;

public:
	inline static int32_t get_offset_of_methodInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835, ___methodInfo_0)); }
	inline MethodInfo_t * get_methodInfo_0() const { return ___methodInfo_0; }
	inline MethodInfo_t ** get_address_of_methodInfo_0() { return &___methodInfo_0; }
	inline void set_methodInfo_0(MethodInfo_t * value)
	{
		___methodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY3_T651529835_H
#ifndef U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T651529832_H
#define U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T651529832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
struct  U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___fieldInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETSETMETHODBYREFLECTIONU3EC__ANONSTOREY4_T651529832_H
#ifndef THREADSAFEDICTIONARY_2_T2057063037_H
#define THREADSAFEDICTIONARY_2_T2057063037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct  ThreadSafeDictionary_2_t2057063037  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t2993261231 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t2160873542 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2057063037, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2057063037, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t2993261231 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t2993261231 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t2993261231 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t2057063037, ____dictionary_2)); }
	inline Dictionary_2_t2160873542 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t2160873542 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t2160873542 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T2057063037_H
#ifndef THREADSAFEDICTIONARY_2_T234156254_H
#define THREADSAFEDICTIONARY_2_T234156254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct  ThreadSafeDictionary_2_t234156254  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t1170354448 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t337966759 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t234156254, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t234156254, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t1170354448 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t1170354448 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t1170354448 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t234156254, ____dictionary_2)); }
	inline Dictionary_2_t337966759 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t337966759 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t337966759 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T234156254_H
#ifndef THREADSAFEDICTIONARY_2_T1172908052_H
#define THREADSAFEDICTIONARY_2_T1172908052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionary_2_t1172908052  : public RuntimeObject
{
public:
	// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_lock
	RuntimeObject * ____lock_0;
	// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t2109106246 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::_dictionary
	Dictionary_2_t1276718557 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1172908052, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__valueFactory_1() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1172908052, ____valueFactory_1)); }
	inline ThreadSafeDictionaryValueFactory_2_t2109106246 * get__valueFactory_1() const { return ____valueFactory_1; }
	inline ThreadSafeDictionaryValueFactory_2_t2109106246 ** get_address_of__valueFactory_1() { return &____valueFactory_1; }
	inline void set__valueFactory_1(ThreadSafeDictionaryValueFactory_2_t2109106246 * value)
	{
		____valueFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____valueFactory_1), value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1172908052, ____dictionary_2)); }
	inline Dictionary_2_t1276718557 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t1276718557 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t1276718557 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARY_2_T1172908052_H
#ifndef SIMPLEJSON_T791838946_H
#define SIMPLEJSON_T791838946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.SimpleJson
struct  SimpleJson_t791838946  : public RuntimeObject
{
public:

public:
};

struct SimpleJson_t791838946_StaticFields
{
public:
	// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	RuntimeObject* ____currentJsonSerializerStrategy_13;
	// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t3624702326 * ____pocoJsonSerializerStrategy_14;

public:
	inline static int32_t get_offset_of__currentJsonSerializerStrategy_13() { return static_cast<int32_t>(offsetof(SimpleJson_t791838946_StaticFields, ____currentJsonSerializerStrategy_13)); }
	inline RuntimeObject* get__currentJsonSerializerStrategy_13() const { return ____currentJsonSerializerStrategy_13; }
	inline RuntimeObject** get_address_of__currentJsonSerializerStrategy_13() { return &____currentJsonSerializerStrategy_13; }
	inline void set__currentJsonSerializerStrategy_13(RuntimeObject* value)
	{
		____currentJsonSerializerStrategy_13 = value;
		Il2CppCodeGenWriteBarrier((&____currentJsonSerializerStrategy_13), value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_14() { return static_cast<int32_t>(offsetof(SimpleJson_t791838946_StaticFields, ____pocoJsonSerializerStrategy_14)); }
	inline PocoJsonSerializerStrategy_t3624702326 * get__pocoJsonSerializerStrategy_14() const { return ____pocoJsonSerializerStrategy_14; }
	inline PocoJsonSerializerStrategy_t3624702326 ** get_address_of__pocoJsonSerializerStrategy_14() { return &____pocoJsonSerializerStrategy_14; }
	inline void set__pocoJsonSerializerStrategy_14(PocoJsonSerializerStrategy_t3624702326 * value)
	{
		____pocoJsonSerializerStrategy_14 = value;
		Il2CppCodeGenWriteBarrier((&____pocoJsonSerializerStrategy_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEJSON_T791838946_H
#ifndef UNSUPPORTEDPLATFORM_T2036049172_H
#define UNSUPPORTEDPLATFORM_T2036049172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnsupportedPlatform
struct  UnsupportedPlatform_t2036049172  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.UnsupportedPlatform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_0;

public:
	inline static int32_t get_offset_of_OnFinish_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_t2036049172, ___OnFinish_0)); }
	inline EventHandler_1_t908338235 * get_OnFinish_0() const { return ___OnFinish_0; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_0() { return &___OnFinish_0; }
	inline void set_OnFinish_0(EventHandler_1_t908338235 * value)
	{
		___OnFinish_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSUPPORTEDPLATFORM_T2036049172_H
#ifndef PLATFORM_T1647901813_H
#define PLATFORM_T1647901813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform
struct  Platform_t1647901813  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform::OnReady
	EventHandler_1_t2768214265 * ___OnReady_2;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_3;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_4;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform::OnError
	EventHandler_1_t177306446 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnReady_2() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnReady_2)); }
	inline EventHandler_1_t2768214265 * get_OnReady_2() const { return ___OnReady_2; }
	inline EventHandler_1_t2768214265 ** get_address_of_OnReady_2() { return &___OnReady_2; }
	inline void set_OnReady_2(EventHandler_1_t2768214265 * value)
	{
		___OnReady_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_2), value);
	}

	inline static int32_t get_offset_of_OnStart_3() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnStart_3)); }
	inline EventHandler_1_t2215985868 * get_OnStart_3() const { return ___OnStart_3; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_3() { return &___OnStart_3; }
	inline void set_OnStart_3(EventHandler_1_t2215985868 * value)
	{
		___OnStart_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_3), value);
	}

	inline static int32_t get_offset_of_OnFinish_4() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnFinish_4)); }
	inline EventHandler_1_t908338235 * get_OnFinish_4() const { return ___OnFinish_4; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_4() { return &___OnFinish_4; }
	inline void set_OnFinish_4(EventHandler_1_t908338235 * value)
	{
		___OnFinish_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_4), value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(Platform_t1647901813, ___OnError_5)); }
	inline EventHandler_1_t177306446 * get_OnError_5() const { return ___OnError_5; }
	inline EventHandler_1_t177306446 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(EventHandler_1_t177306446 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_5), value);
	}
};

struct Platform_t1647901813_StaticFields
{
public:
	// UnityEngine.Advertisements.iOS.Platform UnityEngine.Advertisements.iOS.Platform::s_Instance
	Platform_t1647901813 * ___s_Instance_0;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.iOS.Platform::s_CallbackExecutor
	CallbackExecutor_t363496179 * ___s_CallbackExecutor_1;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsReady UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache0
	unityAdsReady_t96934738 * ___U3CU3Ef__mgU24cache0_6;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache1
	unityAdsDidError_t1993223595 * ___U3CU3Ef__mgU24cache1_7;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache2
	unityAdsDidStart_t1058412932 * ___U3CU3Ef__mgU24cache2_8;
	// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish UnityEngine.Advertisements.iOS.Platform::<>f__mg$cache3
	unityAdsDidFinish_t3747416149 * ___U3CU3Ef__mgU24cache3_9;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_Instance_0)); }
	inline Platform_t1647901813 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Platform_t1647901813 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Platform_t1647901813 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}

	inline static int32_t get_offset_of_s_CallbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___s_CallbackExecutor_1)); }
	inline CallbackExecutor_t363496179 * get_s_CallbackExecutor_1() const { return ___s_CallbackExecutor_1; }
	inline CallbackExecutor_t363496179 ** get_address_of_s_CallbackExecutor_1() { return &___s_CallbackExecutor_1; }
	inline void set_s_CallbackExecutor_1(CallbackExecutor_t363496179 * value)
	{
		___s_CallbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CallbackExecutor_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline unityAdsReady_t96934738 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline unityAdsReady_t96934738 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(unityAdsReady_t96934738 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline unityAdsDidError_t1993223595 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline unityAdsDidError_t1993223595 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(unityAdsDidError_t1993223595 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_8() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache2_8)); }
	inline unityAdsDidStart_t1058412932 * get_U3CU3Ef__mgU24cache2_8() const { return ___U3CU3Ef__mgU24cache2_8; }
	inline unityAdsDidStart_t1058412932 ** get_address_of_U3CU3Ef__mgU24cache2_8() { return &___U3CU3Ef__mgU24cache2_8; }
	inline void set_U3CU3Ef__mgU24cache2_8(unityAdsDidStart_t1058412932 * value)
	{
		___U3CU3Ef__mgU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_9() { return static_cast<int32_t>(offsetof(Platform_t1647901813_StaticFields, ___U3CU3Ef__mgU24cache3_9)); }
	inline unityAdsDidFinish_t3747416149 * get_U3CU3Ef__mgU24cache3_9() const { return ___U3CU3Ef__mgU24cache3_9; }
	inline unityAdsDidFinish_t3747416149 ** get_address_of_U3CU3Ef__mgU24cache3_9() { return &___U3CU3Ef__mgU24cache3_9; }
	inline void set_U3CU3Ef__mgU24cache3_9(unityAdsDidFinish_t3747416149 * value)
	{
		___U3CU3Ef__mgU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1647901813_H
#ifndef U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#define U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct  U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::handler
	EventHandler_1_t177306446 * ___handler_0;
	// System.Int64 UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::rawError
	int64_t ___rawError_1;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___handler_0)); }
	inline EventHandler_1_t177306446 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t177306446 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t177306446 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_rawError_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___rawError_1)); }
	inline int64_t get_rawError_1() const { return ___rawError_1; }
	inline int64_t* get_address_of_rawError_1() { return &___rawError_1; }
	inline void set_rawError_1(int64_t value)
	{
		___rawError_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDERRORU3EC__ANONSTOREY1_T2659421617_H
#ifndef U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#define U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::handler
	EventHandler_1_t908338235 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544, ___handler_0)); }
	inline EventHandler_1_t908338235 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t908338235 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t908338235 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDFINISHU3EC__ANONSTOREY3_T3126029544_H
#ifndef U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#define U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2
struct  U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::handler
	EventHandler_1_t2215985868 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642, ___handler_0)); }
	inline EventHandler_1_t2215985868 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2215985868 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2215985868 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDSTARTU3EC__ANONSTOREY2_T250005642_H
#ifndef U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#define U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct  U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_t2768214265 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718, ___handler_0)); }
	inline EventHandler_1_t2768214265 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2768214265 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2768214265 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((&___placementId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSREADYU3EC__ANONSTOREY0_T1009704718_H
#ifndef ANDROIDJAVAOBJECT_T4131667876_H
#define ANDROIDJAVAOBJECT_T4131667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t4131667876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T4131667876_H
#ifndef ANDROIDJAVAPROXY_T2835824643_H
#define ANDROIDJAVAPROXY_T2835824643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2835824643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2835824643_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T1827440471_H
#define KEYVALUEPAIR_2_T1827440471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct  KeyValuePair_2_t1827440471 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GetDelegate_t3939479301 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1827440471, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1827440471, ___value_1)); }
	inline GetDelegate_t3939479301 * get_value_1() const { return ___value_1; }
	inline GetDelegate_t3939479301 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GetDelegate_t3939479301 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1827440471_H
#ifndef KEYVALUEPAIR_2_T1467418788_H
#define KEYVALUEPAIR_2_T1467418788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>
struct  KeyValuePair_2_t1467418788 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SetDelegate_t920366853 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1467418788, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1467418788, ___value_1)); }
	inline SetDelegate_t920366853 * get_value_1() const { return ___value_1; }
	inline SetDelegate_t920366853 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SetDelegate_t920366853 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1467418788_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_7)); }
	inline Encoding_t1523322056 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t1523322056 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_8)); }
	inline Decoder_t2204182725 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t2204182725 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t2204182725 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_9)); }
	inline Stream_t1273022909 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t1273022909 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t1273022909 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_11)); }
	inline StringBuilder_t * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_12)); }
	inline StreamReader_t4009935899 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4009935899 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4009935899 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef PLATFORM_T1698302846_H
#define PLATFORM_T1698302846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform
struct  Platform_t1698302846  : public AndroidJavaProxy_t2835824643
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Android.Platform::m_CurrentActivity
	AndroidJavaObject_t4131667876 * ___m_CurrentActivity_0;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Android.Platform::m_UnityAds
	AndroidJavaClass_t32045322 * ___m_UnityAds_1;
	// UnityEngine.Advertisements.CallbackExecutor UnityEngine.Advertisements.Android.Platform::m_CallbackExecutor
	CallbackExecutor_t363496179 * ___m_CallbackExecutor_2;
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.Android.Platform::OnReady
	EventHandler_1_t2768214265 * ___OnReady_3;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform::OnStart
	EventHandler_1_t2215985868 * ___OnStart_4;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Android.Platform::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_5;
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.Android.Platform::OnError
	EventHandler_1_t177306446 * ___OnError_6;

public:
	inline static int32_t get_offset_of_m_CurrentActivity_0() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_CurrentActivity_0)); }
	inline AndroidJavaObject_t4131667876 * get_m_CurrentActivity_0() const { return ___m_CurrentActivity_0; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_m_CurrentActivity_0() { return &___m_CurrentActivity_0; }
	inline void set_m_CurrentActivity_0(AndroidJavaObject_t4131667876 * value)
	{
		___m_CurrentActivity_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentActivity_0), value);
	}

	inline static int32_t get_offset_of_m_UnityAds_1() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_UnityAds_1)); }
	inline AndroidJavaClass_t32045322 * get_m_UnityAds_1() const { return ___m_UnityAds_1; }
	inline AndroidJavaClass_t32045322 ** get_address_of_m_UnityAds_1() { return &___m_UnityAds_1; }
	inline void set_m_UnityAds_1(AndroidJavaClass_t32045322 * value)
	{
		___m_UnityAds_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnityAds_1), value);
	}

	inline static int32_t get_offset_of_m_CallbackExecutor_2() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___m_CallbackExecutor_2)); }
	inline CallbackExecutor_t363496179 * get_m_CallbackExecutor_2() const { return ___m_CallbackExecutor_2; }
	inline CallbackExecutor_t363496179 ** get_address_of_m_CallbackExecutor_2() { return &___m_CallbackExecutor_2; }
	inline void set_m_CallbackExecutor_2(CallbackExecutor_t363496179 * value)
	{
		___m_CallbackExecutor_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CallbackExecutor_2), value);
	}

	inline static int32_t get_offset_of_OnReady_3() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnReady_3)); }
	inline EventHandler_1_t2768214265 * get_OnReady_3() const { return ___OnReady_3; }
	inline EventHandler_1_t2768214265 ** get_address_of_OnReady_3() { return &___OnReady_3; }
	inline void set_OnReady_3(EventHandler_1_t2768214265 * value)
	{
		___OnReady_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnReady_3), value);
	}

	inline static int32_t get_offset_of_OnStart_4() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnStart_4)); }
	inline EventHandler_1_t2215985868 * get_OnStart_4() const { return ___OnStart_4; }
	inline EventHandler_1_t2215985868 ** get_address_of_OnStart_4() { return &___OnStart_4; }
	inline void set_OnStart_4(EventHandler_1_t2215985868 * value)
	{
		___OnStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnStart_4), value);
	}

	inline static int32_t get_offset_of_OnFinish_5() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnFinish_5)); }
	inline EventHandler_1_t908338235 * get_OnFinish_5() const { return ___OnFinish_5; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_5() { return &___OnFinish_5; }
	inline void set_OnFinish_5(EventHandler_1_t908338235 * value)
	{
		___OnFinish_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_5), value);
	}

	inline static int32_t get_offset_of_OnError_6() { return static_cast<int32_t>(offsetof(Platform_t1698302846, ___OnError_6)); }
	inline EventHandler_1_t177306446 * get_OnError_6() const { return ___OnError_6; }
	inline EventHandler_1_t177306446 ** get_address_of_OnError_6() { return &___OnError_6; }
	inline void set_OnError_6(EventHandler_1_t177306446 * value)
	{
		___OnError_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnError_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T1698302846_H
#ifndef ERROREVENTARGS_T2253147013_H
#define ERROREVENTARGS_T2253147013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ErrorEventArgs
struct  ErrorEventArgs_t2253147013  : public EventArgs_t3591816995
{
public:
	// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::<error>k__BackingField
	int64_t ___U3CerrorU3Ek__BackingField_1;
	// System.String UnityEngine.Advertisements.ErrorEventArgs::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CerrorU3Ek__BackingField_1)); }
	inline int64_t get_U3CerrorU3Ek__BackingField_1() const { return ___U3CerrorU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CerrorU3Ek__BackingField_1() { return &___U3CerrorU3Ek__BackingField_1; }
	inline void set_U3CerrorU3Ek__BackingField_1(int64_t value)
	{
		___U3CerrorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_t2253147013, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTARGS_T2253147013_H
#ifndef READYEVENTARGS_T549087536_H
#define READYEVENTARGS_T549087536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ReadyEventArgs
struct  ReadyEventArgs_t549087536  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.ReadyEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadyEventArgs_t549087536, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READYEVENTARGS_T549087536_H
#ifndef JSONARRAY_T3985338818_H
#define JSONARRAY_T3985338818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.JsonArray
struct  JsonArray_t3985338818  : public List_1_t257213610
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T3985338818_H
#ifndef STARTEVENTARGS_T4291826435_H
#define STARTEVENTARGS_T4291826435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.StartEventArgs
struct  StartEventArgs_t4291826435  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StartEventArgs_t4291826435, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTEVENTARGS_T4291826435_H
#ifndef ANDROIDJAVACLASS_T32045322_H
#define ANDROIDJAVACLASS_T32045322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t32045322  : public AndroidJavaObject_t4131667876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T32045322_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T524577942_H
#define ENUMERATOR_T524577942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t524577942 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t968067334  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___current_3)); }
	inline KeyValuePair_2_t968067334  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t968067334 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t968067334  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T524577942_H
#ifndef KEYVALUEPAIR_2_T1980328474_H
#define KEYVALUEPAIR_2_T1980328474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  KeyValuePair_2_t1980328474 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t2530217319  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1980328474, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1980328474, ___value_1)); }
	inline KeyValuePair_2_t2530217319  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t2530217319 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t2530217319  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1980328474_H
#ifndef KEYVALUEPAIR_2_T3650347254_H
#define KEYVALUEPAIR_2_T3650347254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct  KeyValuePair_2_t3650347254 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t1467418788  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3650347254, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3650347254, ___value_1)); }
	inline KeyValuePair_2_t1467418788  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t1467418788 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t1467418788  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3650347254_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef DATETIMESTYLES_T840957420_H
#define DATETIMESTYLES_T840957420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t840957420 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t840957420, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMESTYLES_T840957420_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef SERIALIZATIONEXCEPTION_T3941511869_H
#define SERIALIZATIONEXCEPTION_T3941511869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t3941511869  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T3941511869_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef DEBUGLEVEL_T2669295423_H
#define DEBUGLEVEL_T2669295423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/DebugLevel
struct  DebugLevel_t2669295423 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement/DebugLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevel_t2669295423, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_T2669295423_H
#ifndef DEBUGLEVELINTERNAL_T4213999277_H
#define DEBUGLEVELINTERNAL_T4213999277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement/DebugLevelInternal
struct  DebugLevelInternal_t4213999277 
{
public:
	// System.Int32 UnityEngine.Advertisements.Advertisement/DebugLevelInternal::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevelInternal_t4213999277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVELINTERNAL_T4213999277_H
#ifndef PLACEMENTSTATE_T4035359335_H
#define PLACEMENTSTATE_T4035359335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.PlacementState
struct  PlacementState_t4035359335 
{
public:
	// System.Int32 UnityEngine.Advertisements.PlacementState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlacementState_t4035359335, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEMENTSTATE_T4035359335_H
#ifndef SHOWRESULT_T3070553623_H
#define SHOWRESULT_T3070553623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.ShowResult
struct  ShowResult_t3070553623 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShowResult_t3070553623, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWRESULT_T3070553623_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef SCALEMODE_T2341947364_H
#define SCALEMODE_T2341947364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScaleMode
struct  ScaleMode_t2341947364 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScaleMode_t2341947364, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALEMODE_T2341947364_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ADVERTISEMENT_T842671397_H
#define ADVERTISEMENT_T842671397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Advertisement
struct  Advertisement_t842671397  : public RuntimeObject
{
public:

public:
};

struct Advertisement_t842671397_StaticFields
{
public:
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Initialized
	bool ___s_Initialized_0;
	// UnityEngine.Advertisements.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_1;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_EditorSupportedPlatform
	bool ___s_EditorSupportedPlatform_2;
	// System.Boolean UnityEngine.Advertisements.Advertisement::s_Showing
	bool ___s_Showing_3;
	// UnityEngine.Advertisements.Advertisement/DebugLevelInternal UnityEngine.Advertisements.Advertisement::s_DebugLevel
	int32_t ___s_DebugLevel_4;
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache0
	EventHandler_1_t2215985868 * ___U3CU3Ef__amU24cache0_5;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Advertisement::<>f__am$cache1
	EventHandler_1_t908338235 * ___U3CU3Ef__amU24cache1_6;

public:
	inline static int32_t get_offset_of_s_Initialized_0() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Initialized_0)); }
	inline bool get_s_Initialized_0() const { return ___s_Initialized_0; }
	inline bool* get_address_of_s_Initialized_0() { return &___s_Initialized_0; }
	inline void set_s_Initialized_0(bool value)
	{
		___s_Initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_Platform_1() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Platform_1)); }
	inline RuntimeObject* get_s_Platform_1() const { return ___s_Platform_1; }
	inline RuntimeObject** get_address_of_s_Platform_1() { return &___s_Platform_1; }
	inline void set_s_Platform_1(RuntimeObject* value)
	{
		___s_Platform_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Platform_1), value);
	}

	inline static int32_t get_offset_of_s_EditorSupportedPlatform_2() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_EditorSupportedPlatform_2)); }
	inline bool get_s_EditorSupportedPlatform_2() const { return ___s_EditorSupportedPlatform_2; }
	inline bool* get_address_of_s_EditorSupportedPlatform_2() { return &___s_EditorSupportedPlatform_2; }
	inline void set_s_EditorSupportedPlatform_2(bool value)
	{
		___s_EditorSupportedPlatform_2 = value;
	}

	inline static int32_t get_offset_of_s_Showing_3() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_Showing_3)); }
	inline bool get_s_Showing_3() const { return ___s_Showing_3; }
	inline bool* get_address_of_s_Showing_3() { return &___s_Showing_3; }
	inline void set_s_Showing_3(bool value)
	{
		___s_Showing_3 = value;
	}

	inline static int32_t get_offset_of_s_DebugLevel_4() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___s_DebugLevel_4)); }
	inline int32_t get_s_DebugLevel_4() const { return ___s_DebugLevel_4; }
	inline int32_t* get_address_of_s_DebugLevel_4() { return &___s_DebugLevel_4; }
	inline void set_s_DebugLevel_4(int32_t value)
	{
		___s_DebugLevel_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline EventHandler_1_t2215985868 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline EventHandler_1_t2215985868 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(EventHandler_1_t2215985868 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(Advertisement_t842671397_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline EventHandler_1_t908338235 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline EventHandler_1_t908338235 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(EventHandler_1_t908338235 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADVERTISEMENT_T842671397_H
#ifndef U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#define U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3
struct  U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2 UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::<>f__ref$2
	U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * ___U3CU3Ef__refU242_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU242_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732, ___U3CU3Ef__refU242_1)); }
	inline U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * get_U3CU3Ef__refU242_1() const { return ___U3CU3Ef__refU242_1; }
	inline U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 ** get_address_of_U3CU3Ef__refU242_1() { return &___U3CU3Ef__refU242_1; }
	inline void set_U3CU3Ef__refU242_1(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * value)
	{
		___U3CU3Ef__refU242_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU242_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONUNITYADSFINISHU3EC__ANONSTOREY3_T2653194732_H
#ifndef FINISHEVENTARGS_T2984178802_H
#define FINISHEVENTARGS_T2984178802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.FinishEventArgs
struct  FinishEventArgs_t2984178802  : public EventArgs_t3591816995
{
public:
	// System.String UnityEngine.Advertisements.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplacementIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_t2984178802, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISHEVENTARGS_T2984178802_H
#ifndef U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#define U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4
struct  U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::showResult
	int32_t ___showResult_0;
	// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3 UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::<>f__ref$3
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * ___U3CU3Ef__refU243_1;

public:
	inline static int32_t get_offset_of_showResult_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549, ___showResult_0)); }
	inline int32_t get_showResult_0() const { return ___showResult_0; }
	inline int32_t* get_address_of_showResult_0() { return &___showResult_0; }
	inline void set_showResult_0(int32_t value)
	{
		___showResult_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549, ___U3CU3Ef__refU243_1)); }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU243_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYADSDIDFINISHU3EC__ANONSTOREY4_T3126029549_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ACTION_1_T535963774_H
#define ACTION_1_T535963774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.CallbackExecutor>
struct  Action_1_t535963774  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T535963774_H
#ifndef ACTION_1_T3243021218_H
#define ACTION_1_T3243021218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct  Action_1_t3243021218  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3243021218_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3738529785  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t881159249  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___dt_2)); }
	inline DateTime_t3738529785  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3738529785 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3738529785  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___utc_offset_3)); }
	inline TimeSpan_t881159249  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t881159249 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t881159249  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3229287507  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3229287507  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef EVENTHANDLER_1_T177306446_H
#define EVENTHANDLER_1_T177306446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct  EventHandler_1_t177306446  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T177306446_H
#ifndef EVENTHANDLER_1_T908338235_H
#define EVENTHANDLER_1_T908338235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct  EventHandler_1_t908338235  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T908338235_H
#ifndef EVENTHANDLER_1_T2768214265_H
#define EVENTHANDLER_1_T2768214265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct  EventHandler_1_t2768214265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2768214265_H
#ifndef EVENTHANDLER_1_T2215985868_H
#define EVENTHANDLER_1_T2215985868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct  EventHandler_1_t2215985868  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2215985868_H
#ifndef CONSTRUCTORDELEGATE_T3127338789_H
#define CONSTRUCTORDELEGATE_T3127338789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct  ConstructorDelegate_t3127338789  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORDELEGATE_T3127338789_H
#ifndef GETDELEGATE_T3939479301_H
#define GETDELEGATE_T3939479301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct  GetDelegate_t3939479301  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETDELEGATE_T3939479301_H
#ifndef SETDELEGATE_T920366853_H
#define SETDELEGATE_T920366853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct  SetDelegate_t920366853  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETDELEGATE_T920366853_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T2993261231_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T2993261231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct  ThreadSafeDictionaryValueFactory_2_t2993261231  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T2993261231_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T1170354448_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T1170354448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct  ThreadSafeDictionaryValueFactory_2_t1170354448  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T1170354448_H
#ifndef THREADSAFEDICTIONARYVALUEFACTORY_2_T2109106246_H
#define THREADSAFEDICTIONARYVALUEFACTORY_2_T2109106246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct  ThreadSafeDictionaryValueFactory_2_t2109106246  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEDICTIONARYVALUEFACTORY_2_T2109106246_H
#ifndef UNITYADSDIDERROR_T1993223595_H
#define UNITYADSDIDERROR_T1993223595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidError
struct  unityAdsDidError_t1993223595  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDERROR_T1993223595_H
#ifndef UNITYADSDIDFINISH_T3747416149_H
#define UNITYADSDIDFINISH_T3747416149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish
struct  unityAdsDidFinish_t3747416149  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDFINISH_T3747416149_H
#ifndef UNITYADSDIDSTART_T1058412932_H
#define UNITYADSDIDSTART_T1058412932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart
struct  unityAdsDidStart_t1058412932  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSDIDSTART_T1058412932_H
#ifndef UNITYADSREADY_T96934738_H
#define UNITYADSREADY_T96934738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/unityAdsReady
struct  unityAdsReady_t96934738  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSREADY_T96934738_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CALLBACKEXECUTOR_T363496179_H
#define CALLBACKEXECUTOR_T363496179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.CallbackExecutor
struct  CallbackExecutor_t363496179  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>> UnityEngine.Advertisements.CallbackExecutor::s_Queue
	Queue_1_t382223268 * ___s_Queue_4;

public:
	inline static int32_t get_offset_of_s_Queue_4() { return static_cast<int32_t>(offsetof(CallbackExecutor_t363496179, ___s_Queue_4)); }
	inline Queue_1_t382223268 * get_s_Queue_4() const { return ___s_Queue_4; }
	inline Queue_1_t382223268 ** get_address_of_s_Queue_4() { return &___s_Queue_4; }
	inline void set_s_Queue_4(Queue_1_t382223268 * value)
	{
		___s_Queue_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Queue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKEXECUTOR_T363496179_H
#ifndef PLACEHOLDER_T2906495853_H
#define PLACEHOLDER_T2906495853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Placeholder
struct  Placeholder_t2906495853  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_LandscapeTexture
	Texture2D_t3840446185 * ___m_LandscapeTexture_4;
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_PortraitTexture
	Texture2D_t3840446185 * ___m_PortraitTexture_5;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_Showing
	bool ___m_Showing_6;
	// System.String UnityEngine.Advertisements.Editor.Placeholder::m_PlacementId
	String_t* ___m_PlacementId_7;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_AllowSkip
	bool ___m_AllowSkip_8;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Placeholder::OnFinish
	EventHandler_1_t908338235 * ___OnFinish_9;

public:
	inline static int32_t get_offset_of_m_LandscapeTexture_4() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_LandscapeTexture_4)); }
	inline Texture2D_t3840446185 * get_m_LandscapeTexture_4() const { return ___m_LandscapeTexture_4; }
	inline Texture2D_t3840446185 ** get_address_of_m_LandscapeTexture_4() { return &___m_LandscapeTexture_4; }
	inline void set_m_LandscapeTexture_4(Texture2D_t3840446185 * value)
	{
		___m_LandscapeTexture_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_LandscapeTexture_4), value);
	}

	inline static int32_t get_offset_of_m_PortraitTexture_5() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_PortraitTexture_5)); }
	inline Texture2D_t3840446185 * get_m_PortraitTexture_5() const { return ___m_PortraitTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_m_PortraitTexture_5() { return &___m_PortraitTexture_5; }
	inline void set_m_PortraitTexture_5(Texture2D_t3840446185 * value)
	{
		___m_PortraitTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PortraitTexture_5), value);
	}

	inline static int32_t get_offset_of_m_Showing_6() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_Showing_6)); }
	inline bool get_m_Showing_6() const { return ___m_Showing_6; }
	inline bool* get_address_of_m_Showing_6() { return &___m_Showing_6; }
	inline void set_m_Showing_6(bool value)
	{
		___m_Showing_6 = value;
	}

	inline static int32_t get_offset_of_m_PlacementId_7() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_PlacementId_7)); }
	inline String_t* get_m_PlacementId_7() const { return ___m_PlacementId_7; }
	inline String_t** get_address_of_m_PlacementId_7() { return &___m_PlacementId_7; }
	inline void set_m_PlacementId_7(String_t* value)
	{
		___m_PlacementId_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlacementId_7), value);
	}

	inline static int32_t get_offset_of_m_AllowSkip_8() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___m_AllowSkip_8)); }
	inline bool get_m_AllowSkip_8() const { return ___m_AllowSkip_8; }
	inline bool* get_address_of_m_AllowSkip_8() { return &___m_AllowSkip_8; }
	inline void set_m_AllowSkip_8(bool value)
	{
		___m_AllowSkip_8 = value;
	}

	inline static int32_t get_offset_of_OnFinish_9() { return static_cast<int32_t>(offsetof(Placeholder_t2906495853, ___OnFinish_9)); }
	inline EventHandler_1_t908338235 * get_OnFinish_9() const { return ___OnFinish_9; }
	inline EventHandler_1_t908338235 ** get_address_of_OnFinish_9() { return &___OnFinish_9; }
	inline void set_OnFinish_9(EventHandler_1_t908338235 * value)
	{
		___OnFinish_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnFinish_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEHOLDER_T2906495853_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t968067334  m_Items[1];

public:
	inline KeyValuePair_2_t968067334  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t968067334 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t968067334  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t968067334  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t968067334 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t968067334  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m860665472_gshared (Action_1_t3243021218 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m2018075987_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m290814832_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m236774955_gshared (Dictionary_2_t1444694249 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4262304220_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1703962396_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_m872229925_gshared (Dictionary_2_t1444694249 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3072481003_gshared (Dictionary_2_t132545152 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" IL2CPP_METHOD_ATTR ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ThreadSafeDictionaryValueFactory_2__ctor_m384065181_gshared (ThreadSafeDictionaryValueFactory_2_t964932841 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ThreadSafeDictionary_2__ctor_m161528205_gshared (ThreadSafeDictionary_2_t28734647 * __this, ThreadSafeDictionaryValueFactory_2_t964932841 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3578475401_gshared (Dictionary_2_t3877623603 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m727165395_gshared (KeyValuePair_2_t2530217319 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m4122102576_gshared (KeyValuePair_2_t1980328474 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  KeyValuePair_2_get_Value_m1598837825_gshared (KeyValuePair_2_t1980328474 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_m1369507557 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3233182567 (Platform_t1698302846 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3887152146 (Platform_t1647901813 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_m1419529813 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Load_m3998104966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3929159556 (Platform_t2756657262 * __this, String_t* ___extensionPath0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_initializeOnStartup_m827867793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C" IL2CPP_METHOD_ATTR String_t* Advertisement_get_gameId_m3960932921 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_testMode_m1292646014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Initialize_m1051450402 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()
extern "C" IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_initializeOnStartup_m4135646069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_enabled_m805351818 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_IsEnabled_m3879149330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
extern "C" IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_testMode_m1754589381 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityAdsSettings_GetGameId_m1540739525 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m2728189845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_isInitialized_m177689357 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m247885508 (EventHandler_1_t2215985868 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method);
}
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1760330498 (EventHandler_1_t908338235 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void MetaData__ctor_m191542684 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MetaData_Set_m2920014032 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_SetMetaData_m3821393482 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Advertisement_get_version_m3333841984 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m2166462196 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m4001863134 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Show_m1413788125 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t990845000 * ___showOptions1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_m2448096591 (U3CShowU3Ec__AnonStorey0_t3170924441 * __this, const RuntimeMethod* method);
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C" IL2CPP_METHOD_ATTR Action_1_t3243021218 * ShowOptions_get_resultCallback_m2710569767 (ShowOptions_t990845000 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m2571500879 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C" IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m2724807180 (ShowOptions_t990845000 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C" IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m1389897688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_isShowing_m1653892022 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C" IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m2484985128 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
inline void Action_1_Invoke_m860665472 (Action_1_t3243021218 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3243021218 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m860665472_gshared)(__this, p0, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m545570009 (AndroidJavaProxy_t2835824643 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t4131667876 * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m100625750 (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m2018075987_gshared)(__this, p0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.CallbackExecutor>()
inline CallbackExecutor_t363496179 * GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  CallbackExecutor_t363496179 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m246329423 (Action_1_t535963774 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t535963774 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C" IL2CPP_METHOD_ATTR void CallbackExecutor_Post_m2417625912 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386 (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633 (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m2571575926 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m290814832_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m2922144688 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t4131667876 * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m290814832_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m3828648572 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C" IL2CPP_METHOD_ATTR String_t* MetaData_get_category_m4241298320 (MetaData_t2274729001 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_m1449555179 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MetaData_get_Values_m2805296889 (MetaData_t2274729001 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m256823211 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m4108279609 (KeyValuePair_2_t968067334 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m2417395018 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1199075846 (EventHandler_1_t177306446 * __this, RuntimeObject * p0, ErrorEventArgs_t2253147013 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t177306446 *, RuntimeObject *, ErrorEventArgs_t2253147013 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_m50835730 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3162226611 (EventHandler_1_t908338235 * __this, RuntimeObject * p0, FinishEventArgs_t2984178802 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t908338235 *, RuntimeObject *, FinishEventArgs_t2984178802 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ReadyEventArgs__ctor_m1307451034 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m743178406 (EventHandler_1_t2768214265 * __this, RuntimeObject * p0, ReadyEventArgs_t549087536 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2768214265 *, RuntimeObject *, ReadyEventArgs_t549087536 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StartEventArgs__ctor_m1521341003 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1200448648 (EventHandler_1_t2215985868 * __this, RuntimeObject * p0, StartEventArgs_t4291826435 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2215985868 *, RuntimeObject *, StartEventArgs_t4291826435 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::.ctor()
inline void Queue_1__ctor_m401901252 (Queue_1_t382223268 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Enqueue(!0)
inline void Queue_1_Enqueue_m3882925169 (Queue_1_t382223268 * __this, Action_1_t535963774 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t382223268 *, Action_1_t535963774 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::Dequeue()
inline Action_1_t535963774 * Queue_1_Dequeue_m2377473102 (Queue_1_t382223268 * __this, const RuntimeMethod* method)
{
	return ((  Action_1_t535963774 * (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.Advertisements.CallbackExecutor>::Invoke(!0)
inline void Action_1_Invoke_m345301731 (Action_1_t535963774 * __this, CallbackExecutor_t363496179 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t535963774 *, CallbackExecutor_t363496179 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>::get_Count()
inline int32_t Queue_1_get_Count_m2643849061 (Queue_1_t382223268 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t382223268 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m1425654463 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_enabled_m3944276849 (Configuration_t1722493896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m2310724936 (Dictionary_2_t4177511560 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4177511560 *, const RuntimeMethod*))Dictionary_2__ctor_m236774955_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_placements_m4002258735 (Configuration_t1722493896 * __this, Dictionary_2_t4177511560 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_defaultPlacement_m3028665897 (Configuration_t1722493896 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t4177511560 * Configuration_get_placements_m1853086915 (Configuration_t1722493896 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(!0,!1)
inline void Dictionary_2_Add_m95414296 (Dictionary_2_t4177511560 * __this, String_t* p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4177511560 *, String_t*, bool, const RuntimeMethod*))Dictionary_2_Add_m4262304220_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* File_ReadAllBytes_m1435775076 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m2182108104 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Placeholder_TextureFromFile_m291359667 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUI_ModalWindow_m2334426705 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" IL2CPP_METHOD_ATTR void GUI_DrawTexture_m2312292152 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, Texture_t3661962703 * p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Editor.Placeholder>()
inline Placeholder_t2906495853 * GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Placeholder_t2906495853 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_add_OnFinish_m3075927457 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_Load_m1103501462 (Placeholder_t2906495853 * __this, String_t* ___extensionPath0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m2743853427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_get_version_m2737893346 (Platform_t2756657262 * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR WebRequest_t1939381076 * WebRequest_Create_m1521009289 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m472391085 (Platform_t2756657262 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1412659484 (Dictionary_2_t4177511560 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1703962396_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_IsReady_m1007373777 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
extern "C" IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_m3927249128 (Configuration_t1722493896 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(!0)
inline bool Dictionary_2_get_Item_m3494146125 (Dictionary_2_t4177511560 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4177511560 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m872229925_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_Show_m277657847 (Placeholder_t2906495853 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
extern "C" IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m3475944639 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m1047876681 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Configuration__ctor_m2049560937 (Configuration_t1722493896 * __this, String_t* ___configurationResponse0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Configuration_get_enabled_m2999626715 (Configuration_t1722493896 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs_set_error_m4248800756 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs_set_message_m3532469052 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs_set_placementId_m452915092 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs_set_showResult_m203134832 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_m855809970 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C" IL2CPP_METHOD_ATTR void MetaData_set_category_m1755177233 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m1557049914 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ReadyEventArgs_set_placementId_m818740610 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m2321703786 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m3947764094 (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m3920175150 (Dictionary_2_t2865362463 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m3072481003_gshared)(__this, p0, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.JsonObject::GetAtIndex(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_GetAtIndex_m2667387776 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___obj0, int32_t ___index1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m1195623271 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3582166299 (Dictionary_2_t2865362463 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
inline KeyCollection_t3055037934 * Dictionary_2_get_Keys_m1150370094 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t3055037934 * (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m1784025370 (Dictionary_2_t2865362463 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m107220533 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
inline ValueCollection_t286439485 * Dictionary_2_get_Values_m1765249039 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t286439485 * (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m2791382321 (Dictionary_2_t2865362463 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t2865362463 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m464101897 (Dictionary_2_t2865362463 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_m3222456405 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method);
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.JsonObject::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m362114336 (JsonObject_t1327569318 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> UnityEngine.Advertisements.SimpleJson.JsonObject::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m2239729578 (JsonObject_t1327569318 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1201568812 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t524577942  Dictionary_2_GetEnumerator_m821420568 (Dictionary_2_t2865362463 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t524577942  (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m3064671815 (ThreadSafeDictionaryValueFactory_2_t2109106246 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_t2109106246 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m384065181_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m1062633995 (ThreadSafeDictionary_2_t1172908052 * __this, ThreadSafeDictionaryValueFactory_2_t2109106246 * p0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_t1172908052 *, ThreadSafeDictionaryValueFactory_2_t2109106246 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m161528205_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m2125044720 (ThreadSafeDictionaryValueFactory_2_t1170354448 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_t1170354448 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m384065181_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m975429584 (ThreadSafeDictionary_2_t234156254 * __this, ThreadSafeDictionaryValueFactory_2_t1170354448 * p0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_t234156254 *, ThreadSafeDictionaryValueFactory_2_t1170354448 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m161528205_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Object,System.IntPtr)
inline void ThreadSafeDictionaryValueFactory_2__ctor_m4005509887 (ThreadSafeDictionaryValueFactory_2_t2993261231 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionaryValueFactory_2_t2993261231 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ThreadSafeDictionaryValueFactory_2__ctor_m384065181_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
inline void ThreadSafeDictionary_2__ctor_m464228881 (ThreadSafeDictionary_2_t2057063037 * __this, ThreadSafeDictionaryValueFactory_2_t2993261231 * p0, const RuntimeMethod* method)
{
	((  void (*) (ThreadSafeDictionary_2_t2057063037 *, ThreadSafeDictionaryValueFactory_2_t2993261231 *, const RuntimeMethod*))ThreadSafeDictionary_2__ctor_m161528205_gshared)(__this, p0, method);
}
// System.Boolean System.Type::get_IsArray()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetContructor_m198753871 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::.ctor()
inline void Dictionary_2__ctor_m501509644 (Dictionary_2_t3724735600 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3724735600 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m1505565867 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m4169253972 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m2399864271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m2180846589 (MethodBase_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethod_m2084983952 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m1225489027 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_m3482711189 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m3378038140 (FieldInfo_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethod_m4152947020 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
inline void Dictionary_2__ctor_m2587506542 (Dictionary_2_t1252675087 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1252675087 *, const RuntimeMethod*))Dictionary_2__ctor_m3578475401_gshared)(__this, method);
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m2586791962 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethod_m1283009144 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m867700299 (KeyValuePair_2_t1467418788 * __this, Type_t * p0, SetDelegate_t920366853 * p1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1467418788 *, Type_t *, SetDelegate_t920366853 *, const RuntimeMethod*))KeyValuePair_2__ctor_m727165395_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethod_m2132891088 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsNullableType(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m1498686771 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m3905033790 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ParseExact_m1132380469 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, RuntimeObject* p2, int32_t p3, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ParseExact_m73031128 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, RuntimeObject* p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Guid__ctor_m2423264394 (Guid_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m827193029 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Type_t * p1, RuntimeObject* p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsTypeDictionary(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsTypeDictionary_m177769241 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Type[] UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGenericTypeArguments(System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeU5BU5D_t3940880105* ReflectionUtils_GetGenericTypeArguments_m2836722815 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m2513274121 (ConstructorDelegate_t3127338789 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m3192674138 (KeyValuePair_2_t3650347254 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t3650347254 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4122102576_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
inline KeyValuePair_2_t1467418788  KeyValuePair_2_get_Value_m1644022012 (KeyValuePair_2_t3650347254 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1467418788  (*) (KeyValuePair_2_t3650347254 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1598837825_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>::get_Key()
inline Type_t * KeyValuePair_2_get_Key_m4117927069 (KeyValuePair_2_t1467418788 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t1467418788 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>::get_Value()
inline SetDelegate_t920366853 * KeyValuePair_2_get_Value_m3057102946 (KeyValuePair_2_t1467418788 * __this, const RuntimeMethod* method)
{
	return ((  SetDelegate_t920366853 * (*) (KeyValuePair_2_t1467418788 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_Invoke_m345191930 (SetDelegate_t920366853 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsTypeGenericeCollectionInterface(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsTypeGenericeCollectionInterface_m3907525460 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsAssignableFrom(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsAssignableFrom_m3348354076 (RuntimeObject * __this /* static, unused */, Type_t * ___type10, Type_t * ___type21, const RuntimeMethod* method);
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::ToNullableType(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReflectionUtils_ToNullableType_m2914598057 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, Type_t * ___nullableType1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m4017511472 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m2992030064 (DateTime_t3738529785 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToUniversalTime_m1292281655 (DateTimeOffset_t3229287507 * __this, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m3985341516 (DateTimeOffset_t3229287507 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m4056316049 (Guid_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m3891241071 (JsonObject_t1327569318 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Value()
inline GetDelegate_t3939479301 * KeyValuePair_2_get_Value_m3789007266 (KeyValuePair_2_t1827440471 * __this, const RuntimeMethod* method)
{
	return ((  GetDelegate_t3939479301 * (*) (KeyValuePair_2_t1827440471 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m497613733 (KeyValuePair_2_t1827440471 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1827440471 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m1713466754 (GetDelegate_t3939479301 * __this, RuntimeObject * ___source0, const RuntimeMethod* method);
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m3363303722 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * Attribute_GetCustomAttribute_m4034845276 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C" IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t881249896* Type_GetConstructors_m1172352582 (Type_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m459159167 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetConstructorByReflection_m3309638613 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * ___constructorInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetConstructorByReflection_m1171983073 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m3282387833 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_m3222289551 (ConstructorDelegate_t3127338789 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * ReflectionUtils_GetConstructorInfo_m4058025074 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethodByReflection_m1109098923 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethodByReflection_m1467673197 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m3671102593 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetDelegate__ctor_m2106094017 (GetDelegate_t3939479301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m2970195073 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethodByReflection_m3021719649 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethodByReflection_m4007754765 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m840323873 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate__ctor_m2727544246 (SetDelegate_t920366853 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3517928225 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m4089836896 (ConstructorInfo_t5769829 * __this, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_TryDeserializeObject_m846156654 (RuntimeObject * __this /* static, unused */, String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SerializationException__ctor_m3862484944 (SerializationException_t3941511869 * __this, String_t* p0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_m2036273466 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String,System.Type,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m2354421515 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, RuntimeObject* ___jsonSerializerStrategy2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeValue(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m1475951719 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m3878482345 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m512385085 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_m2447952977 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m3397641657 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m2862279773 (JsonArray_t3985338818 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m3338814081 (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m2532261654 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m1274236714 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.JsonArray UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3985338818 * SimpleJson_ParseArray_m3075552440 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_m1817791116 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, uint32_t* p3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_m3524675725 (RuntimeObject * __this /* static, unused */, int32_t ___utf320, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m1262864254 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_m2808520754 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m3606398488 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, int64_t* p3, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m1870114522 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_m481844464 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeArray(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_m2078464785 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m2920591434 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m2117551856 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int64_ToString_m623640997 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m3653216873 (Decimal_t2948259380 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3107811250 (float* __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m1051753975 (double* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t3624702326 * SimpleJson_get_PocoJsonSerializerStrategy_m1523450673 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m1974455660 (PocoJsonSerializerStrategy_t3624702326 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void StartEventArgs_set_placementId_m632111893 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsReady_m2855172723 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidError_m3621980989 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidStart_m971319454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidFinish_m4137038415 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsReady__ctor_m3699019508 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetReadyCallback_m572408946 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidError__ctor_m4120111418 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidErrorCallback_m2717679206 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidStart__ctor_m610751912 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidStartCallback_m104356378 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidFinish__ctor_m3115871303 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidFinishCallback_m1054131631 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083 (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsInitialized_m3090894253 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsSupported()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsSupported_m2832327113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsEngineGetVersion_m45362240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineGetDebugMode_m559010788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDebugMode_m2043700802 (RuntimeObject * __this /* static, unused */, bool ___debugMode0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineInitialize_m3450854254 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsReady_m1204345331 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t Platform_UnityAdsEngineGetPlacementState_m763487549 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineShow_m1525385135 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C" IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_m4186793159 (MetaData_t2274729001 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetMetaData_m1955283902 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidError_Invoke_m1306672649 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidFinish_Invoke_m880139269 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidStart_Invoke_m1190774304 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsReady_Invoke_m800719555 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C" IL2CPP_METHOD_ATTR void Advertisement_LoadRuntime_m1930758518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadRuntime_m1930758518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_0090;
		}
	}
	{
		bool L_1 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_isSupported_m1369507557(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}

IL_001e:
	{
		return;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_3;
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
			{
				goto IL_0039;
			}
		}

IL_002d:
		{
			int32_t L_5 = V_0;
			if ((((int32_t)L_5) == ((int32_t)8)))
			{
				goto IL_0048;
			}
		}

IL_0034:
		{
			goto IL_0057;
		}

IL_0039:
		{
			Platform_t1698302846 * L_6 = (Platform_t1698302846 *)il2cpp_codegen_object_new(Platform_t1698302846_il2cpp_TypeInfo_var);
			Platform__ctor_m3233182567(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_6);
			goto IL_0066;
		}

IL_0048:
		{
			Platform_t1647901813 * L_7 = (Platform_t1647901813 *)il2cpp_codegen_object_new(Platform_t1647901813_il2cpp_TypeInfo_var);
			Platform__ctor_m3887152146(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_7);
			goto IL_0066;
		}

IL_0057:
		{
			UnsupportedPlatform_t2036049172 * L_8 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
			UnsupportedPlatform__ctor_m1419529813(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
			((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_8);
			goto IL_0066;
		}

IL_0066:
		{
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral4107934516, /*hidden argument*/NULL);
		Exception_t * L_9 = V_1;
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		UnsupportedPlatform_t2036049172 * L_10 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_m1419529813(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_10);
		goto IL_008b;
	} // end catch (depth: 1)

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Load_m3998104966(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_LoadEditor_m2032877435 (RuntimeObject * __this /* static, unused */, String_t* ___extensionPath0, bool ___supportedPlatform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_LoadEditor_m2032877435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = ___supportedPlatform1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = ___extensionPath0;
		Platform_t2756657262 * L_3 = (Platform_t2756657262 *)il2cpp_codegen_object_new(Platform_t2756657262_il2cpp_TypeInfo_var);
		Platform__ctor_m3929159556(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_3);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_EditorSupportedPlatform_2((bool)1);
		goto IL_0030;
	}

IL_0026:
	{
		UnsupportedPlatform_t2036049172 * L_4 = (UnsupportedPlatform_t2036049172 *)il2cpp_codegen_object_new(UnsupportedPlatform_t2036049172_il2cpp_TypeInfo_var);
		UnsupportedPlatform__ctor_m1419529813(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Platform_1(L_4);
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Load_m3998104966(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Load_m3998104966 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Load_m3998104966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_1 = Advertisement_get_isSupported_m1369507557(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_2 = Advertisement_get_initializeOnStartup_m827867793(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		String_t* L_3 = Advertisement_get_gameId_m3960932921(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Advertisement_get_testMode_m1292646014(NULL /*static, unused*/, /*hidden argument*/NULL);
		Advertisement_Initialize_m1051450402(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_initializeOnStartup_m827867793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_initializeOnStartup_m4135646069(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_IsEnabled_m3879149330 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_enabled_m805351818(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t Advertisement_get_debugLevel_m112247691 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugLevel_m112247691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_DebugLevel_4();
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_debugLevel_m748244073 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugLevel_m748244073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m2728189845 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isInitialized_m2728189845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Initialized_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isInitialized(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_isInitialized_m177689357 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isInitialized_m177689357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Initialized_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_isSupported_m1369507557 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isSupported_m1369507557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_1 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_EditorSupportedPlatform_2();
		if (L_1)
		{
			goto IL_002b;
		}
	}

IL_0014:
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_4 = Advertisement_IsEnabled_m3879149330(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_debugMode()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_debugMode_m2131110715 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_debugMode_m2131110715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.Advertisements.IPlatform::get_debugMode() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_debugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_debugMode_m152285871 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_debugMode_m152285871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		bool L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(12 /* System.Void UnityEngine.Advertisements.IPlatform::set_debugMode(System.Boolean) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_testMode_m1292646014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		bool L_0 = UnityAdsSettings_get_testMode_m1754589381(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C" IL2CPP_METHOD_ATTR String_t* Advertisement_get_gameId_m3960932921 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = UnityAdsSettings_GetGameId_m1540739525(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.Advertisement::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Advertisement_get_version_m3333841984 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_version_m3333841984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String UnityEngine.Advertisements.IPlatform::get_version() */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_get_isShowing_m3507224835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_get_isShowing_m3507224835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Showing_3();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::set_isShowing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_set_isShowing_m1653892022 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_set_isShowing_m1653892022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_Showing_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Initialize_m111792659 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m111792659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___gameId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m1051450402(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Initialize_m1051450402 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Initialize_m1051450402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t2274729001 * V_0 = NULL;
	MetaData_t2274729001 * V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_get_isInitialized_m2728189845(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isInitialized_m177689357(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t2215985868 * L_2 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		G_B2_0 = L_1;
		if (L_2)
		{
			G_B3_0 = L_1;
			goto IL_002d;
		}
	}
	{
		intptr_t L_3 = (intptr_t)Advertisement_U3CInitializeU3Em__0_m2484897031_RuntimeMethod_var;
		EventHandler_1_t2215985868 * L_4 = (EventHandler_1_t2215985868 *)il2cpp_codegen_object_new(EventHandler_1_t2215985868_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m247885508(L_4, NULL, L_3, /*hidden argument*/EventHandler_1__ctor_m247885508_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_5(L_4);
		G_B3_0 = G_B2_0;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		EventHandler_1_t2215985868 * L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_5();
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< EventHandler_1_t2215985868 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_0, L_5);
		RuntimeObject* L_6 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t908338235 * L_7 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		G_B4_0 = L_6;
		if (L_7)
		{
			G_B5_0 = L_6;
			goto IL_0054;
		}
	}
	{
		intptr_t L_8 = (intptr_t)Advertisement_U3CInitializeU3Em__1_m2109031916_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_9 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_9, NULL, L_8, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_6(L_9);
		G_B5_0 = G_B4_0;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		EventHandler_1_t908338235 * L_10 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_6();
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B5_0, L_10);
		MetaData_t2274729001 * L_11 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_11, _stringLiteral2258625258, /*hidden argument*/NULL);
		V_0 = L_11;
		MetaData_t2274729001 * L_12 = V_0;
		NullCheck(L_12);
		MetaData_Set_m2920014032(L_12, _stringLiteral62725243, _stringLiteral1947076759, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_13 = V_0;
		String_t* L_14 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		MetaData_Set_m2920014032(L_13, _stringLiteral1902401671, L_14, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_15 = V_0;
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_16 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_16, _stringLiteral4032983950, /*hidden argument*/NULL);
		V_1 = L_16;
		MetaData_t2274729001 * L_17 = V_1;
		NullCheck(L_17);
		MetaData_Set_m2920014032(L_17, _stringLiteral62725243, _stringLiteral2694997814, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_18 = V_1;
		String_t* L_19 = Advertisement_get_version_m3333841984(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		MetaData_Set_m2920014032(L_18, _stringLiteral1902401671, L_19, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_20 = V_1;
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		RuntimeObject* L_21 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_22 = ___gameId0;
		bool L_23 = ___testMode1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(13 /* System.Void UnityEngine.Advertisements.IPlatform::Initialize(System.String,System.Boolean) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_21, L_22, L_23);
	}

IL_00cc:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m2792558112 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m2792558112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		bool L_0 = Advertisement_IsReady_m2166462196(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m2166462196 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_IsReady_m2166462196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(14 /* System.Boolean UnityEngine.Advertisements.IPlatform::IsReady(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState()
extern "C" IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m2232065044 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m2232065044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		int32_t L_0 = Advertisement_GetPlacementState_m4001863134(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Advertisement::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Advertisement_GetPlacementState_m4001863134 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_GetPlacementState_m4001863134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_1 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(15 /* UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.IPlatform::GetPlacementState(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Show_m2619871676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m2619871676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, (String_t*)NULL, (ShowOptions_t990845000 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(UnityEngine.Advertisements.ShowOptions)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Show_m53580060 (RuntimeObject * __this /* static, unused */, ShowOptions_t990845000 * ___showOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m53580060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShowOptions_t990845000 * L_0 = ___showOptions0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, (String_t*)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Show_m663301454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m663301454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_Show_m1413788125(NULL /*static, unused*/, L_0, (ShowOptions_t990845000 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_Show_m1413788125 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, ShowOptions_t990845000 * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_Show_m1413788125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ec__AnonStorey0_t3170924441 * V_0 = NULL;
	U3CShowU3Ec__AnonStorey1_t3170924442 * V_1 = NULL;
	MetaData_t2274729001 * V_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_0 = (U3CShowU3Ec__AnonStorey0_t3170924441 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey0_t3170924441_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey0__ctor_m2448096591(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_1 = V_0;
		ShowOptions_t990845000 * L_2 = ___showOptions1;
		NullCheck(L_1);
		L_1->set_showOptions_0(L_2);
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_3 = V_0;
		NullCheck(L_3);
		ShowOptions_t990845000 * L_4 = L_3->get_showOptions_0();
		if (!L_4)
		{
			goto IL_009a;
		}
	}
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_5 = V_0;
		NullCheck(L_5);
		ShowOptions_t990845000 * L_6 = L_5->get_showOptions_0();
		NullCheck(L_6);
		Action_1_t3243021218 * L_7 = ShowOptions_get_resultCallback_m2710569767(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_8 = (U3CShowU3Ec__AnonStorey1_t3170924442 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey1_t3170924442_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey1__ctor_m2571500879(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_9 = V_1;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU240_1(L_10);
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_finishHandler_0((EventHandler_1_t908338235 *)NULL);
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_12 = V_1;
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_13 = V_1;
		intptr_t L_14 = (intptr_t)U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_15 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_15, L_13, L_14, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->set_finishHandler_0(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		U3CShowU3Ec__AnonStorey1_t3170924442 * L_17 = V_1;
		NullCheck(L_17);
		EventHandler_1_t908338235 * L_18 = L_17->get_finishHandler_0();
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_16, L_18);
	}

IL_005e:
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_19 = V_0;
		NullCheck(L_19);
		ShowOptions_t990845000 * L_20 = L_19->get_showOptions_0();
		NullCheck(L_20);
		String_t* L_21 = ShowOptions_get_gamerSid_m2724807180(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		MetaData_t2274729001 * L_23 = (MetaData_t2274729001 *)il2cpp_codegen_object_new(MetaData_t2274729001_il2cpp_TypeInfo_var);
		MetaData__ctor_m191542684(L_23, _stringLiteral2261821926, /*hidden argument*/NULL);
		V_2 = L_23;
		MetaData_t2274729001 * L_24 = V_2;
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_25 = V_0;
		NullCheck(L_25);
		ShowOptions_t990845000 * L_26 = L_25->get_showOptions_0();
		NullCheck(L_26);
		String_t* L_27 = ShowOptions_get_gamerSid_m2724807180(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		MetaData_Set_m2920014032(L_24, _stringLiteral4028036860, L_27, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_SetMetaData_m3821393482(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		String_t* L_30 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		G_B6_0 = L_29;
		if (!L_31)
		{
			G_B7_0 = L_29;
			goto IL_00b0;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_00b1;
	}

IL_00b0:
	{
		String_t* L_32 = ___placementId0;
		G_B8_0 = L_32;
		G_B8_1 = G_B7_0;
	}

IL_00b1:
	{
		NullCheck(G_B8_1);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void UnityEngine.Advertisements.IPlatform::Show(System.String) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, G_B8_1, G_B8_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_SetMetaData_m3821393482 (RuntimeObject * __this /* static, unused */, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_SetMetaData_m3821393482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		MetaData_t2274729001 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t2274729001 * >::Invoke(17 /* System.Void UnityEngine.Advertisements.IPlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Advertisement__cctor_m2698673428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement__cctor_m2698673428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		bool L_0 = Debug_get_isDebugBuild_m1389897688(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((int32_t)15);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 7;
	}

IL_0012:
	{
		((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->set_s_DebugLevel_4(G_B3_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__0(System.Object,UnityEngine.Advertisements.StartEventArgs)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_U3CInitializeU3Em__0_m2484897031 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, StartEventArgs_t4291826435 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__0_m2484897031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m1653892022(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::<Initialize>m__1(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C" IL2CPP_METHOD_ATTR void Advertisement_U3CInitializeU3Em__1_m2109031916 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Advertisement_U3CInitializeU3Em__1_m2109031916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		Advertisement_set_isShowing_m1653892022(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_m2448096591 (U3CShowU3Ec__AnonStorey0_t3170924441 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1__ctor_m2571500879 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement/<Show>c__AnonStorey1::<>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C" IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190 (U3CShowU3Ec__AnonStorey1_t3170924442 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowU3Ec__AnonStorey1_U3CU3Em__0_m1498981190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowU3Ec__AnonStorey0_t3170924441 * L_0 = __this->get_U3CU3Ef__refU240_1();
		NullCheck(L_0);
		ShowOptions_t990845000 * L_1 = L_0->get_showOptions_0();
		NullCheck(L_1);
		Action_1_t3243021218 * L_2 = ShowOptions_get_resultCallback_m2710569767(L_1, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_3 = ___e1;
		NullCheck(L_3);
		int32_t L_4 = FinishEventArgs_get_showResult_m2484985128(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Action_1_Invoke_m860665472(L_2, L_4, /*hidden argument*/Action_1_Invoke_m860665472_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t842671397_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Advertisement_t842671397_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_t842671397_il2cpp_TypeInfo_var))->get_s_Platform_1();
		EventHandler_1_t908338235 * L_6 = __this->get_finishHandler_0();
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_t908338235 * >::Invoke(5 /* System.Void UnityEngine.Advertisements.IPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>) */, IPlatform_t2298261414_il2cpp_TypeInfo_var, L_5, L_6);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.Advertisements.Android.Platform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3233182567 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3233182567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t32045322 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		AndroidJavaProxy__ctor_m545570009(__this, _stringLiteral1157834939, /*hidden argument*/NULL);
		AndroidJavaClass_t32045322 * L_0 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_0, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_0 = L_0;
		AndroidJavaClass_t32045322 * L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m100625750(L_1, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m100625750_RuntimeMethod_var);
		__this->set_m_CurrentActivity_0(L_2);
		AndroidJavaClass_t32045322 * L_3 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_3, _stringLiteral3217210809, /*hidden argument*/NULL);
		__this->set_m_UnityAds_1(L_3);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, _stringLiteral2428876507, /*hidden argument*/NULL);
		V_2 = L_4;
		GameObject_t1113636619 * L_5 = V_2;
		NullCheck(L_5);
		Object_set_hideFlags_m1648752846(L_5, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_2;
		V_1 = L_6;
		GameObject_t1113636619 * L_7 = V_1;
		NullCheck(L_7);
		CallbackExecutor_t363496179 * L_8 = GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972(L_7, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var);
		__this->set_m_CallbackExecutor_2(L_8);
		GameObject_t1113636619 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_onUnityAdsReady_m1835805958 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsReady_m1835805958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * V_0 = NULL;
	{
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_0 = (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 *)il2cpp_codegen_object_new(U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815_il2cpp_TypeInfo_var);
		U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_4 = V_0;
		EventHandler_1_t2768214265 * L_5 = __this->get_OnReady_3();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2768214265 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = __this->get_m_CallbackExecutor_2();
		U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsStart(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_onUnityAdsStart_m2863714750 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsStart_m2863714750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * V_0 = NULL;
	{
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_0 = (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 *)il2cpp_codegen_object_new(U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353_il2cpp_TypeInfo_var);
		U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_4 = V_0;
		EventHandler_1_t2215985868 * L_5 = __this->get_OnStart_4();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2215985868 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = __this->get_m_CallbackExecutor_2();
		U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsFinish(System.String,UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR void Platform_onUnityAdsFinish_m1351724442 (Platform_t1698302846 * __this, String_t* ___placementId0, AndroidJavaObject_t4131667876 * ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsFinish_m1351724442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * V_0 = NULL;
	U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * V_1 = NULL;
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_0 = (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 *)il2cpp_codegen_object_new(U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596_il2cpp_TypeInfo_var);
		U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_4 = V_0;
		EventHandler_1_t908338235 * L_5 = __this->get_OnFinish_5();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t908338235 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_8 = (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 *)il2cpp_codegen_object_new(U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732_il2cpp_TypeInfo_var);
		U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_9 = V_1;
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU242_1(L_10);
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_11 = V_1;
		AndroidJavaObject_t4131667876 * L_12 = ___rawShowResult1;
		ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_12);
		int32_t L_14 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_12, _stringLiteral3378743801, L_13, /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_showResult_0(L_14);
		CallbackExecutor_t363496179 * L_15 = __this->get_m_CallbackExecutor_2();
		U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * L_16 = V_1;
		intptr_t L_17 = (intptr_t)U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_RuntimeMethod_var;
		Action_1_t535963774 * L_18 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_18, L_16, L_17, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_15);
		CallbackExecutor_Post_m2417625912(L_15, L_18, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::onUnityAdsError(UnityEngine.AndroidJavaObject,System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_onUnityAdsError_m2818265370 (Platform_t1698302846 * __this, AndroidJavaObject_t4131667876 * ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_onUnityAdsError_m2818265370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * V_0 = NULL;
	U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * V_1 = NULL;
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_0 = (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 *)il2cpp_codegen_object_new(U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180_il2cpp_TypeInfo_var);
		U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_1 = V_0;
		String_t* L_2 = ___message1;
		NullCheck(L_1);
		L_1->set_message_1(L_2);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_4 = V_0;
		EventHandler_1_t177306446 * L_5 = __this->get_OnError_6();
		NullCheck(L_4);
		L_4->set_handler_0(L_5);
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t177306446 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_8 = (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 *)il2cpp_codegen_object_new(U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535_il2cpp_TypeInfo_var);
		U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_9 = V_1;
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU244_1(L_10);
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_11 = V_1;
		AndroidJavaObject_t4131667876 * L_12 = ___rawError0;
		ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_12);
		int32_t L_14 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_12, _stringLiteral3378743801, L_13, /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_error_0((((int64_t)((int64_t)L_14))));
		CallbackExecutor_t363496179 * L_15 = __this->get_m_CallbackExecutor_2();
		U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * L_16 = V_1;
		intptr_t L_17 = (intptr_t)U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_RuntimeMethod_var;
		Action_1_t535963774 * L_18 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_18, L_16, L_17, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_15);
		CallbackExecutor_Post_m2417625912(L_15, L_18, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnReady_m3299334683 (Platform_t1698302846 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnReady_m3299334683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_3();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>((EventHandler_1_t2768214265 **)L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnReady_m644170545 (Platform_t1698302846 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnReady_m644170545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_3();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>((EventHandler_1_t2768214265 **)L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnStart_m996194638 (Platform_t1698302846 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m996194638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m2706477467 (Platform_t1698302846 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m2706477467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m3107184672 (Platform_t1698302846 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m3107184672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_m2870282854 (Platform_t1698302846 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m2870282854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnError_m3811019260 (Platform_t1698302846 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnError_m3811019260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_6();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>((EventHandler_1_t177306446 **)L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnError_m1044860335 (Platform_t1698302846 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnError_m1044860335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_6();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>((EventHandler_1_t177306446 **)L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m4196749938 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_isInitialized_m4196749938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral1263578497, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isSupported_m3096644395 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_isSupported_m3096644395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral930268361, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.Android.Platform::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_get_version_m2863392885 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m2863392885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_2 = AndroidJavaObject_CallStatic_TisString_t_m2571575926(L_0, _stringLiteral4068039089, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m2571575926_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::get_debugMode()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m1274978797 (Platform_t1698302846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_debugMode_m1274978797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_0, _stringLiteral3735224595, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::set_debugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_set_debugMode_m1126448795 (Platform_t1698302846 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_set_debugMode_m1126448795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		bool L_3 = ___value0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral3735244631, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_Initialize_m82924387 (Platform_t1698302846 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_m82924387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t32045322 * L_0 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		AndroidJavaObject_t4131667876 * L_3 = __this->get_m_CurrentActivity_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		String_t* L_5 = ___gameId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)__this);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		bool L_8 = ___testMode1;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral2540211304, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Android.Platform::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_IsReady_m1225029571 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m1225029571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		bool L_3 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_1, _stringLiteral3486120287, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		return L_3;
	}

IL_001d:
	{
		AndroidJavaClass_t32045322 * L_4 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = ___placementId0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		bool L_8 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500(L_4, _stringLiteral3486120287, L_6, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m1100851500_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Android.Platform::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_m57946683 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementState_m57946683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760(L_1, _stringLiteral2998687031, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_003d;
	}

IL_0022:
	{
		AndroidJavaClass_t32045322 * L_4 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = ___placementId0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		AndroidJavaObject_t4131667876 * L_8 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760(L_4, _stringLiteral2998687031, L_6, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t4131667876_m4065164760_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_003d:
	{
		AndroidJavaObject_t4131667876 * L_9 = V_0;
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_9);
		int32_t L_11 = AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686(L_9, _stringLiteral3378743801, L_10, /*hidden argument*/AndroidJavaObject_Call_TisInt32_t2950945753_m3061355686_RuntimeMethod_var);
		return (int32_t)(L_11);
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_Show_m1063852283 (Platform_t1698302846 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_m1063852283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		AndroidJavaObject_t4131667876 * L_4 = __this->get_m_CurrentActivity_0();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_m2922144688(L_1, _stringLiteral3902473660, L_3, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_002a:
	{
		AndroidJavaClass_t32045322 * L_5 = __this->get_m_UnityAds_1();
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		AndroidJavaObject_t4131667876 * L_8 = __this->get_m_CurrentActivity_0();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = ___placementId0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_m2922144688(L_5, _stringLiteral3902473660, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void Platform_SetMetaData_m3645297404 (Platform_t1698302846 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_SetMetaData_m3645297404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		AndroidJavaObject_t4131667876 * L_2 = __this->get_m_CurrentActivity_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t4131667876 * L_3 = (AndroidJavaObject_t4131667876 *)il2cpp_codegen_object_new(AndroidJavaObject_t4131667876_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m3828648572(L_3, _stringLiteral3894938408, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		AndroidJavaObject_t4131667876 * L_4 = V_0;
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		MetaData_t2274729001 * L_7 = ___metaData0;
		NullCheck(L_7);
		String_t* L_8 = MetaData_get_category_m4241298320(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_Call_m1449555179(L_4, _stringLiteral2143220806, L_6, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_9 = ___metaData0;
		NullCheck(L_9);
		RuntimeObject* L_10 = MetaData_get_Values_m2805296889(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0045:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			KeyValuePair_2_t968067334  L_13 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_12);
			V_1 = L_13;
			AndroidJavaObject_t4131667876 * L_14 = V_0;
			ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t2843939325* L_16 = L_15;
			String_t* L_17 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_t2843939325* L_18 = L_16;
			RuntimeObject * L_19 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			NullCheck(L_14);
			AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508(L_14, _stringLiteral2553217811, L_18, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t97287965_m2984583508_RuntimeMethod_var);
		}

IL_0072:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0045;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008f:
	{
		AndroidJavaObject_t4131667876 * L_24 = V_0;
		ObjectU5BU5D_t2843939325* L_25 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_24);
		AndroidJavaObject_Call_m1449555179(L_24, _stringLiteral399103237, L_25, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsErrorU3Ec__AnonStorey4__ctor_m2383325633 (U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsErrorU3Ec__AnonStorey5__ctor_m2454694337 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsError>c__AnonStorey5::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927 (U3ConUnityAdsErrorU3Ec__AnonStorey5_t3709914535 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsErrorU3Ec__AnonStorey5_U3CU3Em__0_m1873462927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_0 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_0);
		EventHandler_1_t177306446 * L_1 = L_0->get_handler_0();
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_2 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_2);
		Platform_t1698302846 * L_3 = L_2->get_U24this_2();
		int64_t L_4 = __this->get_error_0();
		U3ConUnityAdsErrorU3Ec__AnonStorey4_t981031180 * L_5 = __this->get_U3CU3Ef__refU244_1();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_message_1();
		ErrorEventArgs_t2253147013 * L_7 = (ErrorEventArgs_t2253147013 *)il2cpp_codegen_object_new(ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m2417395018(L_7, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m1199075846(L_1, L_3, L_7, /*hidden argument*/EventHandler_1_Invoke_m1199075846_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsFinishU3Ec__AnonStorey2__ctor_m3699482386 (U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsFinishU3Ec__AnonStorey3__ctor_m818981741 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsFinish>c__AnonStorey3::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025 (U3ConUnityAdsFinishU3Ec__AnonStorey3_t2653194732 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsFinishU3Ec__AnonStorey3_U3CU3Em__0_m2379100025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_0 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_0);
		EventHandler_1_t908338235 * L_1 = L_0->get_handler_0();
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_2 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_2);
		Platform_t1698302846 * L_3 = L_2->get_U24this_2();
		U3ConUnityAdsFinishU3Ec__AnonStorey2_t696879596 * L_4 = __this->get_U3CU3Ef__refU242_1();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_placementId_1();
		int32_t L_6 = __this->get_showResult_0();
		FinishEventArgs_t2984178802 * L_7 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m3162226611(L_1, L_3, L_7, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsReadyU3Ec__AnonStorey0__ctor_m2531656002 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsReady>c__AnonStorey0::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987 (U3ConUnityAdsReadyU3Ec__AnonStorey0_t2484343815 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m2531335987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_handler_0();
		Platform_t1698302846 * L_1 = __this->get_U24this_2();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_t549087536 * L_3 = (ReadyEventArgs_t549087536 *)il2cpp_codegen_object_new(ReadyEventArgs_t549087536_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m1307451034(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m743178406(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m743178406_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsStartU3Ec__AnonStorey1__ctor_m1282976937 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283 (U3ConUnityAdsStartU3Ec__AnonStorey1_t2789353 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3ConUnityAdsStartU3Ec__AnonStorey1_U3CU3Em__0_m3745486283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_handler_0();
		Platform_t1698302846 * L_1 = __this->get_U24this_2();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t4291826435 * L_3 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1200448648(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.CallbackExecutor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CallbackExecutor__ctor_m543356810 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor__ctor_m543356810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t382223268 * L_0 = (Queue_1_t382223268 *)il2cpp_codegen_object_new(Queue_1_t382223268_il2cpp_TypeInfo_var);
		Queue_1__ctor_m401901252(L_0, /*hidden argument*/Queue_1__ctor_m401901252_RuntimeMethod_var);
		__this->set_s_Queue_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Post(System.Action`1<UnityEngine.Advertisements.CallbackExecutor>)
extern "C" IL2CPP_METHOD_ATTR void CallbackExecutor_Post_m2417625912 (CallbackExecutor_t363496179 * __this, Action_1_t535963774 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Post_m2417625912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_t382223268 * L_2 = __this->get_s_Queue_4();
		Action_1_t535963774 * L_3 = ___action0;
		NullCheck(L_2);
		Queue_1_Enqueue_m3882925169(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m3882925169_RuntimeMethod_var);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.CallbackExecutor::Update()
extern "C" IL2CPP_METHOD_ATTR void CallbackExecutor_Update_m1131287156 (CallbackExecutor_t363496179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackExecutor_Update_m1131287156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t382223268 * L_0 = __this->get_s_Queue_4();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0012:
		{
			Queue_1_t382223268 * L_2 = __this->get_s_Queue_4();
			NullCheck(L_2);
			Action_1_t535963774 * L_3 = Queue_1_Dequeue_m2377473102(L_2, /*hidden argument*/Queue_1_Dequeue_m2377473102_RuntimeMethod_var);
			NullCheck(L_3);
			Action_1_Invoke_m345301731(L_3, __this, /*hidden argument*/Action_1_Invoke_m345301731_RuntimeMethod_var);
		}

IL_0023:
		{
			Queue_1_t382223268 * L_4 = __this->get_s_Queue_4();
			NullCheck(L_4);
			int32_t L_5 = Queue_1_get_Count_m2643849061(L_4, /*hidden argument*/Queue_1_get_Count_m2643849061_RuntimeMethod_var);
			if ((((int32_t)L_5) > ((int32_t)0)))
			{
				goto IL_0012;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
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
// System.Void UnityEngine.Advertisements.Editor.Configuration::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Configuration__ctor_m2049560937 (Configuration_t1722493896 * __this, String_t* ___configurationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Configuration__ctor_m2049560937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___configurationResponse0;
		RuntimeObject * L_1 = SimpleJson_DeserializeObject_m1425654463(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_2, _stringLiteral646178060);
		Configuration_set_enabled_m3944276849(__this, ((*(bool*)((bool*)UnBox(L_3, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Dictionary_2_t4177511560 * L_4 = (Dictionary_2_t4177511560 *)il2cpp_codegen_object_new(Dictionary_2_t4177511560_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2310724936(L_4, /*hidden argument*/Dictionary_2__ctor_m2310724936_RuntimeMethod_var);
		Configuration_set_placements_m4002258735(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_5, _stringLiteral3236072574);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_t600458651_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t2059959053_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IList_1_t600458651_il2cpp_TypeInfo_var)));
		V_2 = L_7;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a7;
		}

IL_004e:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject * L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t3512676632_il2cpp_TypeInfo_var, L_8);
			V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_10, _stringLiteral3454449607);
			V_3 = ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_12, _stringLiteral823543098);
			V_4 = ((*(bool*)((bool*)UnBox(L_13, Boolean_t97287965_il2cpp_TypeInfo_var))));
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_14, _stringLiteral1948332219);
			if (!((*(bool*)((bool*)UnBox(L_15, Boolean_t97287965_il2cpp_TypeInfo_var)))))
			{
				goto IL_0099;
			}
		}

IL_0092:
		{
			String_t* L_16 = V_3;
			Configuration_set_defaultPlacement_m3028665897(__this, L_16, /*hidden argument*/NULL);
		}

IL_0099:
		{
			Dictionary_2_t4177511560 * L_17 = Configuration_get_placements_m1853086915(__this, /*hidden argument*/NULL);
			String_t* L_18 = V_3;
			bool L_19 = V_4;
			NullCheck(L_17);
			Dictionary_2_Add_m95414296(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m95414296_RuntimeMethod_var);
		}

IL_00a7:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_004e;
			}
		}

IL_00b2:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_00c3;
			}
		}

IL_00bd:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_00c3:
		{
			IL2CPP_END_FINALLY(183)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Configuration::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Configuration_get_enabled_m2999626715 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CenabledU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_enabled_m3944276849 (Configuration_t1722493896 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Editor.Configuration::get_defaultPlacement()
extern "C" IL2CPP_METHOD_ATTR String_t* Configuration_get_defaultPlacement_m3927249128 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CdefaultPlacementU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_defaultPlacement(System.String)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_defaultPlacement_m3028665897 (Configuration_t1722493896 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdefaultPlacementU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> UnityEngine.Advertisements.Editor.Configuration::get_placements()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t4177511560 * Configuration_get_placements_m1853086915 (Configuration_t1722493896 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4177511560 * L_0 = __this->get_U3CplacementsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Configuration::set_placements(System.Collections.Generic.Dictionary`2<System.String,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void Configuration_set_placements_m4002258735 (Configuration_t1722493896 * __this, Dictionary_2_t4177511560 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t4177511560 * L_0 = ___value0;
		__this->set_U3CplacementsU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.Editor.Placeholder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Placeholder__ctor_m196381996 (Placeholder_t2906495853 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::TextureFromFile(System.String)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Placeholder_TextureFromFile_m291359667 (RuntimeObject * __this /* static, unused */, String_t* ___filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_TextureFromFile_m291359667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		String_t* L_2 = ___filePath0;
		ByteU5BU5D_t4116647657* L_3 = File_ReadAllBytes_m1435775076(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_add_OnFinish_m3075927457 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_add_OnFinish_m3075927457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_remove_OnFinish_m2422778168 (Placeholder_t2906495853 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_remove_OnFinish_m2422778168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_9();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_Load_m1103501462 (Placeholder_t2906495853 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_Load_m1103501462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___extensionPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, _stringLiteral3580575796, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_2 = Placeholder_TextureFromFile_m291359667(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_m_LandscapeTexture_4(L_2);
		String_t* L_3 = ___extensionPath0;
		String_t* L_4 = Path_Combine_m3389272516(NULL /*static, unused*/, L_3, _stringLiteral3463586438, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = Placeholder_TextureFromFile_m291359667(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_m_PortraitTexture_5(L_5);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::Show(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_Show_m277657847 (Placeholder_t2906495853 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		__this->set_m_PlacementId_7(L_0);
		bool L_1 = ___allowSkip1;
		__this->set_m_AllowSkip_8(L_1);
		__this->set_m_Showing_6((bool)1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void Placeholder_OnGUI_m2560125389 (Placeholder_t2906495853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_OnGUI_m2560125389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Showing_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)Placeholder_ModalWindowFunction_m1854716751_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_ModalWindow_m2334426705(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Placeholder::ModalWindowFunction(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Placeholder_ModalWindowFunction_m1854716751 (Placeholder_t2906495853 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_ModalWindowFunction_m1854716751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	Rect_t2360479859  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Rect_t2360479859  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Texture2D_t3840446185 * G_B3_0 = NULL;
	Rect_t2360479859  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m2614021312((&L_2), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			G_B2_0 = L_2;
			goto IL_0035;
		}
	}
	{
		Texture2D_t3840446185 * L_5 = __this->get_m_LandscapeTexture_4();
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0035:
	{
		Texture2D_t3840446185 * L_6 = __this->get_m_PortraitTexture_5();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m2312292152(NULL /*static, unused*/, G_B3_1, G_B3_0, 1, /*hidden argument*/NULL);
		bool L_7 = __this->get_m_AllowSkip_8();
		if (!L_7)
		{
			goto IL_009b;
		}
	}
	{
		Rect_t2360479859  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m2614021312((&L_8), (20.0f), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_9 = GUI_Button_m1518979886(NULL /*static, unused*/, L_8, _stringLiteral3899542074, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		__this->set_m_Showing_6((bool)0);
		EventHandler_1_t908338235 * L_10 = __this->get_OnFinish_9();
		V_0 = L_10;
		EventHandler_1_t908338235 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		EventHandler_1_t908338235 * L_12 = V_0;
		String_t* L_13 = __this->get_m_PlacementId_7();
		FinishEventArgs_t2984178802 * L_14 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_14, L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_12);
		EventHandler_1_Invoke_m3162226611(L_12, __this, L_14, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_009b:
	{
		int32_t L_15 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m2614021312((&L_16), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)170)))))), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_17 = GUI_Button_m1518979886(NULL /*static, unused*/, L_16, _stringLiteral3483484711, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_m_Showing_6((bool)0);
		EventHandler_1_t908338235 * L_18 = __this->get_OnFinish_9();
		V_1 = L_18;
		EventHandler_1_t908338235 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		EventHandler_1_t908338235 * L_20 = V_1;
		String_t* L_21 = __this->get_m_PlacementId_7();
		FinishEventArgs_t2984178802 * L_22 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_22, L_21, 2, /*hidden argument*/NULL);
		NullCheck(L_20);
		EventHandler_1_Invoke_m3162226611(L_20, __this, L_22, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_00f1:
	{
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
// System.Void UnityEngine.Advertisements.Editor.Platform::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3929159556 (Platform_t2756657262 * __this, String_t* ___extensionPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3929159556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral645957545, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t1113636619 * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = V_1;
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Placeholder_t2906495853 * L_4 = GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109(L_3, /*hidden argument*/GameObject_AddComponent_TisPlaceholder_t2906495853_m4080008109_RuntimeMethod_var);
		__this->set_m_Placeholder_3(L_4);
		Placeholder_t2906495853 * L_5 = __this->get_m_Placeholder_3();
		intptr_t L_6 = (intptr_t)Platform_U3CPlatformU3Em__0_m2859748733_RuntimeMethod_var;
		EventHandler_1_t908338235 * L_7 = (EventHandler_1_t908338235 *)il2cpp_codegen_object_new(EventHandler_1_t908338235_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1760330498(L_7, __this, L_6, /*hidden argument*/EventHandler_1__ctor_m1760330498_RuntimeMethod_var);
		NullCheck(L_5);
		Placeholder_add_OnFinish_m3075927457(L_5, L_7, /*hidden argument*/NULL);
		Placeholder_t2906495853 * L_8 = __this->get_m_Placeholder_3();
		String_t* L_9 = ___extensionPath0;
		NullCheck(L_8);
		Placeholder_Load_m1103501462(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnReady_m2188949100 (Platform_t2756657262 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnReady_m2059499402 (Platform_t2756657262 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnStart_m534126228 (Platform_t2756657262 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m534126228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m392217845 (Platform_t2756657262 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m392217845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_4();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m2427335122 (Platform_t2756657262 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m2427335122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_m2807117244 (Platform_t2756657262 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m2807117244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_5();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnError_m3126490155 (Platform_t2756657262 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnError_m306628686 (Platform_t2756657262 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m472391085 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	{
		Configuration_t1722493896 * L_0 = __this->get_m_Configuration_2();
		return (bool)((((int32_t)((((RuntimeObject*)(Configuration_t1722493896 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isSupported_m3110485577 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Editor.Platform::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_get_version_m2737893346 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_m2737893346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3040706120;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::get_debugMode()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m2568032682 (Platform_t2756657262 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_DebugMode_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::set_debugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_set_debugMode_m1278356037 (Platform_t2756657262 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_DebugMode_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_Initialize_m1938088921 (Platform_t2756657262 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_m1938088921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t2183256279 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t2183256279 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t2183256279_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_1 = V_0;
		String_t* L_2 = ___gameId0;
		NullCheck(L_1);
		L_1->set_gameId_1(L_2);
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1223721476);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1223721476);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_gameId_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3450517380);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		bool L_11 = ___testMode1;
		bool L_12 = L_11;
		RuntimeObject * L_13 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3451893639);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3451893639);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_16 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t1281789340* L_17 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t2756657262_il2cpp_TypeInfo_var);
		String_t* L_18 = ((Platform_t2756657262_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t2756657262_il2cpp_TypeInfo_var))->get_s_BaseUrl_0();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		StringU5BU5D_t1281789340* L_19 = L_17;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_gameId_1();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_t1281789340* L_22 = L_19;
		StringU5BU5D_t1281789340* L_23 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t1281789340* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral637845977);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral637845977);
		StringU5BU5D_t1281789340* L_25 = L_24;
		String_t* L_26 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_27 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3133685381, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_t1281789340* L_29 = L_25;
		String_t* L_30 = Platform_get_version_m2737893346(__this, /*hidden argument*/NULL);
		String_t* L_31 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		String_t* L_32 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral945277909, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
		String_t* L_33 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614522, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_33);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		String_t* L_34 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614529, L_22, /*hidden argument*/NULL);
		V_1 = L_34;
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_35 = V_0;
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1939381076_il2cpp_TypeInfo_var);
		WebRequest_t1939381076 * L_37 = WebRequest_Create_m1521009289(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		L_35->set_request_0(L_37);
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_38 = V_0;
		NullCheck(L_38);
		WebRequest_t1939381076 * L_39 = L_38->get_request_0();
		U3CInitializeU3Ec__AnonStorey0_t2183256279 * L_40 = V_0;
		intptr_t L_41 = (intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_42 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_42, L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtFuncInvoker2< RuntimeObject*, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(15 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_39, L_42, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Editor.Platform::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_IsReady_m1007373777 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m1007373777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = ___placementId0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		bool L_2 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Configuration_t1722493896 * L_3 = __this->get_m_Configuration_2();
		NullCheck(L_3);
		Dictionary_2_t4177511560 * L_4 = Configuration_get_placements_m1853086915(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___placementId0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m1412659484(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m1412659484_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 0;
	}

IL_002c:
	{
		return (bool)G_B5_0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.Editor.Platform::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_m359299365 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_IsReady_m1007373777(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000e:
	{
		return (int32_t)(1);
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_Show_m2242650914 (Platform_t2756657262 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Show_m2242650914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		bool L_0 = Platform_get_isInitialized_m472391085(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___placementId0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Configuration_t1722493896 * L_2 = __this->get_m_Configuration_2();
		NullCheck(L_2);
		String_t* L_3 = Configuration_get_defaultPlacement_m3927249128(L_2, /*hidden argument*/NULL);
		___placementId0 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = ___placementId0;
		bool L_5 = Platform_IsReady_m1007373777(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		EventHandler_1_t2215985868 * L_6 = __this->get_OnStart_4();
		V_0 = L_6;
		EventHandler_1_t2215985868 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		EventHandler_1_t2215985868 * L_8 = V_0;
		String_t* L_9 = ___placementId0;
		StartEventArgs_t4291826435 * L_10 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		EventHandler_1_Invoke_m1200448648(L_8, __this, L_10, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
	}

IL_0044:
	{
		Placeholder_t2906495853 * L_11 = __this->get_m_Placeholder_3();
		String_t* L_12 = ___placementId0;
		Configuration_t1722493896 * L_13 = __this->get_m_Configuration_2();
		NullCheck(L_13);
		Dictionary_2_t4177511560 * L_14 = Configuration_get_placements_m1853086915(L_13, /*hidden argument*/NULL);
		String_t* L_15 = ___placementId0;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_get_Item_m3494146125(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m3494146125_RuntimeMethod_var);
		NullCheck(L_11);
		Placeholder_Show_m277657847(L_11, L_12, L_16, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0066:
	{
		EventHandler_1_t908338235 * L_17 = __this->get_OnFinish_5();
		V_1 = L_17;
		EventHandler_1_t908338235 * L_18 = V_1;
		if (!L_18)
		{
			goto IL_0081;
		}
	}
	{
		EventHandler_1_t908338235 * L_19 = V_1;
		String_t* L_20 = ___placementId0;
		FinishEventArgs_t2984178802 * L_21 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_21, L_20, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		EventHandler_1_Invoke_m3162226611(L_19, __this, L_21, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_0081:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void Platform_SetMetaData_m2723199929 (Platform_t2756657262 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__cctor_m2711454710 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_m2711454710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Platform_t2756657262_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t2756657262_il2cpp_TypeInfo_var))->set_s_BaseUrl_0(_stringLiteral3342921282);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform::<Platform>m__0(System.Object,UnityEngine.Advertisements.FinishEventArgs)
extern "C" IL2CPP_METHOD_ATTR void Platform_U3CPlatformU3Em__0_m2859748733 (Platform_t2756657262 * __this, RuntimeObject * ___sender0, FinishEventArgs_t2984178802 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_U3CPlatformU3Em__0_m2859748733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_5();
		V_0 = L_0;
		EventHandler_1_t908338235 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t908338235 * L_2 = V_0;
		RuntimeObject * L_3 = ___sender0;
		FinishEventArgs_t2984178802 * L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5 = FinishEventArgs_get_placementId_m3475944639(L_4, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_6 = ___e1;
		NullCheck(L_6);
		int32_t L_7 = FinishEventArgs_get_showResult_m2484985128(L_6, /*hidden argument*/NULL);
		FinishEventArgs_t2984178802 * L_8 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_8, L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3162226611(L_2, L_3, L_8, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_0025:
	{
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
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m3353071426 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::<>m__0(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495 (U3CInitializeU3Ec__AnonStorey0_t2183256279 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m3447091495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t229922639 * V_0 = NULL;
	StreamReader_t4009935899 * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		WebRequest_t1939381076 * L_0 = __this->get_request_0();
		RuntimeObject* L_1 = ___result0;
		NullCheck(L_0);
		WebResponse_t229922639 * L_2 = VirtFuncInvoker1< WebResponse_t229922639 *, RuntimeObject* >::Invoke(16 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
		V_0 = L_2;
		WebResponse_t229922639 * L_3 = V_0;
		NullCheck(L_3);
		Stream_t1273022909 * L_4 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(10 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_3);
		StreamReader_t4009935899 * L_5 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1047876681(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		StreamReader_t4009935899 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		V_2 = L_7;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			Platform_t2756657262 * L_8 = __this->get_U24this_2();
			String_t* L_9 = V_2;
			Configuration_t1722493896 * L_10 = (Configuration_t1722493896 *)il2cpp_codegen_object_new(Configuration_t1722493896_il2cpp_TypeInfo_var);
			Configuration__ctor_m2049560937(L_10, L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_m_Configuration_2(L_10);
			Platform_t2756657262 * L_11 = __this->get_U24this_2();
			NullCheck(L_11);
			Configuration_t1722493896 * L_12 = L_11->get_m_Configuration_2();
			NullCheck(L_12);
			bool L_13 = Configuration_get_enabled_m2999626715(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0060;
			}
		}

IL_0046:
		{
			String_t* L_14 = __this->get_gameId_1();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2170070431, L_14, _stringLiteral1332923527, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		}

IL_0060:
		{
			goto IL_008c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		String_t* L_16 = __this->get_gameId_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3541090105, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_18 = V_2;
		Debug_Log_m4051431634(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		Exception_t * L_19 = V_3;
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_008c;
	} // end catch (depth: 1)

IL_008c:
	{
		StreamReader_t4009935899 * L_20 = V_1;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_20);
		WebResponse_t229922639 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Net.WebResponse::Close() */, L_21);
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
// System.Void UnityEngine.Advertisements.ErrorEventArgs::.ctor(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m2417395018 (ErrorEventArgs_t2253147013 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventArgs__ctor_m2417395018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___error0;
		ErrorEventArgs_set_error_m4248800756(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		ErrorEventArgs_set_message_m3532469052(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 UnityEngine.Advertisements.ErrorEventArgs::get_error()
extern "C" IL2CPP_METHOD_ATTR int64_t ErrorEventArgs_get_error_m4212549059 (ErrorEventArgs_t2253147013 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CerrorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_error(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs_set_error_m4248800756 (ErrorEventArgs_t2253147013 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ErrorEventArgs::get_message()
extern "C" IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_message_m3554449995 (ErrorEventArgs_t2253147013 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CmessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ErrorEventArgs::set_message(System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventArgs_set_message_m3532469052 (ErrorEventArgs_t2253147013 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_m50835730 (FinishEventArgs_t2984178802 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinishEventArgs__ctor_m50835730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		FinishEventArgs_set_placementId_m452915092(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___showResult1;
		FinishEventArgs_set_showResult_m203134832(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.FinishEventArgs::get_placementId()
extern "C" IL2CPP_METHOD_ATTR String_t* FinishEventArgs_get_placementId_m3475944639 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs_set_placementId_m452915092 (FinishEventArgs_t2984178802 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.FinishEventArgs::get_showResult()
extern "C" IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m2484985128 (FinishEventArgs_t2984178802 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.FinishEventArgs::set_showResult(UnityEngine.Advertisements.ShowResult)
extern "C" IL2CPP_METHOD_ATTR void FinishEventArgs_set_showResult_m203134832 (FinishEventArgs_t2984178802 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void MetaData__ctor_m191542684 (MetaData_t2274729001 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData__ctor_m191542684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m855809970(L_0, /*hidden argument*/Dictionary_2__ctor_m855809970_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___category0;
		MetaData_set_category_m1755177233(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C" IL2CPP_METHOD_ATTR String_t* MetaData_get_category_m4241298320 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C" IL2CPP_METHOD_ATTR void MetaData_set_category_m1755177233 (MetaData_t2274729001 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void MetaData_Set_m2920014032 (MetaData_t2274729001 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Set_m2920014032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Object UnityEngine.Advertisements.MetaData::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MetaData_Get_m3626153543 (MetaData_t2274729001 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Get_m3626153543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MetaData_get_Values_m2805296889 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C" IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_m4186793159 (MetaData_t2274729001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = SimpleJson_SerializeObject_m1557049914(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.ReadyEventArgs::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ReadyEventArgs__ctor_m1307451034 (ReadyEventArgs_t549087536 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReadyEventArgs__ctor_m1307451034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		ReadyEventArgs_set_placementId_m818740610(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.ReadyEventArgs::get_placementId()
extern "C" IL2CPP_METHOD_ATTR String_t* ReadyEventArgs_get_placementId_m159588481 (ReadyEventArgs_t549087536 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ReadyEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ReadyEventArgs_set_placementId_m818740610 (ReadyEventArgs_t549087536 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.ShowOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ShowOptions__ctor_m2194205660 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
extern "C" IL2CPP_METHOD_ATTR Action_1_t3243021218 * ShowOptions_get_resultCallback_m2710569767 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		Action_1_t3243021218 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_resultCallback(System.Action`1<UnityEngine.Advertisements.ShowResult>)
extern "C" IL2CPP_METHOD_ATTR void ShowOptions_set_resultCallback_m3887508449 (ShowOptions_t990845000 * __this, Action_1_t3243021218 * ___value0, const RuntimeMethod* method)
{
	{
		Action_1_t3243021218 * L_0 = ___value0;
		__this->set_U3CresultCallbackU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
extern "C" IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m2724807180 (ShowOptions_t990845000 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.ShowOptions::set_gamerSid(System.String)
extern "C" IL2CPP_METHOD_ATTR void ShowOptions_set_gamerSid_m2518373442 (ShowOptions_t990845000 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CgamerSidU3Ek__BackingField_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.SimpleJson.JsonArray::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m2862279773 (JsonArray_t3985338818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray__ctor_m2862279773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(__this, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonArray::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonArray__ctor_m323727826 (JsonArray_t3985338818 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray__ctor_m323727826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m3947764094(__this, L_0, /*hidden argument*/List_1__ctor_m3947764094_RuntimeMethod_var);
		return;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.JsonArray::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonArray_ToString_m1915038716 (JsonArray_t3985338818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonArray_ToString_m1915038716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = SimpleJson_SerializeObject_m1557049914(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
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
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m3891241071 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject__ctor_m3891241071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m855809970(L_0, /*hidden argument*/Dictionary_2__ctor_m855809970_RuntimeMethod_var);
		__this->set__members_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::.ctor(System.Collections.Generic.IEqualityComparer`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void JsonObject__ctor_m4078194387 (JsonObject_t1327569318 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject__ctor_m4078194387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___comparer0;
		Dictionary_2_t2865362463 * L_1 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3920175150(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m3920175150_RuntimeMethod_var);
		__this->set__members_0(L_1);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.JsonObject::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_get_Item_m3245894296 (JsonObject_t1327569318 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = JsonObject_GetAtIndex_m2667387776(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.JsonObject::GetAtIndex(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_GetAtIndex_m2667387776 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___obj0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_GetAtIndex_m2667387776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1746845353, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, JsonObject_GetAtIndex_m2667387776_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_t3796219568_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, JsonObject_GetAtIndex_m2667387776_RuntimeMethod_var);
	}

IL_0028:
	{
		V_0 = 0;
		RuntimeObject* L_6 = ___obj0;
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0036:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			KeyValuePair_2_t968067334  L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_8);
			V_1 = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = L_10;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
			int32_t L_12 = ___index1;
			if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
			{
				goto IL_0055;
			}
		}

IL_0048:
		{
			RuntimeObject * L_13 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			V_3 = L_13;
			IL2CPP_LEAVE(0x74, FINALLY_0065);
		}

IL_0055:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0036;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0071;
			}
		}

IL_006b:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		return NULL;
	}

IL_0074:
	{
		RuntimeObject * L_18 = V_3;
		return L_18;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Add_m3872440787 (JsonObject_t1327569318 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_m3872440787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_Add_m1195623271(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m1195623271_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::ContainsKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_ContainsKey_m1727368843 (JsonObject_t1327569318 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_ContainsKey_m1727368843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3582166299(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3582166299_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.SimpleJson.JsonObject::get_Keys()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Keys_m3274395107 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Keys_m3274395107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		KeyCollection_t3055037934 * L_1 = Dictionary_2_get_Keys_m1150370094(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1150370094_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::Remove(System.String)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_Remove_m194222694 (JsonObject_t1327569318 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Remove_m194222694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_Remove_m1784025370(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m1784025370_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_TryGetValue_m1180475790 (JsonObject_t1327569318 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_TryGetValue_m1180475790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject ** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m107220533(L_0, L_1, (RuntimeObject **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m107220533_RuntimeMethod_var);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> UnityEngine.Advertisements.SimpleJson.JsonObject::get_Values()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Values_m495674565 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Values_m495674565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		ValueCollection_t286439485 * L_1 = Dictionary_2_get_Values_m1765249039(L_0, /*hidden argument*/Dictionary_2_get_Values_m1765249039_RuntimeMethod_var);
		return L_1;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.JsonObject::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonObject_get_Item_m721570366 (JsonObject_t1327569318 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Item_m721570366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m2791382321(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m2791382321_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_set_Item_m3669904913 (JsonObject_t1327569318 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_set_Item_m3669904913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m464101897(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m464101897_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Add_m366352540 (JsonObject_t1327569318 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Add_m366352540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
		RuntimeObject * L_2 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_Add_m1195623271(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m1195623271_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::Clear()
extern "C" IL2CPP_METHOD_ATTR void JsonObject_Clear_m523182586 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Clear_m523182586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m3222456405(L_0, /*hidden argument*/Dictionary_2_Clear_m3222456405_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_Contains_m3458256145 (JsonObject_t1327569318 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Contains_m3458256145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3582166299(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3582166299_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t2865362463 * L_3 = __this->get__members_0();
		String_t* L_4 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m2791382321(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m2791382321_RuntimeMethod_var);
		RuntimeObject * L_6 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JsonObject_CopyTo_m3543164959 (JsonObject_t1327569318 * __this, KeyValuePair_2U5BU5D_t1898447907* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_CopyTo_m3543164959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t1898447907* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, JsonObject_CopyTo_m3543164959_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = JsonObject_get_Count_m362114336(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = JsonObject_GetEnumerator_m2239729578(__this, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t968067334  L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t1898447907* L_6 = ___array0;
			int32_t L_7 = ___arrayIndex1;
			int32_t L_8 = L_7;
			___arrayIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			NullCheck(L_6);
			KeyValuePair_2_t968067334  L_9 = V_1;
			*(KeyValuePair_2_t968067334 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005d);
		}

IL_004d:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			if (!L_14)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		return;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.JsonObject::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m362114336 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_get_Count_m362114336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m1201568812(L_0, /*hidden argument*/Dictionary_2_get_Count_m1201568812_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_get_IsReadOnly_m3354987509 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" IL2CPP_METHOD_ATTR bool JsonObject_Remove_m1653245258 (JsonObject_t1327569318 * __this, KeyValuePair_2_t968067334  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_Remove_m1653245258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		String_t* L_1 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&___item0), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_Remove_m1784025370(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m1784025370_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> UnityEngine.Advertisements.SimpleJson.JsonObject::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m2239729578 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_GetEnumerator_m2239729578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_t524577942  L_1 = Dictionary_2_GetEnumerator_m821420568(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m821420568_RuntimeMethod_var);
		Enumerator_t524577942  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t524577942_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Advertisements.SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_System_Collections_IEnumerable_GetEnumerator_m3393416258 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonObject_System_Collections_IEnumerable_GetEnumerator_m3393416258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = __this->get__members_0();
		NullCheck(L_0);
		Enumerator_t524577942  L_1 = Dictionary_2_GetEnumerator_m821420568(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m821420568_RuntimeMethod_var);
		Enumerator_t524577942  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t524577942_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.JsonObject::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JsonObject_ToString_m152839407 (JsonObject_t1327569318 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m1557049914(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__ctor_m1974455660 (PocoJsonSerializerStrategy_t3624702326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__ctor_m1974455660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)GetVirtualMethodInfo(__this, 7);
		ThreadSafeDictionaryValueFactory_2_t2109106246 * L_1 = (ThreadSafeDictionaryValueFactory_2_t2109106246 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t2109106246_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m3064671815(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m3064671815_RuntimeMethod_var);
		ThreadSafeDictionary_2_t1172908052 * L_2 = (ThreadSafeDictionary_2_t1172908052 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t1172908052_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1062633995(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1062633995_RuntimeMethod_var);
		__this->set_ConstructorCache_0(L_2);
		intptr_t L_3 = (intptr_t)GetVirtualMethodInfo(__this, 8);
		ThreadSafeDictionaryValueFactory_2_t1170354448 * L_4 = (ThreadSafeDictionaryValueFactory_2_t1170354448 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t1170354448_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m2125044720(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m2125044720_RuntimeMethod_var);
		ThreadSafeDictionary_2_t234156254 * L_5 = (ThreadSafeDictionary_2_t234156254 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t234156254_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m975429584(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m975429584_RuntimeMethod_var);
		__this->set_GetCache_1(L_5);
		intptr_t L_6 = (intptr_t)GetVirtualMethodInfo(__this, 9);
		ThreadSafeDictionaryValueFactory_2_t2993261231 * L_7 = (ThreadSafeDictionaryValueFactory_2_t2993261231 *)il2cpp_codegen_object_new(ThreadSafeDictionaryValueFactory_2_t2993261231_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m4005509887(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m4005509887_RuntimeMethod_var);
		ThreadSafeDictionary_2_t2057063037 * L_8 = (ThreadSafeDictionary_2_t2057063037 *)il2cpp_codegen_object_new(ThreadSafeDictionary_2_t2057063037_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m464228881(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m464228881_RuntimeMethod_var);
		__this->set_SetCache_2(L_8);
		return;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m643442448 (PocoJsonSerializerStrategy_t3624702326 * __this, String_t* ___clrPropertyName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clrPropertyName0;
		return L_0;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m1684034988 (PocoJsonSerializerStrategy_t3624702326 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_ContructorDelegateFactory_m1684034988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	TypeU5BU5D_t3940880105* G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	{
		Type_t * L_0 = ___key0;
		Type_t * L_1 = ___key0;
		NullCheck(L_1);
		bool L_2 = Type_get_IsArray_m2591212821(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_3 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_ArrayConstructorParameterTypes_4();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_4 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ConstructorDelegate_t3127338789 * L_5 = ReflectionUtils_GetContructor_m198753871(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_GetterValueFactory_m3716839077 (PocoJsonSerializerStrategy_t3624702326 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_GetterValueFactory_m3716839077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3724735600 * L_0 = (Dictionary_2_t3724735600 *)il2cpp_codegen_object_new(Dictionary_2_t3724735600_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m501509644(L_0, /*hidden argument*/Dictionary_2__ctor_m501509644_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m1505565867(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t3962162136_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t1119912419_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m4169253972(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m2399864271(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m2180846589(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			GetDelegate_t3939479301 * L_19 = ReflectionUtils_GetGetMethod_m2084983952(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t3939479301 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t2188586991_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x80, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_007f;
			}
		}

IL_0079:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0080:
	{
		Type_t * L_24 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ReflectionUtils_GetFields_m1225489027(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t3161555474_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d2;
		}

IL_0092:
		{
			RuntimeObject* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t319305757_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = FieldInfo_get_IsStatic_m3482711189(L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00b3;
			}
		}

IL_00a7:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = FieldInfo_get_IsPublic_m3378038140(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_00d2;
		}

IL_00b8:
		{
			RuntimeObject* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			GetDelegate_t3939479301 * L_38 = ReflectionUtils_GetGetMethod_m4152947020(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t3939479301 * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t2188586991_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d2:
		{
			RuntimeObject* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0092;
			}
		}

IL_00de:
		{
			IL2CPP_LEAVE(0xF2, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_41 = V_5;
			if (!L_41)
			{
				goto IL_00f1;
			}
		}

IL_00ea:
		{
			RuntimeObject* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_42);
		}

IL_00f1:
		{
			IL2CPP_END_FINALLY(227)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xF2, IL_00f2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f2:
	{
		RuntimeObject* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>> UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PocoJsonSerializerStrategy_SetterValueFactory_m2866435791 (PocoJsonSerializerStrategy_t3624702326 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SetterValueFactory_m2866435791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1252675087 * L_0 = (Dictionary_2_t1252675087 *)il2cpp_codegen_object_new(Dictionary_2_t1252675087_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2587506542(L_0, /*hidden argument*/Dictionary_2__ctor_m2587506542_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ReflectionUtils_GetProperties_m1505565867(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t3962162136_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t1119912419_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m2586791962(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = MethodBase_get_IsStatic_m2399864271(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = MethodBase_get_IsPublic_m2180846589(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			RuntimeObject* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			SetDelegate_t920366853 * L_21 = ReflectionUtils_GetSetMethod_m1283009144(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t1467418788  L_22;
			memset(&L_22, 0, sizeof(L_22));
			KeyValuePair_2__ctor_m867700299((&L_22), L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m867700299_RuntimeMethod_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t1467418788  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t4011493774_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_2;
			if (!L_25)
			{
				goto IL_008a;
			}
		}

IL_0084:
		{
			RuntimeObject* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		Type_t * L_27 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ReflectionUtils_GetFields_m1225489027(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		RuntimeObject* L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t3161555474_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f5;
		}

IL_009d:
		{
			RuntimeObject* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t319305757_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = FieldInfo_get_IsInitOnly_m930369112(L_32, /*hidden argument*/NULL);
			if (L_33)
			{
				goto IL_00ca;
			}
		}

IL_00b2:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = FieldInfo_get_IsStatic_m3482711189(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00ca;
			}
		}

IL_00be:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = FieldInfo_get_IsPublic_m3378038140(L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_00cf;
			}
		}

IL_00ca:
		{
			goto IL_00f5;
		}

IL_00cf:
		{
			RuntimeObject* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
			SetDelegate_t920366853 * L_45 = ReflectionUtils_GetSetMethod_m2132891088(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t1467418788  L_46;
			memset(&L_46, 0, sizeof(L_46));
			KeyValuePair_2__ctor_m867700299((&L_46), L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m867700299_RuntimeMethod_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t1467418788  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t4011493774_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f5:
		{
			RuntimeObject* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009d;
			}
		}

IL_0101:
		{
			IL2CPP_LEAVE(0x115, FINALLY_0106);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0106;
	}

FINALLY_0106:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_5;
			if (!L_49)
			{
				goto IL_0114;
			}
		}

IL_010d:
		{
			RuntimeObject* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_50);
		}

IL_0114:
		{
			IL2CPP_END_FINALLY(262)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(262)
	{
		IL2CPP_JUMP_TBL(0x115, IL_0115)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0115:
	{
		RuntimeObject* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3737453335 (PocoJsonSerializerStrategy_t3624702326 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___input0;
		RuntimeObject ** L_1 = ___output1;
		bool L_2 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(13 /* System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, (RuntimeObject **)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_3 = ___input0;
		RuntimeObject ** L_4 = ___output1;
		bool L_5 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(14 /* System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, (RuntimeObject **)L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_DeserializeObject_m2189978591 (PocoJsonSerializerStrategy_t3624702326 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_DeserializeObject_m2189978591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	TypeU5BU5D_t3940880105* V_7 = NULL;
	Type_t * V_8 = NULL;
	Type_t * V_9 = NULL;
	Type_t * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	KeyValuePair_2_t968067334  V_12;
	memset(&V_12, 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	KeyValuePair_2_t3650347254  V_14;
	memset(&V_14, 0, sizeof(V_14));
	RuntimeObject* V_15 = NULL;
	RuntimeObject * V_16 = NULL;
	KeyValuePair_2_t1467418788  V_17;
	memset(&V_17, 0, sizeof(V_17));
	KeyValuePair_2_t1467418788  V_18;
	memset(&V_18, 0, sizeof(V_18));
	RuntimeObject* V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	int32_t V_22 = 0;
	RuntimeObject * V_23 = NULL;
	RuntimeObject* V_24 = NULL;
	Type_t * V_25 = NULL;
	Type_t * V_26 = NULL;
	RuntimeObject * V_27 = NULL;
	RuntimeObject* V_28 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	RuntimeObject * G_B46_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3243520166, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, PocoJsonSerializerStrategy_DeserializeObject_m2189978591_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		Type_t * L_3 = ___type1;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Guid_t ));
		Guid_t  L_8 = V_1;
		Guid_t  L_9 = L_8;
		RuntimeObject * L_10 = Box(Guid_t_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0042:
	{
		RuntimeObject * L_11 = ___value0;
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		return NULL;
	}

IL_004a:
	{
		V_2 = NULL;
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_019f;
		}
	}
	{
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_012b;
		}
	}
	{
		Type_t * L_15 = ___type1;
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17)))
		{
			goto IL_008d;
		}
	}
	{
		Type_t * L_18 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_19 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_20 = ___type1;
		Type_t * L_21 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23))))
		{
			goto IL_00a5;
		}
	}

IL_008d:
	{
		String_t* L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_25 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_26 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_27 = DateTime_ParseExact_m1132380469(NULL /*static, unused*/, L_24, L_25, L_26, ((int32_t)80), /*hidden argument*/NULL);
		DateTime_t3738529785  L_28 = L_27;
		RuntimeObject * L_29 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_28);
		return L_29;
	}

IL_00a5:
	{
		Type_t * L_30 = ___type1;
		RuntimeTypeHandle_t3027515415  L_31 = { reinterpret_cast<intptr_t> (DateTimeOffset_t3229287507_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32)))
		{
			goto IL_00d5;
		}
	}
	{
		Type_t * L_33 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_34 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ed;
		}
	}
	{
		Type_t * L_35 = ___type1;
		Type_t * L_36 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_37 = { reinterpret_cast<intptr_t> (DateTimeOffset_t3229287507_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))))
		{
			goto IL_00ed;
		}
	}

IL_00d5:
	{
		String_t* L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_40 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_41 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var);
		DateTimeOffset_t3229287507  L_42 = DateTimeOffset_ParseExact_m73031128(NULL /*static, unused*/, L_39, L_40, L_41, ((int32_t)80), /*hidden argument*/NULL);
		DateTimeOffset_t3229287507  L_43 = L_42;
		RuntimeObject * L_44 = Box(DateTimeOffset_t3229287507_il2cpp_TypeInfo_var, &L_43);
		return L_44;
	}

IL_00ed:
	{
		Type_t * L_45 = ___type1;
		RuntimeTypeHandle_t3027515415  L_46 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_45) == ((RuntimeObject*)(Type_t *)L_47)))
		{
			goto IL_011d;
		}
	}
	{
		Type_t * L_48 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_49 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0129;
		}
	}
	{
		Type_t * L_50 = ___type1;
		Type_t * L_51 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_52 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_53 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_51) == ((RuntimeObject*)(Type_t *)L_53))))
		{
			goto IL_0129;
		}
	}

IL_011d:
	{
		String_t* L_54 = V_0;
		Guid_t  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Guid__ctor_m2423264394((&L_55), L_54, /*hidden argument*/NULL);
		Guid_t  L_56 = L_55;
		RuntimeObject * L_57 = Box(Guid_t_il2cpp_TypeInfo_var, &L_56);
		return L_57;
	}

IL_0129:
	{
		String_t* L_58 = V_0;
		return L_58;
	}

IL_012b:
	{
		Type_t * L_59 = ___type1;
		RuntimeTypeHandle_t3027515415  L_60 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_61 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_59) == ((RuntimeObject*)(Type_t *)L_61))))
		{
			goto IL_014f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Guid_t ));
		Guid_t  L_62 = V_1;
		Guid_t  L_63 = L_62;
		RuntimeObject * L_64 = Box(Guid_t_il2cpp_TypeInfo_var, &L_63);
		V_2 = L_64;
		goto IL_0178;
	}

IL_014f:
	{
		Type_t * L_65 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_66 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0176;
		}
	}
	{
		Type_t * L_67 = ___type1;
		Type_t * L_68 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_69 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_70 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_68) == ((RuntimeObject*)(Type_t *)L_70))))
		{
			goto IL_0176;
		}
	}
	{
		V_2 = NULL;
		goto IL_0178;
	}

IL_0176:
	{
		String_t* L_71 = V_0;
		V_2 = L_71;
	}

IL_0178:
	{
		Type_t * L_72 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_73 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_019a;
		}
	}
	{
		Type_t * L_74 = ___type1;
		Type_t * L_75 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_76 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_75) == ((RuntimeObject*)(Type_t *)L_77))))
		{
			goto IL_019a;
		}
	}
	{
		String_t* L_78 = V_0;
		return L_78;
	}

IL_019a:
	{
		goto IL_01ac;
	}

IL_019f:
	{
		RuntimeObject * L_79 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_79, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_01ac;
		}
	}
	{
		RuntimeObject * L_80 = ___value0;
		return L_80;
	}

IL_01ac:
	{
		RuntimeObject * L_81 = ___value0;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_81, Int64_t3736567304_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		RuntimeObject * L_82 = ___value0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_82, Double_t594665363_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_83 = V_3;
		if (!L_83)
		{
			goto IL_01d7;
		}
	}
	{
		Type_t * L_84 = ___type1;
		RuntimeTypeHandle_t3027515415  L_85 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_84) == ((RuntimeObject*)(Type_t *)L_86)))
		{
			goto IL_01ee;
		}
	}

IL_01d7:
	{
		bool L_87 = V_4;
		if (!L_87)
		{
			goto IL_01f0;
		}
	}
	{
		Type_t * L_88 = ___type1;
		RuntimeTypeHandle_t3027515415  L_89 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_88) == ((RuntimeObject*)(Type_t *)L_90))))
		{
			goto IL_01f0;
		}
	}

IL_01ee:
	{
		RuntimeObject * L_91 = ___value0;
		return L_91;
	}

IL_01f0:
	{
		bool L_92 = V_4;
		if (!L_92)
		{
			goto IL_0207;
		}
	}
	{
		Type_t * L_93 = ___type1;
		RuntimeTypeHandle_t3027515415  L_94 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_93) == ((RuntimeObject*)(Type_t *)L_95))))
		{
			goto IL_021d;
		}
	}

IL_0207:
	{
		bool L_96 = V_3;
		if (!L_96)
		{
			goto IL_024a;
		}
	}
	{
		Type_t * L_97 = ___type1;
		RuntimeTypeHandle_t3027515415  L_98 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_99 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_97) == ((RuntimeObject*)(Type_t *)L_99)))
		{
			goto IL_024a;
		}
	}

IL_021d:
	{
		RuntimeTypeHandle_t3027515415  L_100 = { reinterpret_cast<intptr_t> (IConvertible_t2977365677_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_101 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_100, /*hidden argument*/NULL);
		Type_t * L_102 = ___type1;
		NullCheck(L_101);
		bool L_103 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_101, L_102);
		if (!L_103)
		{
			goto IL_0243;
		}
	}
	{
		RuntimeObject * L_104 = ___value0;
		Type_t * L_105 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_106 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_107 = Convert_ChangeType_m827193029(NULL /*static, unused*/, L_104, L_105, L_106, /*hidden argument*/NULL);
		G_B46_0 = L_107;
		goto IL_0244;
	}

IL_0243:
	{
		RuntimeObject * L_108 = ___value0;
		G_B46_0 = L_108;
	}

IL_0244:
	{
		V_2 = G_B46_0;
		goto IL_0535;
	}

IL_024a:
	{
		RuntimeObject * L_109 = ___value0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_109, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_110 = V_5;
		if (!L_110)
		{
			goto IL_03ca;
		}
	}
	{
		RuntimeObject* L_111 = V_5;
		V_6 = L_111;
		Type_t * L_112 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_113 = ReflectionUtils_IsTypeDictionary_m177769241(NULL /*static, unused*/, L_112, /*hidden argument*/NULL);
		if (!L_113)
		{
			goto IL_0313;
		}
	}
	{
		Type_t * L_114 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_115 = ReflectionUtils_GetGenericTypeArguments_m2836722815(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		V_7 = L_115;
		TypeU5BU5D_t3940880105* L_116 = V_7;
		NullCheck(L_116);
		int32_t L_117 = 0;
		Type_t * L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_8 = L_118;
		TypeU5BU5D_t3940880105* L_119 = V_7;
		NullCheck(L_119);
		int32_t L_120 = 1;
		Type_t * L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_9 = L_121;
		RuntimeTypeHandle_t3027515415  L_122 = { reinterpret_cast<intptr_t> (Dictionary_2_t3621973219_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_123 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_122, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_124 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t3940880105* L_125 = L_124;
		Type_t * L_126 = V_8;
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_126);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_126);
		TypeU5BU5D_t3940880105* L_127 = L_125;
		Type_t * L_128 = V_9;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_128);
		NullCheck(L_123);
		Type_t * L_129 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_123, L_127);
		V_10 = L_129;
		RuntimeObject* L_130 = __this->get_ConstructorCache_0();
		Type_t * L_131 = V_10;
		NullCheck(L_130);
		ConstructorDelegate_t3127338789 * L_132 = InterfaceFuncInvoker1< ConstructorDelegate_t3127338789 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(!0) */, IDictionary_2_t4035537244_il2cpp_TypeInfo_var, L_130, L_131);
		NullCheck(L_132);
		RuntimeObject * L_133 = ConstructorDelegate_Invoke_m2513274121(L_132, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_11 = ((RuntimeObject*)Castclass((RuntimeObject*)L_133, IDictionary_t1363984059_il2cpp_TypeInfo_var));
		RuntimeObject* L_134 = V_6;
		NullCheck(L_134);
		RuntimeObject* L_135 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t4242887519_il2cpp_TypeInfo_var, L_134);
		V_13 = L_135;
	}

IL_02c0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02eb;
		}

IL_02c5:
		{
			RuntimeObject* L_136 = V_13;
			NullCheck(L_136);
			KeyValuePair_2_t968067334  L_137 = InterfaceFuncInvoker0< KeyValuePair_2_t968067334  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1400637802_il2cpp_TypeInfo_var, L_136);
			V_12 = L_137;
			RuntimeObject* L_138 = V_11;
			String_t* L_139 = KeyValuePair_2_get_Key_m256823211((KeyValuePair_2_t968067334 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_m256823211_RuntimeMethod_var);
			RuntimeObject * L_140 = KeyValuePair_2_get_Value_m4108279609((KeyValuePair_2_t968067334 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Value_m4108279609_RuntimeMethod_var);
			Type_t * L_141 = V_9;
			RuntimeObject * L_142 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(11 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, __this, L_140, L_141);
			NullCheck(L_138);
			InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(2 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_138, L_139, L_142);
		}

IL_02eb:
		{
			RuntimeObject* L_143 = V_13;
			NullCheck(L_143);
			bool L_144 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_143);
			if (L_144)
			{
				goto IL_02c5;
			}
		}

IL_02f7:
		{
			IL2CPP_LEAVE(0x30B, FINALLY_02fc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02fc;
	}

FINALLY_02fc:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_145 = V_13;
			if (!L_145)
			{
				goto IL_030a;
			}
		}

IL_0303:
		{
			RuntimeObject* L_146 = V_13;
			NullCheck(L_146);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_146);
		}

IL_030a:
		{
			IL2CPP_END_FINALLY(764)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(764)
	{
		IL2CPP_JUMP_TBL(0x30B, IL_030b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_030b:
	{
		RuntimeObject* L_147 = V_11;
		V_2 = L_147;
		goto IL_03c5;
	}

IL_0313:
	{
		Type_t * L_148 = ___type1;
		RuntimeTypeHandle_t3027515415  L_149 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_150 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_148) == ((RuntimeObject*)(Type_t *)L_150))))
		{
			goto IL_032a;
		}
	}
	{
		RuntimeObject * L_151 = ___value0;
		V_2 = L_151;
		goto IL_03c5;
	}

IL_032a:
	{
		RuntimeObject* L_152 = __this->get_ConstructorCache_0();
		Type_t * L_153 = ___type1;
		NullCheck(L_152);
		ConstructorDelegate_t3127338789 * L_154 = InterfaceFuncInvoker1< ConstructorDelegate_t3127338789 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(!0) */, IDictionary_2_t4035537244_il2cpp_TypeInfo_var, L_152, L_153);
		NullCheck(L_154);
		RuntimeObject * L_155 = ConstructorDelegate_Invoke_m2513274121(L_154, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL, /*hidden argument*/NULL);
		V_2 = L_155;
		RuntimeObject* L_156 = __this->get_SetCache_2();
		Type_t * L_157 = ___type1;
		NullCheck(L_156);
		RuntimeObject* L_158 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Item(!0) */, IDictionary_2_t624724933_il2cpp_TypeInfo_var, L_156, L_157);
		NullCheck(L_158);
		RuntimeObject* L_159 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::GetEnumerator() */, IEnumerable_1_t2630200143_il2cpp_TypeInfo_var, L_158);
		V_15 = L_159;
	}

IL_0350:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a5;
		}

IL_0355:
		{
			RuntimeObject* L_160 = V_15;
			NullCheck(L_160);
			KeyValuePair_2_t3650347254  L_161 = InterfaceFuncInvoker0< KeyValuePair_2_t3650347254  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Current() */, IEnumerator_1_t4082917722_il2cpp_TypeInfo_var, L_160);
			V_14 = L_161;
			RuntimeObject* L_162 = V_6;
			String_t* L_163 = KeyValuePair_2_get_Key_m3192674138((KeyValuePair_2_t3650347254 *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Key_m3192674138_RuntimeMethod_var);
			NullCheck(L_162);
			bool L_164 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_162, L_163, (RuntimeObject **)(&V_16));
			if (!L_164)
			{
				goto IL_03a5;
			}
		}

IL_0373:
		{
			RuntimeObject * L_165 = V_16;
			KeyValuePair_2_t1467418788  L_166 = KeyValuePair_2_get_Value_m1644022012((KeyValuePair_2_t3650347254 *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Value_m1644022012_RuntimeMethod_var);
			V_17 = L_166;
			Type_t * L_167 = KeyValuePair_2_get_Key_m4117927069((KeyValuePair_2_t1467418788 *)(&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m4117927069_RuntimeMethod_var);
			RuntimeObject * L_168 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(11 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, __this, L_165, L_167);
			V_16 = L_168;
			KeyValuePair_2_t1467418788  L_169 = KeyValuePair_2_get_Value_m1644022012((KeyValuePair_2_t3650347254 *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Value_m1644022012_RuntimeMethod_var);
			V_18 = L_169;
			SetDelegate_t920366853 * L_170 = KeyValuePair_2_get_Value_m3057102946((KeyValuePair_2_t1467418788 *)(&V_18), /*hidden argument*/KeyValuePair_2_get_Value_m3057102946_RuntimeMethod_var);
			RuntimeObject * L_171 = V_2;
			RuntimeObject * L_172 = V_16;
			NullCheck(L_170);
			SetDelegate_Invoke_m345191930(L_170, L_171, L_172, /*hidden argument*/NULL);
		}

IL_03a5:
		{
			RuntimeObject* L_173 = V_15;
			NullCheck(L_173);
			bool L_174 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_173);
			if (L_174)
			{
				goto IL_0355;
			}
		}

IL_03b1:
		{
			IL2CPP_LEAVE(0x3C5, FINALLY_03b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03b6;
	}

FINALLY_03b6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_175 = V_15;
			if (!L_175)
			{
				goto IL_03c4;
			}
		}

IL_03bd:
		{
			RuntimeObject* L_176 = V_15;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_176);
		}

IL_03c4:
		{
			IL2CPP_END_FINALLY(950)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(950)
	{
		IL2CPP_JUMP_TBL(0x3C5, IL_03c5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03c5:
	{
		goto IL_0533;
	}

IL_03ca:
	{
		RuntimeObject * L_177 = ___value0;
		V_19 = ((RuntimeObject*)IsInst((RuntimeObject*)L_177, IList_1_t600458651_il2cpp_TypeInfo_var));
		RuntimeObject* L_178 = V_19;
		if (!L_178)
		{
			goto IL_0533;
		}
	}
	{
		RuntimeObject* L_179 = V_19;
		V_20 = L_179;
		V_21 = (RuntimeObject*)NULL;
		Type_t * L_180 = ___type1;
		NullCheck(L_180);
		bool L_181 = Type_get_IsArray_m2591212821(L_180, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0473;
		}
	}
	{
		RuntimeObject* L_182 = __this->get_ConstructorCache_0();
		Type_t * L_183 = ___type1;
		NullCheck(L_182);
		ConstructorDelegate_t3127338789 * L_184 = InterfaceFuncInvoker1< ConstructorDelegate_t3127338789 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(!0) */, IDictionary_2_t4035537244_il2cpp_TypeInfo_var, L_182, L_183);
		ObjectU5BU5D_t2843939325* L_185 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_186 = L_185;
		RuntimeObject* L_187 = V_20;
		NullCheck(L_187);
		int32_t L_188 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_t1613291102_il2cpp_TypeInfo_var, L_187);
		int32_t L_189 = L_188;
		RuntimeObject * L_190 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_189);
		NullCheck(L_186);
		ArrayElementTypeCheck (L_186, L_190);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_190);
		NullCheck(L_184);
		RuntimeObject * L_191 = ConstructorDelegate_Invoke_m2513274121(L_184, L_186, /*hidden argument*/NULL);
		V_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_191, IList_t2094931216_il2cpp_TypeInfo_var));
		V_22 = 0;
		RuntimeObject* L_192 = V_20;
		NullCheck(L_192);
		RuntimeObject* L_193 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t2059959053_il2cpp_TypeInfo_var, L_192);
		V_24 = L_193;
	}

IL_0424:
	try
	{ // begin try (depth: 1)
		{
			goto IL_044e;
		}

IL_0429:
		{
			RuntimeObject* L_194 = V_24;
			NullCheck(L_194);
			RuntimeObject * L_195 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t3512676632_il2cpp_TypeInfo_var, L_194);
			V_23 = L_195;
			RuntimeObject* L_196 = V_21;
			int32_t L_197 = V_22;
			int32_t L_198 = L_197;
			V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)1));
			RuntimeObject * L_199 = V_23;
			Type_t * L_200 = ___type1;
			NullCheck(L_200);
			Type_t * L_201 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_200);
			RuntimeObject * L_202 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(11 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, __this, L_199, L_201);
			NullCheck(L_196);
			InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_196, L_198, L_202);
		}

IL_044e:
		{
			RuntimeObject* L_203 = V_24;
			NullCheck(L_203);
			bool L_204 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_203);
			if (L_204)
			{
				goto IL_0429;
			}
		}

IL_045a:
		{
			IL2CPP_LEAVE(0x46E, FINALLY_045f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_045f;
	}

FINALLY_045f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_205 = V_24;
			if (!L_205)
			{
				goto IL_046d;
			}
		}

IL_0466:
		{
			RuntimeObject* L_206 = V_24;
			NullCheck(L_206);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_206);
		}

IL_046d:
		{
			IL2CPP_END_FINALLY(1119)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1119)
	{
		IL2CPP_JUMP_TBL(0x46E, IL_046e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_046e:
	{
		goto IL_0530;
	}

IL_0473:
	{
		Type_t * L_207 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_208 = ReflectionUtils_IsTypeGenericeCollectionInterface_m3907525460(NULL /*static, unused*/, L_207, /*hidden argument*/NULL);
		if (L_208)
		{
			goto IL_0493;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_209 = { reinterpret_cast<intptr_t> (IList_t2094931216_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_210 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_209, /*hidden argument*/NULL);
		Type_t * L_211 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_212 = ReflectionUtils_IsAssignableFrom_m3348354076(NULL /*static, unused*/, L_210, L_211, /*hidden argument*/NULL);
		if (!L_212)
		{
			goto IL_0530;
		}
	}

IL_0493:
	{
		Type_t * L_213 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_214 = ReflectionUtils_GetGenericTypeArguments_m2836722815(NULL /*static, unused*/, L_213, /*hidden argument*/NULL);
		NullCheck(L_214);
		int32_t L_215 = 0;
		Type_t * L_216 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		V_25 = L_216;
		RuntimeTypeHandle_t3027515415  L_217 = { reinterpret_cast<intptr_t> (List_1_t284568025_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_218 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_217, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_219 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_220 = L_219;
		Type_t * L_221 = V_25;
		NullCheck(L_220);
		ArrayElementTypeCheck (L_220, L_221);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_221);
		NullCheck(L_218);
		Type_t * L_222 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t3940880105* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_218, L_220);
		V_26 = L_222;
		RuntimeObject* L_223 = __this->get_ConstructorCache_0();
		Type_t * L_224 = V_26;
		NullCheck(L_223);
		ConstructorDelegate_t3127338789 * L_225 = InterfaceFuncInvoker1< ConstructorDelegate_t3127338789 *, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(!0) */, IDictionary_2_t4035537244_il2cpp_TypeInfo_var, L_223, L_224);
		ObjectU5BU5D_t2843939325* L_226 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_227 = L_226;
		RuntimeObject* L_228 = V_20;
		NullCheck(L_228);
		int32_t L_229 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, ICollection_1_t1613291102_il2cpp_TypeInfo_var, L_228);
		int32_t L_230 = L_229;
		RuntimeObject * L_231 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_230);
		NullCheck(L_227);
		ArrayElementTypeCheck (L_227, L_231);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_231);
		NullCheck(L_225);
		RuntimeObject * L_232 = ConstructorDelegate_Invoke_m2513274121(L_225, L_227, /*hidden argument*/NULL);
		V_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_232, IList_t2094931216_il2cpp_TypeInfo_var));
		RuntimeObject* L_233 = V_20;
		NullCheck(L_233);
		RuntimeObject* L_234 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t2059959053_il2cpp_TypeInfo_var, L_233);
		V_28 = L_234;
	}

IL_04f0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0510;
		}

IL_04f5:
		{
			RuntimeObject* L_235 = V_28;
			NullCheck(L_235);
			RuntimeObject * L_236 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t3512676632_il2cpp_TypeInfo_var, L_235);
			V_27 = L_236;
			RuntimeObject* L_237 = V_21;
			RuntimeObject * L_238 = V_27;
			Type_t * L_239 = V_25;
			RuntimeObject * L_240 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(11 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, __this, L_238, L_239);
			NullCheck(L_237);
			InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_237, L_240);
		}

IL_0510:
		{
			RuntimeObject* L_241 = V_28;
			NullCheck(L_241);
			bool L_242 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_241);
			if (L_242)
			{
				goto IL_04f5;
			}
		}

IL_051c:
		{
			IL2CPP_LEAVE(0x530, FINALLY_0521);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0521;
	}

FINALLY_0521:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_243 = V_28;
			if (!L_243)
			{
				goto IL_052f;
			}
		}

IL_0528:
		{
			RuntimeObject* L_244 = V_28;
			NullCheck(L_244);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_244);
		}

IL_052f:
		{
			IL2CPP_END_FINALLY(1313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1313)
	{
		IL2CPP_JUMP_TBL(0x530, IL_0530)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0530:
	{
		RuntimeObject* L_245 = V_21;
		V_2 = L_245;
	}

IL_0533:
	{
		RuntimeObject * L_246 = V_2;
		return L_246;
	}

IL_0535:
	{
		Type_t * L_247 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_248 = ReflectionUtils_IsNullableType_m1498686771(NULL /*static, unused*/, L_247, /*hidden argument*/NULL);
		if (!L_248)
		{
			goto IL_0548;
		}
	}
	{
		RuntimeObject * L_249 = V_2;
		Type_t * L_250 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject * L_251 = ReflectionUtils_ToNullableType_m2914598057(NULL /*static, unused*/, L_249, L_250, /*hidden argument*/NULL);
		return L_251;
	}

IL_0548:
	{
		RuntimeObject * L_252 = V_2;
		return L_252;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PocoJsonSerializerStrategy_SerializeEnum_m2782598723 (PocoJsonSerializerStrategy_t3624702326 * __this, Enum_t4135868527 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_SerializeEnum_m2782598723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enum_t4135868527 * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		RuntimeObject * L_4 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3127380522 (PocoJsonSerializerStrategy_t3624702326 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3127380522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTimeOffset_t3229287507  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTimeOffset_t3229287507  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Guid_t  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enum_t4135868527 * V_6 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, DateTime_t3738529785_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject ** L_1 = ___output1;
		RuntimeObject * L_2 = ___input0;
		V_1 = ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_2, DateTime_t3738529785_il2cpp_TypeInfo_var))));
		DateTime_t3738529785  L_3 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_4 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_7 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = DateTime_ToString_m2992030064((DateTime_t3738529785 *)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)L_8);
		goto IL_00cc;
	}

IL_0036:
	{
		RuntimeObject * L_9 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject ** L_10 = ___output1;
		RuntimeObject * L_11 = ___input0;
		V_3 = ((*(DateTimeOffset_t3229287507 *)((DateTimeOffset_t3229287507 *)UnBox(L_11, DateTimeOffset_t3229287507_il2cpp_TypeInfo_var))));
		DateTimeOffset_t3229287507  L_12 = DateTimeOffset_ToUniversalTime_m1292281655((DateTimeOffset_t3229287507 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_13 = ((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->get_Iso8601Format_5();
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_16 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = DateTimeOffset_ToString_m3985341516((DateTimeOffset_t3229287507 *)(&V_4), L_15, L_16, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)L_17);
		goto IL_00cc;
	}

IL_006b:
	{
		RuntimeObject * L_18 = ___input0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject ** L_19 = ___output1;
		RuntimeObject * L_20 = ___input0;
		V_5 = ((*(Guid_t *)((Guid_t *)UnBox(L_20, Guid_t_il2cpp_TypeInfo_var))));
		String_t* L_21 = Guid_ToString_m4056316049((Guid_t *)(&V_5), _stringLiteral3452614620, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_19)) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_19), (RuntimeObject *)L_21);
		goto IL_00cc;
	}

IL_0091:
	{
		RuntimeObject * L_22 = ___input0;
		if (!((Uri_t100236324 *)IsInstClass((RuntimeObject*)L_22, Uri_t100236324_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject ** L_23 = ___output1;
		RuntimeObject * L_24 = ___input0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		*((RuntimeObject **)(L_23)) = (RuntimeObject *)L_25;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_23), (RuntimeObject *)L_25);
		goto IL_00cc;
	}

IL_00a9:
	{
		RuntimeObject * L_26 = ___input0;
		V_6 = ((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_26, Enum_t4135868527_il2cpp_TypeInfo_var));
		Enum_t4135868527 * L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject ** L_28 = ___output1;
		Enum_t4135868527 * L_29 = V_6;
		RuntimeObject * L_30 = VirtFuncInvoker1< RuntimeObject *, Enum_t4135868527 * >::Invoke(12 /* System.Object UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_29);
		*((RuntimeObject **)(L_28)) = (RuntimeObject *)L_30;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_28), (RuntimeObject *)L_30);
		goto IL_00cc;
	}

IL_00c7:
	{
		V_0 = (bool)0;
		RuntimeObject ** L_31 = ___output1;
		*((RuntimeObject **)(L_31)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_31), (RuntimeObject *)NULL);
	}

IL_00cc:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m216984246 (PocoJsonSerializerStrategy_t3624702326 * __this, RuntimeObject * ___input0, RuntimeObject ** ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m216984246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t1827440471  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___input0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral818277059, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m216984246_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject ** L_2 = ___output1;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)NULL);
		RuntimeObject * L_3 = ___input0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		JsonObject_t1327569318 * L_7 = (JsonObject_t1327569318 *)il2cpp_codegen_object_new(JsonObject_t1327569318_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3891241071(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject* L_8 = __this->get_GetCache_1();
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t3096785446_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t807293360_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			RuntimeObject* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t1827440471  L_14 = InterfaceFuncInvoker0< KeyValuePair_2_t1827440471  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t2260010939_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t3939479301 * L_15 = KeyValuePair_2_get_Value_m3789007266((KeyValuePair_2_t1827440471 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3789007266_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			RuntimeObject* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m497613733((KeyValuePair_2_t1827440471 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m497613733_RuntimeMethod_var);
			String_t* L_18 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t3939479301 * L_19 = KeyValuePair_2_get_Value_m3789007266((KeyValuePair_2_t1827440471 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3789007266_RuntimeMethod_var);
			RuntimeObject * L_20 = ___input0;
			NullCheck(L_19);
			RuntimeObject * L_21 = GetDelegate_Invoke_m1713466754(L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_009b;
			}
		}

IL_0094:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_009b:
		{
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		RuntimeObject ** L_26 = ___output1;
		RuntimeObject* L_27 = V_1;
		*((RuntimeObject **)(L_26)) = (RuntimeObject *)L_27;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_26), (RuntimeObject *)L_27);
		return (bool)1;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PocoJsonSerializerStrategy__cctor_m4090673315 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PocoJsonSerializerStrategy__cctor_m4090673315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t3940880105* L_0 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)0);
		((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->set_EmptyTypes_3(L_0);
		TypeU5BU5D_t3940880105* L_1 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_2 = L_1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_4);
		((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->set_ArrayConstructorParameterTypes_4(L_2);
		StringU5BU5D_t1281789340* L_5 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t1281789340* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4081536298);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4081536298);
		StringU5BU5D_t1281789340* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1858654798);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1858654798);
		StringU5BU5D_t1281789340* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1861407333);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1861407333);
		((PocoJsonSerializerStrategy_t3624702326_StaticFields*)il2cpp_codegen_static_fields_for(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var))->set_Iso8601Format_5(L_8);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReflectionUtils__ctor_m2681392556 (ReflectionUtils_t1067364495 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Attribute UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * ReflectionUtils_GetAttribute_m2864462058 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___info0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___info0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_1 = ___type1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		MemberInfo_t * L_2 = ___info0;
		Type_t * L_3 = ___type1;
		bool L_4 = Attribute_IsDefined_m3363303722(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (Attribute_t861562559 *)NULL;
	}

IL_001a:
	{
		MemberInfo_t * L_5 = ___info0;
		Type_t * L_6 = ___type1;
		Attribute_t861562559 * L_7 = Attribute_GetCustomAttribute_m4034845276(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Attribute UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetAttribute(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * ReflectionUtils_GetAttribute_m2309460528 (RuntimeObject * __this /* static, unused */, Type_t * ___objectType0, Type_t * ___attributeType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___objectType0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_1 = ___attributeType1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_2 = ___objectType0;
		Type_t * L_3 = ___attributeType1;
		bool L_4 = Attribute_IsDefined_m3363303722(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (Attribute_t861562559 *)NULL;
	}

IL_001a:
	{
		Type_t * L_5 = ___objectType0;
		Type_t * L_6 = ___attributeType1;
		Attribute_t861562559 * L_7 = Attribute_GetCustomAttribute_m4034845276(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Type[] UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGenericTypeArguments(System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeU5BU5D_t3940880105* ReflectionUtils_GetGenericTypeArguments_m2836722815 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		TypeU5BU5D_t3940880105* L_1 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(79 /* System.Type[] System.Type::GetGenericArguments() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsTypeGenericeCollectionInterface(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsTypeGenericeCollectionInterface_m3907525460 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsTypeGenericeCollectionInterface_m3907525460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (IList_1_t523203890_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_7 = V_0;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (ICollection_1_t1449021101_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_7) == ((RuntimeObject*)(Type_t *)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_10 = V_0;
		RuntimeTypeHandle_t3027515415  L_11 = { reinterpret_cast<intptr_t> (IEnumerable_1_t1615002100_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		G_B6_0 = ((((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		return (bool)G_B6_0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsAssignableFrom(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsAssignableFrom_m3348354076 (RuntimeObject * __this /* static, unused */, Type_t * ___type10, Type_t * ___type21, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type10;
		Type_t * L_1 = ___type21;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsTypeDictionary(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsTypeDictionary_m177769241 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsTypeDictionary_m177769241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IDictionary_t1363984059_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___type0;
		NullCheck(L_1);
		bool L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (IDictionary_2_t3177279192_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsNullableType(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m1498686771 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsNullableType_m1498686771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Nullable_1_t3772285925_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::ToNullableType(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReflectionUtils_ToNullableType_m2914598057 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, Type_t * ___nullableType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_ToNullableType_m2914598057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B3_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_001d;
	}

IL_000c:
	{
		RuntimeObject * L_1 = ___obj0;
		Type_t * L_2 = ___nullableType1;
		Type_t * L_3 = Nullable_GetUnderlyingType_m3905033790(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Convert_ChangeType_m827193029(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::IsValueType(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool ReflectionUtils_IsValueType_m527265674 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m3108065642(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetConstructors_m459159167 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t881249896* L_1 = Type_GetConstructors_m1172352582(L_0, /*hidden argument*/NULL);
		return (RuntimeObject*)L_1;
	}
}
// System.Reflection.ConstructorInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * ReflectionUtils_GetConstructorInfo_m4058025074 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorInfo_m4058025074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t5769829 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ParameterInfoU5BU5D_t390618515* V_5 = NULL;
	ParameterInfo_t1861056598 * V_6 = NULL;
	ParameterInfoU5BU5D_t390618515* V_7 = NULL;
	int32_t V_8 = 0;
	ConstructorInfo_t5769829 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ReflectionUtils_GetConstructors_m459159167(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t3280590014_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			RuntimeObject* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t5769829 * L_5 = InterfaceFuncInvoker0< ConstructorInfo_t5769829 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t438340297_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t5769829 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t390618515* L_7 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t3940880105* L_8 = ___argsType1;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t390618515* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = (bool)1;
			ConstructorInfo_t5769829 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t390618515* L_11 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t390618515* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			int32_t L_14 = L_13;
			ParameterInfo_t1861056598 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_6 = L_15;
			ParameterInfo_t1861056598 * L_16 = V_6;
			NullCheck(L_16);
			Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
			TypeU5BU5D_t3940880105* L_18 = ___argsType1;
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			Type_t * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			if ((((RuntimeObject*)(Type_t *)L_17) == ((RuntimeObject*)(Type_t *)L_21)))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = (bool)0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_22 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_006c:
		{
			int32_t L_23 = V_8;
			ParameterInfoU5BU5D_t390618515* L_24 = V_7;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_25 = V_2;
			if (!L_25)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t5769829 * L_26 = V_3;
			V_9 = L_26;
			IL2CPP_LEAVE(0xA7, FINALLY_0096);
		}

IL_0085:
		{
			RuntimeObject* L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_4;
			if (!L_29)
			{
				goto IL_00a4;
			}
		}

IL_009d:
		{
			RuntimeObject* L_30 = V_4;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_30);
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA7, IL_00a7)
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		return (ConstructorInfo_t5769829 *)NULL;
	}

IL_00a7:
	{
		ConstructorInfo_t5769829 * L_31 = V_9;
		return L_31;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetProperties_m1505565867 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1461822886* L_1 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetFields_m1225489027 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		FieldInfoU5BU5D_t846150980* L_1 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (RuntimeObject*)L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m4169253972 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, (bool)1);
		return L_1;
	}
}
// System.Reflection.MethodInfo UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m2586791962 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, (bool)1);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetContructor_m4133798270 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * ___constructorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetContructor_m4133798270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t5769829 * L_0 = ___constructorInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ConstructorDelegate_t3127338789 * L_1 = ReflectionUtils_GetConstructorByReflection_m3309638613(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetContructor_m198753871 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetContructor_m198753871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t3940880105* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ConstructorDelegate_t3127338789 * L_2 = ReflectionUtils_GetConstructorByReflection_m1171983073(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetConstructorByReflection_m3309638613 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * ___constructorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_m3309638613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * V_0 = NULL;
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 *)il2cpp_codegen_object_new(U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m3282387833(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * L_1 = V_0;
		ConstructorInfo_t5769829 * L_2 = ___constructorInfo0;
		NullCheck(L_1);
		L_1->set_constructorInfo_0(L_2);
		U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2583475376_RuntimeMethod_var;
		ConstructorDelegate_t3127338789 * L_5 = (ConstructorDelegate_t3127338789 *)il2cpp_codegen_object_new(ConstructorDelegate_t3127338789_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m3222289551(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorDelegate_t3127338789 * ReflectionUtils_GetConstructorByReflection_m1171983073 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t3940880105* ___argsType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetConstructorByReflection_m1171983073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t5769829 * V_0 = NULL;
	ConstructorDelegate_t3127338789 * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeU5BU5D_t3940880105* L_1 = ___argsType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ConstructorInfo_t5769829 * L_2 = ReflectionUtils_GetConstructorInfo_m4058025074(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t5769829 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t3127338789 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t5769829 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ConstructorDelegate_t3127338789 * L_5 = ReflectionUtils_GetConstructorByReflection_m3309638613(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethod_m2084983952 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m2084983952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		GetDelegate_t3939479301 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1109098923(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethod_m4152947020 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethod_m4152947020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		GetDelegate_t3939479301 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1467673197(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethodByReflection_m1109098923 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m1109098923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * V_0 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m3671102593(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m4169253972(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1455314588_RuntimeMethod_var;
		GetDelegate_t3939479301 * L_6 = (GetDelegate_t3939479301 *)il2cpp_codegen_object_new(GetDelegate_t3939479301_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m2106094017(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR GetDelegate_t3939479301 * ReflectionUtils_GetGetMethodByReflection_m1467673197 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetGetMethodByReflection_m1467673197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * V_0 = NULL;
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 *)il2cpp_codegen_object_new(U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m2970195073(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1185220208_RuntimeMethod_var;
		GetDelegate_t3939479301 * L_5 = (GetDelegate_t3939479301 *)il2cpp_codegen_object_new(GetDelegate_t3939479301_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m2106094017(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethod_m1283009144 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_m1283009144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		SetDelegate_t920366853 * L_1 = ReflectionUtils_GetSetMethodByReflection_m3021719649(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethod_m2132891088 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethod_m2132891088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		SetDelegate_t920366853 * L_1 = ReflectionUtils_GetSetMethodByReflection_m4007754765(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethodByReflection_m3021719649 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m3021719649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * V_0 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m840323873(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m2586791962(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_methodInfo_0(L_3);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m3481553378_RuntimeMethod_var;
		SetDelegate_t920366853 * L_6 = (SetDelegate_t920366853 *)il2cpp_codegen_object_new(SetDelegate_t920366853_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m2727544246(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR SetDelegate_t920366853 * ReflectionUtils_GetSetMethodByReflection_m4007754765 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetSetMethodByReflection_m4007754765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * V_0 = NULL;
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 *)il2cpp_codegen_object_new(U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3517928225(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->set_fieldInfo_0(L_2);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2261238226_RuntimeMethod_var;
		SetDelegate_t920366853 * L_5 = (SetDelegate_t920366853 *)il2cpp_codegen_object_new(SetDelegate_t920366853_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m2727544246(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ReflectionUtils__cctor_m1591577905 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils__cctor_m1591577905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtils_t1067364495_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var))->set_EmptyObjects_0(L_0);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetConstructorByReflectionU3Ec__AnonStorey0__ctor_m3282387833 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey0::<>m__0(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetConstructorByReflectionU3Ec__AnonStorey0_U3CU3Em__0_m2583475376 (U3CGetConstructorByReflectionU3Ec__AnonStorey0_t3903434793 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t5769829 * L_0 = __this->get_constructorInfo_0();
		ObjectU5BU5D_t2843939325* L_1 = ___args0;
		NullCheck(L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m4089836896(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey1__ctor_m3671102593 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey1::<>m__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1455314588 (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_t1858150574 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetGetMethodByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1455314588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t2843939325* L_2 = ((ReflectionUtils_t1067364495_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var))->get_EmptyObjects_0();
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m1776411915(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m2970195073 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__0_m1185220208 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t1858150577 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3__ctor_m840323873 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey3::<>m__0(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m3481553378 (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_t651529835 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetSetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__0_m3481553378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_methodInfo_0();
		RuntimeObject * L_1 = ___source0;
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		MethodBase_Invoke_m1776411915(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m3517928225 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__0(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__0_m2261238226 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t651529832 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = __this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___source0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_m2460171138(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ConstructorDelegate__ctor_m3222289551 (ConstructorDelegate_t3127338789 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_Invoke_m2513274121 (ConstructorDelegate_t3127338789 * __this, ObjectU5BU5D_t2843939325* ___args0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		ConstructorDelegate_Invoke_m2513274121((ConstructorDelegate_t3127338789 *)__this->get_prev_9(), ___args0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___args0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___args0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___args0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConstructorDelegate_BeginInvoke_m1198383774 (ConstructorDelegate_t3127338789 * __this, ObjectU5BU5D_t2843939325* ___args0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstructorDelegate_EndInvoke_m1828613685 (ConstructorDelegate_t3127338789 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetDelegate__ctor_m2106094017 (GetDelegate_t3939479301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_Invoke_m1713466754 (GetDelegate_t3939479301 * __this, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		GetDelegate_Invoke_m1713466754((GetDelegate_t3939479301 *)__this->get_prev_9(), ___source0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___source0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GetDelegate_BeginInvoke_m1557810697 (GetDelegate_t3939479301 * __this, RuntimeObject * ___source0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GetDelegate_EndInvoke_m735078634 (GetDelegate_t3939479301 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate__ctor_m2727544246 (SetDelegate_t920366853 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_Invoke_m345191930 (SetDelegate_t920366853 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SetDelegate_Invoke_m345191930((SetDelegate_t920366853 *)__this->get_prev_9(), ___source0, ___value1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___value1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___value1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___value1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___source0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___value1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___value1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___value1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SetDelegate_BeginInvoke_m2646823451 (SetDelegate_t920366853 * __this, RuntimeObject * ___source0, RuntimeObject * ___value1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SetDelegate_EndInvoke_m3306785923 (SetDelegate_t920366853 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m1425654463 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_DeserializeObject_m1425654463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___json0;
		bool L_1 = SimpleJson_TryDeserializeObject_m846156654(NULL /*static, unused*/, L_0, (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}

IL_000f:
	{
		SerializationException_t3941511869 * L_3 = (SerializationException_t3941511869 *)il2cpp_codegen_object_new(SerializationException_t3941511869_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3862484944(L_3, _stringLiteral1376854336, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SimpleJson_DeserializeObject_m1425654463_RuntimeMethod_var);
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_TryDeserializeObject_m846156654 (RuntimeObject * __this /* static, unused */, String_t* ___json0, RuntimeObject ** ___obj1, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharU5BU5D_t3528271667* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (bool)1;
		String_t* L_0 = ___json0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		RuntimeObject ** L_3 = ___obj1;
		CharU5BU5D_t3528271667* L_4 = V_1;
		RuntimeObject * L_5 = SimpleJson_ParseValue_m2036273466(NULL /*static, unused*/, L_4, (int32_t*)(&V_2), (bool*)(&V_0), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_5);
		goto IL_0025;
	}

IL_0022:
	{
		RuntimeObject ** L_6 = ___obj1;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)NULL);
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String,System.Type,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m2354421515 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, RuntimeObject* ___jsonSerializerStrategy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_DeserializeObject_m2354421515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		String_t* L_0 = ___json0;
		RuntimeObject * L_1 = SimpleJson_DeserializeObject_m1425654463(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t1067364495_il2cpp_TypeInfo_var);
		bool L_7 = ReflectionUtils_IsAssignableFrom_m3348354076(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}

IL_0024:
	{
		RuntimeObject * L_8 = V_0;
		G_B7_0 = L_8;
		goto IL_003e;
	}

IL_002a:
	{
		RuntimeObject* L_9 = ___jsonSerializerStrategy2;
		RuntimeObject* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_11 = SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B6_0 = L_11;
	}

IL_0037:
	{
		RuntimeObject * L_12 = V_0;
		Type_t * L_13 = ___type1;
		NullCheck(G_B6_0);
		RuntimeObject * L_14 = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, Type_t * >::Invoke(1 /* System.Object UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy::DeserializeObject(System.Object,System.Type) */, IJsonSerializerStrategy_t1906253538_il2cpp_TypeInfo_var, G_B6_0, L_12, L_13);
		G_B7_0 = L_14;
	}

IL_003e:
	{
		return G_B7_0;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::DeserializeObject(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_DeserializeObject_m4281138332 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		Type_t * L_1 = ___type1;
		RuntimeObject * L_2 = SimpleJson_DeserializeObject_m2354421515(NULL /*static, unused*/, L_0, L_1, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object,UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m3878482345 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, RuntimeObject* ___jsonSerializerStrategy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_m3878482345_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___jsonSerializerStrategy1;
		RuntimeObject * L_2 = ___json0;
		StringBuilder_t * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m1475951719(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_SerializeObject_m1557049914 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___json0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___json0;
		RuntimeObject* L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m3878482345(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::EscapeToJavascriptString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_EscapeToJavascriptString_m491568181 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_EscapeToJavascriptString_m491568181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		String_t* L_0 = ___jsonString0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___jsonString0;
		return L_2;
	}

IL_000d:
	{
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		V_2 = 0;
		goto IL_00f3;
	}

IL_001a:
	{
		String_t* L_4 = ___jsonString0;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00eb;
		}
	}
	{
		String_t* L_9 = ___jsonString0;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_13 = ___jsonString0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		Il2CppChar L_15 = String_get_Chars_m2986988803(L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		Il2CppChar L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m2383614642(L_17, ((int32_t)92), /*hidden argument*/NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_00e6;
	}

IL_0062:
	{
		Il2CppChar L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3452614526, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		goto IL_00e6;
	}

IL_0080:
	{
		Il2CppChar L_22 = V_4;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_009b;
		}
	}
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m2383614642(L_23, ((int32_t)9), /*hidden argument*/NULL);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_00e6;
	}

IL_009b:
	{
		Il2CppChar L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m2383614642(L_26, 8, /*hidden argument*/NULL);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_00e6;
	}

IL_00b5:
	{
		Il2CppChar L_28 = V_4;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00d0;
		}
	}
	{
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m2383614642(L_29, ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_00e6;
	}

IL_00d0:
	{
		Il2CppChar L_31 = V_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m2383614642(L_32, ((int32_t)13), /*hidden argument*/NULL);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00e6:
	{
		goto IL_00f3;
	}

IL_00eb:
	{
		StringBuilder_t * L_34 = V_0;
		Il2CppChar L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m2383614642(L_34, L_35, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		int32_t L_36 = V_2;
		String_t* L_37 = ___jsonString0;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m3847582255(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		return L_40;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_ParseObject_m1274236714 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseObject_m1274236714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		JsonObject_t1327569318 * L_0 = (JsonObject_t1327569318 *)il2cpp_codegen_object_new(JsonObject_t1327569318_il2cpp_TypeInfo_var);
		JsonObject__ctor_m3891241071(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_LookAhead_m2447952977(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_9, (int32_t*)L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_12, (int32_t*)L_13, /*hidden argument*/NULL);
		RuntimeObject* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t3528271667* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		bool* L_17 = ___success2;
		String_t* L_18 = SimpleJson_ParseString_m3397641657(NULL /*static, unused*/, L_15, (int32_t*)L_16, (bool*)L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success2;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success2;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t3528271667* L_21 = ___json0;
		int32_t* L_22 = ___index1;
		int32_t L_23 = SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_21, (int32_t*)L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success2;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		bool* L_28 = ___success2;
		RuntimeObject * L_29 = SimpleJson_ParseValue_m2036273466(NULL /*static, unused*/, L_26, (int32_t*)L_27, (bool*)L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success2;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success2;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (RuntimeObject*)NULL;
	}

IL_008d:
	{
		RuntimeObject* L_32 = V_0;
		String_t* L_33 = V_3;
		RuntimeObject * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_36 = V_0;
		return L_36;
	}
}
// UnityEngine.Advertisements.SimpleJson.JsonArray UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR JsonArray_t3985338818 * SimpleJson_ParseArray_m3075552440 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseArray_m3075552440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonArray_t3985338818 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		JsonArray_t3985338818 * L_0 = (JsonArray_t3985338818 *)il2cpp_codegen_object_new(JsonArray_t3985338818_il2cpp_TypeInfo_var);
		JsonArray__ctor_m2862279773(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t L_5 = SimpleJson_LookAhead_m2447952977(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t3985338818 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t3528271667* L_9 = ___json0;
		int32_t* L_10 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_9, (int32_t*)L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_12, (int32_t*)L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t3528271667* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		bool* L_16 = ___success2;
		RuntimeObject * L_17 = SimpleJson_ParseValue_m2036273466(NULL /*static, unused*/, L_14, (int32_t*)L_15, (bool*)L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t3985338818 *)NULL;
	}

IL_0063:
	{
		JsonArray_t3985338818 * L_19 = V_0;
		RuntimeObject * L_20 = V_3;
		NullCheck(L_19);
		List_1_Add_m3338814081(L_19, L_20, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t3985338818 * L_22 = V_0;
		return L_22;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseValue_m2036273466 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseValue_m2036273466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = SimpleJson_LookAhead_m2447952977(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0095;
			}
			case 3:
			{
				goto IL_005f;
			}
			case 4:
			{
				goto IL_0095;
			}
			case 5:
			{
				goto IL_0095;
			}
			case 6:
			{
				goto IL_0095;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004d;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0077;
			}
			case 11:
			{
				goto IL_0086;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		bool* L_6 = ___success2;
		String_t* L_7 = SimpleJson_ParseString_m3397641657(NULL /*static, unused*/, L_4, (int32_t*)L_5, (bool*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t3528271667* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		bool* L_10 = ___success2;
		RuntimeObject * L_11 = SimpleJson_ParseNumber_m2532261654(NULL /*static, unused*/, L_8, (int32_t*)L_9, (bool*)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		bool* L_14 = ___success2;
		RuntimeObject* L_15 = SimpleJson_ParseObject_m1274236714(NULL /*static, unused*/, L_12, (int32_t*)L_13, (bool*)L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		bool* L_18 = ___success2;
		JsonArray_t3985338818 * L_19 = SimpleJson_ParseArray_m3075552440(NULL /*static, unused*/, L_16, (int32_t*)L_17, (bool*)L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t3528271667* L_20 = ___json0;
		int32_t* L_21 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_20, (int32_t*)L_21, /*hidden argument*/NULL);
		bool L_22 = ((bool)1);
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t3528271667* L_24 = ___json0;
		int32_t* L_25 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_24, (int32_t*)L_25, /*hidden argument*/NULL);
		bool L_26 = ((bool)0);
		RuntimeObject * L_27 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t3528271667* L_28 = ___json0;
		int32_t* L_29 = ___index1;
		SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_28, (int32_t*)L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success2;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ParseString_m3397641657 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseString_m3397641657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		SimpleJson_EatWhitespace_m1817791116(NULL /*static, unused*/, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		int32_t* L_5 = ___index1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_2 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_2;
		NullCheck(L_3);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		V_3 = (bool)0;
		goto IL_0237;
	}

IL_0025:
	{
		int32_t* L_10 = ___index1;
		CharU5BU5D_t3528271667* L_11 = ___json0;
		NullCheck(L_11);
		if ((!(((uint32_t)(*((int32_t*)L_10))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_023d;
	}

IL_0034:
	{
		CharU5BU5D_t3528271667* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		int32_t* L_14 = ___index1;
		int32_t L_15 = (*((int32_t*)L_14));
		V_2 = L_15;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		NullCheck(L_12);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		Il2CppChar L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004f;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_023d;
	}

IL_004f:
	{
		Il2CppChar L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_022f;
		}
	}
	{
		int32_t* L_21 = ___index1;
		CharU5BU5D_t3528271667* L_22 = ___json0;
		NullCheck(L_22);
		if ((!(((uint32_t)(*((int32_t*)L_21))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_023d;
	}

IL_0066:
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		int32_t* L_25 = ___index1;
		int32_t L_26 = (*((int32_t*)L_25));
		V_2 = L_26;
		*((int32_t*)(L_24)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_2;
		NullCheck(L_23);
		int32_t L_28 = L_27;
		uint16_t L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		Il2CppChar L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_Append_m2383614642(L_31, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0088:
	{
		Il2CppChar L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_009e;
		}
	}
	{
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_Append_m2383614642(L_33, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_009e:
	{
		Il2CppChar L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_Append_m2383614642(L_35, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00b4:
	{
		Il2CppChar L_36 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00c9;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, 8, /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00c9:
	{
		Il2CppChar L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00df;
		}
	}
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m2383614642(L_39, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00df:
	{
		Il2CppChar L_40 = V_1;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00f5;
		}
	}
	{
		StringBuilder_t * L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_00f5:
	{
		Il2CppChar L_42 = V_1;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t * L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_Append_m2383614642(L_43, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_010b:
	{
		Il2CppChar L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t * L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_Append_m2383614642(L_45, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022a;
	}

IL_0121:
	{
		Il2CppChar L_46 = V_1;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_47 = ___json0;
		NullCheck(L_47);
		int32_t* L_48 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))), (int32_t)(*((int32_t*)L_48))));
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) < ((int32_t)4)))
		{
			goto IL_0225;
		}
	}
	{
		bool* L_50 = ___success2;
		CharU5BU5D_t3528271667* L_51 = ___json0;
		int32_t* L_52 = ___index1;
		String_t* L_53 = String_CreateString_m860434552(NULL, L_51, (*((int32_t*)L_52)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_54 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_55 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_53, ((int32_t)515), L_54, (uint32_t*)(&V_5), /*hidden argument*/NULL);
		bool L_56 = L_55;
		V_6 = L_56;
		*((int8_t*)(L_50)) = (int8_t)L_56;
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_0165;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_58;
	}

IL_0165:
	{
		uint32_t L_59 = V_5;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_59))))
		{
			goto IL_020c;
		}
	}
	{
		uint32_t L_60 = V_5;
		if ((!(((uint32_t)L_60) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t* L_61 = ___index1;
		int32_t* L_62 = ___index1;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_62)), (int32_t)4));
		CharU5BU5D_t3528271667* L_63 = ___json0;
		NullCheck(L_63);
		int32_t* L_64 = ___index1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))), (int32_t)(*((int32_t*)L_64))));
		int32_t L_65 = V_4;
		if ((((int32_t)L_65) < ((int32_t)6)))
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t3528271667* L_66 = ___json0;
		int32_t* L_67 = ___index1;
		String_t* L_68 = String_CreateString_m860434552(NULL, L_66, (*((int32_t*)L_67)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m920492651(NULL /*static, unused*/, L_68, _stringLiteral3455432692, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0203;
		}
	}
	{
		CharU5BU5D_t3528271667* L_70 = ___json0;
		int32_t* L_71 = ___index1;
		String_t* L_72 = String_CreateString_m860434552(NULL, L_70, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_71)), (int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_73 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_74 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_72, ((int32_t)515), L_73, (uint32_t*)(&V_7), /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_75 = V_7;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_75))))
		{
			goto IL_0203;
		}
	}
	{
		uint32_t L_76 = V_7;
		if ((!(((uint32_t)L_76) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t * L_77 = V_0;
		uint32_t L_78 = V_5;
		NullCheck(L_77);
		StringBuilder_Append_m2383614642(L_77, (((int32_t)((uint16_t)L_78))), /*hidden argument*/NULL);
		StringBuilder_t * L_79 = V_0;
		uint32_t L_80 = V_7;
		NullCheck(L_79);
		StringBuilder_Append_m2383614642(L_79, (((int32_t)((uint16_t)L_80))), /*hidden argument*/NULL);
		int32_t* L_81 = ___index1;
		int32_t* L_82 = ___index1;
		*((int32_t*)(L_81)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_82)), (int32_t)6));
		goto IL_0237;
	}

IL_0203:
	{
		bool* L_83 = ___success2;
		*((int8_t*)(L_83)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_84;
	}

IL_020c:
	{
		StringBuilder_t * L_85 = V_0;
		uint32_t L_86 = V_5;
		String_t* L_87 = SimpleJson_ConvertFromUtf32_m3524675725(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m1965104174(L_85, L_87, /*hidden argument*/NULL);
		int32_t* L_88 = ___index1;
		int32_t* L_89 = ___index1;
		*((int32_t*)(L_88)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_89)), (int32_t)4));
		goto IL_022a;
	}

IL_0225:
	{
		goto IL_023d;
	}

IL_022a:
	{
		goto IL_0237;
	}

IL_022f:
	{
		StringBuilder_t * L_90 = V_0;
		Il2CppChar L_91 = V_1;
		NullCheck(L_90);
		StringBuilder_Append_m2383614642(L_90, L_91, /*hidden argument*/NULL);
	}

IL_0237:
	{
		bool L_92 = V_3;
		if (!L_92)
		{
			goto IL_0025;
		}
	}

IL_023d:
	{
		bool L_93 = V_3;
		if (L_93)
		{
			goto IL_0248;
		}
	}
	{
		bool* L_94 = ___success2;
		*((int8_t*)(L_94)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_0248:
	{
		StringBuilder_t * L_95 = V_0;
		NullCheck(L_95);
		String_t* L_96 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		return L_96;
	}
}
// System.String UnityEngine.Advertisements.SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SimpleJson_ConvertFromUtf32_m3524675725 (RuntimeObject * __this /* static, unused */, int32_t ___utf320, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ConvertFromUtf32_m3524675725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___utf320;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf320;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_2, _stringLiteral1778249823, _stringLiteral2354794577, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SimpleJson_ConvertFromUtf32_m3524675725_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_3 = ___utf320;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf320;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral1778249823, _stringLiteral4034890030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SimpleJson_ConvertFromUtf32_m3524675725_RuntimeMethod_var);
	}

IL_0048:
	{
		int32_t L_6 = ___utf320;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf320;
		String_t* L_8 = String_CreateString_m1262864254(NULL, (((int32_t)((uint16_t)L_7))), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf320;
		___utf320 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65536)));
		CharU5BU5D_t3528271667* L_10 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_11 = L_10;
		int32_t L_12 = ___utf320;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)10))), (int32_t)((int32_t)55296)))))));
		CharU5BU5D_t3528271667* L_13 = L_11;
		int32_t L_14 = ___utf320;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_14%(int32_t)((int32_t)1024))), (int32_t)((int32_t)56320)))))));
		String_t* L_15 = String_CreateString_m2818852475(NULL, L_13, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Object UnityEngine.Advertisements.SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SimpleJson_ParseNumber_m2532261654 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, bool* ___success2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_ParseNumber_m2532261654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	String_t* V_3 = NULL;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_m1817791116(NULL /*static, unused*/, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m2808520754(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)(*((int32_t*)L_6)))), (int32_t)1));
		CharU5BU5D_t3528271667* L_7 = ___json0;
		int32_t* L_8 = ___index1;
		int32_t L_9 = V_1;
		String_t* L_10 = String_CreateString_m860434552(NULL, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1298810678(L_11, _stringLiteral3452614530, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m1298810678(L_13, _stringLiteral3452614587, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success2;
		CharU5BU5D_t3528271667* L_16 = ___json0;
		int32_t* L_17 = ___index1;
		int32_t L_18 = V_1;
		String_t* L_19 = String_CreateString_m860434552(NULL, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_20 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m623190659(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (double*)(&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		RuntimeObject * L_24 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success2;
		CharU5BU5D_t3528271667* L_26 = ___json0;
		int32_t* L_27 = ___index1;
		int32_t L_28 = V_1;
		String_t* L_29 = String_CreateString_m860434552(NULL, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_30 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m3606398488(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (int64_t*)(&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index1;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		RuntimeObject * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_GetLastIndexOfNumber_m2808520754 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_GetLastIndexOfNumber_m2808520754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral2206812729);
		int32_t L_5 = String_IndexOf_m363431711(_stringLiteral2206812729, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_EatWhitespace_m1817791116 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_EatWhitespace_m1817791116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = (*((int32_t*)L_1));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(_stringLiteral352322198);
		int32_t L_4 = String_IndexOf_m363431711(_stringLiteral352322198, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_5 = ___index1;
		int32_t* L_6 = ___index1;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_6)), (int32_t)1));
	}

IL_0024:
	{
		int32_t* L_7 = ___index1;
		CharU5BU5D_t3528271667* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)(*((int32_t*)L_7))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_LookAhead_m2447952977 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t3528271667* L_1 = ___json0;
		int32_t L_2 = SimpleJson_NextToken_m512385085(NULL /*static, unused*/, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Advertisements.SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t SimpleJson_NextToken_m512385085 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___json0, int32_t* ___index1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t3528271667* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		SimpleJson_EatWhitespace_m1817791116(NULL /*static, unused*/, L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		CharU5BU5D_t3528271667* L_3 = ___json0;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t3528271667* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = (*((int32_t*)L_5));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		int32_t* L_8 = ___index1;
		int32_t* L_9 = ___index1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_9)), (int32_t)1));
		Il2CppChar L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_00a6;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_00a6;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a6;
			}
			case 11:
			{
				goto IL_00a6;
			}
			case 12:
			{
				goto IL_00a6;
			}
			case 13:
			{
				goto IL_00a6;
			}
			case 14:
			{
				goto IL_00a8;
			}
		}
	}

IL_0063:
	{
		Il2CppChar L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}

IL_0078:
	{
		Il2CppChar L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009a;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_009c;
			}
		}
	}

IL_008d:
	{
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00aa;
	}

IL_009a:
	{
		return 1;
	}

IL_009c:
	{
		return 2;
	}

IL_009e:
	{
		return 3;
	}

IL_00a0:
	{
		return 4;
	}

IL_00a2:
	{
		return 6;
	}

IL_00a4:
	{
		return 7;
	}

IL_00a6:
	{
		return 8;
	}

IL_00a8:
	{
		return 5;
	}

IL_00aa:
	{
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_15)), (int32_t)1));
		CharU5BU5D_t3528271667* L_16 = ___json0;
		NullCheck(L_16);
		int32_t* L_17 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))), (int32_t)(*((int32_t*)L_17))));
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		NullCheck(L_19);
		int32_t L_21 = (*((int32_t*)L_20));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)1));
		uint16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_28)), (int32_t)2));
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_32)), (int32_t)3));
		uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0106;
		}
	}
	{
		CharU5BU5D_t3528271667* L_35 = ___json0;
		int32_t* L_36 = ___index1;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_36)), (int32_t)4));
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t* L_39 = ___index1;
		int32_t* L_40 = ___index1;
		*((int32_t*)(L_39)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_40)), (int32_t)5));
		return ((int32_t)10);
	}

IL_0106:
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)4)))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_42 = ___json0;
		int32_t* L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = (*((int32_t*)L_43));
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_47)), (int32_t)1));
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_50 = ___json0;
		int32_t* L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_51)), (int32_t)2));
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0148;
		}
	}
	{
		CharU5BU5D_t3528271667* L_54 = ___json0;
		int32_t* L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_55)), (int32_t)3));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t* L_58 = ___index1;
		int32_t* L_59 = ___index1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_59)), (int32_t)4));
		return ((int32_t)9);
	}

IL_0148:
	{
		int32_t L_60 = V_1;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_61 = ___json0;
		int32_t* L_62 = ___index1;
		NullCheck(L_61);
		int32_t L_63 = (*((int32_t*)L_62));
		uint16_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_66)), (int32_t)1));
		uint16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_70)), (int32_t)2));
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_74)), (int32_t)3));
		uint16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t* L_77 = ___index1;
		int32_t* L_78 = ___index1;
		*((int32_t*)(L_77)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_78)), (int32_t)4));
		return ((int32_t)11);
	}

IL_018a:
	{
		return 0;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeValue(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeValue_m1475951719 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject * ___value1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeValue_m1475951719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	StringBuilder_t * G_B13_0 = NULL;
	StringBuilder_t * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	StringBuilder_t * G_B14_1 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject * L_0 = ___value1;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t * L_3 = ___builder2;
		bool L_4 = SimpleJson_SerializeString_m1870114522(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		RuntimeObject * L_5 = ___value1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_7 = ___jsonSerializerStrategy0;
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t * L_12 = ___builder2;
		bool L_13 = SimpleJson_SerializeObject_m481844464(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		RuntimeObject * L_14 = ___value1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDictionary_2_t96558379_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_16 = ___jsonSerializerStrategy0;
		RuntimeObject* L_17 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t * L_21 = ___builder2;
		bool L_22 = SimpleJson_SerializeObject_m481844464(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		RuntimeObject * L_23 = ___value1;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IEnumerable_t1941168011_il2cpp_TypeInfo_var));
		RuntimeObject* L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_25 = ___jsonSerializerStrategy0;
		RuntimeObject* L_26 = V_4;
		StringBuilder_t * L_27 = ___builder2;
		bool L_28 = SimpleJson_SerializeArray_m2078464785(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		RuntimeObject * L_29 = ___value1;
		bool L_30 = SimpleJson_IsNumeric_m2920591434(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject * L_31 = ___value1;
		StringBuilder_t * L_32 = ___builder2;
		bool L_33 = SimpleJson_SerializeNumber_m2117551856(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		RuntimeObject * L_34 = ___value1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_34, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t * L_35 = ___builder2;
		RuntimeObject * L_36 = ___value1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox(L_36, Boolean_t97287965_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = _stringLiteral4002445229;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = _stringLiteral3875954633;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m1965104174(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		RuntimeObject * L_37 = ___value1;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t * L_38 = ___builder2;
		NullCheck(L_38);
		StringBuilder_Append_m1965104174(L_38, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		RuntimeObject* L_39 = ___jsonSerializerStrategy0;
		RuntimeObject * L_40 = ___value1;
		NullCheck(L_39);
		bool L_41 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t1906253538_il2cpp_TypeInfo_var, L_39, L_40, (RuntimeObject **)(&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		RuntimeObject* L_43 = ___jsonSerializerStrategy0;
		RuntimeObject * L_44 = V_5;
		StringBuilder_t * L_45 = ___builder2;
		SimpleJson_SerializeValue_m1475951719(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeObject(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeObject_m481844464 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___keys1, RuntimeObject* ___values2, StringBuilder_t * ___builder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeObject_m481844464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	{
		StringBuilder_t * L_0 = ___builder3;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___keys1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___values2;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = (bool)1;
		goto IL_008d;
	}

IL_0021:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder3;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3452614532, /*hidden argument*/NULL);
	}

IL_0042:
	{
		RuntimeObject * L_11 = V_3;
		V_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t * L_14 = ___builder3;
		SimpleJson_SerializeString_m1870114522(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___jsonSerializerStrategy0;
		RuntimeObject * L_16 = V_4;
		StringBuilder_t * L_17 = ___builder3;
		bool L_18 = SimpleJson_SerializeValue_m1475951719(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		StringBuilder_t * L_19 = ___builder3;
		NullCheck(L_19);
		StringBuilder_Append_m1965104174(L_19, _stringLiteral3452614550, /*hidden argument*/NULL);
		RuntimeObject* L_20 = ___jsonSerializerStrategy0;
		RuntimeObject * L_21 = V_4;
		StringBuilder_t * L_22 = ___builder3;
		bool L_23 = SimpleJson_SerializeValue_m1475951719(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		V_2 = (bool)0;
	}

IL_008d:
	{
		RuntimeObject* L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t * L_28 = ___builder3;
		NullCheck(L_28);
		StringBuilder_Append_m1965104174(L_28, _stringLiteral3452614611, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeArray(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeArray_m2078464785 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___jsonSerializerStrategy0, RuntimeObject* ___anArray1, StringBuilder_t * ___builder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeArray_m2078464785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = ___builder2;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614645, /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray1;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t * L_6 = ___builder2;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3452614532, /*hidden argument*/NULL);
		}

IL_0033:
		{
			RuntimeObject* L_7 = ___jsonSerializerStrategy0;
			RuntimeObject * L_8 = V_1;
			StringBuilder_t * L_9 = ___builder2;
			bool L_10 = SimpleJson_SerializeValue_m1475951719(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x7D, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = (bool)0;
		}

IL_0049:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_4 = L_14;
			if (!L_14)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			RuntimeObject* L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_15);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		StringBuilder_t * L_16 = ___builder2;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3452614643, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_007d:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeString_m1870114522 (RuntimeObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeString_m1870114522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		StringBuilder_t * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_1 = ___aString0;
		NullCheck(L_1);
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t3528271667* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_8 = ___builder1;
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t * L_21 = ___builder1;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00d8:
	{
		int32_t L_24 = V_1;
		CharU5BU5D_t3528271667* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3452614526, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_SerializeNumber_m2117551856 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___number0, StringBuilder_t * ___builder1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_SerializeNumber_m2117551856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t2948259380  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		RuntimeObject * L_0 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_1 = ___builder1;
		RuntimeObject * L_2 = ___number0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t3736567304_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m623640997((int64_t*)(&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1965104174(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		RuntimeObject * L_5 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_6 = ___builder1;
		RuntimeObject * L_7 = ___number0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox(L_7, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_8 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m2623377370((uint64_t*)(&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1965104174(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		RuntimeObject * L_10 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t * L_11 = ___builder1;
		RuntimeObject * L_12 = ___number0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_t2950945753_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1760361794((int32_t*)(&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		RuntimeObject * L_15 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t * L_16 = ___builder1;
		RuntimeObject * L_17 = ___number0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m4293943134((uint32_t*)(&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		RuntimeObject * L_20 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_21 = ___builder1;
		RuntimeObject * L_22 = ___number0;
		V_4 = ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_22, Decimal_t2948259380_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_23 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m3653216873((Decimal_t2948259380 *)(&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m1965104174(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		RuntimeObject * L_25 = ___number0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t * L_26 = ___builder1;
		RuntimeObject * L_27 = ___number0;
		V_5 = ((*(float*)((float*)UnBox(L_27, Single_t1397266774_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m3107811250((float*)(&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t * L_30 = ___builder1;
		RuntimeObject * L_31 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_32 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m4017511472(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t4157843068 * L_34 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1051753975((double*)(&V_6), _stringLiteral3452614606, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Advertisements.SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SimpleJson_IsNumeric_m2920591434 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_IsNumeric_m2920591434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, SByte_t1669577662_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Byte_t1134296376_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int16_t2552820387_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject * L_3 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		RuntimeObject * L_4 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)1;
	}

IL_0041:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)1;
	}

IL_005b:
	{
		RuntimeObject * L_7 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)1;
	}

IL_0068:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Single_t1397266774_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)1;
	}

IL_0075:
	{
		RuntimeObject * L_9 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)1;
	}

IL_0082:
	{
		RuntimeObject * L_10 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Decimal_t2948259380_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)1;
	}

IL_008f:
	{
		return (bool)0;
	}
}
// UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_CurrentJsonSerializerStrategy_m2903131593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ((SimpleJson_t791838946_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t791838946_il2cpp_TypeInfo_var))->get__currentJsonSerializerStrategy_13();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t3624702326 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m1523450673(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t3624702326 * L_3 = L_2;
		((SimpleJson_t791838946_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t791838946_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_13(L_3);
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Void UnityEngine.Advertisements.SimpleJson.SimpleJson::set_CurrentJsonSerializerStrategy(UnityEngine.Advertisements.SimpleJson.IJsonSerializerStrategy)
extern "C" IL2CPP_METHOD_ATTR void SimpleJson_set_CurrentJsonSerializerStrategy_m3827067284 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_set_CurrentJsonSerializerStrategy_m3827067284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		((SimpleJson_t791838946_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t791838946_il2cpp_TypeInfo_var))->set__currentJsonSerializerStrategy_13(L_0);
		return;
	}
}
// UnityEngine.Advertisements.SimpleJson.PocoJsonSerializerStrategy UnityEngine.Advertisements.SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" IL2CPP_METHOD_ATTR PocoJsonSerializerStrategy_t3624702326 * SimpleJson_get_PocoJsonSerializerStrategy_m1523450673 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleJson_get_PocoJsonSerializerStrategy_m1523450673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PocoJsonSerializerStrategy_t3624702326 * G_B2_0 = NULL;
	PocoJsonSerializerStrategy_t3624702326 * G_B1_0 = NULL;
	{
		PocoJsonSerializerStrategy_t3624702326 * L_0 = ((SimpleJson_t791838946_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t791838946_il2cpp_TypeInfo_var))->get__pocoJsonSerializerStrategy_14();
		PocoJsonSerializerStrategy_t3624702326 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t3624702326 * L_2 = (PocoJsonSerializerStrategy_t3624702326 *)il2cpp_codegen_object_new(PocoJsonSerializerStrategy_t3624702326_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m1974455660(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t3624702326 * L_3 = L_2;
		((SimpleJson_t791838946_StaticFields*)il2cpp_codegen_static_fields_for(SimpleJson_t791838946_il2cpp_TypeInfo_var))->set__pocoJsonSerializerStrategy_14(L_3);
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
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
// System.Void UnityEngine.Advertisements.StartEventArgs::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StartEventArgs__ctor_m1521341003 (StartEventArgs_t4291826435 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StartEventArgs__ctor_m1521341003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		StartEventArgs_set_placementId_m632111893(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Advertisements.StartEventArgs::get_placementId()
extern "C" IL2CPP_METHOD_ATTR String_t* StartEventArgs_get_placementId_m3925703442 (StartEventArgs_t4291826435 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CplacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.StartEventArgs::set_placementId(System.String)
extern "C" IL2CPP_METHOD_ATTR void StartEventArgs_set_placementId_m632111893 (StartEventArgs_t4291826435 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_m1419529813 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnReady_m764226071 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnReady_m1659196031 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnStart_m3534057703 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnStart_m2140917651 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnFinish_m1575365808 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_add_OnFinish_m1575365808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnFinish_m2418915001 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_remove_OnFinish_m2418915001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_0();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_OnError_m10453347 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_OnError_m947805258 (UnsupportedPlatform_t2036049172 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool UnsupportedPlatform_get_isInitialized_m3696729222 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool UnsupportedPlatform_get_isSupported_m1312723691 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String UnityEngine.Advertisements.UnsupportedPlatform::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_get_version_m3206956595 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::get_debugMode()
extern "C" IL2CPP_METHOD_ATTR bool UnsupportedPlatform_get_debugMode_m1924332595 (UnsupportedPlatform_t2036049172 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::set_debugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_set_debugMode_m1030255308 (UnsupportedPlatform_t2036049172 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m2351467844 (UnsupportedPlatform_t2036049172 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.UnsupportedPlatform::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsReady_m721141642 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.UnsupportedPlatform::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsupportedPlatform_GetPlacementState_m3500418431 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_m236483508 (UnsupportedPlatform_t2036049172 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsupportedPlatform_Show_m236483508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_0();
		V_0 = L_0;
		EventHandler_1_t908338235 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		EventHandler_1_t908338235 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		FinishEventArgs_t2984178802 * L_4 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_4, L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m3162226611(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_m3305125483 (UnsupportedPlatform_t2036049172 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m2855172723(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsReady_m2855172723(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m3621980989(int64_t ___rawError0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	Platform_UnityAdsDidError_m3621980989(NULL, ___rawError0, ____message1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m971319454(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidStart_m971319454(NULL, ____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m4137038415(char* ___placementId0, int64_t ___rawShowResult1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	Platform_UnityAdsDidFinish_m4137038415(NULL, ____placementId0_unmarshaled, ___rawShowResult1, NULL);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__ctor_m3887152146 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_m3887152146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_Instance_0(__this);
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2428876507, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t1113636619 * L_1 = V_1;
		NullCheck(L_1);
		Object_set_hideFlags_m1648752846(L_1, ((int32_t)63), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = V_1;
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		CallbackExecutor_t363496179 * L_4 = GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972(L_3, /*hidden argument*/GameObject_AddComponent_TisCallbackExecutor_t363496179_m2253360972_RuntimeMethod_var);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_s_CallbackExecutor_1(L_4);
		GameObject_t1113636619 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		unityAdsReady_t96934738 * L_6 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		intptr_t L_7 = (intptr_t)Platform_UnityAdsReady_m2855172723_RuntimeMethod_var;
		unityAdsReady_t96934738 * L_8 = (unityAdsReady_t96934738 *)il2cpp_codegen_object_new(unityAdsReady_t96934738_il2cpp_TypeInfo_var);
		unityAdsReady__ctor_m3699019508(L_8, NULL, L_7, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_8);
	}

IL_004a:
	{
		unityAdsReady_t96934738 * L_9 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		Platform_UnityAdsEngineSetReadyCallback_m572408946(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		unityAdsDidError_t1993223595 * L_10 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_11 = (intptr_t)Platform_UnityAdsDidError_m3621980989_RuntimeMethod_var;
		unityAdsDidError_t1993223595 * L_12 = (unityAdsDidError_t1993223595 *)il2cpp_codegen_object_new(unityAdsDidError_t1993223595_il2cpp_TypeInfo_var);
		unityAdsDidError__ctor_m4120111418(L_12, NULL, L_11, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_12);
	}

IL_006c:
	{
		unityAdsDidError_t1993223595 * L_13 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		Platform_UnityAdsEngineSetDidErrorCallback_m2717679206(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		unityAdsDidStart_t1058412932 * L_14 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		if (L_14)
		{
			goto IL_008e;
		}
	}
	{
		intptr_t L_15 = (intptr_t)Platform_UnityAdsDidStart_m971319454_RuntimeMethod_var;
		unityAdsDidStart_t1058412932 * L_16 = (unityAdsDidStart_t1058412932 *)il2cpp_codegen_object_new(unityAdsDidStart_t1058412932_il2cpp_TypeInfo_var);
		unityAdsDidStart__ctor_m610751912(L_16, NULL, L_15, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_8(L_16);
	}

IL_008e:
	{
		unityAdsDidStart_t1058412932 * L_17 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_8();
		Platform_UnityAdsEngineSetDidStartCallback_m104356378(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		unityAdsDidFinish_t3747416149 * L_18 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		if (L_18)
		{
			goto IL_00b0;
		}
	}
	{
		intptr_t L_19 = (intptr_t)Platform_UnityAdsDidFinish_m4137038415_RuntimeMethod_var;
		unityAdsDidFinish_t3747416149 * L_20 = (unityAdsDidFinish_t3747416149 *)il2cpp_codegen_object_new(unityAdsDidFinish_t3747416149_il2cpp_TypeInfo_var);
		unityAdsDidFinish__ctor_m3115871303(L_20, NULL, L_19, /*hidden argument*/NULL);
		((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_9(L_20);
	}

IL_00b0:
	{
		unityAdsDidFinish_t3747416149 * L_21 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_9();
		Platform_UnityAdsEngineSetDidFinishCallback_m1054131631(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL UnityAdsEngineInitialize(char*, int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineInitialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineInitialize_m3450854254 (RuntimeObject * __this /* static, unused */, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineInitialize)(____gameId0_marshaled, static_cast<int32_t>(___testMode1));

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsEngineShow(char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineShow(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineShow_m1525385135 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineShow)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineGetDebugMode();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetDebugMode()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineGetDebugMode_m559010788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetDebugMode)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDebugMode(int32_t);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDebugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDebugMode_m2043700802 (RuntimeObject * __this /* static, unused */, bool ___debugMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDebugMode)(static_cast<int32_t>(___debugMode0));

}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsSupported();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsSupported()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsSupported_m2832327113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsSupported)();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsReady(char*);
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsReady_m1204345331 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
extern "C" int64_t DEFAULT_CALL UnityAdsEngineGetPlacementState(char*);
// System.Int64 UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int64_t Platform_UnityAdsEngineGetPlacementState_m763487549 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetPlacementState)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return returnValue;
}
extern "C" char* DEFAULT_CALL UnityAdsEngineGetVersion();
// System.String UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineGetVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsEngineGetVersion_m45362240 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL UnityAdsEngineIsInitialized();
// System.Boolean UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineIsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_UnityAdsEngineIsInitialized_m3090894253 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsEngineIsInitialized)();

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL UnityAdsEngineSetMetaData(char*, char*);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetMetaData(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetMetaData_m1955283902 (RuntimeObject * __this /* static, unused */, String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetReadyCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetReadyCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsReady)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetReadyCallback_m572408946 (RuntimeObject * __this /* static, unused */, unityAdsReady_t96934738 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetReadyCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidErrorCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidErrorCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidError)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidErrorCallback_m2717679206 (RuntimeObject * __this /* static, unused */, unityAdsDidError_t1993223595 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidErrorCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidStartCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidStartCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidStartCallback_m104356378 (RuntimeObject * __this /* static, unused */, unityAdsDidStart_t1058412932 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidStartCallback)(____callback0_marshaled);

}
extern "C" void DEFAULT_CALL UnityAdsEngineSetDidFinishCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsEngineSetDidFinishCallback(UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsEngineSetDidFinishCallback_m1054131631 (RuntimeObject * __this /* static, unused */, unityAdsDidFinish_t3747416149 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsEngineSetDidFinishCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsReady_m2855172723 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsReady_m2855172723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * V_0 = NULL;
	{
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_0 = (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 *)il2cpp_codegen_object_new(U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718_il2cpp_TypeInfo_var);
		U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2768214265 * L_5 = L_4->get_OnReady_2();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2768214265 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidError(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidError_m3621980989 (RuntimeObject * __this /* static, unused */, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidError_m3621980989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * V_0 = NULL;
	{
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_0 = (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 *)il2cpp_codegen_object_new(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617_il2cpp_TypeInfo_var);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_1 = V_0;
		int64_t L_2 = ___rawError0;
		NullCheck(L_1);
		L_1->set_rawError_1(L_2);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_3 = V_0;
		String_t* L_4 = ___message1;
		NullCheck(L_3);
		L_3->set_message_2(L_4);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_5 = V_0;
		Platform_t1647901813 * L_6 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_6);
		EventHandler_1_t177306446 * L_7 = L_6->get_OnError_5();
		NullCheck(L_5);
		L_5->set_handler_0(L_7);
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_8 = V_0;
		NullCheck(L_8);
		EventHandler_1_t177306446 * L_9 = L_8->get_handler_0();
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		CallbackExecutor_t363496179 * L_10 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * L_11 = V_0;
		intptr_t L_12 = (intptr_t)U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_RuntimeMethod_var;
		Action_1_t535963774 * L_13 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_13, L_11, L_12, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_10);
		CallbackExecutor_Post_m2417625912(L_10, L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidStart(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidStart_m971319454 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidStart_m971319454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * V_0 = NULL;
	{
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_0 = (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 *)il2cpp_codegen_object_new(U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642_il2cpp_TypeInfo_var);
		U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t2215985868 * L_5 = L_4->get_OnStart_3();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t2215985868 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		CallbackExecutor_t363496179 * L_8 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_RuntimeMethod_var;
		Action_1_t535963774 * L_11 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_11, L_9, L_10, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_8);
		CallbackExecutor_Post_m2417625912(L_8, L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::UnityAdsDidFinish(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Platform_UnityAdsDidFinish_m4137038415 (RuntimeObject * __this /* static, unused */, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_UnityAdsDidFinish_m4137038415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * V_0 = NULL;
	U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * V_1 = NULL;
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_0 = (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_1(L_2);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_3 = V_0;
		Platform_t1647901813 * L_4 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		NullCheck(L_4);
		EventHandler_1_t908338235 * L_5 = L_4->get_OnFinish_4();
		NullCheck(L_3);
		L_3->set_handler_0(L_5);
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_6 = V_0;
		NullCheck(L_6);
		EventHandler_1_t908338235 * L_7 = L_6->get_handler_0();
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_8 = (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 *)il2cpp_codegen_object_new(U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549_il2cpp_TypeInfo_var);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_9 = V_1;
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set_U3CU3Ef__refU243_1(L_10);
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_11 = V_1;
		int64_t L_12 = ___rawShowResult1;
		NullCheck(L_11);
		L_11->set_showResult_0((((int32_t)((int32_t)L_12))));
		CallbackExecutor_t363496179 * L_13 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_CallbackExecutor_1();
		U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * L_14 = V_1;
		intptr_t L_15 = (intptr_t)U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_RuntimeMethod_var;
		Action_1_t535963774 * L_16 = (Action_1_t535963774 *)il2cpp_codegen_object_new(Action_1_t535963774_il2cpp_TypeInfo_var);
		Action_1__ctor_m246329423(L_16, L_14, L_15, /*hidden argument*/Action_1__ctor_m246329423_RuntimeMethod_var);
		NullCheck(L_13);
		CallbackExecutor_Post_m2417625912(L_13, L_16, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnReady_m2575728458 (Platform_t1647901813 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnReady_m2575728458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_2();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>((EventHandler_1_t2768214265 **)L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnReady(System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnReady_m502422865 (Platform_t1647901813 * __this, EventHandler_1_t2768214265 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnReady_m502422865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2768214265 * V_0 = NULL;
	EventHandler_1_t2768214265 * V_1 = NULL;
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_OnReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2768214265 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2768214265 ** L_2 = __this->get_address_of_OnReady_2();
		EventHandler_1_t2768214265 * L_3 = V_1;
		EventHandler_1_t2768214265 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2768214265 * L_6 = V_0;
		EventHandler_1_t2768214265 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2768214265 *>((EventHandler_1_t2768214265 **)L_2, ((EventHandler_1_t2768214265 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2768214265_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2768214265 * L_8 = V_0;
		EventHandler_1_t2768214265 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2768214265 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2768214265 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnStart_m1356999936 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnStart_m1356999936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnStart_m3220674594 (Platform_t1647901813 * __this, EventHandler_1_t2215985868 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnStart_m3220674594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2215985868 * V_0 = NULL;
	EventHandler_1_t2215985868 * V_1 = NULL;
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_OnStart_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2215985868 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2215985868 ** L_2 = __this->get_address_of_OnStart_3();
		EventHandler_1_t2215985868 * L_3 = V_1;
		EventHandler_1_t2215985868 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t2215985868 * L_6 = V_0;
		EventHandler_1_t2215985868 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2215985868 *>((EventHandler_1_t2215985868 **)L_2, ((EventHandler_1_t2215985868 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t2215985868_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2215985868 * L_8 = V_0;
		EventHandler_1_t2215985868 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2215985868 *)L_8) == ((RuntimeObject*)(EventHandler_1_t2215985868 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m568677360 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnFinish_m568677360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_m3829156301 (Platform_t1647901813 * __this, EventHandler_1_t908338235 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnFinish_m3829156301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t908338235 * V_0 = NULL;
	EventHandler_1_t908338235 * V_1 = NULL;
	{
		EventHandler_1_t908338235 * L_0 = __this->get_OnFinish_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t908338235 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t908338235 ** L_2 = __this->get_address_of_OnFinish_4();
		EventHandler_1_t908338235 * L_3 = V_1;
		EventHandler_1_t908338235 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t908338235 * L_6 = V_0;
		EventHandler_1_t908338235 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t908338235 *>((EventHandler_1_t908338235 **)L_2, ((EventHandler_1_t908338235 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t908338235_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t908338235 * L_8 = V_0;
		EventHandler_1_t908338235 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t908338235 *)L_8) == ((RuntimeObject*)(EventHandler_1_t908338235 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::add_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_add_OnError_m2772632147 (Platform_t1647901813 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_OnError_m2772632147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_5();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>((EventHandler_1_t177306446 **)L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::remove_OnError(System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>)
extern "C" IL2CPP_METHOD_ATTR void Platform_remove_OnError_m4035102861 (Platform_t1647901813 * __this, EventHandler_1_t177306446 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_OnError_m4035102861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t177306446 * V_0 = NULL;
	EventHandler_1_t177306446 * V_1 = NULL;
	{
		EventHandler_1_t177306446 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t177306446 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t177306446 ** L_2 = __this->get_address_of_OnError_5();
		EventHandler_1_t177306446 * L_3 = V_1;
		EventHandler_1_t177306446 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t177306446 * L_6 = V_0;
		EventHandler_1_t177306446 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t177306446 *>((EventHandler_1_t177306446 **)L_2, ((EventHandler_1_t177306446 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t177306446_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t177306446 * L_8 = V_0;
		EventHandler_1_t177306446 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t177306446 *)L_8) == ((RuntimeObject*)(EventHandler_1_t177306446 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isInitialized_m2102110254 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Platform_UnityAdsEngineIsInitialized_m3090894253(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_isSupported_m2519758644 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Platform_UnityAdsEngineIsSupported_m2832327113(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.iOS.Platform::get_version()
extern "C" IL2CPP_METHOD_ATTR String_t* Platform_get_version_m3524912503 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Platform_UnityAdsEngineGetVersion_m45362240(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::get_debugMode()
extern "C" IL2CPP_METHOD_ATTR bool Platform_get_debugMode_m1861849307 (Platform_t1647901813 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Platform_UnityAdsEngineGetDebugMode_m559010788(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::set_debugMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_set_debugMode_m2911553557 (Platform_t1647901813 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Platform_UnityAdsEngineSetDebugMode_m2043700802(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Initialize(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Platform_Initialize_m3701987262 (Platform_t1647901813 * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___gameId0;
		bool L_1 = ___testMode1;
		Platform_UnityAdsEngineInitialize_m3450854254(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.iOS.Platform::IsReady(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Platform_IsReady_m337435948 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		bool L_1 = Platform_UnityAdsEngineIsReady_m1204345331(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Advertisements.PlacementState UnityEngine.Advertisements.iOS.Platform::GetPlacementState(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementState_m1071949241 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		int64_t L_1 = Platform_UnityAdsEngineGetPlacementState_m763487549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return (int32_t)((((int32_t)((int32_t)L_1))));
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::Show(System.String)
extern "C" IL2CPP_METHOD_ATTR void Platform_Show_m1585066734 (Platform_t1647901813 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		Platform_UnityAdsEngineShow_m1525385135(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
extern "C" IL2CPP_METHOD_ATTR void Platform_SetMetaData_m3621197024 (Platform_t1647901813 * __this, MetaData_t2274729001 * ___metaData0, const RuntimeMethod* method)
{
	{
		MetaData_t2274729001 * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1 = MetaData_get_category_m4241298320(L_0, /*hidden argument*/NULL);
		MetaData_t2274729001 * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3 = MetaData_ToJSON_m4186793159(L_2, /*hidden argument*/NULL);
		Platform_UnityAdsEngineSetMetaData_m1955283902(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1__ctor_m2619504999 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936 (U3CUnityAdsDidErrorU3Ec__AnonStorey1_t2659421617 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidErrorU3Ec__AnonStorey1_U3CU3Em__0_m1015626936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t177306446 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		int64_t L_2 = __this->get_rawError_1();
		String_t* L_3 = __this->get_message_2();
		ErrorEventArgs_t2253147013 * L_4 = (ErrorEventArgs_t2253147013 *)il2cpp_codegen_object_new(ErrorEventArgs_t2253147013_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m2417395018(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1199075846(L_0, L_1, L_4, /*hidden argument*/EventHandler_1_Invoke_m1199075846_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey3__ctor_m138433083 (U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4__ctor_m2012697147 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidFinish>c__AnonStorey4::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777 (U3CUnityAdsDidFinishU3Ec__AnonStorey4_t3126029549 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidFinishU3Ec__AnonStorey4_U3CU3Em__0_m944271777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_0 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_0);
		EventHandler_1_t908338235 * L_1 = L_0->get_handler_0();
		Platform_t1647901813 * L_2 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		U3CUnityAdsDidFinishU3Ec__AnonStorey3_t3126029544 * L_3 = __this->get_U3CU3Ef__refU243_1();
		NullCheck(L_3);
		String_t* L_4 = L_3->get_placementId_1();
		int32_t L_5 = __this->get_showResult_0();
		FinishEventArgs_t2984178802 * L_6 = (FinishEventArgs_t2984178802 *)il2cpp_codegen_object_new(FinishEventArgs_t2984178802_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_m50835730(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m3162226611(L_1, L_2, L_6, /*hidden argument*/EventHandler_1_Invoke_m3162226611_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2__ctor_m1780498047 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidStart>c__AnonStorey2::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534 (U3CUnityAdsDidStartU3Ec__AnonStorey2_t250005642 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsDidStartU3Ec__AnonStorey2_U3CU3Em__0_m413760534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2215985868 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		StartEventArgs_t4291826435 * L_3 = (StartEventArgs_t4291826435 *)il2cpp_codegen_object_new(StartEventArgs_t4291826435_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1521341003(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m1200448648(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m1200448648_RuntimeMethod_var);
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
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0__ctor_m676019578 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::<>m__0(UnityEngine.Advertisements.CallbackExecutor)
extern "C" IL2CPP_METHOD_ATTR void U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668 (U3CUnityAdsReadyU3Ec__AnonStorey0_t1009704718 * __this, CallbackExecutor_t363496179 * ___executor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUnityAdsReadyU3Ec__AnonStorey0_U3CU3Em__0_m656675668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t2768214265 * L_0 = __this->get_handler_0();
		Platform_t1647901813 * L_1 = ((Platform_t1647901813_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t1647901813_il2cpp_TypeInfo_var))->get_s_Instance_0();
		String_t* L_2 = __this->get_placementId_1();
		ReadyEventArgs_t549087536 * L_3 = (ReadyEventArgs_t549087536 *)il2cpp_codegen_object_new(ReadyEventArgs_t549087536_il2cpp_TypeInfo_var);
		ReadyEventArgs__ctor_m1307451034(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		EventHandler_1_Invoke_m743178406(L_0, L_1, L_3, /*hidden argument*/EventHandler_1_Invoke_m743178406_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_unityAdsDidError_t1993223595 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___rawError0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidError__ctor_m4120111418 (unityAdsDidError_t1993223595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::Invoke(System.Int64,System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidError_Invoke_m1306672649 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidError_Invoke_m1306672649((unityAdsDidError_t1993223595 *)__this->get_prev_9(), ___rawError0, ___message1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rawError0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rawError0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rawError0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidError_BeginInvoke_m3034855061 (unityAdsDidError_t1993223595 * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidError_BeginInvoke_m3034855061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawError0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidError::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidError_EndInvoke_m1111163234 (unityAdsDidError_t1993223595 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidFinish_t3747416149 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___rawFinishState1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidFinish__ctor_m3115871303 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::Invoke(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidFinish_Invoke_m880139269 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidFinish_Invoke_m880139269((unityAdsDidFinish_t3747416149 *)__this->get_prev_9(), ___placementId0, ___rawFinishState1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawFinishState1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawFinishState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___rawFinishState1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___rawFinishState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawFinishState1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidFinish_BeginInvoke_m2033378741 (unityAdsDidFinish_t3747416149 * __this, String_t* ___placementId0, int64_t ___rawFinishState1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (unityAdsDidFinish_BeginInvoke_m2033378741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___rawFinishState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidFinish::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidFinish_EndInvoke_m1036948251 (unityAdsDidFinish_t3747416149 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsDidStart_t1058412932 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidStart__ctor_m610751912 (unityAdsDidStart_t1058412932 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidStart_Invoke_m1190774304 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsDidStart_Invoke_m1190774304((unityAdsDidStart_t1058412932 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* unityAdsDidStart_BeginInvoke_m1941000148 (unityAdsDidStart_t1058412932 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsDidStart::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void unityAdsDidStart_EndInvoke_m1846743683 (unityAdsDidStart_t1058412932 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_unityAdsReady_t96934738 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void unityAdsReady__ctor_m3699019508 (unityAdsReady_t96934738 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void unityAdsReady_Invoke_m800719555 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		unityAdsReady_Invoke_m800719555((unityAdsReady_t96934738 *)__this->get_prev_9(), ___placementId0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___placementId0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.iOS.Platform/unityAdsReady::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* unityAdsReady_BeginInvoke_m3396861174 (unityAdsReady_t96934738 * __this, String_t* ___placementId0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.iOS.Platform/unityAdsReady::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void unityAdsReady_EndInvoke_m4129629457 (unityAdsReady_t96934738 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
