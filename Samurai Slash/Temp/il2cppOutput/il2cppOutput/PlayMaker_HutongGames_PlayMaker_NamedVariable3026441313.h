#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.NamedVariable
struct  NamedVariable_t3026441313  : public Il2CppObject
{
public:
	// System.Boolean HutongGames.PlayMaker.NamedVariable::useVariable
	bool ___useVariable_0;
	// System.String HutongGames.PlayMaker.NamedVariable::name
	String_t* ___name_1;
	// System.String HutongGames.PlayMaker.NamedVariable::tooltip
	String_t* ___tooltip_2;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::showInInspector
	bool ___showInInspector_3;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::networkSync
	bool ___networkSync_4;

public:
	inline static int32_t get_offset_of_useVariable_0() { return static_cast<int32_t>(offsetof(NamedVariable_t3026441313, ___useVariable_0)); }
	inline bool get_useVariable_0() const { return ___useVariable_0; }
	inline bool* get_address_of_useVariable_0() { return &___useVariable_0; }
	inline void set_useVariable_0(bool value)
	{
		___useVariable_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(NamedVariable_t3026441313, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_tooltip_2() { return static_cast<int32_t>(offsetof(NamedVariable_t3026441313, ___tooltip_2)); }
	inline String_t* get_tooltip_2() const { return ___tooltip_2; }
	inline String_t** get_address_of_tooltip_2() { return &___tooltip_2; }
	inline void set_tooltip_2(String_t* value)
	{
		___tooltip_2 = value;
		Il2CppCodeGenWriteBarrier(&___tooltip_2, value);
	}

	inline static int32_t get_offset_of_showInInspector_3() { return static_cast<int32_t>(offsetof(NamedVariable_t3026441313, ___showInInspector_3)); }
	inline bool get_showInInspector_3() const { return ___showInInspector_3; }
	inline bool* get_address_of_showInInspector_3() { return &___showInInspector_3; }
	inline void set_showInInspector_3(bool value)
	{
		___showInInspector_3 = value;
	}

	inline static int32_t get_offset_of_networkSync_4() { return static_cast<int32_t>(offsetof(NamedVariable_t3026441313, ___networkSync_4)); }
	inline bool get_networkSync_4() const { return ___networkSync_4; }
	inline bool* get_address_of_networkSync_4() { return &___networkSync_4; }
	inline void set_networkSync_4(bool value)
	{
		___networkSync_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
