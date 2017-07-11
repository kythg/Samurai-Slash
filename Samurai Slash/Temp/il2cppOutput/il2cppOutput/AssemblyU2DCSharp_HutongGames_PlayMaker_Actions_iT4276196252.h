#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT3900135744.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"
#include "AssemblyU2DCSharp_iTween_EaseType818674011.h"
#include "AssemblyU2DCSharp_iTween_LoopType1490651981.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT2764110305.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject[]
struct FsmGameObjectU5BU5D_t3601875862;
// HutongGames.PlayMaker.FsmVector3[]
struct FsmVector3U5BU5D_t643261629;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenMoveTo
struct  iTweenMoveTo_t4276196252  : public iTweenFsmAction_t3900135744
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenMoveTo::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_19;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.iTweenMoveTo::id
	FsmString_t2414474701 * ___id_20;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveTo::transformPosition
	FsmGameObject_t3097142863 * ___transformPosition_21;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveTo::vectorPosition
	FsmVector3_t3996534004 * ___vectorPosition_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveTo::time
	FsmFloat_t937133978 * ___time_23;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveTo::delay
	FsmFloat_t937133978 * ___delay_24;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveTo::speed
	FsmFloat_t937133978 * ___speed_25;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.iTweenMoveTo::space
	int32_t ___space_26;
	// iTween/EaseType HutongGames.PlayMaker.Actions.iTweenMoveTo::easeType
	int32_t ___easeType_27;
	// iTween/LoopType HutongGames.PlayMaker.Actions.iTweenMoveTo::loopType
	int32_t ___loopType_28;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenMoveTo::orientToPath
	FsmBool_t664485696 * ___orientToPath_29;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenMoveTo::lookAtObject
	FsmGameObject_t3097142863 * ___lookAtObject_30;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenMoveTo::lookAtVector
	FsmVector3_t3996534004 * ___lookAtVector_31;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveTo::lookTime
	FsmFloat_t937133978 * ___lookTime_32;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction/AxisRestriction HutongGames.PlayMaker.Actions.iTweenMoveTo::axis
	int32_t ___axis_33;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenMoveTo::moveToPath
	FsmBool_t664485696 * ___moveToPath_34;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenMoveTo::lookAhead
	FsmFloat_t937133978 * ___lookAhead_35;
	// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.Actions.iTweenMoveTo::transforms
	FsmGameObjectU5BU5D_t3601875862* ___transforms_36;
	// HutongGames.PlayMaker.FsmVector3[] HutongGames.PlayMaker.Actions.iTweenMoveTo::vectors
	FsmVector3U5BU5D_t643261629* ___vectors_37;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.iTweenMoveTo::reverse
	FsmBool_t664485696 * ___reverse_38;
	// UnityEngine.Vector3[] HutongGames.PlayMaker.Actions.iTweenMoveTo::tempVct3
	Vector3U5BU5D_t1172311765* ___tempVct3_39;

public:
	inline static int32_t get_offset_of_gameObject_19() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___gameObject_19)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_19() const { return ___gameObject_19; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_19() { return &___gameObject_19; }
	inline void set_gameObject_19(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_19, value);
	}

	inline static int32_t get_offset_of_id_20() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___id_20)); }
	inline FsmString_t2414474701 * get_id_20() const { return ___id_20; }
	inline FsmString_t2414474701 ** get_address_of_id_20() { return &___id_20; }
	inline void set_id_20(FsmString_t2414474701 * value)
	{
		___id_20 = value;
		Il2CppCodeGenWriteBarrier(&___id_20, value);
	}

	inline static int32_t get_offset_of_transformPosition_21() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___transformPosition_21)); }
	inline FsmGameObject_t3097142863 * get_transformPosition_21() const { return ___transformPosition_21; }
	inline FsmGameObject_t3097142863 ** get_address_of_transformPosition_21() { return &___transformPosition_21; }
	inline void set_transformPosition_21(FsmGameObject_t3097142863 * value)
	{
		___transformPosition_21 = value;
		Il2CppCodeGenWriteBarrier(&___transformPosition_21, value);
	}

	inline static int32_t get_offset_of_vectorPosition_22() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___vectorPosition_22)); }
	inline FsmVector3_t3996534004 * get_vectorPosition_22() const { return ___vectorPosition_22; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorPosition_22() { return &___vectorPosition_22; }
	inline void set_vectorPosition_22(FsmVector3_t3996534004 * value)
	{
		___vectorPosition_22 = value;
		Il2CppCodeGenWriteBarrier(&___vectorPosition_22, value);
	}

	inline static int32_t get_offset_of_time_23() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___time_23)); }
	inline FsmFloat_t937133978 * get_time_23() const { return ___time_23; }
	inline FsmFloat_t937133978 ** get_address_of_time_23() { return &___time_23; }
	inline void set_time_23(FsmFloat_t937133978 * value)
	{
		___time_23 = value;
		Il2CppCodeGenWriteBarrier(&___time_23, value);
	}

	inline static int32_t get_offset_of_delay_24() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___delay_24)); }
	inline FsmFloat_t937133978 * get_delay_24() const { return ___delay_24; }
	inline FsmFloat_t937133978 ** get_address_of_delay_24() { return &___delay_24; }
	inline void set_delay_24(FsmFloat_t937133978 * value)
	{
		___delay_24 = value;
		Il2CppCodeGenWriteBarrier(&___delay_24, value);
	}

	inline static int32_t get_offset_of_speed_25() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___speed_25)); }
	inline FsmFloat_t937133978 * get_speed_25() const { return ___speed_25; }
	inline FsmFloat_t937133978 ** get_address_of_speed_25() { return &___speed_25; }
	inline void set_speed_25(FsmFloat_t937133978 * value)
	{
		___speed_25 = value;
		Il2CppCodeGenWriteBarrier(&___speed_25, value);
	}

	inline static int32_t get_offset_of_space_26() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___space_26)); }
	inline int32_t get_space_26() const { return ___space_26; }
	inline int32_t* get_address_of_space_26() { return &___space_26; }
	inline void set_space_26(int32_t value)
	{
		___space_26 = value;
	}

	inline static int32_t get_offset_of_easeType_27() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___easeType_27)); }
	inline int32_t get_easeType_27() const { return ___easeType_27; }
	inline int32_t* get_address_of_easeType_27() { return &___easeType_27; }
	inline void set_easeType_27(int32_t value)
	{
		___easeType_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_orientToPath_29() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___orientToPath_29)); }
	inline FsmBool_t664485696 * get_orientToPath_29() const { return ___orientToPath_29; }
	inline FsmBool_t664485696 ** get_address_of_orientToPath_29() { return &___orientToPath_29; }
	inline void set_orientToPath_29(FsmBool_t664485696 * value)
	{
		___orientToPath_29 = value;
		Il2CppCodeGenWriteBarrier(&___orientToPath_29, value);
	}

	inline static int32_t get_offset_of_lookAtObject_30() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___lookAtObject_30)); }
	inline FsmGameObject_t3097142863 * get_lookAtObject_30() const { return ___lookAtObject_30; }
	inline FsmGameObject_t3097142863 ** get_address_of_lookAtObject_30() { return &___lookAtObject_30; }
	inline void set_lookAtObject_30(FsmGameObject_t3097142863 * value)
	{
		___lookAtObject_30 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtObject_30, value);
	}

	inline static int32_t get_offset_of_lookAtVector_31() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___lookAtVector_31)); }
	inline FsmVector3_t3996534004 * get_lookAtVector_31() const { return ___lookAtVector_31; }
	inline FsmVector3_t3996534004 ** get_address_of_lookAtVector_31() { return &___lookAtVector_31; }
	inline void set_lookAtVector_31(FsmVector3_t3996534004 * value)
	{
		___lookAtVector_31 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtVector_31, value);
	}

	inline static int32_t get_offset_of_lookTime_32() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___lookTime_32)); }
	inline FsmFloat_t937133978 * get_lookTime_32() const { return ___lookTime_32; }
	inline FsmFloat_t937133978 ** get_address_of_lookTime_32() { return &___lookTime_32; }
	inline void set_lookTime_32(FsmFloat_t937133978 * value)
	{
		___lookTime_32 = value;
		Il2CppCodeGenWriteBarrier(&___lookTime_32, value);
	}

	inline static int32_t get_offset_of_axis_33() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___axis_33)); }
	inline int32_t get_axis_33() const { return ___axis_33; }
	inline int32_t* get_address_of_axis_33() { return &___axis_33; }
	inline void set_axis_33(int32_t value)
	{
		___axis_33 = value;
	}

	inline static int32_t get_offset_of_moveToPath_34() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___moveToPath_34)); }
	inline FsmBool_t664485696 * get_moveToPath_34() const { return ___moveToPath_34; }
	inline FsmBool_t664485696 ** get_address_of_moveToPath_34() { return &___moveToPath_34; }
	inline void set_moveToPath_34(FsmBool_t664485696 * value)
	{
		___moveToPath_34 = value;
		Il2CppCodeGenWriteBarrier(&___moveToPath_34, value);
	}

	inline static int32_t get_offset_of_lookAhead_35() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___lookAhead_35)); }
	inline FsmFloat_t937133978 * get_lookAhead_35() const { return ___lookAhead_35; }
	inline FsmFloat_t937133978 ** get_address_of_lookAhead_35() { return &___lookAhead_35; }
	inline void set_lookAhead_35(FsmFloat_t937133978 * value)
	{
		___lookAhead_35 = value;
		Il2CppCodeGenWriteBarrier(&___lookAhead_35, value);
	}

	inline static int32_t get_offset_of_transforms_36() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___transforms_36)); }
	inline FsmGameObjectU5BU5D_t3601875862* get_transforms_36() const { return ___transforms_36; }
	inline FsmGameObjectU5BU5D_t3601875862** get_address_of_transforms_36() { return &___transforms_36; }
	inline void set_transforms_36(FsmGameObjectU5BU5D_t3601875862* value)
	{
		___transforms_36 = value;
		Il2CppCodeGenWriteBarrier(&___transforms_36, value);
	}

	inline static int32_t get_offset_of_vectors_37() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___vectors_37)); }
	inline FsmVector3U5BU5D_t643261629* get_vectors_37() const { return ___vectors_37; }
	inline FsmVector3U5BU5D_t643261629** get_address_of_vectors_37() { return &___vectors_37; }
	inline void set_vectors_37(FsmVector3U5BU5D_t643261629* value)
	{
		___vectors_37 = value;
		Il2CppCodeGenWriteBarrier(&___vectors_37, value);
	}

	inline static int32_t get_offset_of_reverse_38() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___reverse_38)); }
	inline FsmBool_t664485696 * get_reverse_38() const { return ___reverse_38; }
	inline FsmBool_t664485696 ** get_address_of_reverse_38() { return &___reverse_38; }
	inline void set_reverse_38(FsmBool_t664485696 * value)
	{
		___reverse_38 = value;
		Il2CppCodeGenWriteBarrier(&___reverse_38, value);
	}

	inline static int32_t get_offset_of_tempVct3_39() { return static_cast<int32_t>(offsetof(iTweenMoveTo_t4276196252, ___tempVct3_39)); }
	inline Vector3U5BU5D_t1172311765* get_tempVct3_39() const { return ___tempVct3_39; }
	inline Vector3U5BU5D_t1172311765** get_address_of_tempVct3_39() { return &___tempVct3_39; }
	inline void set_tempVct3_39(Vector3U5BU5D_t1172311765* value)
	{
		___tempVct3_39 = value;
		Il2CppCodeGenWriteBarrier(&___tempVct3_39, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
