#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DrawDebugRay
struct  DrawDebugRay_t1811455129  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.DrawDebugRay::fromObject
	FsmGameObject_t3097142863 * ___fromObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DrawDebugRay::fromPosition
	FsmVector3_t3996534004 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DrawDebugRay::direction
	FsmVector3_t3996534004 * ___direction_13;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.DrawDebugRay::color
	FsmColor_t118301965 * ___color_14;

public:
	inline static int32_t get_offset_of_fromObject_11() { return static_cast<int32_t>(offsetof(DrawDebugRay_t1811455129, ___fromObject_11)); }
	inline FsmGameObject_t3097142863 * get_fromObject_11() const { return ___fromObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_fromObject_11() { return &___fromObject_11; }
	inline void set_fromObject_11(FsmGameObject_t3097142863 * value)
	{
		___fromObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(DrawDebugRay_t1811455129, ___fromPosition_12)); }
	inline FsmVector3_t3996534004 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector3_t3996534004 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector3_t3996534004 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_direction_13() { return static_cast<int32_t>(offsetof(DrawDebugRay_t1811455129, ___direction_13)); }
	inline FsmVector3_t3996534004 * get_direction_13() const { return ___direction_13; }
	inline FsmVector3_t3996534004 ** get_address_of_direction_13() { return &___direction_13; }
	inline void set_direction_13(FsmVector3_t3996534004 * value)
	{
		___direction_13 = value;
		Il2CppCodeGenWriteBarrier(&___direction_13, value);
	}

	inline static int32_t get_offset_of_color_14() { return static_cast<int32_t>(offsetof(DrawDebugRay_t1811455129, ___color_14)); }
	inline FsmColor_t118301965 * get_color_14() const { return ___color_14; }
	inline FsmColor_t118301965 ** get_address_of_color_14() { return &___color_14; }
	inline void set_color_14(FsmColor_t118301965 * value)
	{
		___color_14 = value;
		Il2CppCodeGenWriteBarrier(&___color_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
