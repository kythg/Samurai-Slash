#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t1984278467;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t3218582488;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ReflectionUtils
struct  ReflectionUtils_t1643754852  : public Il2CppObject
{
public:

public:
};

struct ReflectionUtils_t1643754852_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> HutongGames.PlayMaker.ReflectionUtils::assemblyNames
	List_1_t1398341365 * ___assemblyNames_0;
	// System.Reflection.Assembly[] HutongGames.PlayMaker.ReflectionUtils::loadedAssemblies
	AssemblyU5BU5D_t1984278467* ___loadedAssemblies_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> HutongGames.PlayMaker.ReflectionUtils::typeLookup
	Dictionary_2_t3218582488 * ___typeLookup_2;

public:
	inline static int32_t get_offset_of_assemblyNames_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t1643754852_StaticFields, ___assemblyNames_0)); }
	inline List_1_t1398341365 * get_assemblyNames_0() const { return ___assemblyNames_0; }
	inline List_1_t1398341365 ** get_address_of_assemblyNames_0() { return &___assemblyNames_0; }
	inline void set_assemblyNames_0(List_1_t1398341365 * value)
	{
		___assemblyNames_0 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyNames_0, value);
	}

	inline static int32_t get_offset_of_loadedAssemblies_1() { return static_cast<int32_t>(offsetof(ReflectionUtils_t1643754852_StaticFields, ___loadedAssemblies_1)); }
	inline AssemblyU5BU5D_t1984278467* get_loadedAssemblies_1() const { return ___loadedAssemblies_1; }
	inline AssemblyU5BU5D_t1984278467** get_address_of_loadedAssemblies_1() { return &___loadedAssemblies_1; }
	inline void set_loadedAssemblies_1(AssemblyU5BU5D_t1984278467* value)
	{
		___loadedAssemblies_1 = value;
		Il2CppCodeGenWriteBarrier(&___loadedAssemblies_1, value);
	}

	inline static int32_t get_offset_of_typeLookup_2() { return static_cast<int32_t>(offsetof(ReflectionUtils_t1643754852_StaticFields, ___typeLookup_2)); }
	inline Dictionary_2_t3218582488 * get_typeLookup_2() const { return ___typeLookup_2; }
	inline Dictionary_2_t3218582488 ** get_address_of_typeLookup_2() { return &___typeLookup_2; }
	inline void set_typeLookup_2(Dictionary_2_t3218582488 * value)
	{
		___typeLookup_2 = value;
		Il2CppCodeGenWriteBarrier(&___typeLookup_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
