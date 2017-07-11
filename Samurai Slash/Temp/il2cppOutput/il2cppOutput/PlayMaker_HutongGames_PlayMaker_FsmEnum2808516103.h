#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_NamedVariable3026441313.h"

// System.String
struct String_t;
// System.Enum
struct Enum_t2459695545;
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmEnum
struct  FsmEnum_t2808516103  : public NamedVariable_t3026441313
{
public:
	// System.String HutongGames.PlayMaker.FsmEnum::enumName
	String_t* ___enumName_5;
	// System.Int32 HutongGames.PlayMaker.FsmEnum::intValue
	int32_t ___intValue_6;
	// System.Enum HutongGames.PlayMaker.FsmEnum::value
	Enum_t2459695545 * ___value_7;
	// System.Type HutongGames.PlayMaker.FsmEnum::enumType
	Type_t * ___enumType_8;

public:
	inline static int32_t get_offset_of_enumName_5() { return static_cast<int32_t>(offsetof(FsmEnum_t2808516103, ___enumName_5)); }
	inline String_t* get_enumName_5() const { return ___enumName_5; }
	inline String_t** get_address_of_enumName_5() { return &___enumName_5; }
	inline void set_enumName_5(String_t* value)
	{
		___enumName_5 = value;
		Il2CppCodeGenWriteBarrier(&___enumName_5, value);
	}

	inline static int32_t get_offset_of_intValue_6() { return static_cast<int32_t>(offsetof(FsmEnum_t2808516103, ___intValue_6)); }
	inline int32_t get_intValue_6() const { return ___intValue_6; }
	inline int32_t* get_address_of_intValue_6() { return &___intValue_6; }
	inline void set_intValue_6(int32_t value)
	{
		___intValue_6 = value;
	}

	inline static int32_t get_offset_of_value_7() { return static_cast<int32_t>(offsetof(FsmEnum_t2808516103, ___value_7)); }
	inline Enum_t2459695545 * get_value_7() const { return ___value_7; }
	inline Enum_t2459695545 ** get_address_of_value_7() { return &___value_7; }
	inline void set_value_7(Enum_t2459695545 * value)
	{
		___value_7 = value;
		Il2CppCodeGenWriteBarrier(&___value_7, value);
	}

	inline static int32_t get_offset_of_enumType_8() { return static_cast<int32_t>(offsetof(FsmEnum_t2808516103, ___enumType_8)); }
	inline Type_t * get_enumType_8() const { return ___enumType_8; }
	inline Type_t ** get_address_of_enumType_8() { return &___enumType_8; }
	inline void set_enumType_8(Type_t * value)
	{
		___enumType_8 = value;
		Il2CppCodeGenWriteBarrier(&___enumType_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
