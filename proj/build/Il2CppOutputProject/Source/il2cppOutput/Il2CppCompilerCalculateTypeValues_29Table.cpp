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


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t4224248211;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3695308734;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1538619295;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t2786897858;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t4179402520;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1151641153;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t2399753304;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3684241368;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t687896682;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Net.Cache.RequestCache
struct RequestCache_t3669488992;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t587568667;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t3301955079;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;




#ifndef U3CMODULEU3E_T692745529_H
#define U3CMODULEU3E_T692745529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745529 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745529_H
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
#ifndef COMPATIBLECOMPARER_T4154576053_H
#define COMPATIBLECOMPARER_T4154576053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CompatibleComparer
struct  CompatibleComparer_t4154576053  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_2() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____hcp_2)); }
	inline RuntimeObject* get__hcp_2() const { return ____hcp_2; }
	inline RuntimeObject** get_address_of__hcp_2() { return &____hcp_2; }
	inline void set__hcp_2(RuntimeObject* value)
	{
		____hcp_2 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_2), value);
	}
};

struct CompatibleComparer_t4154576053_StaticFields
{
public:
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;

public:
	inline static int32_t get_offset_of_defaultComparer_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultComparer_1)); }
	inline RuntimeObject* get_defaultComparer_1() const { return ___defaultComparer_1; }
	inline RuntimeObject** get_address_of_defaultComparer_1() { return &___defaultComparer_1; }
	inline void set_defaultComparer_1(RuntimeObject* value)
	{
		___defaultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_1), value);
	}

	inline static int32_t get_offset_of_defaultHashProvider_3() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultHashProvider_3)); }
	inline RuntimeObject* get_defaultHashProvider_3() const { return ___defaultHashProvider_3; }
	inline RuntimeObject** get_address_of_defaultHashProvider_3() { return &___defaultHashProvider_3; }
	inline void set_defaultHashProvider_3(RuntimeObject* value)
	{
		___defaultHashProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHashProvider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T4154576053_H
#ifndef HYBRIDDICTIONARY_T4070033136_H
#define HYBRIDDICTIONARY_T4070033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4070033136  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1853889766 * ___hashtable_1;
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___hashtable_1)); }
	inline Hashtable_t1853889766 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1853889766 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_caseInsensitive_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___caseInsensitive_2)); }
	inline bool get_caseInsensitive_2() const { return ___caseInsensitive_2; }
	inline bool* get_address_of_caseInsensitive_2() { return &___caseInsensitive_2; }
	inline void set_caseInsensitive_2(bool value)
	{
		___caseInsensitive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4070033136_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_0)); }
	inline DictionaryNode_t417719465 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t417719465 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t417719465 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
#ifndef NODEENUMERATOR_T3248827953_H
#define NODEENUMERATOR_T3248827953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct  NodeEnumerator_t3248827953  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::start
	bool ___start_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___start_3)); }
	inline bool get_start_3() const { return ___start_3; }
	inline bool* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(bool value)
	{
		___start_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEENUMERATOR_T3248827953_H
#ifndef NODEKEYVALUECOLLECTION_T1279341543_H
#define NODEKEYVALUECOLLECTION_T1279341543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct  NodeKeyValueCollection_t1279341543  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUECOLLECTION_T1279341543_H
#ifndef NODEKEYVALUEENUMERATOR_T642906510_H
#define NODEKEYVALUEENUMERATOR_T642906510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_t642906510  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUEENUMERATOR_T642906510_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t2718874744 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t1853889766 * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t4224248211 * ____nullKeyEntry_4;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t1318642398 * ____keys_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t950877179 * ____serializationInfo_6;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_7;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_8;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesArray_1)); }
	inline ArrayList_t2718874744 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t2718874744 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t2718874744 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____entriesArray_1), value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyComparer_2), value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesTable_3)); }
	inline Hashtable_t1853889766 * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t1853889766 ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t1853889766 * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____entriesTable_3), value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____nullKeyEntry_4)); }
	inline NameObjectEntry_t4224248211 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_t4224248211 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_t4224248211 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((&____nullKeyEntry_4), value);
	}

	inline static int32_t get_offset_of__keys_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keys_5)); }
	inline KeysCollection_t1318642398 * get__keys_5() const { return ____keys_5; }
	inline KeysCollection_t1318642398 ** get_address_of__keys_5() { return &____keys_5; }
	inline void set__keys_5(KeysCollection_t1318642398 * value)
	{
		____keys_5 = value;
		Il2CppCodeGenWriteBarrier((&____keys_5), value);
	}

	inline static int32_t get_offset_of__serializationInfo_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____serializationInfo_6)); }
	inline SerializationInfo_t950877179 * get__serializationInfo_6() const { return ____serializationInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__serializationInfo_6() { return &____serializationInfo_6; }
	inline void set__serializationInfo_6(SerializationInfo_t950877179 * value)
	{
		____serializationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____serializationInfo_6), value);
	}

	inline static int32_t get_offset_of__version_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____version_7)); }
	inline int32_t get__version_7() const { return ____version_7; }
	inline int32_t* get_address_of__version_7() { return &____version_7; }
	inline void set__version_7(int32_t value)
	{
		____version_7 = value;
	}

	inline static int32_t get_offset_of__syncRoot_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____syncRoot_8)); }
	inline RuntimeObject * get__syncRoot_8() const { return ____syncRoot_8; }
	inline RuntimeObject ** get_address_of__syncRoot_8() { return &____syncRoot_8; }
	inline void set__syncRoot_8(RuntimeObject * value)
	{
		____syncRoot_8 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_8), value);
	}
};

struct NameObjectCollectionBase_t2091847364_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t3301955079 * ___defaultComparer_9;

public:
	inline static int32_t get_offset_of_defaultComparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364_StaticFields, ___defaultComparer_9)); }
	inline StringComparer_t3301955079 * get_defaultComparer_9() const { return ___defaultComparer_9; }
	inline StringComparer_t3301955079 ** get_address_of_defaultComparer_9() { return &___defaultComparer_9; }
	inline void set_defaultComparer_9(StringComparer_t3301955079 * value)
	{
		___defaultComparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_0;

public:
	inline static int32_t get_offset_of__coll_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ____coll_0)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_0() const { return ____coll_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_0() { return &____coll_0; }
	inline void set__coll_0(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_0 = value;
		Il2CppCodeGenWriteBarrier((&____coll_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef NAMEOBJECTENTRY_T4224248211_H
#define NAMEOBJECTENTRY_T4224248211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct  NameObjectEntry_t4224248211  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTENTRY_T4224248211_H
#ifndef NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#define NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct  NameObjectKeysEnumerator_t3824388371  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__coll_1() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____coll_1)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_1() const { return ____coll_1; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_1() { return &____coll_1; }
	inline void set__coll_1(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_1 = value;
		Il2CppCodeGenWriteBarrier((&____coll_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifndef ORDEREDDICTIONARY_T2617496293_H
#define ORDEREDDICTIONARY_T2617496293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t2617496293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t2718874744 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t1853889766 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t950877179 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsArray_0)); }
	inline ArrayList_t2718874744 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t2718874744 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t2718874744 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsTable_1)); }
	inline Hashtable_t1853889766 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t1853889766 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____siInfo_6)); }
	inline SerializationInfo_t950877179 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t950877179 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T2617496293_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#define ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t1215437281  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t1788601968  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef CLIENTCONFIGURATIONSYSTEM_T3254701293_H
#define CLIENTCONFIGURATIONSYSTEM_T3254701293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ClientConfigurationSystem
struct  ClientConfigurationSystem_t3254701293  : public RuntimeObject
{
public:
	// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::cfg
	Configuration_t2529364143 * ___cfg_0;

public:
	inline static int32_t get_offset_of_cfg_0() { return static_cast<int32_t>(offsetof(ClientConfigurationSystem_t3254701293, ___cfg_0)); }
	inline Configuration_t2529364143 * get_cfg_0() const { return ___cfg_0; }
	inline Configuration_t2529364143 ** get_address_of_cfg_0() { return &___cfg_0; }
	inline void set_cfg_0(Configuration_t2529364143 * value)
	{
		___cfg_0 = value;
		Il2CppCodeGenWriteBarrier((&___cfg_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONFIGURATIONSYSTEM_T3254701293_H
#ifndef CONFIGINFO_T2364721456_H
#define CONFIGINFO_T2364721456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigInfo
struct  ConfigInfo_t2364721456  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigInfo::Name
	String_t* ___Name_0;
	// System.String System.Configuration.ConfigInfo::TypeName
	String_t* ___TypeName_1;
	// System.Type System.Configuration.ConfigInfo::Type
	Type_t * ___Type_2;
	// System.String System.Configuration.ConfigInfo::streamName
	String_t* ___streamName_3;
	// System.Configuration.ConfigInfo System.Configuration.ConfigInfo::Parent
	ConfigInfo_t2364721456 * ___Parent_4;
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.ConfigInfo::ConfigHost
	RuntimeObject* ___ConfigHost_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeName_1), value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___Type_2), value);
	}

	inline static int32_t get_offset_of_streamName_3() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___streamName_3)); }
	inline String_t* get_streamName_3() const { return ___streamName_3; }
	inline String_t** get_address_of_streamName_3() { return &___streamName_3; }
	inline void set_streamName_3(String_t* value)
	{
		___streamName_3 = value;
		Il2CppCodeGenWriteBarrier((&___streamName_3), value);
	}

	inline static int32_t get_offset_of_Parent_4() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___Parent_4)); }
	inline ConfigInfo_t2364721456 * get_Parent_4() const { return ___Parent_4; }
	inline ConfigInfo_t2364721456 ** get_address_of_Parent_4() { return &___Parent_4; }
	inline void set_Parent_4(ConfigInfo_t2364721456 * value)
	{
		___Parent_4 = value;
		Il2CppCodeGenWriteBarrier((&___Parent_4), value);
	}

	inline static int32_t get_offset_of_ConfigHost_5() { return static_cast<int32_t>(offsetof(ConfigInfo_t2364721456, ___ConfigHost_5)); }
	inline RuntimeObject* get_ConfigHost_5() const { return ___ConfigHost_5; }
	inline RuntimeObject** get_address_of_ConfigHost_5() { return &___ConfigHost_5; }
	inline void set_ConfigHost_5(RuntimeObject* value)
	{
		___ConfigHost_5 = value;
		Il2CppCodeGenWriteBarrier((&___ConfigHost_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGINFO_T2364721456_H
#ifndef CONFIGURATION_T2529364143_H
#define CONFIGURATION_T2529364143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Configuration
struct  Configuration_t2529364143  : public RuntimeObject
{
public:
	// System.Configuration.Configuration System.Configuration.Configuration::parent
	Configuration_t2529364143 * ___parent_0;
	// System.Collections.Hashtable System.Configuration.Configuration::elementData
	Hashtable_t1853889766 * ___elementData_1;
	// System.String System.Configuration.Configuration::streamName
	String_t* ___streamName_2;
	// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::rootSectionGroup
	ConfigurationSectionGroup_t4179402520 * ___rootSectionGroup_3;
	// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::locations
	ConfigurationLocationCollection_t1538619295 * ___locations_4;
	// System.Configuration.SectionGroupInfo System.Configuration.Configuration::rootGroup
	SectionGroupInfo_t687896682 * ___rootGroup_5;
	// System.Configuration.Internal.IConfigSystem System.Configuration.Configuration::system
	RuntimeObject* ___system_6;
	// System.Boolean System.Configuration.Configuration::hasFile
	bool ___hasFile_7;
	// System.String System.Configuration.Configuration::rootNamespace
	String_t* ___rootNamespace_8;
	// System.String System.Configuration.Configuration::configPath
	String_t* ___configPath_9;
	// System.String System.Configuration.Configuration::locationConfigPath
	String_t* ___locationConfigPath_10;
	// System.String System.Configuration.Configuration::locationSubPath
	String_t* ___locationSubPath_11;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___parent_0)); }
	inline Configuration_t2529364143 * get_parent_0() const { return ___parent_0; }
	inline Configuration_t2529364143 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Configuration_t2529364143 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_elementData_1() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___elementData_1)); }
	inline Hashtable_t1853889766 * get_elementData_1() const { return ___elementData_1; }
	inline Hashtable_t1853889766 ** get_address_of_elementData_1() { return &___elementData_1; }
	inline void set_elementData_1(Hashtable_t1853889766 * value)
	{
		___elementData_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementData_1), value);
	}

	inline static int32_t get_offset_of_streamName_2() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___streamName_2)); }
	inline String_t* get_streamName_2() const { return ___streamName_2; }
	inline String_t** get_address_of_streamName_2() { return &___streamName_2; }
	inline void set_streamName_2(String_t* value)
	{
		___streamName_2 = value;
		Il2CppCodeGenWriteBarrier((&___streamName_2), value);
	}

	inline static int32_t get_offset_of_rootSectionGroup_3() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___rootSectionGroup_3)); }
	inline ConfigurationSectionGroup_t4179402520 * get_rootSectionGroup_3() const { return ___rootSectionGroup_3; }
	inline ConfigurationSectionGroup_t4179402520 ** get_address_of_rootSectionGroup_3() { return &___rootSectionGroup_3; }
	inline void set_rootSectionGroup_3(ConfigurationSectionGroup_t4179402520 * value)
	{
		___rootSectionGroup_3 = value;
		Il2CppCodeGenWriteBarrier((&___rootSectionGroup_3), value);
	}

	inline static int32_t get_offset_of_locations_4() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___locations_4)); }
	inline ConfigurationLocationCollection_t1538619295 * get_locations_4() const { return ___locations_4; }
	inline ConfigurationLocationCollection_t1538619295 ** get_address_of_locations_4() { return &___locations_4; }
	inline void set_locations_4(ConfigurationLocationCollection_t1538619295 * value)
	{
		___locations_4 = value;
		Il2CppCodeGenWriteBarrier((&___locations_4), value);
	}

	inline static int32_t get_offset_of_rootGroup_5() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___rootGroup_5)); }
	inline SectionGroupInfo_t687896682 * get_rootGroup_5() const { return ___rootGroup_5; }
	inline SectionGroupInfo_t687896682 ** get_address_of_rootGroup_5() { return &___rootGroup_5; }
	inline void set_rootGroup_5(SectionGroupInfo_t687896682 * value)
	{
		___rootGroup_5 = value;
		Il2CppCodeGenWriteBarrier((&___rootGroup_5), value);
	}

	inline static int32_t get_offset_of_system_6() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___system_6)); }
	inline RuntimeObject* get_system_6() const { return ___system_6; }
	inline RuntimeObject** get_address_of_system_6() { return &___system_6; }
	inline void set_system_6(RuntimeObject* value)
	{
		___system_6 = value;
		Il2CppCodeGenWriteBarrier((&___system_6), value);
	}

	inline static int32_t get_offset_of_hasFile_7() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___hasFile_7)); }
	inline bool get_hasFile_7() const { return ___hasFile_7; }
	inline bool* get_address_of_hasFile_7() { return &___hasFile_7; }
	inline void set_hasFile_7(bool value)
	{
		___hasFile_7 = value;
	}

	inline static int32_t get_offset_of_rootNamespace_8() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___rootNamespace_8)); }
	inline String_t* get_rootNamespace_8() const { return ___rootNamespace_8; }
	inline String_t** get_address_of_rootNamespace_8() { return &___rootNamespace_8; }
	inline void set_rootNamespace_8(String_t* value)
	{
		___rootNamespace_8 = value;
		Il2CppCodeGenWriteBarrier((&___rootNamespace_8), value);
	}

	inline static int32_t get_offset_of_configPath_9() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___configPath_9)); }
	inline String_t* get_configPath_9() const { return ___configPath_9; }
	inline String_t** get_address_of_configPath_9() { return &___configPath_9; }
	inline void set_configPath_9(String_t* value)
	{
		___configPath_9 = value;
		Il2CppCodeGenWriteBarrier((&___configPath_9), value);
	}

	inline static int32_t get_offset_of_locationConfigPath_10() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___locationConfigPath_10)); }
	inline String_t* get_locationConfigPath_10() const { return ___locationConfigPath_10; }
	inline String_t** get_address_of_locationConfigPath_10() { return &___locationConfigPath_10; }
	inline void set_locationConfigPath_10(String_t* value)
	{
		___locationConfigPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___locationConfigPath_10), value);
	}

	inline static int32_t get_offset_of_locationSubPath_11() { return static_cast<int32_t>(offsetof(Configuration_t2529364143, ___locationSubPath_11)); }
	inline String_t* get_locationSubPath_11() const { return ___locationSubPath_11; }
	inline String_t** get_address_of_locationSubPath_11() { return &___locationSubPath_11; }
	inline void set_locationSubPath_11(String_t* value)
	{
		___locationSubPath_11 = value;
		Il2CppCodeGenWriteBarrier((&___locationSubPath_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATION_T2529364143_H
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
#ifndef CONFIGURATIONSECTIONGROUP_T4179402520_H
#define CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t4179402520  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t2786897858 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1151641153 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t2529364143 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t687896682 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___sections_0)); }
	inline ConfigurationSectionCollection_t2786897858 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t2786897858 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t2786897858 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1151641153 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1151641153 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1151641153 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___config_2)); }
	inline Configuration_t2529364143 * get_config_2() const { return ___config_2; }
	inline Configuration_t2529364143 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t2529364143 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___group_3)); }
	inline SectionGroupInfo_t687896682 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t687896682 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t687896682 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifndef ELEMENTMAP_T2160633803_H
#define ELEMENTMAP_T2160633803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ElementMap
struct  ElementMap_t2160633803  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_1;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ElementMap::collectionAttribute
	ConfigurationCollectionAttribute_t3695308734 * ___collectionAttribute_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803, ___properties_1)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_1() const { return ___properties_1; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_collectionAttribute_2() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803, ___collectionAttribute_2)); }
	inline ConfigurationCollectionAttribute_t3695308734 * get_collectionAttribute_2() const { return ___collectionAttribute_2; }
	inline ConfigurationCollectionAttribute_t3695308734 ** get_address_of_collectionAttribute_2() { return &___collectionAttribute_2; }
	inline void set_collectionAttribute_2(ConfigurationCollectionAttribute_t3695308734 * value)
	{
		___collectionAttribute_2 = value;
		Il2CppCodeGenWriteBarrier((&___collectionAttribute_2), value);
	}
};

struct ElementMap_t2160633803_StaticFields
{
public:
	// System.Collections.Hashtable System.Configuration.ElementMap::elementMaps
	Hashtable_t1853889766 * ___elementMaps_0;

public:
	inline static int32_t get_offset_of_elementMaps_0() { return static_cast<int32_t>(offsetof(ElementMap_t2160633803_StaticFields, ___elementMaps_0)); }
	inline Hashtable_t1853889766 * get_elementMaps_0() const { return ___elementMaps_0; }
	inline Hashtable_t1853889766 ** get_address_of_elementMaps_0() { return &___elementMaps_0; }
	inline void set_elementMaps_0(Hashtable_t1853889766 * value)
	{
		___elementMaps_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementMaps_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTMAP_T2160633803_H
#ifndef PROVIDERBASE_T2594774949_H
#define PROVIDERBASE_T2594774949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Provider.ProviderBase
struct  ProviderBase_t2594774949  : public RuntimeObject
{
public:
	// System.Boolean System.Configuration.Provider.ProviderBase::alreadyInitialized
	bool ___alreadyInitialized_0;
	// System.String System.Configuration.Provider.ProviderBase::_description
	String_t* ____description_1;
	// System.String System.Configuration.Provider.ProviderBase::_name
	String_t* ____name_2;

public:
	inline static int32_t get_offset_of_alreadyInitialized_0() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ___alreadyInitialized_0)); }
	inline bool get_alreadyInitialized_0() const { return ___alreadyInitialized_0; }
	inline bool* get_address_of_alreadyInitialized_0() { return &___alreadyInitialized_0; }
	inline void set_alreadyInitialized_0(bool value)
	{
		___alreadyInitialized_0 = value;
	}

	inline static int32_t get_offset_of__description_1() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ____description_1)); }
	inline String_t* get__description_1() const { return ____description_1; }
	inline String_t** get_address_of__description_1() { return &____description_1; }
	inline void set__description_1(String_t* value)
	{
		____description_1 = value;
		Il2CppCodeGenWriteBarrier((&____description_1), value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((&____name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERBASE_T2594774949_H
#ifndef PROVIDERCOLLECTION_T3810574769_H
#define PROVIDERCOLLECTION_T3810574769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Provider.ProviderCollection
struct  ProviderCollection_t3810574769  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Configuration.Provider.ProviderCollection::lookup
	Hashtable_t1853889766 * ___lookup_0;
	// System.Boolean System.Configuration.Provider.ProviderCollection::readOnly
	bool ___readOnly_1;
	// System.Collections.ArrayList System.Configuration.Provider.ProviderCollection::values
	ArrayList_t2718874744 * ___values_2;

public:
	inline static int32_t get_offset_of_lookup_0() { return static_cast<int32_t>(offsetof(ProviderCollection_t3810574769, ___lookup_0)); }
	inline Hashtable_t1853889766 * get_lookup_0() const { return ___lookup_0; }
	inline Hashtable_t1853889766 ** get_address_of_lookup_0() { return &___lookup_0; }
	inline void set_lookup_0(Hashtable_t1853889766 * value)
	{
		___lookup_0 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_0), value);
	}

	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(ProviderCollection_t3810574769, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}

	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(ProviderCollection_t3810574769, ___values_2)); }
	inline ArrayList_t2718874744 * get_values_2() const { return ___values_2; }
	inline ArrayList_t2718874744 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(ArrayList_t2718874744 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERCOLLECTION_T3810574769_H
#ifndef REQUESTCACHE_T3669488992_H
#define REQUESTCACHE_T3669488992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t3669488992  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t3669488992_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t3528271667* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t3669488992_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t3528271667* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t3528271667** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t3528271667* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T3669488992_H
#ifndef REQUESTCACHEBINDING_T2614858269_H
#define REQUESTCACHEBINDING_T2614858269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t2614858269  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t3669488992 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t587568667 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_RequestCache_0)); }
	inline RequestCache_t3669488992 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t3669488992 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t3669488992 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t587568667 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t587568667 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t587568667 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T2614858269_H
#ifndef REQUESTCACHEPROTOCOL_T3614465628_H
#define REQUESTCACHEPROTOCOL_T3614465628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t3614465628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T3614465628_H
#ifndef REQUESTCACHEVALIDATOR_T587568667_H
#define REQUESTCACHEVALIDATOR_T587568667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t587568667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T587568667_H
#ifndef CONNECTIONMANAGEMENTDATA_T2003128658_H
#define CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2003128658_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994319 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994319__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529102 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529102__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563373 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563373__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367633 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367633__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885684 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885684__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125392 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125392__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366765 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366765__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689076 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689076__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278900__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t1281789340* ____all_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t1281789340* ____allKeys_11;

public:
	inline static int32_t get_offset_of__all_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____all_10)); }
	inline StringU5BU5D_t1281789340* get__all_10() const { return ____all_10; }
	inline StringU5BU5D_t1281789340** get_address_of__all_10() { return &____all_10; }
	inline void set__all_10(StringU5BU5D_t1281789340* value)
	{
		____all_10 = value;
		Il2CppCodeGenWriteBarrier((&____all_10), value);
	}

	inline static int32_t get_offset_of__allKeys_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____allKeys_11)); }
	inline StringU5BU5D_t1281789340* get__allKeys_11() const { return ____allKeys_11; }
	inline StringU5BU5D_t1281789340** get_address_of__allKeys_11() { return &____allKeys_11; }
	inline void set__allKeys_11(StringU5BU5D_t1281789340* value)
	{
		____allKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____allKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#define CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t446763386  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t2718874744 * ___list_13;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t2718874744 * ___removed_14;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t2718874744 * ___inherited_15;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_16;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_17;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_18;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_19;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_20;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_21;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_22;

public:
	inline static int32_t get_offset_of_list_13() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___list_13)); }
	inline ArrayList_t2718874744 * get_list_13() const { return ___list_13; }
	inline ArrayList_t2718874744 ** get_address_of_list_13() { return &___list_13; }
	inline void set_list_13(ArrayList_t2718874744 * value)
	{
		___list_13 = value;
		Il2CppCodeGenWriteBarrier((&___list_13), value);
	}

	inline static int32_t get_offset_of_removed_14() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removed_14)); }
	inline ArrayList_t2718874744 * get_removed_14() const { return ___removed_14; }
	inline ArrayList_t2718874744 ** get_address_of_removed_14() { return &___removed_14; }
	inline void set_removed_14(ArrayList_t2718874744 * value)
	{
		___removed_14 = value;
		Il2CppCodeGenWriteBarrier((&___removed_14), value);
	}

	inline static int32_t get_offset_of_inherited_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inherited_15)); }
	inline ArrayList_t2718874744 * get_inherited_15() const { return ___inherited_15; }
	inline ArrayList_t2718874744 ** get_address_of_inherited_15() { return &___inherited_15; }
	inline void set_inherited_15(ArrayList_t2718874744 * value)
	{
		___inherited_15 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_15), value);
	}

	inline static int32_t get_offset_of_emitClear_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___emitClear_16)); }
	inline bool get_emitClear_16() const { return ___emitClear_16; }
	inline bool* get_address_of_emitClear_16() { return &___emitClear_16; }
	inline void set_emitClear_16(bool value)
	{
		___emitClear_16 = value;
	}

	inline static int32_t get_offset_of_modified_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___modified_17)); }
	inline bool get_modified_17() const { return ___modified_17; }
	inline bool* get_address_of_modified_17() { return &___modified_17; }
	inline void set_modified_17(bool value)
	{
		___modified_17 = value;
	}

	inline static int32_t get_offset_of_comparer_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___comparer_18)); }
	inline RuntimeObject* get_comparer_18() const { return ___comparer_18; }
	inline RuntimeObject** get_address_of_comparer_18() { return &___comparer_18; }
	inline void set_comparer_18(RuntimeObject* value)
	{
		___comparer_18 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_18), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inheritedLimitIndex_19)); }
	inline int32_t get_inheritedLimitIndex_19() const { return ___inheritedLimitIndex_19; }
	inline int32_t* get_address_of_inheritedLimitIndex_19() { return &___inheritedLimitIndex_19; }
	inline void set_inheritedLimitIndex_19(int32_t value)
	{
		___inheritedLimitIndex_19 = value;
	}

	inline static int32_t get_offset_of_addElementName_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___addElementName_20)); }
	inline String_t* get_addElementName_20() const { return ___addElementName_20; }
	inline String_t** get_address_of_addElementName_20() { return &___addElementName_20; }
	inline void set_addElementName_20(String_t* value)
	{
		___addElementName_20 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_20), value);
	}

	inline static int32_t get_offset_of_clearElementName_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___clearElementName_21)); }
	inline String_t* get_clearElementName_21() const { return ___clearElementName_21; }
	inline String_t** get_address_of_clearElementName_21() { return &___clearElementName_21; }
	inline void set_clearElementName_21(String_t* value)
	{
		___clearElementName_21 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_21), value);
	}

	inline static int32_t get_offset_of_removeElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removeElementName_22)); }
	inline String_t* get_removeElementName_22() const { return ___removeElementName_22; }
	inline String_t** get_address_of_removeElementName_22() { return &___removeElementName_22; }
	inline void set_removeElementName_22(String_t* value)
	{
		___removeElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T446763386_H
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
#ifndef AUTHENTICATIONMODULEELEMENT_T2289740666_H
#define AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2289740666  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AuthenticationModuleElement_t2289740666_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_typeProp_14() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___typeProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_14() const { return ___typeProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_14() { return &___typeProp_14; }
	inline void set_typeProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifndef BYPASSELEMENT_T2358616601_H
#define BYPASSELEMENT_T2358616601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t2358616601  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct BypassElement_t2358616601_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_addressProp_14() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___addressProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_14() const { return ___addressProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_14() { return &___addressProp_14; }
	inline void set_addressProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T2358616601_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#define CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t3857438253  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ConnectionManagementElement_t3857438253_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3590861854 * ___maxConnectionProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_addressProp_14() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___addressProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_14() const { return ___addressProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_14() { return &___addressProp_14; }
	inline void set_addressProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_14), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___maxConnectionProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maxConnectionProp_15() const { return ___maxConnectionProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maxConnectionProp_15() { return &___maxConnectionProp_15; }
	inline void set_maxConnectionProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maxConnectionProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifndef HTTPWEBREQUESTELEMENT_T2801692355_H
#define HTTPWEBREQUESTELEMENT_T2801692355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2801692355  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpWebRequestElement_t2801692355_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3590861854 * ___maximumErrorResponseLengthProp_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3590861854 * ___maximumResponseHeadersLengthProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3590861854 * ___maximumUnauthorizedUploadLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3590861854 * ___useUnsafeHeaderParsingProp_16;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_13() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumErrorResponseLengthProp_13)); }
	inline ConfigurationProperty_t3590861854 * get_maximumErrorResponseLengthProp_13() const { return ___maximumErrorResponseLengthProp_13; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumErrorResponseLengthProp_13() { return &___maximumErrorResponseLengthProp_13; }
	inline void set_maximumErrorResponseLengthProp_13(ConfigurationProperty_t3590861854 * value)
	{
		___maximumErrorResponseLengthProp_13 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_13), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_14() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumResponseHeadersLengthProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_maximumResponseHeadersLengthProp_14() const { return ___maximumResponseHeadersLengthProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumResponseHeadersLengthProp_14() { return &___maximumResponseHeadersLengthProp_14; }
	inline void set_maximumResponseHeadersLengthProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___maximumResponseHeadersLengthProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_14), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumUnauthorizedUploadLengthProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maximumUnauthorizedUploadLengthProp_15() const { return ___maximumUnauthorizedUploadLengthProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumUnauthorizedUploadLengthProp_15() { return &___maximumUnauthorizedUploadLengthProp_15; }
	inline void set_maximumUnauthorizedUploadLengthProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maximumUnauthorizedUploadLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_15), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___useUnsafeHeaderParsingProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_useUnsafeHeaderParsingProp_16() const { return ___useUnsafeHeaderParsingProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useUnsafeHeaderParsingProp_16() { return &___useUnsafeHeaderParsingProp_16; }
	inline void set_useUnsafeHeaderParsingProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___useUnsafeHeaderParsingProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_16), value);
	}

	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((&___properties_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2801692355_H
#ifndef IPV6ELEMENT_T180053194_H
#define IPV6ELEMENT_T180053194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t180053194  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct Ipv6Element_t180053194_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_enabledProp_14() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___enabledProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_14() const { return ___enabledProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_14() { return &___enabledProp_14; }
	inline void set_enabledProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T180053194_H
#ifndef MODULEELEMENT_T3252950656_H
#define MODULEELEMENT_T3252950656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3252950656  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ModuleElement_t3252950656_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_typeProp_14() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___typeProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_14() const { return ___typeProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_14() { return &___typeProp_14; }
	inline void set_typeProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3252950656_H
#ifndef NETSECTIONGROUP_T3270122580_H
#define NETSECTIONGROUP_T3270122580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t3270122580  : public ConfigurationSectionGroup_t4179402520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T3270122580_H
#ifndef PERFORMANCECOUNTERSELEMENT_T4093363992_H
#define PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4093363992  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerformanceCountersElement_t4093363992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_14;

public:
	inline static int32_t get_offset_of_enabledProp_13() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___enabledProp_13)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_13() const { return ___enabledProp_13; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_13() { return &___enabledProp_13; }
	inline void set_enabledProp_13(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_13 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_13), value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier((&___properties_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifndef PROXYELEMENT_T3214064751_H
#define PROXYELEMENT_T3214064751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t3214064751  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ProxyElement_t3214064751_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t3590861854 * ___autoDetectProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t3590861854 * ___bypassOnLocalProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t3590861854 * ___proxyAddressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t3590861854 * ___scriptLocationProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t3590861854 * ___useSystemDefaultProp_18;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_14() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___autoDetectProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_autoDetectProp_14() const { return ___autoDetectProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_autoDetectProp_14() { return &___autoDetectProp_14; }
	inline void set_autoDetectProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___autoDetectProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_14), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_15() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___bypassOnLocalProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_bypassOnLocalProp_15() const { return ___bypassOnLocalProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassOnLocalProp_15() { return &___bypassOnLocalProp_15; }
	inline void set_bypassOnLocalProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___bypassOnLocalProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_15), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___proxyAddressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_proxyAddressProp_16() const { return ___proxyAddressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyAddressProp_16() { return &___proxyAddressProp_16; }
	inline void set_proxyAddressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___proxyAddressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_16), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___scriptLocationProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_scriptLocationProp_17() const { return ___scriptLocationProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_scriptLocationProp_17() { return &___scriptLocationProp_17; }
	inline void set_scriptLocationProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___scriptLocationProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_17), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___useSystemDefaultProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_useSystemDefaultProp_18() const { return ___useSystemDefaultProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useSystemDefaultProp_18() { return &___useSystemDefaultProp_18; }
	inline void set_useSystemDefaultProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___useSystemDefaultProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T3214064751_H
#ifndef SERVICEPOINTMANAGERELEMENT_T2768640361_H
#define SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t2768640361  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ServicePointManagerElement_t2768640361_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t3590861854 * ___checkCertificateNameProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t3590861854 * ___checkCertificateRevocationListProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t3590861854 * ___dnsRefreshTimeoutProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t3590861854 * ___enableDnsRoundRobinProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t3590861854 * ___expect100ContinueProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t3590861854 * ___useNagleAlgorithmProp_19;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_checkCertificateNameProp_14() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateNameProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateNameProp_14() const { return ___checkCertificateNameProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateNameProp_14() { return &___checkCertificateNameProp_14; }
	inline void set_checkCertificateNameProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateNameProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateNameProp_14), value);
	}

	inline static int32_t get_offset_of_checkCertificateRevocationListProp_15() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateRevocationListProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateRevocationListProp_15() const { return ___checkCertificateRevocationListProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateRevocationListProp_15() { return &___checkCertificateRevocationListProp_15; }
	inline void set_checkCertificateRevocationListProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateRevocationListProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateRevocationListProp_15), value);
	}

	inline static int32_t get_offset_of_dnsRefreshTimeoutProp_16() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___dnsRefreshTimeoutProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_dnsRefreshTimeoutProp_16() const { return ___dnsRefreshTimeoutProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_dnsRefreshTimeoutProp_16() { return &___dnsRefreshTimeoutProp_16; }
	inline void set_dnsRefreshTimeoutProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___dnsRefreshTimeoutProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___dnsRefreshTimeoutProp_16), value);
	}

	inline static int32_t get_offset_of_enableDnsRoundRobinProp_17() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___enableDnsRoundRobinProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_enableDnsRoundRobinProp_17() const { return ___enableDnsRoundRobinProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enableDnsRoundRobinProp_17() { return &___enableDnsRoundRobinProp_17; }
	inline void set_enableDnsRoundRobinProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___enableDnsRoundRobinProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___enableDnsRoundRobinProp_17), value);
	}

	inline static int32_t get_offset_of_expect100ContinueProp_18() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___expect100ContinueProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_expect100ContinueProp_18() const { return ___expect100ContinueProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_expect100ContinueProp_18() { return &___expect100ContinueProp_18; }
	inline void set_expect100ContinueProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___expect100ContinueProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___expect100ContinueProp_18), value);
	}

	inline static int32_t get_offset_of_useNagleAlgorithmProp_19() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___useNagleAlgorithmProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_useNagleAlgorithmProp_19() const { return ___useNagleAlgorithmProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useNagleAlgorithmProp_19() { return &___useNagleAlgorithmProp_19; }
	inline void set_useNagleAlgorithmProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___useNagleAlgorithmProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___useNagleAlgorithmProp_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifndef SOCKETELEMENT_T3329874080_H
#define SOCKETELEMENT_T3329874080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t3329874080  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct SocketElement_t3329874080_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForAcceptProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForConnectProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_14() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForAcceptProp_14() const { return ___alwaysUseCompletionPortsForAcceptProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_14() { return &___alwaysUseCompletionPortsForAcceptProp_14; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForAcceptProp_14), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_15() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForConnectProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForConnectProp_15() const { return ___alwaysUseCompletionPortsForConnectProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForConnectProp_15() { return &___alwaysUseCompletionPortsForConnectProp_15; }
	inline void set_alwaysUseCompletionPortsForConnectProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForConnectProp_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETELEMENT_T3329874080_H
#ifndef WEBPROXYSCRIPTELEMENT_T477406598_H
#define WEBPROXYSCRIPTELEMENT_T477406598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t477406598  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebProxyScriptElement_t477406598_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t3590861854 * ___downloadTimeoutProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_14;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_13() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___downloadTimeoutProp_13)); }
	inline ConfigurationProperty_t3590861854 * get_downloadTimeoutProp_13() const { return ___downloadTimeoutProp_13; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_downloadTimeoutProp_13() { return &___downloadTimeoutProp_13; }
	inline void set_downloadTimeoutProp_13(ConfigurationProperty_t3590861854 * value)
	{
		___downloadTimeoutProp_13 = value;
		Il2CppCodeGenWriteBarrier((&___downloadTimeoutProp_13), value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier((&___properties_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXYSCRIPTELEMENT_T477406598_H
#ifndef WEBREQUESTMODULEELEMENT_T1406085120_H
#define WEBREQUESTMODULEELEMENT_T1406085120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t1406085120  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebRequestModuleElement_t1406085120_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t3590861854 * ___prefixProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier((&___properties_13), value);
	}

	inline static int32_t get_offset_of_prefixProp_14() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___prefixProp_14)); }
	inline ConfigurationProperty_t3590861854 * get_prefixProp_14() const { return ___prefixProp_14; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_prefixProp_14() { return &___prefixProp_14; }
	inline void set_prefixProp_14(ConfigurationProperty_t3590861854 * value)
	{
		___prefixProp_14 = value;
		Il2CppCodeGenWriteBarrier((&___prefixProp_14), value);
	}

	inline static int32_t get_offset_of_typeProp_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___typeProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_15() const { return ___typeProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_15() { return &___typeProp_15; }
	inline void set_typeProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENT_T1406085120_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255364  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::0283A6AF88802AB45989B29549915BEA0F6CD515
	__StaticArrayInitTypeSizeU3D14_t3517563373  ___0283A6AF88802AB45989B29549915BEA0F6CD515_0;
	// System.Int64 <PrivateImplementationDetails>::03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	int64_t ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::1A39764B112685485A5BA7B2880D878B858C1A7A
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___1A39764B112685485A5BA7B2880D878B858C1A7A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___59F5BD34B6C013DEACC784F69C67E95150033A84_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C
	__StaticArrayInitTypeSizeU3D6_t3217689076  ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E
	__StaticArrayInitTypeSizeU3D128_t531529102  ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3
	__StaticArrayInitTypeSizeU3D44_t3517366765  ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9;
	// System.Int64 <PrivateImplementationDetails>::98A44A6F8606AE6F23FE230286C1D6FBCC407226
	int64_t ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADDB8526F472C1C6D36DBD5A6E509D973CC34C92
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t531529102  ___CCEEADA43268372341F81AE0C9208C6856441C04_13;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC5842B3154E1AF94500B57220EB9F684BCCC42A
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EEAFE8C6E1AB017237567305EE925C976CDB6458
	__StaticArrayInitTypeSizeU3D256_t1757367633  ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16;

public:
	inline static int32_t get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___0283A6AF88802AB45989B29549915BEA0F6CD515_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373  get_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() const { return ___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373 * get_address_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return &___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline void set_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(__StaticArrayInitTypeSizeU3D14_t3517563373  value)
	{
		___0283A6AF88802AB45989B29549915BEA0F6CD515_0 = value;
	}

	inline static int32_t get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1)); }
	inline int64_t get_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() const { return ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline int64_t* get_address_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return &___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline void set_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(int64_t value)
	{
		___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1 = value;
	}

	inline static int32_t get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___1A39764B112685485A5BA7B2880D878B858C1A7A_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() const { return ___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return &___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline void set_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___1A39764B112685485A5BA7B2880D878B858C1A7A_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() const { return ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return &___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline void set_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4 = value;
	}

	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_5)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_5 = value;
	}

	inline static int32_t get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076  get_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() const { return ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076 * get_address_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return &___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline void set_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(__StaticArrayInitTypeSizeU3D6_t3217689076  value)
	{
		___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7 = value;
	}

	inline static int32_t get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() const { return ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return &___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline void set_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8 = value;
	}

	inline static int32_t get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765  get_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() const { return ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765 * get_address_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return &___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline void set_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(__StaticArrayInitTypeSizeU3D44_t3517366765  value)
	{
		___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9 = value;
	}

	inline static int32_t get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10)); }
	inline int64_t get_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() const { return ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline int64_t* get_address_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return &___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline void set_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(int64_t value)
	{
		___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10 = value;
	}

	inline static int32_t get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() const { return ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return &___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline void set_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_13)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_CCEEADA43268372341F81AE0C9208C6856441C04_13() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_13(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_13 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14 = value;
	}

	inline static int32_t get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() const { return ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return &___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline void set_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15 = value;
	}

	inline static int32_t get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633  get_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() const { return ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633 * get_address_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return &___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline void set_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(__StaticArrayInitTypeSizeU3D256_t1757367633  value)
	{
		___EEAFE8C6E1AB017237567305EE925C976CDB6458_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#ifndef CONFIGNAMEVALUECOLLECTION_T1573003828_H
#define CONFIGNAMEVALUECOLLECTION_T1573003828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigNameValueCollection
struct  ConfigNameValueCollection_t1573003828  : public NameValueCollection_t407452768
{
public:
	// System.Boolean System.Configuration.ConfigNameValueCollection::modified
	bool ___modified_12;

public:
	inline static int32_t get_offset_of_modified_12() { return static_cast<int32_t>(offsetof(ConfigNameValueCollection_t1573003828, ___modified_12)); }
	inline bool get_modified_12() const { return ___modified_12; }
	inline bool* get_address_of_modified_12() { return &___modified_12; }
	inline void set_modified_12(bool value)
	{
		___modified_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGNAMEVALUECOLLECTION_T1573003828_H
#ifndef CONFIGURATIONALLOWDEFINITION_T1879228320_H
#define CONFIGURATIONALLOWDEFINITION_T1879228320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationAllowDefinition
struct  ConfigurationAllowDefinition_t1879228320 
{
public:
	// System.Int32 System.Configuration.ConfigurationAllowDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigurationAllowDefinition_t1879228320, ___value___2)); }
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
#endif // CONFIGURATIONALLOWDEFINITION_T1879228320_H
#ifndef CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#define CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationAllowExeDefinition
struct  ConfigurationAllowExeDefinition_t2804732269 
{
public:
	// System.Int32 System.Configuration.ConfigurationAllowExeDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigurationAllowExeDefinition_t2804732269, ___value___2)); }
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
#endif // CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#ifndef CONFIGURATIONELEMENTCOLLECTIONTYPE_T2560831360_H
#define CONFIGURATIONELEMENTCOLLECTIONTYPE_T2560831360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollectionType
struct  ConfigurationElementCollectionType_t2560831360 
{
public:
	// System.Int32 System.Configuration.ConfigurationElementCollectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigurationElementCollectionType_t2560831360, ___value___2)); }
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
#endif // CONFIGURATIONELEMENTCOLLECTIONTYPE_T2560831360_H
#ifndef REQUESTCACHELEVEL_T1509648360_H
#define REQUESTCACHELEVEL_T1509648360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t1509648360 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t1509648360, ___value___2)); }
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
#endif // REQUESTCACHELEVEL_T1509648360_H
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1161221431  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifndef AUTHENTICATIONMODULESSECTION_T1083221556_H
#define AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1083221556  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct AuthenticationModulesSection_t1083221556_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3590861854 * ___authenticationModulesProp_18;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((&___properties_17), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_18() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___authenticationModulesProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_authenticationModulesProp_18() const { return ___authenticationModulesProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_authenticationModulesProp_18() { return &___authenticationModulesProp_18; }
	inline void set_authenticationModulesProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___authenticationModulesProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifndef BYPASSELEMENTCOLLECTION_T47326401_H
#define BYPASSELEMENTCOLLECTION_T47326401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t47326401  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T47326401_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3860227195  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1603642748_H
#define CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1603642748  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct ConnectionManagementSection_t1603642748_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t3590861854 * ___connectionManagementProp_17;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_18;

public:
	inline static int32_t get_offset_of_connectionManagementProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___connectionManagementProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_connectionManagementProp_17() const { return ___connectionManagementProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_connectionManagementProp_17() { return &___connectionManagementProp_17; }
	inline void set_connectionManagementProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___connectionManagementProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_17), value);
	}

	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier((&___properties_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifndef DEFAULTPROXYSECTION_T4167594595_H
#define DEFAULTPROXYSECTION_T4167594595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t4167594595  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct DefaultProxySection_t4167594595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t3590861854 * ___bypassListProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t3590861854 * ___moduleProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t3590861854 * ___proxyProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t3590861854 * ___useDefaultCredentialsProp_22;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((&___properties_17), value);
	}

	inline static int32_t get_offset_of_bypassListProp_18() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___bypassListProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_bypassListProp_18() const { return ___bypassListProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassListProp_18() { return &___bypassListProp_18; }
	inline void set_bypassListProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___bypassListProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_18), value);
	}

	inline static int32_t get_offset_of_enabledProp_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___enabledProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_19() const { return ___enabledProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_19() { return &___enabledProp_19; }
	inline void set_enabledProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_19), value);
	}

	inline static int32_t get_offset_of_moduleProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___moduleProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_moduleProp_20() const { return ___moduleProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_moduleProp_20() { return &___moduleProp_20; }
	inline void set_moduleProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___moduleProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_20), value);
	}

	inline static int32_t get_offset_of_proxyProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___proxyProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_proxyProp_21() const { return ___proxyProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyProp_21() { return &___proxyProp_21; }
	inline void set_proxyProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___proxyProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_21), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___useDefaultCredentialsProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_useDefaultCredentialsProp_22() const { return ___useDefaultCredentialsProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useDefaultCredentialsProp_22() { return &___useDefaultCredentialsProp_22; }
	inline void set_useDefaultCredentialsProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___useDefaultCredentialsProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T4167594595_H
#ifndef AUTODETECTVALUES_T1649618618_H
#define AUTODETECTVALUES_T1649618618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t1649618618 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t1649618618, ___value___2)); }
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
#endif // AUTODETECTVALUES_T1649618618_H
#ifndef BYPASSONLOCALVALUES_T945670496_H
#define BYPASSONLOCALVALUES_T945670496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t945670496 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t945670496, ___value___2)); }
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
#endif // BYPASSONLOCALVALUES_T945670496_H
#ifndef USESYSTEMDEFAULTVALUES_T2711047072_H
#define USESYSTEMDEFAULTVALUES_T2711047072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t2711047072 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t2711047072, ___value___2)); }
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
#endif // USESYSTEMDEFAULTVALUES_T2711047072_H
#ifndef SETTINGSSECTION_T1259474535_H
#define SETTINGSSECTION_T1259474535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t1259474535  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct SettingsSection_t1259474535_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3590861854 * ___httpWebRequestProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3590861854 * ___ipv6Prop_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3590861854 * ___performanceCountersProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3590861854 * ___servicePointManagerProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3590861854 * ___webProxyScriptProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3590861854 * ___socketProp_23;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((&___properties_17), value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_18() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___httpWebRequestProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_httpWebRequestProp_18() const { return ___httpWebRequestProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_httpWebRequestProp_18() { return &___httpWebRequestProp_18; }
	inline void set_httpWebRequestProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___httpWebRequestProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___httpWebRequestProp_18), value);
	}

	inline static int32_t get_offset_of_ipv6Prop_19() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___ipv6Prop_19)); }
	inline ConfigurationProperty_t3590861854 * get_ipv6Prop_19() const { return ___ipv6Prop_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_ipv6Prop_19() { return &___ipv6Prop_19; }
	inline void set_ipv6Prop_19(ConfigurationProperty_t3590861854 * value)
	{
		___ipv6Prop_19 = value;
		Il2CppCodeGenWriteBarrier((&___ipv6Prop_19), value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_20() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___performanceCountersProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_performanceCountersProp_20() const { return ___performanceCountersProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_performanceCountersProp_20() { return &___performanceCountersProp_20; }
	inline void set_performanceCountersProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___performanceCountersProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___performanceCountersProp_20), value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_21() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___servicePointManagerProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_servicePointManagerProp_21() const { return ___servicePointManagerProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_servicePointManagerProp_21() { return &___servicePointManagerProp_21; }
	inline void set_servicePointManagerProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___servicePointManagerProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___servicePointManagerProp_21), value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___webProxyScriptProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_webProxyScriptProp_22() const { return ___webProxyScriptProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webProxyScriptProp_22() { return &___webProxyScriptProp_22; }
	inline void set_webProxyScriptProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___webProxyScriptProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___webProxyScriptProp_22), value);
	}

	inline static int32_t get_offset_of_socketProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___socketProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_socketProp_23() const { return ___socketProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_socketProp_23() { return &___socketProp_23; }
	inline void set_socketProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___socketProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___socketProp_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTION_T1259474535_H
#ifndef WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#define WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElementCollection
struct  WebRequestModuleElementCollection_t925190782  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifndef WEBREQUESTMODULESSECTION_T4132732301_H
#define WEBREQUESTMODULESSECTION_T4132732301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t4132732301  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct WebRequestModulesSection_t4132732301_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t3590861854 * ___webRequestModulesProp_18;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((&___properties_17), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_18() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___webRequestModulesProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_webRequestModulesProp_18() const { return ___webRequestModulesProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webRequestModulesProp_18() { return &___webRequestModulesProp_18; }
	inline void set_webRequestModulesProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___webRequestModulesProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T4132732301_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
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
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef CONFIGURATIONCOLLECTIONATTRIBUTE_T3695308734_H
#define CONFIGURATIONCOLLECTIONATTRIBUTE_T3695308734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationCollectionAttribute
struct  ConfigurationCollectionAttribute_t3695308734  : public Attribute_t861562559
{
public:
	// System.String System.Configuration.ConfigurationCollectionAttribute::addItemName
	String_t* ___addItemName_0;
	// System.String System.Configuration.ConfigurationCollectionAttribute::clearItemsName
	String_t* ___clearItemsName_1;
	// System.String System.Configuration.ConfigurationCollectionAttribute::removeItemName
	String_t* ___removeItemName_2;
	// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationCollectionAttribute::collectionType
	int32_t ___collectionType_3;
	// System.Type System.Configuration.ConfigurationCollectionAttribute::itemType
	Type_t * ___itemType_4;

public:
	inline static int32_t get_offset_of_addItemName_0() { return static_cast<int32_t>(offsetof(ConfigurationCollectionAttribute_t3695308734, ___addItemName_0)); }
	inline String_t* get_addItemName_0() const { return ___addItemName_0; }
	inline String_t** get_address_of_addItemName_0() { return &___addItemName_0; }
	inline void set_addItemName_0(String_t* value)
	{
		___addItemName_0 = value;
		Il2CppCodeGenWriteBarrier((&___addItemName_0), value);
	}

	inline static int32_t get_offset_of_clearItemsName_1() { return static_cast<int32_t>(offsetof(ConfigurationCollectionAttribute_t3695308734, ___clearItemsName_1)); }
	inline String_t* get_clearItemsName_1() const { return ___clearItemsName_1; }
	inline String_t** get_address_of_clearItemsName_1() { return &___clearItemsName_1; }
	inline void set_clearItemsName_1(String_t* value)
	{
		___clearItemsName_1 = value;
		Il2CppCodeGenWriteBarrier((&___clearItemsName_1), value);
	}

	inline static int32_t get_offset_of_removeItemName_2() { return static_cast<int32_t>(offsetof(ConfigurationCollectionAttribute_t3695308734, ___removeItemName_2)); }
	inline String_t* get_removeItemName_2() const { return ___removeItemName_2; }
	inline String_t** get_address_of_removeItemName_2() { return &___removeItemName_2; }
	inline void set_removeItemName_2(String_t* value)
	{
		___removeItemName_2 = value;
		Il2CppCodeGenWriteBarrier((&___removeItemName_2), value);
	}

	inline static int32_t get_offset_of_collectionType_3() { return static_cast<int32_t>(offsetof(ConfigurationCollectionAttribute_t3695308734, ___collectionType_3)); }
	inline int32_t get_collectionType_3() const { return ___collectionType_3; }
	inline int32_t* get_address_of_collectionType_3() { return &___collectionType_3; }
	inline void set_collectionType_3(int32_t value)
	{
		___collectionType_3 = value;
	}

	inline static int32_t get_offset_of_itemType_4() { return static_cast<int32_t>(offsetof(ConfigurationCollectionAttribute_t3695308734, ___itemType_4)); }
	inline Type_t * get_itemType_4() const { return ___itemType_4; }
	inline Type_t ** get_address_of_itemType_4() { return &___itemType_4; }
	inline void set_itemType_4(Type_t * value)
	{
		___itemType_4 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONCOLLECTIONATTRIBUTE_T3695308734_H
#ifndef REQUESTCACHEPOLICY_T2923596909_H
#define REQUESTCACHEPOLICY_T2923596909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2923596909  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2923596909, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2923596909_H
#ifndef SETTINGSSECTIONINTERNAL_T781171337_H
#define SETTINGSSECTIONINTERNAL_T781171337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSectionInternal
struct  SettingsSectionInternal_t781171337  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Configuration.SettingsSectionInternal::HttpListenerUnescapeRequestUrl
	bool ___HttpListenerUnescapeRequestUrl_1;
	// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SettingsSectionInternal::IPProtectionLevel
	int32_t ___IPProtectionLevel_2;

public:
	inline static int32_t get_offset_of_HttpListenerUnescapeRequestUrl_1() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___HttpListenerUnescapeRequestUrl_1)); }
	inline bool get_HttpListenerUnescapeRequestUrl_1() const { return ___HttpListenerUnescapeRequestUrl_1; }
	inline bool* get_address_of_HttpListenerUnescapeRequestUrl_1() { return &___HttpListenerUnescapeRequestUrl_1; }
	inline void set_HttpListenerUnescapeRequestUrl_1(bool value)
	{
		___HttpListenerUnescapeRequestUrl_1 = value;
	}

	inline static int32_t get_offset_of_IPProtectionLevel_2() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___IPProtectionLevel_2)); }
	inline int32_t get_IPProtectionLevel_2() const { return ___IPProtectionLevel_2; }
	inline int32_t* get_address_of_IPProtectionLevel_2() { return &___IPProtectionLevel_2; }
	inline void set_IPProtectionLevel_2(int32_t value)
	{
		___IPProtectionLevel_2 = value;
	}
};

struct SettingsSectionInternal_t781171337_StaticFields
{
public:
	// System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::instance
	SettingsSectionInternal_t781171337 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337_StaticFields, ___instance_0)); }
	inline SettingsSectionInternal_t781171337 * get_instance_0() const { return ___instance_0; }
	inline SettingsSectionInternal_t781171337 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SettingsSectionInternal_t781171337 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTIONINTERNAL_T781171337_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2900 = { sizeof (SettingsSectionInternal_t781171337), -1, sizeof(SettingsSectionInternal_t781171337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2900[3] = 
{
	SettingsSectionInternal_t781171337_StaticFields::get_offset_of_instance_0(),
	SettingsSectionInternal_t781171337::get_offset_of_HttpListenerUnescapeRequestUrl_1(),
	SettingsSectionInternal_t781171337::get_offset_of_IPProtectionLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2901 = { sizeof (AuthenticationModuleElement_t2289740666), -1, sizeof(AuthenticationModuleElement_t2289740666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2901[2] = 
{
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_properties_13(),
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_typeProp_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2902 = { sizeof (AuthenticationModuleElementCollection_t1161221431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2903 = { sizeof (AuthenticationModulesSection_t1083221556), -1, sizeof(AuthenticationModulesSection_t1083221556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2903[2] = 
{
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_properties_17(),
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_authenticationModulesProp_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2904 = { sizeof (BypassElement_t2358616601), -1, sizeof(BypassElement_t2358616601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2904[2] = 
{
	BypassElement_t2358616601_StaticFields::get_offset_of_properties_13(),
	BypassElement_t2358616601_StaticFields::get_offset_of_addressProp_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2905 = { sizeof (BypassElementCollection_t47326401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2906 = { sizeof (ConnectionManagementElement_t3857438253), -1, sizeof(ConnectionManagementElement_t3857438253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2906[3] = 
{
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_properties_13(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_addressProp_14(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_maxConnectionProp_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2907 = { sizeof (ConnectionManagementElementCollection_t3860227195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2908 = { sizeof (ConnectionManagementData_t2003128658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2908[1] = 
{
	ConnectionManagementData_t2003128658::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2909 = { sizeof (ConnectionManagementSection_t1603642748), -1, sizeof(ConnectionManagementSection_t1603642748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2909[2] = 
{
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_connectionManagementProp_17(),
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_properties_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2910 = { sizeof (DefaultProxySection_t4167594595), -1, sizeof(DefaultProxySection_t4167594595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2910[6] = 
{
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_properties_17(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_bypassListProp_18(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_enabledProp_19(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_moduleProp_20(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_proxyProp_21(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_useDefaultCredentialsProp_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2911 = { sizeof (HttpWebRequestElement_t2801692355), -1, sizeof(HttpWebRequestElement_t2801692355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2911[5] = 
{
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumErrorResponseLengthProp_13(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_14(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_15(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_16(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_properties_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2912 = { sizeof (Ipv6Element_t180053194), -1, sizeof(Ipv6Element_t180053194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2912[2] = 
{
	Ipv6Element_t180053194_StaticFields::get_offset_of_properties_13(),
	Ipv6Element_t180053194_StaticFields::get_offset_of_enabledProp_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2913 = { sizeof (ModuleElement_t3252950656), -1, sizeof(ModuleElement_t3252950656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2913[2] = 
{
	ModuleElement_t3252950656_StaticFields::get_offset_of_properties_13(),
	ModuleElement_t3252950656_StaticFields::get_offset_of_typeProp_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2914 = { sizeof (NetSectionGroup_t3270122580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2915 = { sizeof (PerformanceCountersElement_t4093363992), -1, sizeof(PerformanceCountersElement_t4093363992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2915[2] = 
{
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_enabledProp_13(),
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_properties_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2916 = { sizeof (ProxyElement_t3214064751), -1, sizeof(ProxyElement_t3214064751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2916[6] = 
{
	ProxyElement_t3214064751_StaticFields::get_offset_of_properties_13(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_autoDetectProp_14(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_bypassOnLocalProp_15(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_proxyAddressProp_16(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_scriptLocationProp_17(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_useSystemDefaultProp_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2917 = { sizeof (BypassOnLocalValues_t945670496)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2917[4] = 
{
	BypassOnLocalValues_t945670496::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2918 = { sizeof (UseSystemDefaultValues_t2711047072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2918[4] = 
{
	UseSystemDefaultValues_t2711047072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2919 = { sizeof (AutoDetectValues_t1649618618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2919[4] = 
{
	AutoDetectValues_t1649618618::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2920 = { sizeof (ServicePointManagerElement_t2768640361), -1, sizeof(ServicePointManagerElement_t2768640361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2920[7] = 
{
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_properties_13(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateNameProp_14(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateRevocationListProp_15(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_dnsRefreshTimeoutProp_16(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_enableDnsRoundRobinProp_17(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_expect100ContinueProp_18(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_useNagleAlgorithmProp_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2921 = { sizeof (SettingsSection_t1259474535), -1, sizeof(SettingsSection_t1259474535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2921[7] = 
{
	SettingsSection_t1259474535_StaticFields::get_offset_of_properties_17(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_httpWebRequestProp_18(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_ipv6Prop_19(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_performanceCountersProp_20(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_servicePointManagerProp_21(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_webProxyScriptProp_22(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_socketProp_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2922 = { sizeof (SocketElement_t3329874080), -1, sizeof(SocketElement_t3329874080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2922[3] = 
{
	SocketElement_t3329874080_StaticFields::get_offset_of_properties_13(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForAcceptProp_14(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForConnectProp_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2923 = { sizeof (WebProxyScriptElement_t477406598), -1, sizeof(WebProxyScriptElement_t477406598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2923[2] = 
{
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_downloadTimeoutProp_13(),
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_properties_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2924 = { sizeof (WebRequestModuleElement_t1406085120), -1, sizeof(WebRequestModuleElement_t1406085120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2924[3] = 
{
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_properties_13(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_prefixProp_14(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_typeProp_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2925 = { sizeof (WebRequestModuleElementCollection_t925190782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2926 = { sizeof (WebRequestModulesSection_t4132732301), -1, sizeof(WebRequestModulesSection_t4132732301_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2926[2] = 
{
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_properties_17(),
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_webRequestModulesProp_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2927 = { sizeof (RequestCache_t3669488992), -1, sizeof(RequestCache_t3669488992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2927[1] = 
{
	RequestCache_t3669488992_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2928 = { sizeof (RequestCacheValidator_t587568667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2929 = { sizeof (RequestCacheBinding_t2614858269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2929[2] = 
{
	RequestCacheBinding_t2614858269::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t2614858269::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2930 = { sizeof (RequestCacheLevel_t1509648360)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2930[8] = 
{
	RequestCacheLevel_t1509648360::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2931 = { sizeof (RequestCachePolicy_t2923596909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2931[1] = 
{
	RequestCachePolicy_t2923596909::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2932 = { sizeof (RequestCacheProtocol_t3614465628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2933 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2933[3] = 
{
	HybridDictionary_t4070033136::get_offset_of_list_0(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_1(),
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2934 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2935 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2935[5] = 
{
	ListDictionary_t1624492310::get_offset_of_head_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_count_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
	ListDictionary_t1624492310::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2936 = { sizeof (NodeEnumerator_t3248827953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2936[4] = 
{
	NodeEnumerator_t3248827953::get_offset_of_list_0(),
	NodeEnumerator_t3248827953::get_offset_of_current_1(),
	NodeEnumerator_t3248827953::get_offset_of_version_2(),
	NodeEnumerator_t3248827953::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2937 = { sizeof (NodeKeyValueCollection_t1279341543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2937[2] = 
{
	NodeKeyValueCollection_t1279341543::get_offset_of_list_0(),
	NodeKeyValueCollection_t1279341543::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2938 = { sizeof (NodeKeyValueEnumerator_t642906510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2938[5] = 
{
	NodeKeyValueEnumerator_t642906510::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2939 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2939[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2940 = { sizeof (NameObjectCollectionBase_t2091847364), -1, sizeof(NameObjectCollectionBase_t2091847364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2940[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of__readOnly_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesArray_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keyComparer_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesTable_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of__nullKeyEntry_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keys_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of__serializationInfo_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of__version_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of__syncRoot_8(),
	NameObjectCollectionBase_t2091847364_StaticFields::get_offset_of_defaultComparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2941 = { sizeof (NameObjectEntry_t4224248211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2941[2] = 
{
	NameObjectEntry_t4224248211::get_offset_of_Key_0(),
	NameObjectEntry_t4224248211::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2942 = { sizeof (NameObjectKeysEnumerator_t3824388371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2942[3] = 
{
	NameObjectKeysEnumerator_t3824388371::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2943 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2943[1] = 
{
	KeysCollection_t1318642398::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2944 = { sizeof (CompatibleComparer_t4154576053), -1, sizeof(CompatibleComparer_t4154576053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2944[4] = 
{
	CompatibleComparer_t4154576053::get_offset_of__comparer_0(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t4154576053::get_offset_of__hcp_2(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2945 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2945[2] = 
{
	NameValueCollection_t407452768::get_offset_of__all_10(),
	NameValueCollection_t407452768::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2946 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2946[7] = 
{
	OrderedDictionary_t2617496293::get_offset_of__objectsArray_0(),
	OrderedDictionary_t2617496293::get_offset_of__objectsTable_1(),
	OrderedDictionary_t2617496293::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t2617496293::get_offset_of__comparer_3(),
	OrderedDictionary_t2617496293::get_offset_of__readOnly_4(),
	OrderedDictionary_t2617496293::get_offset_of__syncRoot_5(),
	OrderedDictionary_t2617496293::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2947 = { sizeof (OrderedDictionaryEnumerator_t1215437281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2947[2] = 
{
	OrderedDictionaryEnumerator_t1215437281::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t1215437281::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2948 = { sizeof (OrderedDictionaryKeyValueCollection_t1788601968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2948[2] = 
{
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2949 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2949[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2950 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2950[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2951 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2952 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2953 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2954 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2955 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2955[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2956 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2956[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2957 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2957[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2958 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2958[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2959 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2959[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2960 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2961 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2961[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2962 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2962[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2963 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2963[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2964 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2964[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2965 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2965[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2966 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2966[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2967 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2967[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2968 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2968[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2969 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2970 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2971 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255364), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2971[17] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(),
	U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields::get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2972 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885684)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885684 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2973 = { sizeof (__StaticArrayInitTypeSizeU3D6_t3217689076)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t3217689076 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2974 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2975 = { sizeof (__StaticArrayInitTypeSizeU3D12_t2710994319)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t2710994319 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2976 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2977 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125392)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2978 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366765)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366765 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2979 = { sizeof (__StaticArrayInitTypeSizeU3D128_t531529102)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t531529102 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2980 = { sizeof (__StaticArrayInitTypeSizeU3D256_t1757367633)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t1757367633 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2981 = { sizeof (U3CModuleU3E_t692745529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2982 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2983 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2984 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2985 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2986 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2987 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2988 = { sizeof (ProviderBase_t2594774949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2988[3] = 
{
	ProviderBase_t2594774949::get_offset_of_alreadyInitialized_0(),
	ProviderBase_t2594774949::get_offset_of__description_1(),
	ProviderBase_t2594774949::get_offset_of__name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2989 = { sizeof (ProviderCollection_t3810574769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2989[3] = 
{
	ProviderCollection_t3810574769::get_offset_of_lookup_0(),
	ProviderCollection_t3810574769::get_offset_of_readOnly_1(),
	ProviderCollection_t3810574769::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2990 = { sizeof (ClientConfigurationSystem_t3254701293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2990[1] = 
{
	ClientConfigurationSystem_t3254701293::get_offset_of_cfg_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2991 = { sizeof (ConfigNameValueCollection_t1573003828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2991[1] = 
{
	ConfigNameValueCollection_t1573003828::get_offset_of_modified_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2992 = { sizeof (ConfigInfo_t2364721456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2992[6] = 
{
	ConfigInfo_t2364721456::get_offset_of_Name_0(),
	ConfigInfo_t2364721456::get_offset_of_TypeName_1(),
	ConfigInfo_t2364721456::get_offset_of_Type_2(),
	ConfigInfo_t2364721456::get_offset_of_streamName_3(),
	ConfigInfo_t2364721456::get_offset_of_Parent_4(),
	ConfigInfo_t2364721456::get_offset_of_ConfigHost_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2993 = { sizeof (Configuration_t2529364143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2993[12] = 
{
	Configuration_t2529364143::get_offset_of_parent_0(),
	Configuration_t2529364143::get_offset_of_elementData_1(),
	Configuration_t2529364143::get_offset_of_streamName_2(),
	Configuration_t2529364143::get_offset_of_rootSectionGroup_3(),
	Configuration_t2529364143::get_offset_of_locations_4(),
	Configuration_t2529364143::get_offset_of_rootGroup_5(),
	Configuration_t2529364143::get_offset_of_system_6(),
	Configuration_t2529364143::get_offset_of_hasFile_7(),
	Configuration_t2529364143::get_offset_of_rootNamespace_8(),
	Configuration_t2529364143::get_offset_of_configPath_9(),
	Configuration_t2529364143::get_offset_of_locationConfigPath_10(),
	Configuration_t2529364143::get_offset_of_locationSubPath_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2994 = { sizeof (ConfigurationAllowDefinition_t1879228320)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2994[5] = 
{
	ConfigurationAllowDefinition_t1879228320::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2995 = { sizeof (ConfigurationAllowExeDefinition_t2804732269)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2995[5] = 
{
	ConfigurationAllowExeDefinition_t2804732269::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2996 = { sizeof (ConfigurationCollectionAttribute_t3695308734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2996[5] = 
{
	ConfigurationCollectionAttribute_t3695308734::get_offset_of_addItemName_0(),
	ConfigurationCollectionAttribute_t3695308734::get_offset_of_clearItemsName_1(),
	ConfigurationCollectionAttribute_t3695308734::get_offset_of_removeItemName_2(),
	ConfigurationCollectionAttribute_t3695308734::get_offset_of_collectionType_3(),
	ConfigurationCollectionAttribute_t3695308734::get_offset_of_itemType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2997 = { sizeof (ConfigurationElement_t3318566633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2997[13] = 
{
	ConfigurationElement_t3318566633::get_offset_of_rawXml_0(),
	ConfigurationElement_t3318566633::get_offset_of_modified_1(),
	ConfigurationElement_t3318566633::get_offset_of_map_2(),
	ConfigurationElement_t3318566633::get_offset_of_keyProps_3(),
	ConfigurationElement_t3318566633::get_offset_of_defaultCollection_4(),
	ConfigurationElement_t3318566633::get_offset_of_readOnly_5(),
	ConfigurationElement_t3318566633::get_offset_of_elementInfo_6(),
	ConfigurationElement_t3318566633::get_offset_of__configuration_7(),
	ConfigurationElement_t3318566633::get_offset_of_lockAllAttributesExcept_8(),
	ConfigurationElement_t3318566633::get_offset_of_lockAllElementsExcept_9(),
	ConfigurationElement_t3318566633::get_offset_of_lockAttributes_10(),
	ConfigurationElement_t3318566633::get_offset_of_lockElements_11(),
	ConfigurationElement_t3318566633::get_offset_of_lockItem_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2998 = { sizeof (ElementMap_t2160633803), -1, sizeof(ElementMap_t2160633803_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2998[3] = 
{
	ElementMap_t2160633803_StaticFields::get_offset_of_elementMaps_0(),
	ElementMap_t2160633803::get_offset_of_properties_1(),
	ElementMap_t2160633803::get_offset_of_collectionAttribute_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2999 = { sizeof (ConfigurationElementCollection_t446763386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2999[10] = 
{
	ConfigurationElementCollection_t446763386::get_offset_of_list_13(),
	ConfigurationElementCollection_t446763386::get_offset_of_removed_14(),
	ConfigurationElementCollection_t446763386::get_offset_of_inherited_15(),
	ConfigurationElementCollection_t446763386::get_offset_of_emitClear_16(),
	ConfigurationElementCollection_t446763386::get_offset_of_modified_17(),
	ConfigurationElementCollection_t446763386::get_offset_of_comparer_18(),
	ConfigurationElementCollection_t446763386::get_offset_of_inheritedLimitIndex_19(),
	ConfigurationElementCollection_t446763386::get_offset_of_addElementName_20(),
	ConfigurationElementCollection_t446763386::get_offset_of_clearElementName_21(),
	ConfigurationElementCollection_t446763386::get_offset_of_removeElementName_22(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
