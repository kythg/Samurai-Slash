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

// HutongGames.PlayMaker.Actions.DrawDebugLine
struct  DrawDebugLine_t3762416975  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.DrawDebugLine::fromObject
	FsmGameObject_t3097142863 * ___fromObject_11;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DrawDebugLine::fromPosition
	FsmVector3_t3996534004 * ___fromPosition_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.DrawDebugLine::toObject
	FsmGameObject_t3097142863 * ___toObject_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DrawDebugLine::toPosition
	FsmVector3_t3996534004 * ___toPosition_14;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.DrawDebugLine::color
	FsmColor_t118301965 * ___color_15;

public:
	inline static int32_t get_offset_of_fromObject_11() { return static_cast<int32_t>(offsetof(DrawDebugLine_t3762416975, ___fromObject_11)); }
	inline FsmGameObject_t3097142863 * get_fromObject_11() const { return ___fromObject_11; }
	inline FsmGameObject_t3097142863 ** get_address_of_fromObject_11() { return &___fromObject_11; }
	inline void set_fromObject_11(FsmGameObject_t3097142863 * value)
	{
		___fromObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___fromObject_11, value);
	}

	inline static int32_t get_offset_of_fromPosition_12() { return static_cast<int32_t>(offsetof(DrawDebugLine_t3762416975, ___fromPosition_12)); }
	inline FsmVector3_t3996534004 * get_fromPosition_12() const { return ___fromPosition_12; }
	inline FsmVector3_t3996534004 ** get_address_of_fromPosition_12() { return &___fromPosition_12; }
	inline void set_fromPosition_12(FsmVector3_t3996534004 * value)
	{
		___fromPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___fromPosition_12, value);
	}

	inline static int32_t get_offset_of_toObject_13() { return static_cast<int32_t>(offsetof(DrawDebugLine_t3762416975, ___toObject_13)); }
	inline FsmGameObject_t3097142863 * get_toObject_13() const { return ___toObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_toObject_13() { return &___toObject_13; }
	inline void set_toObject_13(FsmGameObject_t3097142863 * value)
	{
		___toObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___toObject_13, value);
	}

	inline static int32_t get_offset_of_toPosition_14() { return static_cast<int32_t>(offsetof(DrawDebugLine_t3762416975, ___toPosition_14)); }
	inline FsmVector3_t3996534004 * get_toPosition_14() const { return ___toPosition_14; }
	inline FsmVector3_t3996534004 ** get_address_of_toPosition_14() { return &___toPosition_14; }
	inline void set_toPosition_14(FsmVector3_t3996534004 * value)
	{
		___toPosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___toPosition_14, value);
	}

	inline static int32_t get_offset_of_color_15() { return static_cast<int32_t>(offsetof(DrawDebugLine_t3762416975, ___color_15)); }
	inline FsmColor_t118301965 * get_color_15() const { return ___color_15; }
	inline FsmColor_t118301965 ** get_address_of_color_15() { return &___color_15; }
	inline void set_color_15(FsmColor_t118301965 * value)
	{
		___color_15 = value;
		Il2CppCodeGenWriteBarrier(&___color_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
