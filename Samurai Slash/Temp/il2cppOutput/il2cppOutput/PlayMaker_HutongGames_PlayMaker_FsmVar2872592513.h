#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_VariableType930978778.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.String
struct String_t;
// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t3026441313;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t2459695545;
// UnityEngine.Object
struct Object_t1021602117;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmVar
struct  FsmVar_t2872592513  : public Il2CppObject
{
public:
	// System.String HutongGames.PlayMaker.FsmVar::variableName
	String_t* ___variableName_0;
	// System.String HutongGames.PlayMaker.FsmVar::objectType
	String_t* ___objectType_1;
	// System.Boolean HutongGames.PlayMaker.FsmVar::useVariable
	bool ___useVariable_2;
	// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVar::namedVar
	NamedVariable_t3026441313 * ___namedVar_3;
	// System.Type HutongGames.PlayMaker.FsmVar::namedVarType
	Type_t * ___namedVarType_4;
	// System.Type HutongGames.PlayMaker.FsmVar::enumType
	Type_t * ___enumType_5;
	// System.Enum HutongGames.PlayMaker.FsmVar::enumValue
	Enum_t2459695545 * ___enumValue_6;
	// System.Type HutongGames.PlayMaker.FsmVar::_objectType
	Type_t * ____objectType_7;
	// HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.FsmVar::type
	int32_t ___type_8;
	// System.Single HutongGames.PlayMaker.FsmVar::floatValue
	float ___floatValue_9;
	// System.Int32 HutongGames.PlayMaker.FsmVar::intValue
	int32_t ___intValue_10;
	// System.Boolean HutongGames.PlayMaker.FsmVar::boolValue
	bool ___boolValue_11;
	// System.String HutongGames.PlayMaker.FsmVar::stringValue
	String_t* ___stringValue_12;
	// UnityEngine.Vector4 HutongGames.PlayMaker.FsmVar::vector4Value
	Vector4_t2243707581  ___vector4Value_13;
	// UnityEngine.Object HutongGames.PlayMaker.FsmVar::objectReference
	Object_t1021602117 * ___objectReference_14;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FsmVar::arrayValue
	FsmArray_t527459893 * ___arrayValue_15;
	// UnityEngine.Vector2 HutongGames.PlayMaker.FsmVar::vector2
	Vector2_t2243707579  ___vector2_16;
	// UnityEngine.Vector3 HutongGames.PlayMaker.FsmVar::vector3
	Vector3_t2243707580  ___vector3_17;
	// UnityEngine.Rect HutongGames.PlayMaker.FsmVar::rect
	Rect_t3681755626  ___rect_18;

public:
	inline static int32_t get_offset_of_variableName_0() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___variableName_0)); }
	inline String_t* get_variableName_0() const { return ___variableName_0; }
	inline String_t** get_address_of_variableName_0() { return &___variableName_0; }
	inline void set_variableName_0(String_t* value)
	{
		___variableName_0 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_0, value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___objectType_1)); }
	inline String_t* get_objectType_1() const { return ___objectType_1; }
	inline String_t** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(String_t* value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier(&___objectType_1, value);
	}

	inline static int32_t get_offset_of_useVariable_2() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___useVariable_2)); }
	inline bool get_useVariable_2() const { return ___useVariable_2; }
	inline bool* get_address_of_useVariable_2() { return &___useVariable_2; }
	inline void set_useVariable_2(bool value)
	{
		___useVariable_2 = value;
	}

	inline static int32_t get_offset_of_namedVar_3() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___namedVar_3)); }
	inline NamedVariable_t3026441313 * get_namedVar_3() const { return ___namedVar_3; }
	inline NamedVariable_t3026441313 ** get_address_of_namedVar_3() { return &___namedVar_3; }
	inline void set_namedVar_3(NamedVariable_t3026441313 * value)
	{
		___namedVar_3 = value;
		Il2CppCodeGenWriteBarrier(&___namedVar_3, value);
	}

	inline static int32_t get_offset_of_namedVarType_4() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___namedVarType_4)); }
	inline Type_t * get_namedVarType_4() const { return ___namedVarType_4; }
	inline Type_t ** get_address_of_namedVarType_4() { return &___namedVarType_4; }
	inline void set_namedVarType_4(Type_t * value)
	{
		___namedVarType_4 = value;
		Il2CppCodeGenWriteBarrier(&___namedVarType_4, value);
	}

	inline static int32_t get_offset_of_enumType_5() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___enumType_5)); }
	inline Type_t * get_enumType_5() const { return ___enumType_5; }
	inline Type_t ** get_address_of_enumType_5() { return &___enumType_5; }
	inline void set_enumType_5(Type_t * value)
	{
		___enumType_5 = value;
		Il2CppCodeGenWriteBarrier(&___enumType_5, value);
	}

	inline static int32_t get_offset_of_enumValue_6() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___enumValue_6)); }
	inline Enum_t2459695545 * get_enumValue_6() const { return ___enumValue_6; }
	inline Enum_t2459695545 ** get_address_of_enumValue_6() { return &___enumValue_6; }
	inline void set_enumValue_6(Enum_t2459695545 * value)
	{
		___enumValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___enumValue_6, value);
	}

	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier(&____objectType_7, value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_floatValue_9() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___floatValue_9)); }
	inline float get_floatValue_9() const { return ___floatValue_9; }
	inline float* get_address_of_floatValue_9() { return &___floatValue_9; }
	inline void set_floatValue_9(float value)
	{
		___floatValue_9 = value;
	}

	inline static int32_t get_offset_of_intValue_10() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___intValue_10)); }
	inline int32_t get_intValue_10() const { return ___intValue_10; }
	inline int32_t* get_address_of_intValue_10() { return &___intValue_10; }
	inline void set_intValue_10(int32_t value)
	{
		___intValue_10 = value;
	}

	inline static int32_t get_offset_of_boolValue_11() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___boolValue_11)); }
	inline bool get_boolValue_11() const { return ___boolValue_11; }
	inline bool* get_address_of_boolValue_11() { return &___boolValue_11; }
	inline void set_boolValue_11(bool value)
	{
		___boolValue_11 = value;
	}

	inline static int32_t get_offset_of_stringValue_12() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___stringValue_12)); }
	inline String_t* get_stringValue_12() const { return ___stringValue_12; }
	inline String_t** get_address_of_stringValue_12() { return &___stringValue_12; }
	inline void set_stringValue_12(String_t* value)
	{
		___stringValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___stringValue_12, value);
	}

	inline static int32_t get_offset_of_vector4Value_13() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___vector4Value_13)); }
	inline Vector4_t2243707581  get_vector4Value_13() const { return ___vector4Value_13; }
	inline Vector4_t2243707581 * get_address_of_vector4Value_13() { return &___vector4Value_13; }
	inline void set_vector4Value_13(Vector4_t2243707581  value)
	{
		___vector4Value_13 = value;
	}

	inline static int32_t get_offset_of_objectReference_14() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___objectReference_14)); }
	inline Object_t1021602117 * get_objectReference_14() const { return ___objectReference_14; }
	inline Object_t1021602117 ** get_address_of_objectReference_14() { return &___objectReference_14; }
	inline void set_objectReference_14(Object_t1021602117 * value)
	{
		___objectReference_14 = value;
		Il2CppCodeGenWriteBarrier(&___objectReference_14, value);
	}

	inline static int32_t get_offset_of_arrayValue_15() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___arrayValue_15)); }
	inline FsmArray_t527459893 * get_arrayValue_15() const { return ___arrayValue_15; }
	inline FsmArray_t527459893 ** get_address_of_arrayValue_15() { return &___arrayValue_15; }
	inline void set_arrayValue_15(FsmArray_t527459893 * value)
	{
		___arrayValue_15 = value;
		Il2CppCodeGenWriteBarrier(&___arrayValue_15, value);
	}

	inline static int32_t get_offset_of_vector2_16() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___vector2_16)); }
	inline Vector2_t2243707579  get_vector2_16() const { return ___vector2_16; }
	inline Vector2_t2243707579 * get_address_of_vector2_16() { return &___vector2_16; }
	inline void set_vector2_16(Vector2_t2243707579  value)
	{
		___vector2_16 = value;
	}

	inline static int32_t get_offset_of_vector3_17() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___vector3_17)); }
	inline Vector3_t2243707580  get_vector3_17() const { return ___vector3_17; }
	inline Vector3_t2243707580 * get_address_of_vector3_17() { return &___vector3_17; }
	inline void set_vector3_17(Vector3_t2243707580  value)
	{
		___vector3_17 = value;
	}

	inline static int32_t get_offset_of_rect_18() { return static_cast<int32_t>(offsetof(FsmVar_t2872592513, ___rect_18)); }
	inline Rect_t3681755626  get_rect_18() const { return ___rect_18; }
	inline Rect_t3681755626 * get_address_of_rect_18() { return &___rect_18; }
	inline void set_rect_18(Rect_t3681755626  value)
	{
		___rect_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
