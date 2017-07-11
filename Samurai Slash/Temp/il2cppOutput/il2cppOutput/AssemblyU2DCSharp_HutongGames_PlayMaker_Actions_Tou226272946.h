#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.TouchObjectEvent
struct  TouchObjectEvent_t226272946  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.TouchObjectEvent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.TouchObjectEvent::pickDistance
	FsmFloat_t937133978 * ___pickDistance_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchObjectEvent::fingerId
	FsmInt_t1273009179 * ___fingerId_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObjectEvent::touchBegan
	FsmEvent_t1258573736 * ___touchBegan_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObjectEvent::touchMoved
	FsmEvent_t1258573736 * ___touchMoved_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObjectEvent::touchStationary
	FsmEvent_t1258573736 * ___touchStationary_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObjectEvent::touchEnded
	FsmEvent_t1258573736 * ___touchEnded_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObjectEvent::touchCanceled
	FsmEvent_t1258573736 * ___touchCanceled_18;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchObjectEvent::storeFingerId
	FsmInt_t1273009179 * ___storeFingerId_19;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.TouchObjectEvent::storeHitPoint
	FsmVector3_t3996534004 * ___storeHitPoint_20;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.TouchObjectEvent::storeHitNormal
	FsmVector3_t3996534004 * ___storeHitNormal_21;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_pickDistance_12() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___pickDistance_12)); }
	inline FsmFloat_t937133978 * get_pickDistance_12() const { return ___pickDistance_12; }
	inline FsmFloat_t937133978 ** get_address_of_pickDistance_12() { return &___pickDistance_12; }
	inline void set_pickDistance_12(FsmFloat_t937133978 * value)
	{
		___pickDistance_12 = value;
		Il2CppCodeGenWriteBarrier(&___pickDistance_12, value);
	}

	inline static int32_t get_offset_of_fingerId_13() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___fingerId_13)); }
	inline FsmInt_t1273009179 * get_fingerId_13() const { return ___fingerId_13; }
	inline FsmInt_t1273009179 ** get_address_of_fingerId_13() { return &___fingerId_13; }
	inline void set_fingerId_13(FsmInt_t1273009179 * value)
	{
		___fingerId_13 = value;
		Il2CppCodeGenWriteBarrier(&___fingerId_13, value);
	}

	inline static int32_t get_offset_of_touchBegan_14() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___touchBegan_14)); }
	inline FsmEvent_t1258573736 * get_touchBegan_14() const { return ___touchBegan_14; }
	inline FsmEvent_t1258573736 ** get_address_of_touchBegan_14() { return &___touchBegan_14; }
	inline void set_touchBegan_14(FsmEvent_t1258573736 * value)
	{
		___touchBegan_14 = value;
		Il2CppCodeGenWriteBarrier(&___touchBegan_14, value);
	}

	inline static int32_t get_offset_of_touchMoved_15() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___touchMoved_15)); }
	inline FsmEvent_t1258573736 * get_touchMoved_15() const { return ___touchMoved_15; }
	inline FsmEvent_t1258573736 ** get_address_of_touchMoved_15() { return &___touchMoved_15; }
	inline void set_touchMoved_15(FsmEvent_t1258573736 * value)
	{
		___touchMoved_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchMoved_15, value);
	}

	inline static int32_t get_offset_of_touchStationary_16() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___touchStationary_16)); }
	inline FsmEvent_t1258573736 * get_touchStationary_16() const { return ___touchStationary_16; }
	inline FsmEvent_t1258573736 ** get_address_of_touchStationary_16() { return &___touchStationary_16; }
	inline void set_touchStationary_16(FsmEvent_t1258573736 * value)
	{
		___touchStationary_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchStationary_16, value);
	}

	inline static int32_t get_offset_of_touchEnded_17() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___touchEnded_17)); }
	inline FsmEvent_t1258573736 * get_touchEnded_17() const { return ___touchEnded_17; }
	inline FsmEvent_t1258573736 ** get_address_of_touchEnded_17() { return &___touchEnded_17; }
	inline void set_touchEnded_17(FsmEvent_t1258573736 * value)
	{
		___touchEnded_17 = value;
		Il2CppCodeGenWriteBarrier(&___touchEnded_17, value);
	}

	inline static int32_t get_offset_of_touchCanceled_18() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___touchCanceled_18)); }
	inline FsmEvent_t1258573736 * get_touchCanceled_18() const { return ___touchCanceled_18; }
	inline FsmEvent_t1258573736 ** get_address_of_touchCanceled_18() { return &___touchCanceled_18; }
	inline void set_touchCanceled_18(FsmEvent_t1258573736 * value)
	{
		___touchCanceled_18 = value;
		Il2CppCodeGenWriteBarrier(&___touchCanceled_18, value);
	}

	inline static int32_t get_offset_of_storeFingerId_19() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___storeFingerId_19)); }
	inline FsmInt_t1273009179 * get_storeFingerId_19() const { return ___storeFingerId_19; }
	inline FsmInt_t1273009179 ** get_address_of_storeFingerId_19() { return &___storeFingerId_19; }
	inline void set_storeFingerId_19(FsmInt_t1273009179 * value)
	{
		___storeFingerId_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeFingerId_19, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_20() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___storeHitPoint_20)); }
	inline FsmVector3_t3996534004 * get_storeHitPoint_20() const { return ___storeHitPoint_20; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitPoint_20() { return &___storeHitPoint_20; }
	inline void set_storeHitPoint_20(FsmVector3_t3996534004 * value)
	{
		___storeHitPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_20, value);
	}

	inline static int32_t get_offset_of_storeHitNormal_21() { return static_cast<int32_t>(offsetof(TouchObjectEvent_t226272946, ___storeHitNormal_21)); }
	inline FsmVector3_t3996534004 * get_storeHitNormal_21() const { return ___storeHitNormal_21; }
	inline FsmVector3_t3996534004 ** get_address_of_storeHitNormal_21() { return &___storeHitNormal_21; }
	inline void set_storeHitNormal_21(FsmVector3_t3996534004 * value)
	{
		___storeHitNormal_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitNormal_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
