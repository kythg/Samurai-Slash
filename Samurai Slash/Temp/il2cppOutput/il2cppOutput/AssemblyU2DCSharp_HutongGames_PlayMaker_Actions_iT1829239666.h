#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_iT3900135744.h"
#include "AssemblyU2DCSharp_iTween_LoopType1490651981.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenPunchScale
struct  iTweenPunchScale_t1829239666  : public iTweenFsmAction_t3900135744
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenPunchScale::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_19;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.iTweenPunchScale::id
	FsmString_t2414474701 * ___id_20;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.iTweenPunchScale::vector
	FsmVector3_t3996534004 * ___vector_21;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenPunchScale::time
	FsmFloat_t937133978 * ___time_22;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.iTweenPunchScale::delay
	FsmFloat_t937133978 * ___delay_23;
	// iTween/LoopType HutongGames.PlayMaker.Actions.iTweenPunchScale::loopType
	int32_t ___loopType_24;

public:
	inline static int32_t get_offset_of_gameObject_19() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___gameObject_19)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_19() const { return ___gameObject_19; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_19() { return &___gameObject_19; }
	inline void set_gameObject_19(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_19, value);
	}

	inline static int32_t get_offset_of_id_20() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___id_20)); }
	inline FsmString_t2414474701 * get_id_20() const { return ___id_20; }
	inline FsmString_t2414474701 ** get_address_of_id_20() { return &___id_20; }
	inline void set_id_20(FsmString_t2414474701 * value)
	{
		___id_20 = value;
		Il2CppCodeGenWriteBarrier(&___id_20, value);
	}

	inline static int32_t get_offset_of_vector_21() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___vector_21)); }
	inline FsmVector3_t3996534004 * get_vector_21() const { return ___vector_21; }
	inline FsmVector3_t3996534004 ** get_address_of_vector_21() { return &___vector_21; }
	inline void set_vector_21(FsmVector3_t3996534004 * value)
	{
		___vector_21 = value;
		Il2CppCodeGenWriteBarrier(&___vector_21, value);
	}

	inline static int32_t get_offset_of_time_22() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___time_22)); }
	inline FsmFloat_t937133978 * get_time_22() const { return ___time_22; }
	inline FsmFloat_t937133978 ** get_address_of_time_22() { return &___time_22; }
	inline void set_time_22(FsmFloat_t937133978 * value)
	{
		___time_22 = value;
		Il2CppCodeGenWriteBarrier(&___time_22, value);
	}

	inline static int32_t get_offset_of_delay_23() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___delay_23)); }
	inline FsmFloat_t937133978 * get_delay_23() const { return ___delay_23; }
	inline FsmFloat_t937133978 ** get_address_of_delay_23() { return &___delay_23; }
	inline void set_delay_23(FsmFloat_t937133978 * value)
	{
		___delay_23 = value;
		Il2CppCodeGenWriteBarrier(&___delay_23, value);
	}

	inline static int32_t get_offset_of_loopType_24() { return static_cast<int32_t>(offsetof(iTweenPunchScale_t1829239666, ___loopType_24)); }
	inline int32_t get_loopType_24() const { return ___loopType_24; }
	inline int32_t* get_address_of_loopType_24() { return &___loopType_24; }
	inline void set_loopType_24(int32_t value)
	{
		___loopType_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
