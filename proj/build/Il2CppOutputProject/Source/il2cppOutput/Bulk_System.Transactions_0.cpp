#include "il2cpp-config.h"

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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t1748158447;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t446791853;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318566633;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventArgs
struct EventArgs_t3591816995;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080583;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.SystemException
struct SystemException_t176217640;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.TimeoutException
struct TimeoutException_t407538241;
// System.Transactions.Configuration.DefaultSettingsSection
struct DefaultSettingsSection_t3512010875;
// System.Transactions.Configuration.MachineSettingsSection
struct MachineSettingsSection_t104633846;
// System.Transactions.Enlistment
struct Enlistment_t1988529039;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t276083705;
// System.Transactions.IEnlistmentNotification[]
struct IEnlistmentNotificationU5BU5D_t3940780036;
// System.Transactions.IPromotableSinglePhaseNotification
struct IPromotableSinglePhaseNotification_t2716307705;
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_t3269684407;
// System.Transactions.ISinglePhaseNotification[]
struct ISinglePhaseNotificationU5BU5D_t3524251278;
// System.Transactions.PreparingEnlistment
struct PreparingEnlistment_t4199633836;
// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t2412016327;
// System.Transactions.Transaction
struct Transaction_t3472000926;
// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t2116885608;
// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_t3201391691;
// System.Transactions.TransactionEventArgs
struct TransactionEventArgs_t3106741668;
// System.Transactions.TransactionException
struct TransactionException_t1281392668;
// System.Transactions.TransactionInformation
struct TransactionInformation_t2459298917;
// System.Transactions.TransactionScope
struct TransactionScope_t3249669472;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* ConfigurationManager_t386529156_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultSettingsSection_t3512010875_il2cpp_TypeInfo_var;
extern RuntimeClass* Enlistment_t1988529039_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var;
extern RuntimeClass* IPromotableSinglePhaseNotification_t2716307705_il2cpp_TypeInfo_var;
extern RuntimeClass* ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1748158447_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t446791853_il2cpp_TypeInfo_var;
extern RuntimeClass* MachineSettingsSection_t104633846_il2cpp_TypeInfo_var;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* PreparingEnlistment_t4199633836_il2cpp_TypeInfo_var;
extern RuntimeClass* SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeoutException_t407538241_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionAbortedException_t2116885608_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionEventArgs_t3106741668_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionException_t1281392668_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionInformation_t2459298917_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionManager_t2760750674_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionOptions_t2865697824_il2cpp_TypeInfo_var;
extern RuntimeClass* TransactionScope_t3249669472_il2cpp_TypeInfo_var;
extern RuntimeClass* Transaction_t3472000926_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitCallback_t2448485498_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral124202784;
extern String_t* _stringLiteral1447952811;
extern String_t* _stringLiteral2588515197;
extern String_t* _stringLiteral2911134571;
extern String_t* _stringLiteral3179484437;
extern String_t* _stringLiteral3451500438;
extern String_t* _stringLiteral3501906328;
extern String_t* _stringLiteral3658361563;
extern String_t* _stringLiteral4162631436;
extern String_t* _stringLiteral4289221870;
extern String_t* _stringLiteral591226122;
extern String_t* _stringLiteral955001179;
extern const RuntimeMethod* Enumerator_Dispose_m3064113751_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2553881418_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2109621835_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3259134144_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m197419245_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2157780702_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m367584120_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2597957279_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3966086873_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1029352870_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m673984641_RuntimeMethod_var;
extern const RuntimeMethod* TransactionScope_Dispose_m1851654666_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_CheckAborted_m2334107562_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_CommitInternal_m3300735138_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_DoPreparePhase_m3654094297_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_EnsureIncompleteCurrentScope_m977027993_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_PrepareCallbackWrapper_m1699232763_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_Rollback_m1248096783_RuntimeMethod_var;
extern const RuntimeMethod* Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_RuntimeMethod_var;
extern const uint32_t DefaultSettingsSection_get_Timeout_m3744942115_MetadataUsageId;
extern const uint32_t PreparingEnlistment_ForceRollback_m276594954_MetadataUsageId;
extern const uint32_t PreparingEnlistment_Prepared_m3120034887_MetadataUsageId;
extern const uint32_t PreparingEnlistment__ctor_m3964674037_MetadataUsageId;
extern const uint32_t TransactionEventArgs__ctor_m4252898187_MetadataUsageId;
extern const uint32_t TransactionInformation__ctor_m903375629_MetadataUsageId;
extern const uint32_t TransactionManager__cctor_m2466764276_MetadataUsageId;
extern const uint32_t TransactionManager_get_DefaultTimeout_m708447596_MetadataUsageId;
extern const uint32_t TransactionOptions_Equals_m3142779001_MetadataUsageId;
extern const uint32_t TransactionOptions_op_Equality_m3173535161_MetadataUsageId;
extern const uint32_t TransactionScope_Dispose_m1851654666_MetadataUsageId;
extern const uint32_t TransactionScope__cctor_m3418824945_MetadataUsageId;
extern const uint32_t Transaction_CheckAborted_m2334107562_MetadataUsageId;
extern const uint32_t Transaction_CommitInternal_m3300735138_MetadataUsageId;
extern const uint32_t Transaction_DoCommitPhase_m3733774821_MetadataUsageId;
extern const uint32_t Transaction_DoCommit_m4142857842_MetadataUsageId;
extern const uint32_t Transaction_DoPreparePhase_m3654094297_MetadataUsageId;
extern const uint32_t Transaction_DoSingleCommit_m1383830530_MetadataUsageId;
extern const uint32_t Transaction_DoSingleCommit_m37203013_MetadataUsageId;
extern const uint32_t Transaction_EnlistVolatileInternal_m1707882442_MetadataUsageId;
extern const uint32_t Transaction_EnsureIncompleteCurrentScope_m977027993_MetadataUsageId;
extern const uint32_t Transaction_Equals_m3288205670_MetadataUsageId;
extern const uint32_t Transaction_FireCompleted_m3602353940_MetadataUsageId;
extern const uint32_t Transaction_PrepareCallbackWrapper_m1699232763_MetadataUsageId;
extern const uint32_t Transaction_Rollback_m1248096783_MetadataUsageId;
extern const uint32_t Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_MetadataUsageId;
extern const uint32_t Transaction__ctor_m1487238460_MetadataUsageId;
extern const uint32_t Transaction_get_CurrentInternal_m2539383803_MetadataUsageId;
extern const uint32_t Transaction_get_Durables_m1494456402_MetadataUsageId;
extern const uint32_t Transaction_get_Volatiles_m474073610_MetadataUsageId;
extern const uint32_t Transaction_set_CurrentInternal_m3438268600_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t1703627840;


#ifndef U3CMODULEU3E_T692745554_H
#define U3CMODULEU3E_T692745554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745554 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745554_H
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
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_0)); }
	inline ObjectU5BU5D_t2843939325* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2843939325* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t2843939325* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef LIST_1_T1748158447_H
#define LIST_1_T1748158447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct  List_1_t1748158447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEnlistmentNotificationU5BU5D_t3940780036* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____items_1)); }
	inline IEnlistmentNotificationU5BU5D_t3940780036* get__items_1() const { return ____items_1; }
	inline IEnlistmentNotificationU5BU5D_t3940780036** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEnlistmentNotificationU5BU5D_t3940780036* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1748158447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1748158447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEnlistmentNotificationU5BU5D_t3940780036* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1748158447_StaticFields, ____emptyArray_5)); }
	inline IEnlistmentNotificationU5BU5D_t3940780036* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEnlistmentNotificationU5BU5D_t3940780036** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEnlistmentNotificationU5BU5D_t3940780036* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1748158447_H
#ifndef LIST_1_T446791853_H
#define LIST_1_T446791853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct  List_1_t446791853  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISinglePhaseNotificationU5BU5D_t3524251278* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____items_1)); }
	inline ISinglePhaseNotificationU5BU5D_t3524251278* get__items_1() const { return ____items_1; }
	inline ISinglePhaseNotificationU5BU5D_t3524251278** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISinglePhaseNotificationU5BU5D_t3524251278* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t446791853, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t446791853_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISinglePhaseNotificationU5BU5D_t3524251278* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t446791853_StaticFields, ____emptyArray_5)); }
	inline ISinglePhaseNotificationU5BU5D_t3524251278* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISinglePhaseNotificationU5BU5D_t3524251278** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISinglePhaseNotificationU5BU5D_t3524251278* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T446791853_H
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_7;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_11;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_12;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_7)); }
	inline Configuration_t2529364143 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2529364143 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2529364143 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_8)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_8() const { return ___lockAllAttributesExcept_8; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_8() { return &___lockAllAttributesExcept_8; }
	inline void set_lockAllAttributesExcept_8(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_8 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_8), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_9() const { return ___lockAllElementsExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_9() { return &___lockAllElementsExcept_9; }
	inline void set_lockAllElementsExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAttributes_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_10() const { return ___lockAttributes_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_10() { return &___lockAttributes_10; }
	inline void set_lockAttributes_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_10), value);
	}

	inline static int32_t get_offset_of_lockElements_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_11() const { return ___lockElements_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_11() { return &___lockElements_11; }
	inline void set_lockElements_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_11), value);
	}

	inline static int32_t get_offset_of_lockItem_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_12)); }
	inline bool get_lockItem_12() const { return ___lockItem_12; }
	inline bool* get_address_of_lockItem_12() { return &___lockItem_12; }
	inline void set_lockItem_12(bool value)
	{
		___lockItem_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
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
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_3)); }
	inline StringU5BU5D_t1281789340* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1281789340* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_5)); }
	inline TypeU5BU5D_t3940880105* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t3940880105* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_6)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENLISTMENT_T1988529039_H
#define ENLISTMENT_T1988529039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Enlistment
struct  Enlistment_t1988529039  : public RuntimeObject
{
public:
	// System.Boolean System.Transactions.Enlistment::done
	bool ___done_0;

public:
	inline static int32_t get_offset_of_done_0() { return static_cast<int32_t>(offsetof(Enlistment_t1988529039, ___done_0)); }
	inline bool get_done_0() const { return ___done_0; }
	inline bool* get_address_of_done_0() { return &___done_0; }
	inline void set_done_0(bool value)
	{
		___done_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLISTMENT_T1988529039_H
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
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3637402324_H
#define ENUMERATOR_T3637402324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>
struct  Enumerator_t3637402324 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1748158447 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___list_0)); }
	inline List_1_t1748158447 * get_list_0() const { return ___list_0; }
	inline List_1_t1748158447 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1748158447 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3637402324, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3637402324_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_13;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_14;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_15;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_16;

public:
	inline static int32_t get_offset_of_sectionInformation_13() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_13)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_13() const { return ___sectionInformation_13; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_13() { return &___sectionInformation_13; }
	inline void set_sectionInformation_13(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_13 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_13), value);
	}

	inline static int32_t get_offset_of_section_handler_14() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_14)); }
	inline RuntimeObject* get_section_handler_14() const { return ___section_handler_14; }
	inline RuntimeObject** get_address_of_section_handler_14() { return &___section_handler_14; }
	inline void set_section_handler_14(RuntimeObject* value)
	{
		___section_handler_14 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_14), value);
	}

	inline static int32_t get_offset_of_externalDataXml_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_15)); }
	inline String_t* get_externalDataXml_15() const { return ___externalDataXml_15; }
	inline String_t** get_address_of_externalDataXml_15() { return &___externalDataXml_15; }
	inline void set_externalDataXml_15(String_t* value)
	{
		___externalDataXml_15 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_15), value);
	}

	inline static int32_t get_offset_of__configContext_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_16)); }
	inline RuntimeObject * get__configContext_16() const { return ____configContext_16; }
	inline RuntimeObject ** get_address_of__configContext_16() { return &____configContext_16; }
	inline void set__configContext_16(RuntimeObject * value)
	{
		____configContext_16 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
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
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
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
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef MONOTODOATTRIBUTE_T4131080583_H
#define MONOTODOATTRIBUTE_T4131080583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080583  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080583, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080583_H
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
#ifndef PREPARINGENLISTMENT_T4199633836_H
#define PREPARINGENLISTMENT_T4199633836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.PreparingEnlistment
struct  PreparingEnlistment_t4199633836  : public Enlistment_t1988529039
{
public:
	// System.Boolean System.Transactions.PreparingEnlistment::prepared
	bool ___prepared_1;
	// System.Transactions.Transaction System.Transactions.PreparingEnlistment::tx
	Transaction_t3472000926 * ___tx_2;
	// System.Transactions.IEnlistmentNotification System.Transactions.PreparingEnlistment::enlisted
	RuntimeObject* ___enlisted_3;
	// System.Threading.WaitHandle System.Transactions.PreparingEnlistment::waitHandle
	WaitHandle_t1743403487 * ___waitHandle_4;
	// System.Exception System.Transactions.PreparingEnlistment::ex
	Exception_t * ___ex_5;

public:
	inline static int32_t get_offset_of_prepared_1() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___prepared_1)); }
	inline bool get_prepared_1() const { return ___prepared_1; }
	inline bool* get_address_of_prepared_1() { return &___prepared_1; }
	inline void set_prepared_1(bool value)
	{
		___prepared_1 = value;
	}

	inline static int32_t get_offset_of_tx_2() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___tx_2)); }
	inline Transaction_t3472000926 * get_tx_2() const { return ___tx_2; }
	inline Transaction_t3472000926 ** get_address_of_tx_2() { return &___tx_2; }
	inline void set_tx_2(Transaction_t3472000926 * value)
	{
		___tx_2 = value;
		Il2CppCodeGenWriteBarrier((&___tx_2), value);
	}

	inline static int32_t get_offset_of_enlisted_3() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___enlisted_3)); }
	inline RuntimeObject* get_enlisted_3() const { return ___enlisted_3; }
	inline RuntimeObject** get_address_of_enlisted_3() { return &___enlisted_3; }
	inline void set_enlisted_3(RuntimeObject* value)
	{
		___enlisted_3 = value;
		Il2CppCodeGenWriteBarrier((&___enlisted_3), value);
	}

	inline static int32_t get_offset_of_waitHandle_4() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___waitHandle_4)); }
	inline WaitHandle_t1743403487 * get_waitHandle_4() const { return ___waitHandle_4; }
	inline WaitHandle_t1743403487 ** get_address_of_waitHandle_4() { return &___waitHandle_4; }
	inline void set_waitHandle_4(WaitHandle_t1743403487 * value)
	{
		___waitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___waitHandle_4), value);
	}

	inline static int32_t get_offset_of_ex_5() { return static_cast<int32_t>(offsetof(PreparingEnlistment_t4199633836, ___ex_5)); }
	inline Exception_t * get_ex_5() const { return ___ex_5; }
	inline Exception_t ** get_address_of_ex_5() { return &___ex_5; }
	inline void set_ex_5(Exception_t * value)
	{
		___ex_5 = value;
		Il2CppCodeGenWriteBarrier((&___ex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPARINGENLISTMENT_T4199633836_H
#ifndef SINGLEPHASEENLISTMENT_T2412016327_H
#define SINGLEPHASEENLISTMENT_T2412016327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.SinglePhaseEnlistment
struct  SinglePhaseEnlistment_t2412016327  : public Enlistment_t1988529039
{
public:
	// System.Transactions.Transaction System.Transactions.SinglePhaseEnlistment::tx
	Transaction_t3472000926 * ___tx_1;
	// System.Object System.Transactions.SinglePhaseEnlistment::abortingEnlisted
	RuntimeObject * ___abortingEnlisted_2;

public:
	inline static int32_t get_offset_of_tx_1() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t2412016327, ___tx_1)); }
	inline Transaction_t3472000926 * get_tx_1() const { return ___tx_1; }
	inline Transaction_t3472000926 ** get_address_of_tx_1() { return &___tx_1; }
	inline void set_tx_1(Transaction_t3472000926 * value)
	{
		___tx_1 = value;
		Il2CppCodeGenWriteBarrier((&___tx_1), value);
	}

	inline static int32_t get_offset_of_abortingEnlisted_2() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t2412016327, ___abortingEnlisted_2)); }
	inline RuntimeObject * get_abortingEnlisted_2() const { return ___abortingEnlisted_2; }
	inline RuntimeObject ** get_address_of_abortingEnlisted_2() { return &___abortingEnlisted_2; }
	inline void set_abortingEnlisted_2(RuntimeObject * value)
	{
		___abortingEnlisted_2 = value;
		Il2CppCodeGenWriteBarrier((&___abortingEnlisted_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLEPHASEENLISTMENT_T2412016327_H
#ifndef TRANSACTIONEVENTARGS_T3106741668_H
#define TRANSACTIONEVENTARGS_T3106741668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionEventArgs
struct  TransactionEventArgs_t3106741668  : public EventArgs_t3591816995
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionEventArgs::transaction
	Transaction_t3472000926 * ___transaction_1;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionEventArgs_t3106741668, ___transaction_1)); }
	inline Transaction_t3472000926 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t3472000926 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t3472000926 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((&___transaction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONEVENTARGS_T3106741668_H
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
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t1972936122 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t1972936122 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___safeWaitHandle_4), value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
#endif // WAITHANDLE_T1743403487_H
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
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef TIMEOUTEXCEPTION_T407538241_H
#define TIMEOUTEXCEPTION_T407538241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t407538241  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T407538241_H
#ifndef DEFAULTSETTINGSSECTION_T3512010875_H
#define DEFAULTSETTINGSSECTION_T3512010875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Configuration.DefaultSettingsSection
struct  DefaultSettingsSection_t3512010875  : public ConfigurationSection_t3156163955
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTSETTINGSSECTION_T3512010875_H
#ifndef MACHINESETTINGSSECTION_T104633846_H
#define MACHINESETTINGSSECTION_T104633846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Configuration.MachineSettingsSection
struct  MachineSettingsSection_t104633846  : public ConfigurationSection_t3156163955
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACHINESETTINGSSECTION_T104633846_H
#ifndef ENLISTMENTOPTIONS_T1967621800_H
#define ENLISTMENTOPTIONS_T1967621800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.EnlistmentOptions
struct  EnlistmentOptions_t1967621800 
{
public:
	// System.Int32 System.Transactions.EnlistmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnlistmentOptions_t1967621800, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENLISTMENTOPTIONS_T1967621800_H
#ifndef ISOLATIONLEVEL_T4247150849_H
#define ISOLATIONLEVEL_T4247150849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.IsolationLevel
struct  IsolationLevel_t4247150849 
{
public:
	// System.Int32 System.Transactions.IsolationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolationLevel_t4247150849, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATIONLEVEL_T4247150849_H
#ifndef TRANSACTIONEXCEPTION_T1281392668_H
#define TRANSACTIONEXCEPTION_T1281392668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionException
struct  TransactionException_t1281392668  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONEXCEPTION_T1281392668_H
#ifndef TRANSACTIONSTATUS_T192984806_H
#define TRANSACTIONSTATUS_T192984806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionStatus
struct  TransactionStatus_t192984806 
{
public:
	// System.Int32 System.Transactions.TransactionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransactionStatus_t192984806, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONSTATUS_T192984806_H
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
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef TRANSACTION_T3472000926_H
#define TRANSACTION_T3472000926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.Transaction
struct  Transaction_t3472000926  : public RuntimeObject
{
public:
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_t2459298917 * ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t2718874744 * ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t1748158447 * ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t446791853 * ___durables_5;
	// System.Transactions.IPromotableSinglePhaseNotification System.Transactions.Transaction::pspe
	RuntimeObject* ___pspe_6;
	// System.Boolean System.Transactions.Transaction::committing
	bool ___committing_7;
	// System.Boolean System.Transactions.Transaction::committed
	bool ___committed_8;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_9;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_t3249669472 * ___scope_10;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t * ___innerException_11;
	// System.Guid System.Transactions.Transaction::tag
	Guid_t  ___tag_12;
	// System.Transactions.TransactionCompletedEventHandler System.Transactions.Transaction::TransactionCompleted
	TransactionCompletedEventHandler_t3201391691 * ___TransactionCompleted_13;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___info_2)); }
	inline TransactionInformation_t2459298917 * get_info_2() const { return ___info_2; }
	inline TransactionInformation_t2459298917 ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(TransactionInformation_t2459298917 * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((&___info_2), value);
	}

	inline static int32_t get_offset_of_dependents_3() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___dependents_3)); }
	inline ArrayList_t2718874744 * get_dependents_3() const { return ___dependents_3; }
	inline ArrayList_t2718874744 ** get_address_of_dependents_3() { return &___dependents_3; }
	inline void set_dependents_3(ArrayList_t2718874744 * value)
	{
		___dependents_3 = value;
		Il2CppCodeGenWriteBarrier((&___dependents_3), value);
	}

	inline static int32_t get_offset_of_volatiles_4() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___volatiles_4)); }
	inline List_1_t1748158447 * get_volatiles_4() const { return ___volatiles_4; }
	inline List_1_t1748158447 ** get_address_of_volatiles_4() { return &___volatiles_4; }
	inline void set_volatiles_4(List_1_t1748158447 * value)
	{
		___volatiles_4 = value;
		Il2CppCodeGenWriteBarrier((&___volatiles_4), value);
	}

	inline static int32_t get_offset_of_durables_5() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___durables_5)); }
	inline List_1_t446791853 * get_durables_5() const { return ___durables_5; }
	inline List_1_t446791853 ** get_address_of_durables_5() { return &___durables_5; }
	inline void set_durables_5(List_1_t446791853 * value)
	{
		___durables_5 = value;
		Il2CppCodeGenWriteBarrier((&___durables_5), value);
	}

	inline static int32_t get_offset_of_pspe_6() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___pspe_6)); }
	inline RuntimeObject* get_pspe_6() const { return ___pspe_6; }
	inline RuntimeObject** get_address_of_pspe_6() { return &___pspe_6; }
	inline void set_pspe_6(RuntimeObject* value)
	{
		___pspe_6 = value;
		Il2CppCodeGenWriteBarrier((&___pspe_6), value);
	}

	inline static int32_t get_offset_of_committing_7() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___committing_7)); }
	inline bool get_committing_7() const { return ___committing_7; }
	inline bool* get_address_of_committing_7() { return &___committing_7; }
	inline void set_committing_7(bool value)
	{
		___committing_7 = value;
	}

	inline static int32_t get_offset_of_committed_8() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___committed_8)); }
	inline bool get_committed_8() const { return ___committed_8; }
	inline bool* get_address_of_committed_8() { return &___committed_8; }
	inline void set_committed_8(bool value)
	{
		___committed_8 = value;
	}

	inline static int32_t get_offset_of_aborted_9() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___aborted_9)); }
	inline bool get_aborted_9() const { return ___aborted_9; }
	inline bool* get_address_of_aborted_9() { return &___aborted_9; }
	inline void set_aborted_9(bool value)
	{
		___aborted_9 = value;
	}

	inline static int32_t get_offset_of_scope_10() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___scope_10)); }
	inline TransactionScope_t3249669472 * get_scope_10() const { return ___scope_10; }
	inline TransactionScope_t3249669472 ** get_address_of_scope_10() { return &___scope_10; }
	inline void set_scope_10(TransactionScope_t3249669472 * value)
	{
		___scope_10 = value;
		Il2CppCodeGenWriteBarrier((&___scope_10), value);
	}

	inline static int32_t get_offset_of_innerException_11() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___innerException_11)); }
	inline Exception_t * get_innerException_11() const { return ___innerException_11; }
	inline Exception_t ** get_address_of_innerException_11() { return &___innerException_11; }
	inline void set_innerException_11(Exception_t * value)
	{
		___innerException_11 = value;
		Il2CppCodeGenWriteBarrier((&___innerException_11), value);
	}

	inline static int32_t get_offset_of_tag_12() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___tag_12)); }
	inline Guid_t  get_tag_12() const { return ___tag_12; }
	inline Guid_t * get_address_of_tag_12() { return &___tag_12; }
	inline void set_tag_12(Guid_t  value)
	{
		___tag_12 = value;
	}

	inline static int32_t get_offset_of_TransactionCompleted_13() { return static_cast<int32_t>(offsetof(Transaction_t3472000926, ___TransactionCompleted_13)); }
	inline TransactionCompletedEventHandler_t3201391691 * get_TransactionCompleted_13() const { return ___TransactionCompleted_13; }
	inline TransactionCompletedEventHandler_t3201391691 ** get_address_of_TransactionCompleted_13() { return &___TransactionCompleted_13; }
	inline void set_TransactionCompleted_13(TransactionCompletedEventHandler_t3201391691 * value)
	{
		___TransactionCompleted_13 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionCompleted_13), value);
	}
};

struct Transaction_t3472000926_ThreadStaticFields
{
public:
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_t3472000926 * ___ambient_0;

public:
	inline static int32_t get_offset_of_ambient_0() { return static_cast<int32_t>(offsetof(Transaction_t3472000926_ThreadStaticFields, ___ambient_0)); }
	inline Transaction_t3472000926 * get_ambient_0() const { return ___ambient_0; }
	inline Transaction_t3472000926 ** get_address_of_ambient_0() { return &___ambient_0; }
	inline void set_ambient_0(Transaction_t3472000926 * value)
	{
		___ambient_0 = value;
		Il2CppCodeGenWriteBarrier((&___ambient_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTION_T3472000926_H
#ifndef TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#define TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionAbortedException
struct  TransactionAbortedException_t2116885608  : public TransactionException_t1281392668
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONABORTEDEXCEPTION_T2116885608_H
#ifndef TRANSACTIONINFORMATION_T2459298917_H
#define TRANSACTIONINFORMATION_T2459298917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionInformation
struct  TransactionInformation_t2459298917  : public RuntimeObject
{
public:
	// System.String System.Transactions.TransactionInformation::local_id
	String_t* ___local_id_0;
	// System.Guid System.Transactions.TransactionInformation::dtcId
	Guid_t  ___dtcId_1;
	// System.DateTime System.Transactions.TransactionInformation::creation_time
	DateTime_t3738529785  ___creation_time_2;
	// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::status
	int32_t ___status_3;

public:
	inline static int32_t get_offset_of_local_id_0() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___local_id_0)); }
	inline String_t* get_local_id_0() const { return ___local_id_0; }
	inline String_t** get_address_of_local_id_0() { return &___local_id_0; }
	inline void set_local_id_0(String_t* value)
	{
		___local_id_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_id_0), value);
	}

	inline static int32_t get_offset_of_dtcId_1() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___dtcId_1)); }
	inline Guid_t  get_dtcId_1() const { return ___dtcId_1; }
	inline Guid_t * get_address_of_dtcId_1() { return &___dtcId_1; }
	inline void set_dtcId_1(Guid_t  value)
	{
		___dtcId_1 = value;
	}

	inline static int32_t get_offset_of_creation_time_2() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___creation_time_2)); }
	inline DateTime_t3738529785  get_creation_time_2() const { return ___creation_time_2; }
	inline DateTime_t3738529785 * get_address_of_creation_time_2() { return &___creation_time_2; }
	inline void set_creation_time_2(DateTime_t3738529785  value)
	{
		___creation_time_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(TransactionInformation_t2459298917, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONINFORMATION_T2459298917_H
#ifndef TRANSACTIONMANAGER_T2760750674_H
#define TRANSACTIONMANAGER_T2760750674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionManager
struct  TransactionManager_t2760750674  : public RuntimeObject
{
public:

public:
};

struct TransactionManager_t2760750674_StaticFields
{
public:
	// System.Transactions.Configuration.DefaultSettingsSection System.Transactions.TransactionManager::defaultSettings
	DefaultSettingsSection_t3512010875 * ___defaultSettings_0;
	// System.Transactions.Configuration.MachineSettingsSection System.Transactions.TransactionManager::machineSettings
	MachineSettingsSection_t104633846 * ___machineSettings_1;
	// System.TimeSpan System.Transactions.TransactionManager::defaultTimeout
	TimeSpan_t881159249  ___defaultTimeout_2;
	// System.TimeSpan System.Transactions.TransactionManager::maxTimeout
	TimeSpan_t881159249  ___maxTimeout_3;

public:
	inline static int32_t get_offset_of_defaultSettings_0() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___defaultSettings_0)); }
	inline DefaultSettingsSection_t3512010875 * get_defaultSettings_0() const { return ___defaultSettings_0; }
	inline DefaultSettingsSection_t3512010875 ** get_address_of_defaultSettings_0() { return &___defaultSettings_0; }
	inline void set_defaultSettings_0(DefaultSettingsSection_t3512010875 * value)
	{
		___defaultSettings_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSettings_0), value);
	}

	inline static int32_t get_offset_of_machineSettings_1() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___machineSettings_1)); }
	inline MachineSettingsSection_t104633846 * get_machineSettings_1() const { return ___machineSettings_1; }
	inline MachineSettingsSection_t104633846 ** get_address_of_machineSettings_1() { return &___machineSettings_1; }
	inline void set_machineSettings_1(MachineSettingsSection_t104633846 * value)
	{
		___machineSettings_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineSettings_1), value);
	}

	inline static int32_t get_offset_of_defaultTimeout_2() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___defaultTimeout_2)); }
	inline TimeSpan_t881159249  get_defaultTimeout_2() const { return ___defaultTimeout_2; }
	inline TimeSpan_t881159249 * get_address_of_defaultTimeout_2() { return &___defaultTimeout_2; }
	inline void set_defaultTimeout_2(TimeSpan_t881159249  value)
	{
		___defaultTimeout_2 = value;
	}

	inline static int32_t get_offset_of_maxTimeout_3() { return static_cast<int32_t>(offsetof(TransactionManager_t2760750674_StaticFields, ___maxTimeout_3)); }
	inline TimeSpan_t881159249  get_maxTimeout_3() const { return ___maxTimeout_3; }
	inline TimeSpan_t881159249 * get_address_of_maxTimeout_3() { return &___maxTimeout_3; }
	inline void set_maxTimeout_3(TimeSpan_t881159249  value)
	{
		___maxTimeout_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONMANAGER_T2760750674_H
#ifndef TRANSACTIONOPTIONS_T2865697824_H
#define TRANSACTIONOPTIONS_T2865697824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionOptions
struct  TransactionOptions_t2865697824 
{
public:
	// System.Transactions.IsolationLevel System.Transactions.TransactionOptions::level
	int32_t ___level_0;
	// System.TimeSpan System.Transactions.TransactionOptions::timeout
	TimeSpan_t881159249  ___timeout_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(TransactionOptions_t2865697824, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(TransactionOptions_t2865697824, ___timeout_1)); }
	inline TimeSpan_t881159249  get_timeout_1() const { return ___timeout_1; }
	inline TimeSpan_t881159249 * get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(TimeSpan_t881159249  value)
	{
		___timeout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONOPTIONS_T2865697824_H
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
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef WAITCALLBACK_T2448485498_H
#define WAITCALLBACK_T2448485498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2448485498  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2448485498_H
#ifndef TRANSACTIONCOMPLETEDEVENTHANDLER_T3201391691_H
#define TRANSACTIONCOMPLETEDEVENTHANDLER_T3201391691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionCompletedEventHandler
struct  TransactionCompletedEventHandler_t3201391691  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONCOMPLETEDEVENTHANDLER_T3201391691_H
#ifndef TRANSACTIONSCOPE_T3249669472_H
#define TRANSACTIONSCOPE_T3249669472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionScope
struct  TransactionScope_t3249669472  : public RuntimeObject
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionScope::transaction
	Transaction_t3472000926 * ___transaction_1;
	// System.Transactions.Transaction System.Transactions.TransactionScope::oldTransaction
	Transaction_t3472000926 * ___oldTransaction_2;
	// System.Transactions.TransactionScope System.Transactions.TransactionScope::parentScope
	TransactionScope_t3249669472 * ___parentScope_3;
	// System.TimeSpan System.Transactions.TransactionScope::timeout
	TimeSpan_t881159249  ___timeout_4;
	// System.Int32 System.Transactions.TransactionScope::nested
	int32_t ___nested_5;
	// System.Boolean System.Transactions.TransactionScope::disposed
	bool ___disposed_6;
	// System.Boolean System.Transactions.TransactionScope::completed
	bool ___completed_7;
	// System.Boolean System.Transactions.TransactionScope::isRoot
	bool ___isRoot_8;
	// System.Boolean System.Transactions.TransactionScope::asyncFlowEnabled
	bool ___asyncFlowEnabled_9;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___transaction_1)); }
	inline Transaction_t3472000926 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t3472000926 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t3472000926 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((&___transaction_1), value);
	}

	inline static int32_t get_offset_of_oldTransaction_2() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___oldTransaction_2)); }
	inline Transaction_t3472000926 * get_oldTransaction_2() const { return ___oldTransaction_2; }
	inline Transaction_t3472000926 ** get_address_of_oldTransaction_2() { return &___oldTransaction_2; }
	inline void set_oldTransaction_2(Transaction_t3472000926 * value)
	{
		___oldTransaction_2 = value;
		Il2CppCodeGenWriteBarrier((&___oldTransaction_2), value);
	}

	inline static int32_t get_offset_of_parentScope_3() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___parentScope_3)); }
	inline TransactionScope_t3249669472 * get_parentScope_3() const { return ___parentScope_3; }
	inline TransactionScope_t3249669472 ** get_address_of_parentScope_3() { return &___parentScope_3; }
	inline void set_parentScope_3(TransactionScope_t3249669472 * value)
	{
		___parentScope_3 = value;
		Il2CppCodeGenWriteBarrier((&___parentScope_3), value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___timeout_4)); }
	inline TimeSpan_t881159249  get_timeout_4() const { return ___timeout_4; }
	inline TimeSpan_t881159249 * get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(TimeSpan_t881159249  value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_nested_5() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___nested_5)); }
	inline int32_t get_nested_5() const { return ___nested_5; }
	inline int32_t* get_address_of_nested_5() { return &___nested_5; }
	inline void set_nested_5(int32_t value)
	{
		___nested_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of_isRoot_8() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___isRoot_8)); }
	inline bool get_isRoot_8() const { return ___isRoot_8; }
	inline bool* get_address_of_isRoot_8() { return &___isRoot_8; }
	inline void set_isRoot_8(bool value)
	{
		___isRoot_8 = value;
	}

	inline static int32_t get_offset_of_asyncFlowEnabled_9() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472, ___asyncFlowEnabled_9)); }
	inline bool get_asyncFlowEnabled_9() const { return ___asyncFlowEnabled_9; }
	inline bool* get_address_of_asyncFlowEnabled_9() { return &___asyncFlowEnabled_9; }
	inline void set_asyncFlowEnabled_9(bool value)
	{
		___asyncFlowEnabled_9 = value;
	}
};

struct TransactionScope_t3249669472_StaticFields
{
public:
	// System.Transactions.TransactionOptions System.Transactions.TransactionScope::defaultOptions
	TransactionOptions_t2865697824  ___defaultOptions_0;

public:
	inline static int32_t get_offset_of_defaultOptions_0() { return static_cast<int32_t>(offsetof(TransactionScope_t3249669472_StaticFields, ___defaultOptions_0)); }
	inline TransactionOptions_t2865697824  get_defaultOptions_0() const { return ___defaultOptions_0; }
	inline TransactionOptions_t2865697824 * get_address_of_defaultOptions_0() { return &___defaultOptions_0; }
	inline void set_defaultOptions_0(TransactionOptions_t2865697824  value)
	{
		___defaultOptions_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSACTIONSCOPE_T3249669472_H
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConfigurationElement_get_Item_m590348452 (ConfigurationElement_t3318566633 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Enlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enlistment__ctor_m1844752968 (Enlistment_t1988529039 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::ForceRollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m276594954 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::Prepared()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_Prepared_m3120034887 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m1248096783 (Transaction_t3472000926 * __this, Exception_t * ___ex0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::.ctor()
inline void List_1__ctor_m367584120 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::.ctor()
inline void List_1__ctor_m2157780702 (List_1_t446791853 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t446791853 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionInformation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m903375629 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
extern "C" IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m977027993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_CurrentInternal_m2539383803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
extern "C" IL2CPP_METHOD_ATTR TransactionInformation_t2459298917 * Transaction_get_TransactionInformation_m1885024619 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_m1160921797 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m2307478764 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatileInternal(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatileInternal_m1707882442 (Transaction_t3472000926 * __this, RuntimeObject* ___notification0, int32_t ___options1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
extern "C" IL2CPP_METHOD_ATTR List_1_t1748158447 * Transaction_get_Volatiles_m474073610 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::Add(!0)
inline void List_1_Add_m3259134144 (List_1_t1748158447 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1748158447 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m4051287636 (Transaction_t3472000926 * __this, Transaction_t3472000926 * ___t0, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m567471953 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3533416245 (Transaction_t3472000926 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::FireCompleted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_FireCompleted_m3602353940 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2213981865 (TransactionException_t1281392668 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m2708384017 (SinglePhaseEnlistment_t2412016327 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::GetEnumerator()
inline Enumerator_t3637402324  List_1_GetEnumerator_m197419245 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3637402324  (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m2109621835 (Enumerator_t3637402324 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t3637402324 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::MoveNext()
inline bool Enumerator_MoveNext_m2553881418 (Enumerator_t3637402324 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3637402324 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::Dispose()
inline void Enumerator_Dispose_m3064113751 (Enumerator_t3637402324 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3637402324 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
extern "C" IL2CPP_METHOD_ATTR List_1_t446791853 * Transaction_get_Durables_m1494456402 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Count()
inline int32_t List_1_get_Count_m3966086873 (List_1_t446791853 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t446791853 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m673984641 (List_1_t446791853 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t446791853 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m541403278 (Transaction_t3472000926 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m1910598492 (TransactionInformation_t2459298917 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoCommit()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommit_m4142857842 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2107813208 (TransactionAbortedException_t2116885608 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
extern "C" IL2CPP_METHOD_ATTR TransactionScope_t3249669472 * Transaction_get_Scope_m2234757998 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::CheckAborted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CheckAborted_m2334107562 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::get_Count()
inline int32_t List_1_get_Count_m2597957279 (List_1_t1748158447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1748158447 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m1029352870 (List_1_t1748158447 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t1748158447 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m37203013 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Complete()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Complete_m1999140662 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoPreparePhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoPreparePhase_m3654094297 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.IPromotableSinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m1383830530 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::DoCommitPhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommitPhase_m3733774821 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
// System.Transactions.IEnlistmentNotification System.Transactions.PreparingEnlistment::get_EnlistmentNotification()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PreparingEnlistment_get_EnlistmentNotification_m1871105985 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::set_Exception(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_set_Exception_m376281484 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Transactions.PreparingEnlistment::get_IsPrepared()
extern "C" IL2CPP_METHOD_ATTR bool PreparingEnlistment_get_IsPrepared_m428429483 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Threading.WaitHandle System.Transactions.PreparingEnlistment::get_WaitHandle()
extern "C" IL2CPP_METHOD_ATTR WaitHandle_t1743403487 * PreparingEnlistment_get_WaitHandle_m190698482 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.PreparingEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment__ctor_m3964674037 (PreparingEnlistment_t4199633836 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WaitCallback__ctor_m1893321019 (WaitCallback_t2448485498 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m1526970260 (RuntimeObject * __this /* static, unused */, WaitCallback_t2448485498 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionManager_get_DefaultTimeout_m708447596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.TimeSpan System.Transactions.TransactionScope::get_Timeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionScope_get_Timeout_m3083350912 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method);
// System.Void System.TimeoutException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TimeoutException__ctor_m3886218794 (TimeoutException_t407538241 * __this, String_t* p0, const RuntimeMethod* method);
// System.Exception System.Transactions.PreparingEnlistment::get_Exception()
extern "C" IL2CPP_METHOD_ATTR Exception_t * PreparingEnlistment_get_Exception_m1675630730 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor(System.Transactions.Transaction,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m618470155 (SinglePhaseEnlistment_t2412016327 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m151488797 (TransactionEventArgs_t3106741668 * __this, Transaction_t3472000926 * ___transaction0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_m368435620 (TransactionCompletedEventHandler_t3201391691 * __this, RuntimeObject * ___sender0, TransactionEventArgs_t3106741668 * ___e1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
extern "C" IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m171974465 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m1338117290 (TransactionException_t1281392668 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2285503530 (TransactionException_t1281392668 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m96674906 (TransactionException_t1281392668 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m4252898187 (TransactionEventArgs_t3106741668 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4274309232 (SystemException_t176217640 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.String System.Guid::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConfigurationManager_GetSection_m2104119567 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.TimeSpan System.Transactions.Configuration.DefaultSettingsSection::get_Timeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DefaultSettingsSection_get_Timeout_m3744942115 (DefaultSettingsSection_t3512010875 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void TransactionOptions__ctor_m175069428 (TransactionOptions_t2865697824 * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m1999885032 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m3173535161 (RuntimeObject * __this /* static, unused */, TransactionOptions_t2865697824  ___x0, TransactionOptions_t2865697824  ___y1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m3142779001 (TransactionOptions_t2865697824 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_m1806108975 (TransactionOptions_t2865697824 * __this, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m2626562296 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::set_Scope(System.Transactions.TransactionScope)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Scope_m3616494776 (Transaction_t3472000926 * __this, TransactionScope_t3249669472 * ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::set_CurrentInternal(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_CurrentInternal_m3438268600 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::CommitInternal()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CommitInternal_m3300735138 (Transaction_t3472000926 * __this, const RuntimeMethod* method);
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
// System.Void System.MonoTODOAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m2076838029 (MonoTODOAttribute_t4131080583 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m3846736629 (MonoTODOAttribute_t4131080583 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment0;
		__this->set_comment_0(L_0);
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
// System.TimeSpan System.Transactions.Configuration.DefaultSettingsSection::get_Timeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DefaultSettingsSection_get_Timeout_m3744942115 (DefaultSettingsSection_t3512010875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultSettingsSection_get_Timeout_m3744942115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ConfigurationElement_get_Item_m590348452(__this, _stringLiteral591226122, /*hidden argument*/NULL);
		return ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_0, TimeSpan_t881159249_il2cpp_TypeInfo_var))));
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
// System.Void System.Transactions.Enlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enlistment__ctor_m1844752968 (Enlistment_t1988529039 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_done_0((bool)0);
		return;
	}
}
// System.Void System.Transactions.Enlistment::Done()
extern "C" IL2CPP_METHOD_ATTR void Enlistment_Done_m261170135 (Enlistment_t1988529039 * __this, const RuntimeMethod* method)
{
	{
		__this->set_done_0((bool)1);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Transactions.Enlistment::InternalOnDone() */, __this);
		return;
	}
}
// System.Void System.Transactions.Enlistment::InternalOnDone()
extern "C" IL2CPP_METHOD_ATTR void Enlistment_InternalOnDone_m1460114036 (Enlistment_t1988529039 * __this, const RuntimeMethod* method)
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
// System.Void System.Transactions.PreparingEnlistment::.ctor(System.Transactions.Transaction,System.Transactions.IEnlistmentNotification)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment__ctor_m3964674037 (PreparingEnlistment_t4199633836 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject* ___enlisted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PreparingEnlistment__ctor_m3964674037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enlistment__ctor_m1844752968(__this, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = ___tx0;
		__this->set_tx_2(L_0);
		RuntimeObject* L_1 = ___enlisted1;
		__this->set_enlisted_3(L_1);
		ManualResetEvent_t451242010 * L_2 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_waitHandle_4(L_2);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::ForceRollback()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m1425842536 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		PreparingEnlistment_ForceRollback_m276594954(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::InternalOnDone()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_InternalOnDone_m1870292098 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		PreparingEnlistment_Prepared_m3120034887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::ForceRollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_ForceRollback_m276594954 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PreparingEnlistment_ForceRollback_m276594954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = __this->get_tx_2();
		Exception_t * L_1 = ___e0;
		RuntimeObject* L_2 = __this->get_enlisted_3();
		NullCheck(L_0);
		Transaction_Rollback_m1248096783(L_0, L_1, L_2, /*hidden argument*/NULL);
		WaitHandle_t1743403487 * L_3 = __this->get_waitHandle_4();
		NullCheck(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_3, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
		EventWaitHandle_Set_m2445193251(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_3, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.PreparingEnlistment::Prepared()
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_Prepared_m3120034887 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PreparingEnlistment_Prepared_m3120034887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_prepared_1((bool)1);
		WaitHandle_t1743403487 * L_0 = __this->get_waitHandle_4();
		NullCheck(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_0, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
		EventWaitHandle_Set_m2445193251(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_0, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Transactions.PreparingEnlistment::get_IsPrepared()
extern "C" IL2CPP_METHOD_ATTR bool PreparingEnlistment_get_IsPrepared_m428429483 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_prepared_1();
		return L_0;
	}
}
// System.Threading.WaitHandle System.Transactions.PreparingEnlistment::get_WaitHandle()
extern "C" IL2CPP_METHOD_ATTR WaitHandle_t1743403487 * PreparingEnlistment_get_WaitHandle_m190698482 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		WaitHandle_t1743403487 * L_0 = __this->get_waitHandle_4();
		return L_0;
	}
}
// System.Transactions.IEnlistmentNotification System.Transactions.PreparingEnlistment::get_EnlistmentNotification()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PreparingEnlistment_get_EnlistmentNotification_m1871105985 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_enlisted_3();
		return L_0;
	}
}
// System.Exception System.Transactions.PreparingEnlistment::get_Exception()
extern "C" IL2CPP_METHOD_ATTR Exception_t * PreparingEnlistment_get_Exception_m1675630730 (PreparingEnlistment_t4199633836 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_ex_5();
		return L_0;
	}
}
// System.Void System.Transactions.PreparingEnlistment::set_Exception(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void PreparingEnlistment_set_Exception_m376281484 (PreparingEnlistment_t4199633836 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_ex_5(L_0);
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
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m2708384017 (SinglePhaseEnlistment_t2412016327 * __this, const RuntimeMethod* method)
{
	{
		Enlistment__ctor_m1844752968(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor(System.Transactions.Transaction,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m618470155 (SinglePhaseEnlistment_t2412016327 * __this, Transaction_t3472000926 * ___tx0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method)
{
	{
		Enlistment__ctor_m1844752968(__this, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = ___tx0;
		__this->set_tx_1(L_0);
		RuntimeObject * L_1 = ___abortingEnlisted1;
		__this->set_abortingEnlisted_2(L_1);
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
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
extern "C" IL2CPP_METHOD_ATTR List_1_t1748158447 * Transaction_get_Volatiles_m474073610 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_get_Volatiles_m474073610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1748158447 * L_0 = __this->get_volatiles_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t1748158447 * L_1 = (List_1_t1748158447 *)il2cpp_codegen_object_new(List_1_t1748158447_il2cpp_TypeInfo_var);
		List_1__ctor_m367584120(L_1, /*hidden argument*/List_1__ctor_m367584120_RuntimeMethod_var);
		__this->set_volatiles_4(L_1);
	}

IL_0013:
	{
		List_1_t1748158447 * L_2 = __this->get_volatiles_4();
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
extern "C" IL2CPP_METHOD_ATTR List_1_t446791853 * Transaction_get_Durables_m1494456402 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_get_Durables_m1494456402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t446791853 * L_0 = __this->get_durables_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t446791853 * L_1 = (List_1_t446791853 *)il2cpp_codegen_object_new(List_1_t446791853_il2cpp_TypeInfo_var);
		List_1__ctor_m2157780702(L_1, /*hidden argument*/List_1__ctor_m2157780702_RuntimeMethod_var);
		__this->set_durables_5(L_1);
	}

IL_0013:
	{
		List_1_t446791853 * L_2 = __this->get_durables_5();
		return L_2;
	}
}
// System.Void System.Transactions.Transaction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Transaction__ctor_m1487238460 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction__ctor_m1487238460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_dependents_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_1 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_tag_12(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TransactionInformation_t2459298917 * L_2 = (TransactionInformation_t2459298917 *)il2cpp_codegen_object_new(TransactionInformation_t2459298917_il2cpp_TypeInfo_var);
		TransactionInformation__ctor_m903375629(L_2, /*hidden argument*/NULL);
		__this->set_info_2(L_2);
		__this->set_level_1(0);
		return;
	}
}
// System.Void System.Transactions.Transaction::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767 (Transaction_t3472000926 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_m1788113767_RuntimeMethod_var);
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_Current()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_Current_m1772484047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
extern "C" IL2CPP_METHOD_ATTR Transaction_t3472000926 * Transaction_get_CurrentInternal_m2539383803 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_get_CurrentInternal_m2539383803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = ((Transaction_t3472000926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t3472000926_il2cpp_TypeInfo_var))->get_ambient_0();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::set_CurrentInternal(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_CurrentInternal_m3438268600 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_set_CurrentInternal_m3438268600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = ___value0;
		((Transaction_t3472000926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t3472000926_il2cpp_TypeInfo_var))->set_ambient_0(L_0);
		return;
	}
}
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
extern "C" IL2CPP_METHOD_ATTR TransactionInformation_t2459298917 * Transaction_get_TransactionInformation_m1885024619 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransactionInformation_t2459298917 * L_0 = __this->get_info_2();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Dispose_m2395642011 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		TransactionInformation_t2459298917 * L_0 = Transaction_get_TransactionInformation_m1885024619(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = TransactionInformation_get_Status_m1160921797(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transaction_Rollback_m2307478764(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatile(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatile_m3889326812 (Transaction_t3472000926 * __this, RuntimeObject* ___enlistmentNotification0, int32_t ___enlistmentOptions1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___enlistmentNotification0;
		int32_t L_1 = ___enlistmentOptions1;
		Enlistment_t1988529039 * L_2 = Transaction_EnlistVolatileInternal_m1707882442(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Transactions.Enlistment System.Transactions.Transaction::EnlistVolatileInternal(System.Transactions.IEnlistmentNotification,System.Transactions.EnlistmentOptions)
extern "C" IL2CPP_METHOD_ATTR Enlistment_t1988529039 * Transaction_EnlistVolatileInternal_m1707882442 (Transaction_t3472000926 * __this, RuntimeObject* ___notification0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_EnlistVolatileInternal_m1707882442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t1748158447 * L_0 = Transaction_get_Volatiles_m474073610(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___notification0;
		NullCheck(L_0);
		List_1_Add_m3259134144(L_0, L_1, /*hidden argument*/List_1_Add_m3259134144_RuntimeMethod_var);
		Enlistment_t1988529039 * L_2 = (Enlistment_t1988529039 *)il2cpp_codegen_object_new(Enlistment_t1988529039_il2cpp_TypeInfo_var);
		Enlistment__ctor_m1844752968(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m3288205670 (Transaction_t3472000926 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_Equals_m3288205670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Transaction_Equals_m4051287636(__this, ((Transaction_t3472000926 *)IsInstClass((RuntimeObject*)L_0, Transaction_t3472000926_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_Equals_m4051287636 (Transaction_t3472000926 * __this, Transaction_t3472000926 * ___t0, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = ___t0;
		if ((!(((RuntimeObject*)(Transaction_t3472000926 *)L_0) == ((RuntimeObject*)(Transaction_t3472000926 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Transaction_t3472000926 * L_1 = ___t0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get_level_1();
		Transaction_t3472000926 * L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_level_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionInformation_t2459298917 * L_5 = __this->get_info_2();
		Transaction_t3472000926 * L_6 = ___t0;
		NullCheck(L_6);
		TransactionInformation_t2459298917 * L_7 = L_6->get_info_2();
		return (bool)((((RuntimeObject*)(TransactionInformation_t2459298917 *)L_5) == ((RuntimeObject*)(TransactionInformation_t2459298917 *)L_7))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m567471953 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Transaction_t3472000926 * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(Transaction_t3472000926 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Transaction_t3472000926 * L_2 = ___x0;
		Transaction_t3472000926 * L_3 = ___y1;
		NullCheck(L_2);
		bool L_4 = Transaction_Equals_m4051287636(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m2626562296 (RuntimeObject * __this /* static, unused */, Transaction_t3472000926 * ___x0, Transaction_t3472000926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t3472000926 * L_0 = ___x0;
		Transaction_t3472000926 * L_1 = ___y1;
		bool L_2 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Transactions.Transaction::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Transaction_GetHashCode_m2622560793 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_1();
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		ArrayList_t2718874744 * L_3 = __this->get_dependents_3();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4));
	}
}
// System.Void System.Transactions.Transaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m2307478764 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_Rollback_m3533416245(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m3533416245 (Transaction_t3472000926 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m977027993(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_0 = ___e0;
		Transaction_Rollback_m1248096783(__this, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Transaction_Rollback_m1248096783 (Transaction_t3472000926 * __this, Exception_t * ___ex0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_Rollback_m1248096783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SinglePhaseEnlistment_t2412016327 * V_0 = NULL;
	List_1_t446791853 * V_1 = NULL;
	Enumerator_t3637402324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_aborted_9();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Transaction_FireCompleted_m3602353940(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2 = TransactionInformation_get_Status_m1160921797(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionException_t1281392668 * L_3 = (TransactionException_t1281392668 *)il2cpp_codegen_object_new(TransactionException_t1281392668_il2cpp_TypeInfo_var);
		TransactionException__ctor_m2213981865(L_3, _stringLiteral3658361563, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Transaction_Rollback_m1248096783_RuntimeMethod_var);
	}

IL_0028:
	{
		Exception_t * L_4 = ___ex0;
		__this->set_innerException_11(L_4);
		SinglePhaseEnlistment_t2412016327 * L_5 = (SinglePhaseEnlistment_t2412016327 *)il2cpp_codegen_object_new(SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var);
		SinglePhaseEnlistment__ctor_m2708384017(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		List_1_t1748158447 * L_6 = Transaction_get_Volatiles_m474073610(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t3637402324  L_7 = List_1_GetEnumerator_m197419245(L_6, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0043:
		{
			RuntimeObject* L_8 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			V_3 = L_8;
			RuntimeObject* L_9 = V_3;
			RuntimeObject * L_10 = ___abortingEnlisted1;
			if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			RuntimeObject* L_11 = V_3;
			SinglePhaseEnlistment_t2412016327 * L_12 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(2 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_11, L_12);
		}

IL_0056:
		{
			bool L_13 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0043;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3064113751((Enumerator_t3637402324 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m3064113751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006f:
	{
		List_1_t446791853 * L_14 = Transaction_get_Durables_m1494456402(__this, /*hidden argument*/NULL);
		V_1 = L_14;
		List_1_t446791853 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m3966086873(L_15, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t446791853 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18 = List_1_get_Item_m673984641(L_17, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		RuntimeObject * L_19 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject *)L_19)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t446791853 * L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21 = List_1_get_Item_m673984641(L_20, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		SinglePhaseEnlistment_t2412016327 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(2 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_0096:
	{
		RuntimeObject* L_23 = __this->get_pspe_6();
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_24 = __this->get_pspe_6();
		RuntimeObject * L_25 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_24) == ((RuntimeObject*)(RuntimeObject *)L_25)))
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_26 = __this->get_pspe_6();
		SinglePhaseEnlistment_t2412016327 * L_27 = V_0;
		NullCheck(L_26);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t2412016327 * >::Invoke(0 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::Rollback(System.Transactions.SinglePhaseEnlistment) */, IPromotableSinglePhaseNotification_t2716307705_il2cpp_TypeInfo_var, L_26, L_27);
	}

IL_00b3:
	{
		Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
		Transaction_FireCompleted_m3602353940(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m541403278 (Transaction_t3472000926 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_aborted_9(L_0);
		bool L_1 = __this->get_aborted_9();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TransactionInformation_t2459298917 * L_2 = __this->get_info_2();
		NullCheck(L_2);
		TransactionInformation_set_Status_m1910598492(L_2, 2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
extern "C" IL2CPP_METHOD_ATTR TransactionScope_t3249669472 * Transaction_get_Scope_m2234757998 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		TransactionScope_t3249669472 * L_0 = __this->get_scope_10();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::set_Scope(System.Transactions.TransactionScope)
extern "C" IL2CPP_METHOD_ATTR void Transaction_set_Scope_m3616494776 (Transaction_t3472000926 * __this, TransactionScope_t3249669472 * ___value0, const RuntimeMethod* method)
{
	{
		TransactionScope_t3249669472 * L_0 = ___value0;
		__this->set_scope_10(L_0);
		return;
	}
}
// System.Void System.Transactions.Transaction::CommitInternal()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CommitInternal_m3300735138 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_CommitInternal_m3300735138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_committed_8();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_committing_7();
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral4289221870, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Transaction_CommitInternal_m3300735138_RuntimeMethod_var);
	}

IL_001b:
	{
		__this->set_committing_7((bool)1);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		Transaction_DoCommit_m4142857842(__this, /*hidden argument*/NULL);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TransactionException_t1281392668_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002d;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Transactions.TransactionException)
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, Transaction_CommitInternal_m3300735138_RuntimeMethod_var);
	} // end catch (depth: 1)

CATCH_002d:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_3 = V_0;
		TransactionAbortedException_t2116885608 * L_4 = (TransactionAbortedException_t2116885608 *)il2cpp_codegen_object_new(TransactionAbortedException_t2116885608_il2cpp_TypeInfo_var);
		TransactionAbortedException__ctor_m2107813208(L_4, _stringLiteral3501906328, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Transaction_CommitInternal_m3300735138_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_003a:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::DoCommit()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommit_m4142857842 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoCommit_m4142857842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1748158447 * V_0 = NULL;
	List_1_t446791853 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		TransactionScope_t3249669472 * L_0 = Transaction_get_Scope_m2234757998(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transaction_Rollback_m1248096783(__this, (Exception_t *)NULL, NULL, /*hidden argument*/NULL);
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		List_1_t1748158447 * L_1 = Transaction_get_Volatiles_m474073610(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t446791853 * L_2 = Transaction_get_Durables_m1494456402(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		List_1_t1748158447 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m2597957279(L_3, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t446791853 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3966086873(L_5, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		List_1_t1748158447 * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = List_1_get_Item_m1029352870(L_7, 0, /*hidden argument*/List_1_get_Item_m1029352870_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		Transaction_DoSingleCommit_m37203013(__this, L_10, /*hidden argument*/NULL);
		Transaction_Complete_m1999140662(__this, /*hidden argument*/NULL);
		return;
	}

IL_0053:
	{
		List_1_t1748158447 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m2597957279(L_11, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		Transaction_DoPreparePhase_m3654094297(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		List_1_t446791853 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3966086873(L_13, /*hidden argument*/List_1_get_Count_m3966086873_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		List_1_t446791853 * L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = List_1_get_Item_m673984641(L_15, 0, /*hidden argument*/List_1_get_Item_m673984641_RuntimeMethod_var);
		Transaction_DoSingleCommit_m37203013(__this, L_16, /*hidden argument*/NULL);
	}

IL_0078:
	{
		RuntimeObject* L_17 = __this->get_pspe_6();
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_18 = __this->get_pspe_6();
		Transaction_DoSingleCommit_m1383830530(__this, L_18, /*hidden argument*/NULL);
	}

IL_008c:
	{
		List_1_t1748158447 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m2597957279(L_19, /*hidden argument*/List_1_get_Count_m2597957279_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		Transaction_DoCommitPhase_m3733774821(__this, /*hidden argument*/NULL);
	}

IL_009b:
	{
		Transaction_Complete_m1999140662(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Complete()
extern "C" IL2CPP_METHOD_ATTR void Transaction_Complete_m1999140662 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	{
		__this->set_committing_7((bool)0);
		__this->set_committed_8((bool)1);
		bool L_0 = __this->get_aborted_9();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		TransactionInformation_t2459298917 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		TransactionInformation_set_Status_m1910598492(L_1, 1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		Transaction_FireCompleted_m3602353940(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::PrepareCallbackWrapper(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Transaction_PrepareCallbackWrapper_m1699232763 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_PrepareCallbackWrapper_m1699232763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PreparingEnlistment_t4199633836 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((PreparingEnlistment_t4199633836 *)IsInstClass((RuntimeObject*)L_0, PreparingEnlistment_t4199633836_il2cpp_TypeInfo_var));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		PreparingEnlistment_t4199633836 * L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = PreparingEnlistment_get_EnlistmentNotification_m1871105985(L_1, /*hidden argument*/NULL);
		PreparingEnlistment_t4199633836 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< PreparingEnlistment_t4199633836 * >::Invoke(1 /* System.Void System.Transactions.IEnlistmentNotification::Prepare(System.Transactions.PreparingEnlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_2, L_3);
		goto IL_0038;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)__exception_local);
			PreparingEnlistment_t4199633836 * L_4 = V_0;
			Exception_t * L_5 = V_1;
			NullCheck(L_4);
			PreparingEnlistment_set_Exception_m376281484(L_4, L_5, /*hidden argument*/NULL);
			PreparingEnlistment_t4199633836 * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = PreparingEnlistment_get_IsPrepared_m428429483(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0025:
		{
			PreparingEnlistment_t4199633836 * L_8 = V_0;
			NullCheck(L_8);
			WaitHandle_t1743403487 * L_9 = PreparingEnlistment_get_WaitHandle_m190698482(L_8, /*hidden argument*/NULL);
			NullCheck(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_9, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m2445193251(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_9, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0036:
		{
			goto IL_0038;
		}
	} // end catch (depth: 1)

IL_0038:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::DoPreparePhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoPreparePhase_m3654094297 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoPreparePhase_m3654094297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3637402324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PreparingEnlistment_t4199633836 * V_2 = NULL;
	TimeSpan_t881159249  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	TimeSpan_t881159249  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	{
		List_1_t1748158447 * L_0 = Transaction_get_Volatiles_m474073610(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t3637402324  L_1 = List_1_GetEnumerator_m197419245(L_0, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009e;
		}

IL_0011:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject* L_3 = V_1;
			PreparingEnlistment_t4199633836 * L_4 = (PreparingEnlistment_t4199633836 *)il2cpp_codegen_object_new(PreparingEnlistment_t4199633836_il2cpp_TypeInfo_var);
			PreparingEnlistment__ctor_m3964674037(L_4, __this, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			intptr_t L_5 = (intptr_t)Transaction_PrepareCallbackWrapper_m1699232763_RuntimeMethod_var;
			WaitCallback_t2448485498 * L_6 = (WaitCallback_t2448485498 *)il2cpp_codegen_object_new(WaitCallback_t2448485498_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m1893321019(L_6, NULL, (intptr_t)L_5, /*hidden argument*/NULL);
			PreparingEnlistment_t4199633836 * L_7 = V_2;
			ThreadPool_QueueUserWorkItem_m1526970260(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			TransactionScope_t3249669472 * L_8 = Transaction_get_Scope_m2234757998(__this, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
			TimeSpan_t881159249  L_9 = TransactionManager_get_DefaultTimeout_m708447596(NULL /*static, unused*/, /*hidden argument*/NULL);
			G_B5_0 = L_9;
			goto IL_004e;
		}

IL_0043:
		{
			TransactionScope_t3249669472 * L_10 = Transaction_get_Scope_m2234757998(__this, /*hidden argument*/NULL);
			NullCheck(L_10);
			TimeSpan_t881159249  L_11 = TransactionScope_get_Timeout_m3083350912(L_10, /*hidden argument*/NULL);
			G_B5_0 = L_11;
		}

IL_004e:
		{
			V_3 = G_B5_0;
			PreparingEnlistment_t4199633836 * L_12 = V_2;
			NullCheck(L_12);
			WaitHandle_t1743403487 * L_13 = PreparingEnlistment_get_WaitHandle_m190698482(L_12, /*hidden argument*/NULL);
			TimeSpan_t881159249  L_14 = V_3;
			NullCheck(L_13);
			bool L_15 = VirtFuncInvoker2< bool, TimeSpan_t881159249 , bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan,System.Boolean) */, L_13, L_14, (bool)1);
			if (L_15)
			{
				goto IL_0070;
			}
		}

IL_005e:
		{
			Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
			TimeoutException_t407538241 * L_16 = (TimeoutException_t407538241 *)il2cpp_codegen_object_new(TimeoutException_t407538241_il2cpp_TypeInfo_var);
			TimeoutException__ctor_m3886218794(L_16, _stringLiteral4162631436, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, Transaction_DoPreparePhase_m3654094297_RuntimeMethod_var);
		}

IL_0070:
		{
			PreparingEnlistment_t4199633836 * L_17 = V_2;
			NullCheck(L_17);
			Exception_t * L_18 = PreparingEnlistment_get_Exception_m1675630730(L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_008d;
			}
		}

IL_0078:
		{
			PreparingEnlistment_t4199633836 * L_19 = V_2;
			NullCheck(L_19);
			Exception_t * L_20 = PreparingEnlistment_get_Exception_m1675630730(L_19, /*hidden argument*/NULL);
			__this->set_innerException_11(L_20);
			Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xBA, FINALLY_00ac);
		}

IL_008d:
		{
			PreparingEnlistment_t4199633836 * L_21 = V_2;
			NullCheck(L_21);
			bool L_22 = PreparingEnlistment_get_IsPrepared_m428429483(L_21, /*hidden argument*/NULL);
			if (L_22)
			{
				goto IL_009e;
			}
		}

IL_0095:
		{
			Transaction_set_Aborted_m541403278(__this, (bool)1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xBA, FINALLY_00ac);
		}

IL_009e:
		{
			bool L_23 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0011;
			}
		}

IL_00aa:
		{
			IL2CPP_LEAVE(0xBA, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3064113751((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3064113751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(172)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_JUMP_TBL(0xBA, IL_00ba)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ba:
	{
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::DoCommitPhase()
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoCommitPhase_m3733774821 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoCommitPhase_m3733774821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3637402324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enlistment_t1988529039 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1748158447 * L_0 = Transaction_get_Volatiles_m474073610(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t3637402324  L_1 = List_1_GetEnumerator_m197419245(L_0, /*hidden argument*/List_1_GetEnumerator_m197419245_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2109621835((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2109621835_RuntimeMethod_var);
			Enlistment_t1988529039 * L_3 = (Enlistment_t1988529039 *)il2cpp_codegen_object_new(Enlistment_t1988529039_il2cpp_TypeInfo_var);
			Enlistment__ctor_m1844752968(L_3, /*hidden argument*/NULL);
			V_1 = L_3;
			Enlistment_t1988529039 * L_4 = V_1;
			NullCheck(L_2);
			InterfaceActionInvoker1< Enlistment_t1988529039 * >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Commit(System.Transactions.Enlistment) */, IEnlistmentNotification_t276083705_il2cpp_TypeInfo_var, L_2, L_4);
		}

IL_0021:
		{
			bool L_5 = Enumerator_MoveNext_m2553881418((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2553881418_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3064113751((Enumerator_t3637402324 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3064113751_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.ISinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m37203013 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoSingleCommit_m37203013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___single0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___single0;
		RuntimeObject* L_2 = ___single0;
		SinglePhaseEnlistment_t2412016327 * L_3 = (SinglePhaseEnlistment_t2412016327 *)il2cpp_codegen_object_new(SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var);
		SinglePhaseEnlistment__ctor_m618470155(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t2412016327 * >::Invoke(0 /* System.Void System.Transactions.ISinglePhaseNotification::SinglePhaseCommit(System.Transactions.SinglePhaseEnlistment) */, ISinglePhaseNotification_t3269684407_il2cpp_TypeInfo_var, L_1, L_3);
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::DoSingleCommit(System.Transactions.IPromotableSinglePhaseNotification)
extern "C" IL2CPP_METHOD_ATTR void Transaction_DoSingleCommit_m1383830530 (Transaction_t3472000926 * __this, RuntimeObject* ___single0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_DoSingleCommit_m1383830530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___single0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___single0;
		RuntimeObject* L_2 = ___single0;
		SinglePhaseEnlistment_t2412016327 * L_3 = (SinglePhaseEnlistment_t2412016327 *)il2cpp_codegen_object_new(SinglePhaseEnlistment_t2412016327_il2cpp_TypeInfo_var);
		SinglePhaseEnlistment__ctor_m618470155(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t2412016327 * >::Invoke(1 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::SinglePhaseCommit(System.Transactions.SinglePhaseEnlistment) */, IPromotableSinglePhaseNotification_t2716307705_il2cpp_TypeInfo_var, L_1, L_3);
		Transaction_CheckAborted_m2334107562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::CheckAborted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_CheckAborted_m2334107562 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_CheckAborted_m2334107562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_aborted_9();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t * L_1 = __this->get_innerException_11();
		TransactionAbortedException_t2116885608 * L_2 = (TransactionAbortedException_t2116885608 *)il2cpp_codegen_object_new(TransactionAbortedException_t2116885608_il2cpp_TypeInfo_var);
		TransactionAbortedException__ctor_m2107813208(L_2, _stringLiteral3179484437, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Transaction_CheckAborted_m2334107562_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::FireCompleted()
extern "C" IL2CPP_METHOD_ATTR void Transaction_FireCompleted_m3602353940 (Transaction_t3472000926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_FireCompleted_m3602353940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionCompletedEventHandler_t3201391691 * L_0 = __this->get_TransactionCompleted_13();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TransactionCompletedEventHandler_t3201391691 * L_1 = __this->get_TransactionCompleted_13();
		TransactionEventArgs_t3106741668 * L_2 = (TransactionEventArgs_t3106741668 *)il2cpp_codegen_object_new(TransactionEventArgs_t3106741668_il2cpp_TypeInfo_var);
		TransactionEventArgs__ctor_m151488797(L_2, __this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TransactionCompletedEventHandler_Invoke_m368435620(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
extern "C" IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m977027993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transaction_EnsureIncompleteCurrentScope_m977027993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t3472000926 * L_0 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_0, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		Transaction_t3472000926 * L_2 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		TransactionScope_t3249669472 * L_3 = Transaction_get_Scope_m2234757998(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Transaction_t3472000926 * L_4 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		TransactionScope_t3249669472 * L_5 = Transaction_get_Scope_m2234757998(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = TransactionScope_get_IsComplete_m171974465(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, _stringLiteral2911134571, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Transaction_EnsureIncompleteCurrentScope_m977027993_RuntimeMethod_var);
	}

IL_0036:
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
// System.Void System.Transactions.TransactionAbortedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2820384312 (TransactionAbortedException_t2116885608 * __this, const RuntimeMethod* method)
{
	{
		TransactionException__ctor_m1338117290(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m2107813208 (TransactionAbortedException_t2116885608 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		TransactionException__ctor_m2285503530(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m1248569569 (TransactionAbortedException_t2116885608 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		TransactionException__ctor_m96674906(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler__ctor_m852880073 (TransactionCompletedEventHandler_t3201391691 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_m368435620 (TransactionCompletedEventHandler_t3201391691 * __this, RuntimeObject * ___sender0, TransactionEventArgs_t3106741668 * ___e1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
								GenericInterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
							else
								VirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
								GenericInterfaceActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, ___sender0, ___e1);
							else
								GenericVirtActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, ___sender0, ___e1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
							else
								VirtActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
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
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
							GenericInterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
						else
							VirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
							GenericInterfaceActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, ___sender0, ___e1);
						else
							GenericVirtActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(targetMethod, ___sender0, ___e1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
						else
							VirtActionInvoker1< TransactionEventArgs_t3106741668 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, TransactionEventArgs_t3106741668 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.Transactions.TransactionCompletedEventHandler::BeginInvoke(System.Object,System.Transactions.TransactionEventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TransactionCompletedEventHandler_BeginInvoke_m4133648373 (TransactionCompletedEventHandler_t3201391691 * __this, RuntimeObject * ___sender0, TransactionEventArgs_t3106741668 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.Transactions.TransactionCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_EndInvoke_m977760499 (TransactionCompletedEventHandler_t3201391691 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.Transactions.TransactionEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m4252898187 (TransactionEventArgs_t3106741668 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionEventArgs__ctor_m4252898187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
extern "C" IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m151488797 (TransactionEventArgs_t3106741668 * __this, Transaction_t3472000926 * ___transaction0, const RuntimeMethod* method)
{
	{
		TransactionEventArgs__ctor_m4252898187(__this, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_0 = ___transaction0;
		__this->set_transaction_1(L_0);
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
// System.Void System.Transactions.TransactionException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m1338117290 (TransactionException_t1281392668 * __this, const RuntimeMethod* method)
{
	{
		SystemException__ctor_m4274309232(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2213981865 (TransactionException_t1281392668 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m2285503530 (TransactionException_t1281392668 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		SystemException__ctor_m4132668650(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransactionException__ctor_m96674906 (TransactionException_t1281392668 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionInformation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m903375629 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionInformation__ctor_m903375629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		__this->set_dtcId_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_status_3(0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		DateTime_t3738529785  L_2 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		__this->set_creation_time_2(L_2);
		Guid_t  L_3 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = Guid_ToString_m3279186591((Guid_t *)(&V_1), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral3451500438, /*hidden argument*/NULL);
		__this->set_local_id_0(L_5);
		return;
	}
}
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_m1160921797 (TransactionInformation_t2459298917 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_3();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
extern "C" IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m1910598492 (TransactionInformation_t2459298917 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_status_3(L_0);
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
// System.Void System.Transactions.TransactionManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionManager__cctor_m2466764276 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionManager__cctor_m2466764276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t881159249  L_0;
		memset(&L_0, 0, sizeof(L_0));
		TimeSpan__ctor_m3689759052((&L_0), 0, 1, 0, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_defaultTimeout_2(L_0);
		TimeSpan_t881159249  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TimeSpan__ctor_m3689759052((&L_1), 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_maxTimeout_3(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t386529156_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ConfigurationManager_GetSection_m2104119567(NULL /*static, unused*/, _stringLiteral2588515197, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_defaultSettings_0(((DefaultSettingsSection_t3512010875 *)IsInstClass((RuntimeObject*)L_2, DefaultSettingsSection_t3512010875_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3 = ConfigurationManager_GetSection_m2104119567(NULL /*static, unused*/, _stringLiteral124202784, /*hidden argument*/NULL);
		((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->set_machineSettings_1(((MachineSettingsSection_t104633846 *)IsInstClass((RuntimeObject*)L_3, MachineSettingsSection_t104633846_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionManager_get_DefaultTimeout_m708447596 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionManager_get_DefaultTimeout_m708447596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		DefaultSettingsSection_t3512010875 * L_0 = ((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->get_defaultSettings_0();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		DefaultSettingsSection_t3512010875 * L_1 = ((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->get_defaultSettings_0();
		NullCheck(L_1);
		TimeSpan_t881159249  L_2 = DefaultSettingsSection_get_Timeout_m3744942115(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_3 = ((TransactionManager_t2760750674_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t2760750674_il2cpp_TypeInfo_var))->get_defaultTimeout_2();
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
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR void TransactionOptions__ctor_m175069428 (TransactionOptions_t2865697824 * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		__this->set_level_0(L_0);
		TimeSpan_t881159249  L_1 = ___timeout1;
		__this->set_timeout_1(L_1);
		return;
	}
}
extern "C"  void TransactionOptions__ctor_m175069428_AdjustorThunk (RuntimeObject * __this, int32_t ___level0, TimeSpan_t881159249  ___timeout1, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	TransactionOptions__ctor_m175069428(_thisAdjusted, ___level0, ___timeout1, method);
}
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m3173535161 (RuntimeObject * __this /* static, unused */, TransactionOptions_t2865697824  ___x0, TransactionOptions_t2865697824  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionOptions_op_Equality_m3173535161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionOptions_t2865697824  L_0 = ___x0;
		int32_t L_1 = L_0.get_level_0();
		TransactionOptions_t2865697824  L_2 = ___y1;
		int32_t L_3 = L_2.get_level_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TransactionOptions_t2865697824  L_4 = ___x0;
		TimeSpan_t881159249  L_5 = L_4.get_timeout_1();
		TransactionOptions_t2865697824  L_6 = ___y1;
		TimeSpan_t881159249  L_7 = L_6.get_timeout_1();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_8 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m3142779001 (TransactionOptions_t2865697824 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionOptions_Equals_m3142779001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransactionOptions_t2865697824_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TransactionOptions_op_Equality_m3173535161(NULL /*static, unused*/, (*(TransactionOptions_t2865697824 *)__this), ((*(TransactionOptions_t2865697824 *)((TransactionOptions_t2865697824 *)UnBox(L_1, TransactionOptions_t2865697824_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool TransactionOptions_Equals_m3142779001_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	return TransactionOptions_Equals_m3142779001(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_m1806108975 (TransactionOptions_t2865697824 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_0();
		TimeSpan_t881159249 * L_1 = __this->get_address_of_timeout_1();
		int32_t L_2 = TimeSpan_GetHashCode_m1939414618((TimeSpan_t881159249 *)L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0^(int32_t)L_2));
	}
}
extern "C"  int32_t TransactionOptions_GetHashCode_m1806108975_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransactionOptions_t2865697824 * _thisAdjusted = reinterpret_cast<TransactionOptions_t2865697824 *>(__this + 1);
	return TransactionOptions_GetHashCode_m1806108975(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
extern "C" IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m171974465 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_completed_7();
		return L_0;
	}
}
// System.TimeSpan System.Transactions.TransactionScope::get_Timeout()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TransactionScope_get_Timeout_m3083350912 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_timeout_4();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionScope::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TransactionScope_Dispose_m1851654666 (TransactionScope_t3249669472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionScope_Dispose_m1851654666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transaction_t3472000926 * V_0 = NULL;
	{
		bool L_0 = __this->get_disposed_6();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_disposed_6((bool)1);
		TransactionScope_t3249669472 * L_1 = __this->get_parentScope_3();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		TransactionScope_t3249669472 * L_2 = __this->get_parentScope_3();
		TransactionScope_t3249669472 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_nested_5();
		NullCheck(L_3);
		L_3->set_nested_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
	}

IL_002b:
	{
		int32_t L_5 = __this->get_nested_5();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		Transaction_t3472000926 * L_6 = __this->get_transaction_1();
		NullCheck(L_6);
		Transaction_Rollback_m2307478764(L_6, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, _stringLiteral955001179, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, TransactionScope_Dispose_m1851654666_RuntimeMethod_var);
	}

IL_004a:
	{
		Transaction_t3472000926 * L_8 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_9 = __this->get_transaction_1();
		bool L_10 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		bool L_11 = __this->get_asyncFlowEnabled_9();
		if (L_11)
		{
			goto IL_009f;
		}
	}
	{
		Transaction_t3472000926 * L_12 = __this->get_transaction_1();
		bool L_13 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_12, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		Transaction_t3472000926 * L_14 = __this->get_transaction_1();
		NullCheck(L_14);
		Transaction_Rollback_m2307478764(L_14, /*hidden argument*/NULL);
	}

IL_007d:
	{
		Transaction_t3472000926 * L_15 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_16 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_15, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		Transaction_t3472000926 * L_17 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transaction_Rollback_m2307478764(L_17, /*hidden argument*/NULL);
	}

IL_0094:
	{
		InvalidOperationException_t56020091 * L_18 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_18, _stringLiteral1447952811, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, TransactionScope_Dispose_m1851654666_RuntimeMethod_var);
	}

IL_009f:
	{
		bool L_19 = __this->get_asyncFlowEnabled_9();
		if (!L_19)
		{
			goto IL_013f;
		}
	}
	{
		Transaction_t3472000926 * L_20 = __this->get_oldTransaction_2();
		bool L_21 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_20, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c9;
		}
	}
	{
		Transaction_t3472000926 * L_22 = __this->get_oldTransaction_2();
		TransactionScope_t3249669472 * L_23 = __this->get_parentScope_3();
		NullCheck(L_22);
		Transaction_set_Scope_m3616494776(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		Transaction_t3472000926 * L_24 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_24;
		Transaction_t3472000926 * L_25 = __this->get_transaction_1();
		bool L_26 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_25, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00e7;
		}
	}
	{
		Transaction_t3472000926 * L_27 = V_0;
		bool L_28 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_27, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e7;
		}
	}
	{
		return;
	}

IL_00e7:
	{
		Transaction_t3472000926 * L_29 = V_0;
		TransactionScope_t3249669472 * L_30 = __this->get_parentScope_3();
		NullCheck(L_29);
		Transaction_set_Scope_m3616494776(L_29, L_30, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_31 = __this->get_oldTransaction_2();
		Transaction_set_CurrentInternal_m3438268600(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_32 = __this->get_transaction_1();
		NullCheck(L_32);
		Transaction_set_Scope_m3616494776(L_32, (TransactionScope_t3249669472 *)NULL, /*hidden argument*/NULL);
		bool L_33 = TransactionScope_get_IsComplete_m171974465(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_0124;
		}
	}
	{
		Transaction_t3472000926 * L_34 = __this->get_transaction_1();
		NullCheck(L_34);
		Transaction_Rollback_m2307478764(L_34, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_35 = V_0;
		NullCheck(L_35);
		Transaction_Rollback_m2307478764(L_35, /*hidden argument*/NULL);
		return;
	}

IL_0124:
	{
		bool L_36 = __this->get_isRoot_8();
		if (L_36)
		{
			goto IL_012d;
		}
	}
	{
		return;
	}

IL_012d:
	{
		Transaction_t3472000926 * L_37 = V_0;
		NullCheck(L_37);
		Transaction_CommitInternal_m3300735138(L_37, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_38 = __this->get_transaction_1();
		NullCheck(L_38);
		Transaction_CommitInternal_m3300735138(L_38, /*hidden argument*/NULL);
		return;
	}

IL_013f:
	{
		Transaction_t3472000926 * L_39 = Transaction_get_CurrentInternal_m2539383803(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_40 = __this->get_oldTransaction_2();
		bool L_41 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0170;
		}
	}
	{
		Transaction_t3472000926 * L_42 = __this->get_oldTransaction_2();
		bool L_43 = Transaction_op_Inequality_m2626562296(NULL /*static, unused*/, L_42, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0170;
		}
	}
	{
		Transaction_t3472000926 * L_44 = __this->get_oldTransaction_2();
		TransactionScope_t3249669472 * L_45 = __this->get_parentScope_3();
		NullCheck(L_44);
		Transaction_set_Scope_m3616494776(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0170:
	{
		Transaction_t3472000926 * L_46 = __this->get_oldTransaction_2();
		Transaction_set_CurrentInternal_m3438268600(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		Transaction_t3472000926 * L_47 = __this->get_transaction_1();
		bool L_48 = Transaction_op_Equality_m567471953(NULL /*static, unused*/, L_47, (Transaction_t3472000926 *)NULL, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_018a;
		}
	}
	{
		return;
	}

IL_018a:
	{
		Transaction_t3472000926 * L_49 = __this->get_transaction_1();
		NullCheck(L_49);
		Transaction_set_Scope_m3616494776(L_49, (TransactionScope_t3249669472 *)NULL, /*hidden argument*/NULL);
		bool L_50 = TransactionScope_get_IsComplete_m171974465(__this, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_01aa;
		}
	}
	{
		Transaction_t3472000926 * L_51 = __this->get_transaction_1();
		NullCheck(L_51);
		Transaction_Rollback_m2307478764(L_51, /*hidden argument*/NULL);
		return;
	}

IL_01aa:
	{
		bool L_52 = __this->get_isRoot_8();
		if (L_52)
		{
			goto IL_01b3;
		}
	}
	{
		return;
	}

IL_01b3:
	{
		Transaction_t3472000926 * L_53 = __this->get_transaction_1();
		NullCheck(L_53);
		Transaction_CommitInternal_m3300735138(L_53, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionScope::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TransactionScope__cctor_m3418824945 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransactionScope__cctor_m3418824945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t2760750674_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_0 = TransactionManager_get_DefaultTimeout_m708447596(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransactionOptions_t2865697824  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TransactionOptions__ctor_m175069428((&L_1), 0, L_0, /*hidden argument*/NULL);
		((TransactionScope_t3249669472_StaticFields*)il2cpp_codegen_static_fields_for(TransactionScope_t3249669472_il2cpp_TypeInfo_var))->set_defaultOptions_0(L_1);
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
