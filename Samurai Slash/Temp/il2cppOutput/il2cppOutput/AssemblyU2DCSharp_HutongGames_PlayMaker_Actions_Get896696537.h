#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetTouchInfo
struct  GetTouchInfo_t896696537  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetTouchInfo::fingerId
	FsmInt_t1273009179 * ___fingerId_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetTouchInfo::normalize
	FsmBool_t664485696 * ___normalize_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetTouchInfo::storePosition
	FsmVector3_t3996534004 * ___storePosition_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTouchInfo::storeX
	FsmFloat_t937133978 * ___storeX_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTouchInfo::storeY
	FsmFloat_t937133978 * ___storeY_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetTouchInfo::storeDeltaPosition
	FsmVector3_t3996534004 * ___storeDeltaPosition_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTouchInfo::storeDeltaX
	FsmFloat_t937133978 * ___storeDeltaX_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTouchInfo::storeDeltaY
	FsmFloat_t937133978 * ___storeDeltaY_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTouchInfo::storeDeltaTime
	FsmFloat_t937133978 * ___storeDeltaTime_19;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetTouchInfo::storeTapCount
	FsmInt_t1273009179 * ___storeTapCount_20;
	// System.Boolean HutongGames.PlayMaker.Actions.GetTouchInfo::everyFrame
	bool ___everyFrame_21;
	// System.Single HutongGames.PlayMaker.Actions.GetTouchInfo::screenWidth
	float ___screenWidth_22;
	// System.Single HutongGames.PlayMaker.Actions.GetTouchInfo::screenHeight
	float ___screenHeight_23;

public:
	inline static int32_t get_offset_of_fingerId_11() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___fingerId_11)); }
	inline FsmInt_t1273009179 * get_fingerId_11() const { return ___fingerId_11; }
	inline FsmInt_t1273009179 ** get_address_of_fingerId_11() { return &___fingerId_11; }
	inline void set_fingerId_11(FsmInt_t1273009179 * value)
	{
		___fingerId_11 = value;
		Il2CppCodeGenWriteBarrier(&___fingerId_11, value);
	}

	inline static int32_t get_offset_of_normalize_12() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___normalize_12)); }
	inline FsmBool_t664485696 * get_normalize_12() const { return ___normalize_12; }
	inline FsmBool_t664485696 ** get_address_of_normalize_12() { return &___normalize_12; }
	inline void set_normalize_12(FsmBool_t664485696 * value)
	{
		___normalize_12 = value;
		Il2CppCodeGenWriteBarrier(&___normalize_12, value);
	}

	inline static int32_t get_offset_of_storePosition_13() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storePosition_13)); }
	inline FsmVector3_t3996534004 * get_storePosition_13() const { return ___storePosition_13; }
	inline FsmVector3_t3996534004 ** get_address_of_storePosition_13() { return &___storePosition_13; }
	inline void set_storePosition_13(FsmVector3_t3996534004 * value)
	{
		___storePosition_13 = value;
		Il2CppCodeGenWriteBarrier(&___storePosition_13, value);
	}

	inline static int32_t get_offset_of_storeX_14() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeX_14)); }
	inline FsmFloat_t937133978 * get_storeX_14() const { return ___storeX_14; }
	inline FsmFloat_t937133978 ** get_address_of_storeX_14() { return &___storeX_14; }
	inline void set_storeX_14(FsmFloat_t937133978 * value)
	{
		___storeX_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeX_14, value);
	}

	inline static int32_t get_offset_of_storeY_15() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeY_15)); }
	inline FsmFloat_t937133978 * get_storeY_15() const { return ___storeY_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeY_15() { return &___storeY_15; }
	inline void set_storeY_15(FsmFloat_t937133978 * value)
	{
		___storeY_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeY_15, value);
	}

	inline static int32_t get_offset_of_storeDeltaPosition_16() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeDeltaPosition_16)); }
	inline FsmVector3_t3996534004 * get_storeDeltaPosition_16() const { return ___storeDeltaPosition_16; }
	inline FsmVector3_t3996534004 ** get_address_of_storeDeltaPosition_16() { return &___storeDeltaPosition_16; }
	inline void set_storeDeltaPosition_16(FsmVector3_t3996534004 * value)
	{
		___storeDeltaPosition_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeDeltaPosition_16, value);
	}

	inline static int32_t get_offset_of_storeDeltaX_17() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeDeltaX_17)); }
	inline FsmFloat_t937133978 * get_storeDeltaX_17() const { return ___storeDeltaX_17; }
	inline FsmFloat_t937133978 ** get_address_of_storeDeltaX_17() { return &___storeDeltaX_17; }
	inline void set_storeDeltaX_17(FsmFloat_t937133978 * value)
	{
		___storeDeltaX_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeDeltaX_17, value);
	}

	inline static int32_t get_offset_of_storeDeltaY_18() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeDeltaY_18)); }
	inline FsmFloat_t937133978 * get_storeDeltaY_18() const { return ___storeDeltaY_18; }
	inline FsmFloat_t937133978 ** get_address_of_storeDeltaY_18() { return &___storeDeltaY_18; }
	inline void set_storeDeltaY_18(FsmFloat_t937133978 * value)
	{
		___storeDeltaY_18 = value;
		Il2CppCodeGenWriteBarrier(&___storeDeltaY_18, value);
	}

	inline static int32_t get_offset_of_storeDeltaTime_19() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeDeltaTime_19)); }
	inline FsmFloat_t937133978 * get_storeDeltaTime_19() const { return ___storeDeltaTime_19; }
	inline FsmFloat_t937133978 ** get_address_of_storeDeltaTime_19() { return &___storeDeltaTime_19; }
	inline void set_storeDeltaTime_19(FsmFloat_t937133978 * value)
	{
		___storeDeltaTime_19 = value;
		Il2CppCodeGenWriteBarrier(&___storeDeltaTime_19, value);
	}

	inline static int32_t get_offset_of_storeTapCount_20() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___storeTapCount_20)); }
	inline FsmInt_t1273009179 * get_storeTapCount_20() const { return ___storeTapCount_20; }
	inline FsmInt_t1273009179 ** get_address_of_storeTapCount_20() { return &___storeTapCount_20; }
	inline void set_storeTapCount_20(FsmInt_t1273009179 * value)
	{
		___storeTapCount_20 = value;
		Il2CppCodeGenWriteBarrier(&___storeTapCount_20, value);
	}

	inline static int32_t get_offset_of_everyFrame_21() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___everyFrame_21)); }
	inline bool get_everyFrame_21() const { return ___everyFrame_21; }
	inline bool* get_address_of_everyFrame_21() { return &___everyFrame_21; }
	inline void set_everyFrame_21(bool value)
	{
		___everyFrame_21 = value;
	}

	inline static int32_t get_offset_of_screenWidth_22() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___screenWidth_22)); }
	inline float get_screenWidth_22() const { return ___screenWidth_22; }
	inline float* get_address_of_screenWidth_22() { return &___screenWidth_22; }
	inline void set_screenWidth_22(float value)
	{
		___screenWidth_22 = value;
	}

	inline static int32_t get_offset_of_screenHeight_23() { return static_cast<int32_t>(offsetof(GetTouchInfo_t896696537, ___screenHeight_23)); }
	inline float get_screenHeight_23() const { return ___screenHeight_23; }
	inline float* get_address_of_screenHeight_23() { return &___screenHeight_23; }
	inline void set_screenHeight_23(float value)
	{
		___screenHeight_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
