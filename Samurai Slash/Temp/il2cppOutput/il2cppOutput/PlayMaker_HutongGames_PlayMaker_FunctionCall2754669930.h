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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t878438756;
// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_t1421632035;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FunctionCall
struct  FunctionCall_t2754669930  : public Il2CppObject
{
public:
	// System.String HutongGames.PlayMaker.FunctionCall::FunctionName
	String_t* ___FunctionName_0;
	// System.String HutongGames.PlayMaker.FunctionCall::parameterType
	String_t* ___parameterType_1;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FunctionCall::BoolParameter
	FsmBool_t664485696 * ___BoolParameter_2;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FunctionCall::FloatParameter
	FsmFloat_t937133978 * ___FloatParameter_3;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.FunctionCall::IntParameter
	FsmInt_t1273009179 * ___IntParameter_4;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FunctionCall::GameObjectParameter
	FsmGameObject_t3097142863 * ___GameObjectParameter_5;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FunctionCall::ObjectParameter
	FsmObject_t2785794313 * ___ObjectParameter_6;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FunctionCall::StringParameter
	FsmString_t2414474701 * ___StringParameter_7;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.FunctionCall::Vector2Parameter
	FsmVector2_t2430450063 * ___Vector2Parameter_8;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.FunctionCall::Vector3Parameter
	FsmVector3_t3996534004 * ___Vector3Parameter_9;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.FunctionCall::RectParamater
	FsmRect_t19023354 * ___RectParamater_10;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.FunctionCall::QuaternionParameter
	FsmQuaternion_t878438756 * ___QuaternionParameter_11;
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.FunctionCall::MaterialParameter
	FsmMaterial_t1421632035 * ___MaterialParameter_12;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.FunctionCall::TextureParameter
	FsmTexture_t3372293163 * ___TextureParameter_13;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.FunctionCall::ColorParameter
	FsmColor_t118301965 * ___ColorParameter_14;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.FunctionCall::EnumParameter
	FsmEnum_t2808516103 * ___EnumParameter_15;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FunctionCall::ArrayParameter
	FsmArray_t527459893 * ___ArrayParameter_16;

public:
	inline static int32_t get_offset_of_FunctionName_0() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___FunctionName_0)); }
	inline String_t* get_FunctionName_0() const { return ___FunctionName_0; }
	inline String_t** get_address_of_FunctionName_0() { return &___FunctionName_0; }
	inline void set_FunctionName_0(String_t* value)
	{
		___FunctionName_0 = value;
		Il2CppCodeGenWriteBarrier(&___FunctionName_0, value);
	}

	inline static int32_t get_offset_of_parameterType_1() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___parameterType_1)); }
	inline String_t* get_parameterType_1() const { return ___parameterType_1; }
	inline String_t** get_address_of_parameterType_1() { return &___parameterType_1; }
	inline void set_parameterType_1(String_t* value)
	{
		___parameterType_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameterType_1, value);
	}

	inline static int32_t get_offset_of_BoolParameter_2() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___BoolParameter_2)); }
	inline FsmBool_t664485696 * get_BoolParameter_2() const { return ___BoolParameter_2; }
	inline FsmBool_t664485696 ** get_address_of_BoolParameter_2() { return &___BoolParameter_2; }
	inline void set_BoolParameter_2(FsmBool_t664485696 * value)
	{
		___BoolParameter_2 = value;
		Il2CppCodeGenWriteBarrier(&___BoolParameter_2, value);
	}

	inline static int32_t get_offset_of_FloatParameter_3() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___FloatParameter_3)); }
	inline FsmFloat_t937133978 * get_FloatParameter_3() const { return ___FloatParameter_3; }
	inline FsmFloat_t937133978 ** get_address_of_FloatParameter_3() { return &___FloatParameter_3; }
	inline void set_FloatParameter_3(FsmFloat_t937133978 * value)
	{
		___FloatParameter_3 = value;
		Il2CppCodeGenWriteBarrier(&___FloatParameter_3, value);
	}

	inline static int32_t get_offset_of_IntParameter_4() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___IntParameter_4)); }
	inline FsmInt_t1273009179 * get_IntParameter_4() const { return ___IntParameter_4; }
	inline FsmInt_t1273009179 ** get_address_of_IntParameter_4() { return &___IntParameter_4; }
	inline void set_IntParameter_4(FsmInt_t1273009179 * value)
	{
		___IntParameter_4 = value;
		Il2CppCodeGenWriteBarrier(&___IntParameter_4, value);
	}

	inline static int32_t get_offset_of_GameObjectParameter_5() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___GameObjectParameter_5)); }
	inline FsmGameObject_t3097142863 * get_GameObjectParameter_5() const { return ___GameObjectParameter_5; }
	inline FsmGameObject_t3097142863 ** get_address_of_GameObjectParameter_5() { return &___GameObjectParameter_5; }
	inline void set_GameObjectParameter_5(FsmGameObject_t3097142863 * value)
	{
		___GameObjectParameter_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameObjectParameter_5, value);
	}

	inline static int32_t get_offset_of_ObjectParameter_6() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___ObjectParameter_6)); }
	inline FsmObject_t2785794313 * get_ObjectParameter_6() const { return ___ObjectParameter_6; }
	inline FsmObject_t2785794313 ** get_address_of_ObjectParameter_6() { return &___ObjectParameter_6; }
	inline void set_ObjectParameter_6(FsmObject_t2785794313 * value)
	{
		___ObjectParameter_6 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectParameter_6, value);
	}

	inline static int32_t get_offset_of_StringParameter_7() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___StringParameter_7)); }
	inline FsmString_t2414474701 * get_StringParameter_7() const { return ___StringParameter_7; }
	inline FsmString_t2414474701 ** get_address_of_StringParameter_7() { return &___StringParameter_7; }
	inline void set_StringParameter_7(FsmString_t2414474701 * value)
	{
		___StringParameter_7 = value;
		Il2CppCodeGenWriteBarrier(&___StringParameter_7, value);
	}

	inline static int32_t get_offset_of_Vector2Parameter_8() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___Vector2Parameter_8)); }
	inline FsmVector2_t2430450063 * get_Vector2Parameter_8() const { return ___Vector2Parameter_8; }
	inline FsmVector2_t2430450063 ** get_address_of_Vector2Parameter_8() { return &___Vector2Parameter_8; }
	inline void set_Vector2Parameter_8(FsmVector2_t2430450063 * value)
	{
		___Vector2Parameter_8 = value;
		Il2CppCodeGenWriteBarrier(&___Vector2Parameter_8, value);
	}

	inline static int32_t get_offset_of_Vector3Parameter_9() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___Vector3Parameter_9)); }
	inline FsmVector3_t3996534004 * get_Vector3Parameter_9() const { return ___Vector3Parameter_9; }
	inline FsmVector3_t3996534004 ** get_address_of_Vector3Parameter_9() { return &___Vector3Parameter_9; }
	inline void set_Vector3Parameter_9(FsmVector3_t3996534004 * value)
	{
		___Vector3Parameter_9 = value;
		Il2CppCodeGenWriteBarrier(&___Vector3Parameter_9, value);
	}

	inline static int32_t get_offset_of_RectParamater_10() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___RectParamater_10)); }
	inline FsmRect_t19023354 * get_RectParamater_10() const { return ___RectParamater_10; }
	inline FsmRect_t19023354 ** get_address_of_RectParamater_10() { return &___RectParamater_10; }
	inline void set_RectParamater_10(FsmRect_t19023354 * value)
	{
		___RectParamater_10 = value;
		Il2CppCodeGenWriteBarrier(&___RectParamater_10, value);
	}

	inline static int32_t get_offset_of_QuaternionParameter_11() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___QuaternionParameter_11)); }
	inline FsmQuaternion_t878438756 * get_QuaternionParameter_11() const { return ___QuaternionParameter_11; }
	inline FsmQuaternion_t878438756 ** get_address_of_QuaternionParameter_11() { return &___QuaternionParameter_11; }
	inline void set_QuaternionParameter_11(FsmQuaternion_t878438756 * value)
	{
		___QuaternionParameter_11 = value;
		Il2CppCodeGenWriteBarrier(&___QuaternionParameter_11, value);
	}

	inline static int32_t get_offset_of_MaterialParameter_12() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___MaterialParameter_12)); }
	inline FsmMaterial_t1421632035 * get_MaterialParameter_12() const { return ___MaterialParameter_12; }
	inline FsmMaterial_t1421632035 ** get_address_of_MaterialParameter_12() { return &___MaterialParameter_12; }
	inline void set_MaterialParameter_12(FsmMaterial_t1421632035 * value)
	{
		___MaterialParameter_12 = value;
		Il2CppCodeGenWriteBarrier(&___MaterialParameter_12, value);
	}

	inline static int32_t get_offset_of_TextureParameter_13() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___TextureParameter_13)); }
	inline FsmTexture_t3372293163 * get_TextureParameter_13() const { return ___TextureParameter_13; }
	inline FsmTexture_t3372293163 ** get_address_of_TextureParameter_13() { return &___TextureParameter_13; }
	inline void set_TextureParameter_13(FsmTexture_t3372293163 * value)
	{
		___TextureParameter_13 = value;
		Il2CppCodeGenWriteBarrier(&___TextureParameter_13, value);
	}

	inline static int32_t get_offset_of_ColorParameter_14() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___ColorParameter_14)); }
	inline FsmColor_t118301965 * get_ColorParameter_14() const { return ___ColorParameter_14; }
	inline FsmColor_t118301965 ** get_address_of_ColorParameter_14() { return &___ColorParameter_14; }
	inline void set_ColorParameter_14(FsmColor_t118301965 * value)
	{
		___ColorParameter_14 = value;
		Il2CppCodeGenWriteBarrier(&___ColorParameter_14, value);
	}

	inline static int32_t get_offset_of_EnumParameter_15() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___EnumParameter_15)); }
	inline FsmEnum_t2808516103 * get_EnumParameter_15() const { return ___EnumParameter_15; }
	inline FsmEnum_t2808516103 ** get_address_of_EnumParameter_15() { return &___EnumParameter_15; }
	inline void set_EnumParameter_15(FsmEnum_t2808516103 * value)
	{
		___EnumParameter_15 = value;
		Il2CppCodeGenWriteBarrier(&___EnumParameter_15, value);
	}

	inline static int32_t get_offset_of_ArrayParameter_16() { return static_cast<int32_t>(offsetof(FunctionCall_t2754669930, ___ArrayParameter_16)); }
	inline FsmArray_t527459893 * get_ArrayParameter_16() const { return ___ArrayParameter_16; }
	inline FsmArray_t527459893 ** get_address_of_ArrayParameter_16() { return &___ArrayParameter_16; }
	inline void set_ArrayParameter_16(FsmArray_t527459893 * value)
	{
		___ArrayParameter_16 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayParameter_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
