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
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.TouchObject2dEvent
struct  TouchObject2dEvent_t3527710288  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.TouchObject2dEvent::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchObject2dEvent::fingerId
	FsmInt_t1273009179 * ___fingerId_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObject2dEvent::touchBegan
	FsmEvent_t1258573736 * ___touchBegan_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObject2dEvent::touchMoved
	FsmEvent_t1258573736 * ___touchMoved_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObject2dEvent::touchStationary
	FsmEvent_t1258573736 * ___touchStationary_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObject2dEvent::touchEnded
	FsmEvent_t1258573736 * ___touchEnded_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.TouchObject2dEvent::touchCanceled
	FsmEvent_t1258573736 * ___touchCanceled_17;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TouchObject2dEvent::storeFingerId
	FsmInt_t1273009179 * ___storeFingerId_18;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.TouchObject2dEvent::storeHitPoint
	FsmVector2_t2430450063 * ___storeHitPoint_19;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_fingerId_12() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___fingerId_12)); }
	inline FsmInt_t1273009179 * get_fingerId_12() const { return ___fingerId_12; }
	inline FsmInt_t1273009179 ** get_address_of_fingerId_12() { return &___fingerId_12; }
	inline void set_fingerId_12(FsmInt_t1273009179 * value)
	{
		___fingerId_12 = value;
		Il2CppCodeGenWriteBarrier(&___fingerId_12, value);
	}

	inline static int32_t get_offset_of_touchBegan_13() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___touchBegan_13)); }
	inline FsmEvent_t1258573736 * get_touchBegan_13() const { return ___touchBegan_13; }
	inline FsmEvent_t1258573736 ** get_address_of_touchBegan_13() { return &___touchBegan_13; }
	inline void set_touchBegan_13(FsmEvent_t1258573736 * value)
	{
		___touchBegan_13 = value;
		Il2CppCodeGenWriteBarrier(&___touchBegan_13, value);
	}

	inline static int32_t get_offset_of_touchMoved_14() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___touchMoved_14)); }
	inline FsmEvent_t1258573736 * get_touchMoved_14() const { return ___touchMoved_14; }
	inline FsmEvent_t1258573736 ** get_address_of_touchMoved_14() { return &___touchMoved_14; }
	inline void set_touchMoved_14(FsmEvent_t1258573736 * value)
	{
		___touchMoved_14 = value;
		Il2CppCodeGenWriteBarrier(&___touchMoved_14, value);
	}

	inline static int32_t get_offset_of_touchStationary_15() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___touchStationary_15)); }
	inline FsmEvent_t1258573736 * get_touchStationary_15() const { return ___touchStationary_15; }
	inline FsmEvent_t1258573736 ** get_address_of_touchStationary_15() { return &___touchStationary_15; }
	inline void set_touchStationary_15(FsmEvent_t1258573736 * value)
	{
		___touchStationary_15 = value;
		Il2CppCodeGenWriteBarrier(&___touchStationary_15, value);
	}

	inline static int32_t get_offset_of_touchEnded_16() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___touchEnded_16)); }
	inline FsmEvent_t1258573736 * get_touchEnded_16() const { return ___touchEnded_16; }
	inline FsmEvent_t1258573736 ** get_address_of_touchEnded_16() { return &___touchEnded_16; }
	inline void set_touchEnded_16(FsmEvent_t1258573736 * value)
	{
		___touchEnded_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchEnded_16, value);
	}

	inline static int32_t get_offset_of_touchCanceled_17() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___touchCanceled_17)); }
	inline FsmEvent_t1258573736 * get_touchCanceled_17() const { return ___touchCanceled_17; }
	inline FsmEvent_t1258573736 ** get_address_of_touchCanceled_17() { return &___touchCanceled_17; }
	inline void set_touchCanceled_17(FsmEvent_t1258573736 * value)
	{
		___touchCanceled_17 = value;
		Il2CppCodeGenWriteBarrier(&___touchCanceled_17, value);
	}

	inline static int32_t get_offset_of_storeFingerId_18() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___storeFingerId_18)); }
	inline FsmInt_t1273009179 * get_storeFingerId_18() const { return ___storeFingerId_18; }
	inline FsmInt_t1273009179 ** get_address_of_storeFingerId_18() { return &___storeFingerId_18; }
	inline void set_storeFingerId_18(FsmInt_t1273009179 * value)
	{
		___storeFingerId_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeFingerId_18, value);
	}

	inline static int32_t get_offset_of_storeHitPoint_19() { return static_cast<int32_t>(offsetof(TouchObject2dEvent_t3527710288, ___storeHitPoint_19)); }
	inline FsmVector2_t2430450063 * get_storeHitPoint_19() const { return ___storeHitPoint_19; }
	inline FsmVector2_t2430450063 ** get_address_of_storeHitPoint_19() { return &___storeHitPoint_19; }
	inline void set_storeHitPoint_19(FsmVector2_t2430450063 * value)
	{
		___storeHitPoint_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitPoint_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
