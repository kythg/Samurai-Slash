#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT3900135744.h"
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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenLookFrom
struct  iTweenLookFrom_t2851194935  : public iTweenFsmAction_t3900135744
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenLookFrom::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_19;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.iTweenLookFrom::id
	FsmString_t2414474701 * ___id_20;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.iTweenLookFrom::transformTarget
	FsmGameObject_t3097142863 * ___transformTarget_21;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenLookFrom::vectorTarget
	FsmVector3_t3996534004 * ___vectorTarget_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenLookFrom::time
	FsmFloat_t937133978 * ___time_23;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenLookFrom::delay
	FsmFloat_t937133978 * ___delay_24;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenLookFrom::speed
	FsmFloat_t937133978 * ___speed_25;
	// iTween/EaseType HutongGames.PlayMaker.Actions.iTweenLookFrom::easeType
	int32_t ___easeType_26;
	// iTween/LoopType HutongGames.PlayMaker.Actions.iTweenLookFrom::loopType
	int32_t ___loopType_27;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction/AxisRestriction HutongGames.PlayMaker.Actions.iTweenLookFrom::axis
	int32_t ___axis_28;

public:
	inline static int32_t get_offset_of_gameObject_19() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___gameObject_19)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_19() const { return ___gameObject_19; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_19() { return &___gameObject_19; }
	inline void set_gameObject_19(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_19, value);
	}

	inline static int32_t get_offset_of_id_20() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___id_20)); }
	inline FsmString_t2414474701 * get_id_20() const { return ___id_20; }
	inline FsmString_t2414474701 ** get_address_of_id_20() { return &___id_20; }
	inline void set_id_20(FsmString_t2414474701 * value)
	{
		___id_20 = value;
		Il2CppCodeGenWriteBarrier(&___id_20, value);
	}

	inline static int32_t get_offset_of_transformTarget_21() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___transformTarget_21)); }
	inline FsmGameObject_t3097142863 * get_transformTarget_21() const { return ___transformTarget_21; }
	inline FsmGameObject_t3097142863 ** get_address_of_transformTarget_21() { return &___transformTarget_21; }
	inline void set_transformTarget_21(FsmGameObject_t3097142863 * value)
	{
		___transformTarget_21 = value;
		Il2CppCodeGenWriteBarrier(&___transformTarget_21, value);
	}

	inline static int32_t get_offset_of_vectorTarget_22() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___vectorTarget_22)); }
	inline FsmVector3_t3996534004 * get_vectorTarget_22() const { return ___vectorTarget_22; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorTarget_22() { return &___vectorTarget_22; }
	inline void set_vectorTarget_22(FsmVector3_t3996534004 * value)
	{
		___vectorTarget_22 = value;
		Il2CppCodeGenWriteBarrier(&___vectorTarget_22, value);
	}

	inline static int32_t get_offset_of_time_23() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___time_23)); }
	inline FsmFloat_t937133978 * get_time_23() const { return ___time_23; }
	inline FsmFloat_t937133978 ** get_address_of_time_23() { return &___time_23; }
	inline void set_time_23(FsmFloat_t937133978 * value)
	{
		___time_23 = value;
		Il2CppCodeGenWriteBarrier(&___time_23, value);
	}

	inline static int32_t get_offset_of_delay_24() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___delay_24)); }
	inline FsmFloat_t937133978 * get_delay_24() const { return ___delay_24; }
	inline FsmFloat_t937133978 ** get_address_of_delay_24() { return &___delay_24; }
	inline void set_delay_24(FsmFloat_t937133978 * value)
	{
		___delay_24 = value;
		Il2CppCodeGenWriteBarrier(&___delay_24, value);
	}

	inline static int32_t get_offset_of_speed_25() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___speed_25)); }
	inline FsmFloat_t937133978 * get_speed_25() const { return ___speed_25; }
	inline FsmFloat_t937133978 ** get_address_of_speed_25() { return &___speed_25; }
	inline void set_speed_25(FsmFloat_t937133978 * value)
	{
		___speed_25 = value;
		Il2CppCodeGenWriteBarrier(&___speed_25, value);
	}

	inline static int32_t get_offset_of_easeType_26() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___easeType_26)); }
	inline int32_t get_easeType_26() const { return ___easeType_26; }
	inline int32_t* get_address_of_easeType_26() { return &___easeType_26; }
	inline void set_easeType_26(int32_t value)
	{
		___easeType_26 = value;
	}

	inline static int32_t get_offset_of_loopType_27() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___loopType_27)); }
	inline int32_t get_loopType_27() const { return ___loopType_27; }
	inline int32_t* get_address_of_loopType_27() { return &___loopType_27; }
	inline void set_loopType_27(int32_t value)
	{
		___loopType_27 = value;
	}

	inline static int32_t get_offset_of_axis_28() { return static_cast<int32_t>(offsetof(iTweenLookFrom_t2851194935, ___axis_28)); }
	inline int32_t get_axis_28() const { return ___axis_28; }
	inline int32_t* get_address_of_axis_28() { return &___axis_28; }
	inline void set_axis_28(int32_t value)
	{
		___axis_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
