#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// System.String
struct String_t;
// System.Type
struct Type_t;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
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
// UnityEngine.Object
struct Object_t1021602117;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmProperty
struct  FsmProperty_t786753495  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FsmProperty::TargetObject
	FsmObject_t2785794313 * ___TargetObject_0;
	// System.String HutongGames.PlayMaker.FsmProperty::TargetTypeName
	String_t* ___TargetTypeName_1;
	// System.Type HutongGames.PlayMaker.FsmProperty::TargetType
	Type_t * ___TargetType_2;
	// System.String HutongGames.PlayMaker.FsmProperty::PropertyName
	String_t* ___PropertyName_3;
	// System.Type HutongGames.PlayMaker.FsmProperty::PropertyType
	Type_t * ___PropertyType_4;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmProperty::BoolParameter
	FsmBool_t664485696 * ___BoolParameter_5;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FsmProperty::FloatParameter
	FsmFloat_t937133978 * ___FloatParameter_6;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.FsmProperty::IntParameter
	FsmInt_t1273009179 * ___IntParameter_7;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmProperty::GameObjectParameter
	FsmGameObject_t3097142863 * ___GameObjectParameter_8;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmProperty::StringParameter
	FsmString_t2414474701 * ___StringParameter_9;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.FsmProperty::Vector2Parameter
	FsmVector2_t2430450063 * ___Vector2Parameter_10;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.FsmProperty::Vector3Parameter
	FsmVector3_t3996534004 * ___Vector3Parameter_11;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.FsmProperty::RectParamater
	FsmRect_t19023354 * ___RectParamater_12;
	// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.FsmProperty::QuaternionParameter
	FsmQuaternion_t878438756 * ___QuaternionParameter_13;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FsmProperty::ObjectParameter
	FsmObject_t2785794313 * ___ObjectParameter_14;
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.FsmProperty::MaterialParameter
	FsmMaterial_t1421632035 * ___MaterialParameter_15;
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.FsmProperty::TextureParameter
	FsmTexture_t3372293163 * ___TextureParameter_16;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.FsmProperty::ColorParameter
	FsmColor_t118301965 * ___ColorParameter_17;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.FsmProperty::EnumParameter
	FsmEnum_t2808516103 * ___EnumParameter_18;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FsmProperty::ArrayParameter
	FsmArray_t527459893 * ___ArrayParameter_19;
	// System.Boolean HutongGames.PlayMaker.FsmProperty::setProperty
	bool ___setProperty_20;
	// System.Boolean HutongGames.PlayMaker.FsmProperty::initialized
	bool ___initialized_21;
	// UnityEngine.Object HutongGames.PlayMaker.FsmProperty::targetObjectCached
	Object_t1021602117 * ___targetObjectCached_22;
	// System.Reflection.MemberInfo[] HutongGames.PlayMaker.FsmProperty::memberInfo
	MemberInfoU5BU5D_t4238939941* ___memberInfo_23;

public:
	inline static int32_t get_offset_of_TargetObject_0() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___TargetObject_0)); }
	inline FsmObject_t2785794313 * get_TargetObject_0() const { return ___TargetObject_0; }
	inline FsmObject_t2785794313 ** get_address_of_TargetObject_0() { return &___TargetObject_0; }
	inline void set_TargetObject_0(FsmObject_t2785794313 * value)
	{
		___TargetObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___TargetObject_0, value);
	}

	inline static int32_t get_offset_of_TargetTypeName_1() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___TargetTypeName_1)); }
	inline String_t* get_TargetTypeName_1() const { return ___TargetTypeName_1; }
	inline String_t** get_address_of_TargetTypeName_1() { return &___TargetTypeName_1; }
	inline void set_TargetTypeName_1(String_t* value)
	{
		___TargetTypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___TargetTypeName_1, value);
	}

	inline static int32_t get_offset_of_TargetType_2() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___TargetType_2)); }
	inline Type_t * get_TargetType_2() const { return ___TargetType_2; }
	inline Type_t ** get_address_of_TargetType_2() { return &___TargetType_2; }
	inline void set_TargetType_2(Type_t * value)
	{
		___TargetType_2 = value;
		Il2CppCodeGenWriteBarrier(&___TargetType_2, value);
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyName_3, value);
	}

	inline static int32_t get_offset_of_PropertyType_4() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___PropertyType_4)); }
	inline Type_t * get_PropertyType_4() const { return ___PropertyType_4; }
	inline Type_t ** get_address_of_PropertyType_4() { return &___PropertyType_4; }
	inline void set_PropertyType_4(Type_t * value)
	{
		___PropertyType_4 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyType_4, value);
	}

	inline static int32_t get_offset_of_BoolParameter_5() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___BoolParameter_5)); }
	inline FsmBool_t664485696 * get_BoolParameter_5() const { return ___BoolParameter_5; }
	inline FsmBool_t664485696 ** get_address_of_BoolParameter_5() { return &___BoolParameter_5; }
	inline void set_BoolParameter_5(FsmBool_t664485696 * value)
	{
		___BoolParameter_5 = value;
		Il2CppCodeGenWriteBarrier(&___BoolParameter_5, value);
	}

	inline static int32_t get_offset_of_FloatParameter_6() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___FloatParameter_6)); }
	inline FsmFloat_t937133978 * get_FloatParameter_6() const { return ___FloatParameter_6; }
	inline FsmFloat_t937133978 ** get_address_of_FloatParameter_6() { return &___FloatParameter_6; }
	inline void set_FloatParameter_6(FsmFloat_t937133978 * value)
	{
		___FloatParameter_6 = value;
		Il2CppCodeGenWriteBarrier(&___FloatParameter_6, value);
	}

	inline static int32_t get_offset_of_IntParameter_7() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___IntParameter_7)); }
	inline FsmInt_t1273009179 * get_IntParameter_7() const { return ___IntParameter_7; }
	inline FsmInt_t1273009179 ** get_address_of_IntParameter_7() { return &___IntParameter_7; }
	inline void set_IntParameter_7(FsmInt_t1273009179 * value)
	{
		___IntParameter_7 = value;
		Il2CppCodeGenWriteBarrier(&___IntParameter_7, value);
	}

	inline static int32_t get_offset_of_GameObjectParameter_8() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___GameObjectParameter_8)); }
	inline FsmGameObject_t3097142863 * get_GameObjectParameter_8() const { return ___GameObjectParameter_8; }
	inline FsmGameObject_t3097142863 ** get_address_of_GameObjectParameter_8() { return &___GameObjectParameter_8; }
	inline void set_GameObjectParameter_8(FsmGameObject_t3097142863 * value)
	{
		___GameObjectParameter_8 = value;
		Il2CppCodeGenWriteBarrier(&___GameObjectParameter_8, value);
	}

	inline static int32_t get_offset_of_StringParameter_9() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___StringParameter_9)); }
	inline FsmString_t2414474701 * get_StringParameter_9() const { return ___StringParameter_9; }
	inline FsmString_t2414474701 ** get_address_of_StringParameter_9() { return &___StringParameter_9; }
	inline void set_StringParameter_9(FsmString_t2414474701 * value)
	{
		___StringParameter_9 = value;
		Il2CppCodeGenWriteBarrier(&___StringParameter_9, value);
	}

	inline static int32_t get_offset_of_Vector2Parameter_10() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___Vector2Parameter_10)); }
	inline FsmVector2_t2430450063 * get_Vector2Parameter_10() const { return ___Vector2Parameter_10; }
	inline FsmVector2_t2430450063 ** get_address_of_Vector2Parameter_10() { return &___Vector2Parameter_10; }
	inline void set_Vector2Parameter_10(FsmVector2_t2430450063 * value)
	{
		___Vector2Parameter_10 = value;
		Il2CppCodeGenWriteBarrier(&___Vector2Parameter_10, value);
	}

	inline static int32_t get_offset_of_Vector3Parameter_11() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___Vector3Parameter_11)); }
	inline FsmVector3_t3996534004 * get_Vector3Parameter_11() const { return ___Vector3Parameter_11; }
	inline FsmVector3_t3996534004 ** get_address_of_Vector3Parameter_11() { return &___Vector3Parameter_11; }
	inline void set_Vector3Parameter_11(FsmVector3_t3996534004 * value)
	{
		___Vector3Parameter_11 = value;
		Il2CppCodeGenWriteBarrier(&___Vector3Parameter_11, value);
	}

	inline static int32_t get_offset_of_RectParamater_12() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___RectParamater_12)); }
	inline FsmRect_t19023354 * get_RectParamater_12() const { return ___RectParamater_12; }
	inline FsmRect_t19023354 ** get_address_of_RectParamater_12() { return &___RectParamater_12; }
	inline void set_RectParamater_12(FsmRect_t19023354 * value)
	{
		___RectParamater_12 = value;
		Il2CppCodeGenWriteBarrier(&___RectParamater_12, value);
	}

	inline static int32_t get_offset_of_QuaternionParameter_13() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___QuaternionParameter_13)); }
	inline FsmQuaternion_t878438756 * get_QuaternionParameter_13() const { return ___QuaternionParameter_13; }
	inline FsmQuaternion_t878438756 ** get_address_of_QuaternionParameter_13() { return &___QuaternionParameter_13; }
	inline void set_QuaternionParameter_13(FsmQuaternion_t878438756 * value)
	{
		___QuaternionParameter_13 = value;
		Il2CppCodeGenWriteBarrier(&___QuaternionParameter_13, value);
	}

	inline static int32_t get_offset_of_ObjectParameter_14() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___ObjectParameter_14)); }
	inline FsmObject_t2785794313 * get_ObjectParameter_14() const { return ___ObjectParameter_14; }
	inline FsmObject_t2785794313 ** get_address_of_ObjectParameter_14() { return &___ObjectParameter_14; }
	inline void set_ObjectParameter_14(FsmObject_t2785794313 * value)
	{
		___ObjectParameter_14 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectParameter_14, value);
	}

	inline static int32_t get_offset_of_MaterialParameter_15() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___MaterialParameter_15)); }
	inline FsmMaterial_t1421632035 * get_MaterialParameter_15() const { return ___MaterialParameter_15; }
	inline FsmMaterial_t1421632035 ** get_address_of_MaterialParameter_15() { return &___MaterialParameter_15; }
	inline void set_MaterialParameter_15(FsmMaterial_t1421632035 * value)
	{
		___MaterialParameter_15 = value;
		Il2CppCodeGenWriteBarrier(&___MaterialParameter_15, value);
	}

	inline static int32_t get_offset_of_TextureParameter_16() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___TextureParameter_16)); }
	inline FsmTexture_t3372293163 * get_TextureParameter_16() const { return ___TextureParameter_16; }
	inline FsmTexture_t3372293163 ** get_address_of_TextureParameter_16() { return &___TextureParameter_16; }
	inline void set_TextureParameter_16(FsmTexture_t3372293163 * value)
	{
		___TextureParameter_16 = value;
		Il2CppCodeGenWriteBarrier(&___TextureParameter_16, value);
	}

	inline static int32_t get_offset_of_ColorParameter_17() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___ColorParameter_17)); }
	inline FsmColor_t118301965 * get_ColorParameter_17() const { return ___ColorParameter_17; }
	inline FsmColor_t118301965 ** get_address_of_ColorParameter_17() { return &___ColorParameter_17; }
	inline void set_ColorParameter_17(FsmColor_t118301965 * value)
	{
		___ColorParameter_17 = value;
		Il2CppCodeGenWriteBarrier(&___ColorParameter_17, value);
	}

	inline static int32_t get_offset_of_EnumParameter_18() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___EnumParameter_18)); }
	inline FsmEnum_t2808516103 * get_EnumParameter_18() const { return ___EnumParameter_18; }
	inline FsmEnum_t2808516103 ** get_address_of_EnumParameter_18() { return &___EnumParameter_18; }
	inline void set_EnumParameter_18(FsmEnum_t2808516103 * value)
	{
		___EnumParameter_18 = value;
		Il2CppCodeGenWriteBarrier(&___EnumParameter_18, value);
	}

	inline static int32_t get_offset_of_ArrayParameter_19() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___ArrayParameter_19)); }
	inline FsmArray_t527459893 * get_ArrayParameter_19() const { return ___ArrayParameter_19; }
	inline FsmArray_t527459893 ** get_address_of_ArrayParameter_19() { return &___ArrayParameter_19; }
	inline void set_ArrayParameter_19(FsmArray_t527459893 * value)
	{
		___ArrayParameter_19 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayParameter_19, value);
	}

	inline static int32_t get_offset_of_setProperty_20() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___setProperty_20)); }
	inline bool get_setProperty_20() const { return ___setProperty_20; }
	inline bool* get_address_of_setProperty_20() { return &___setProperty_20; }
	inline void set_setProperty_20(bool value)
	{
		___setProperty_20 = value;
	}

	inline static int32_t get_offset_of_initialized_21() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___initialized_21)); }
	inline bool get_initialized_21() const { return ___initialized_21; }
	inline bool* get_address_of_initialized_21() { return &___initialized_21; }
	inline void set_initialized_21(bool value)
	{
		___initialized_21 = value;
	}

	inline static int32_t get_offset_of_targetObjectCached_22() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___targetObjectCached_22)); }
	inline Object_t1021602117 * get_targetObjectCached_22() const { return ___targetObjectCached_22; }
	inline Object_t1021602117 ** get_address_of_targetObjectCached_22() { return &___targetObjectCached_22; }
	inline void set_targetObjectCached_22(Object_t1021602117 * value)
	{
		___targetObjectCached_22 = value;
		Il2CppCodeGenWriteBarrier(&___targetObjectCached_22, value);
	}

	inline static int32_t get_offset_of_memberInfo_23() { return static_cast<int32_t>(offsetof(FsmProperty_t786753495, ___memberInfo_23)); }
	inline MemberInfoU5BU5D_t4238939941* get_memberInfo_23() const { return ___memberInfo_23; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of_memberInfo_23() { return &___memberInfo_23; }
	inline void set_memberInfo_23(MemberInfoU5BU5D_t4238939941* value)
	{
		___memberInfo_23 = value;
		Il2CppCodeGenWriteBarrier(&___memberInfo_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
