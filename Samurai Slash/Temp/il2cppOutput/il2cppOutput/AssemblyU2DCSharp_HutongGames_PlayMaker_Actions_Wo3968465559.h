#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.WorldToScreenPoint
struct  WorldToScreenPoint_t3968465559  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldPosition
	FsmVector3_t3996534004 * ___worldPosition_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldX
	FsmFloat_t937133978 * ___worldX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldY
	FsmFloat_t937133978 * ___worldY_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::worldZ
	FsmFloat_t937133978 * ___worldZ_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenPoint
	FsmVector3_t3996534004 * ___storeScreenPoint_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenX
	FsmFloat_t937133978 * ___storeScreenX_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.WorldToScreenPoint::storeScreenY
	FsmFloat_t937133978 * ___storeScreenY_17;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.WorldToScreenPoint::normalize
	FsmBool_t664485696 * ___normalize_18;
	// System.Boolean HutongGames.PlayMaker.Actions.WorldToScreenPoint::everyFrame
	bool ___everyFrame_19;

public:
	inline static int32_t get_offset_of_worldPosition_11() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___worldPosition_11)); }
	inline FsmVector3_t3996534004 * get_worldPosition_11() const { return ___worldPosition_11; }
	inline FsmVector3_t3996534004 ** get_address_of_worldPosition_11() { return &___worldPosition_11; }
	inline void set_worldPosition_11(FsmVector3_t3996534004 * value)
	{
		___worldPosition_11 = value;
		Il2CppCodeGenWriteBarrier(&___worldPosition_11, value);
	}

	inline static int32_t get_offset_of_worldX_12() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___worldX_12)); }
	inline FsmFloat_t937133978 * get_worldX_12() const { return ___worldX_12; }
	inline FsmFloat_t937133978 ** get_address_of_worldX_12() { return &___worldX_12; }
	inline void set_worldX_12(FsmFloat_t937133978 * value)
	{
		___worldX_12 = value;
		Il2CppCodeGenWriteBarrier(&___worldX_12, value);
	}

	inline static int32_t get_offset_of_worldY_13() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___worldY_13)); }
	inline FsmFloat_t937133978 * get_worldY_13() const { return ___worldY_13; }
	inline FsmFloat_t937133978 ** get_address_of_worldY_13() { return &___worldY_13; }
	inline void set_worldY_13(FsmFloat_t937133978 * value)
	{
		___worldY_13 = value;
		Il2CppCodeGenWriteBarrier(&___worldY_13, value);
	}

	inline static int32_t get_offset_of_worldZ_14() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___worldZ_14)); }
	inline FsmFloat_t937133978 * get_worldZ_14() const { return ___worldZ_14; }
	inline FsmFloat_t937133978 ** get_address_of_worldZ_14() { return &___worldZ_14; }
	inline void set_worldZ_14(FsmFloat_t937133978 * value)
	{
		___worldZ_14 = value;
		Il2CppCodeGenWriteBarrier(&___worldZ_14, value);
	}

	inline static int32_t get_offset_of_storeScreenPoint_15() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___storeScreenPoint_15)); }
	inline FsmVector3_t3996534004 * get_storeScreenPoint_15() const { return ___storeScreenPoint_15; }
	inline FsmVector3_t3996534004 ** get_address_of_storeScreenPoint_15() { return &___storeScreenPoint_15; }
	inline void set_storeScreenPoint_15(FsmVector3_t3996534004 * value)
	{
		___storeScreenPoint_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeScreenPoint_15, value);
	}

	inline static int32_t get_offset_of_storeScreenX_16() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___storeScreenX_16)); }
	inline FsmFloat_t937133978 * get_storeScreenX_16() const { return ___storeScreenX_16; }
	inline FsmFloat_t937133978 ** get_address_of_storeScreenX_16() { return &___storeScreenX_16; }
	inline void set_storeScreenX_16(FsmFloat_t937133978 * value)
	{
		___storeScreenX_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeScreenX_16, value);
	}

	inline static int32_t get_offset_of_storeScreenY_17() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___storeScreenY_17)); }
	inline FsmFloat_t937133978 * get_storeScreenY_17() const { return ___storeScreenY_17; }
	inline FsmFloat_t937133978 ** get_address_of_storeScreenY_17() { return &___storeScreenY_17; }
	inline void set_storeScreenY_17(FsmFloat_t937133978 * value)
	{
		___storeScreenY_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeScreenY_17, value);
	}

	inline static int32_t get_offset_of_normalize_18() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___normalize_18)); }
	inline FsmBool_t664485696 * get_normalize_18() const { return ___normalize_18; }
	inline FsmBool_t664485696 ** get_address_of_normalize_18() { return &___normalize_18; }
	inline void set_normalize_18(FsmBool_t664485696 * value)
	{
		___normalize_18 = value;
		Il2CppCodeGenWriteBarrier(&___normalize_18, value);
	}

	inline static int32_t get_offset_of_everyFrame_19() { return static_cast<int32_t>(offsetof(WorldToScreenPoint_t3968465559, ___everyFrame_19)); }
	inline bool get_everyFrame_19() const { return ___everyFrame_19; }
	inline bool* get_address_of_everyFrame_19() { return &___everyFrame_19; }
	inline void set_everyFrame_19(bool value)
	{
		___everyFrame_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
