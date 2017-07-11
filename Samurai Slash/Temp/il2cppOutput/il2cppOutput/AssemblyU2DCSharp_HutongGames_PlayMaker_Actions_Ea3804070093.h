#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea2453967042.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EaseColor
struct  EaseColor_t3804070093  : public EaseFsmAction_t2453967042
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.EaseColor::fromValue
	FsmColor_t118301965 * ___fromValue_32;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.EaseColor::toValue
	FsmColor_t118301965 * ___toValue_33;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.EaseColor::colorVariable
	FsmColor_t118301965 * ___colorVariable_34;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseColor::finishInNextStep
	bool ___finishInNextStep_35;

public:
	inline static int32_t get_offset_of_fromValue_32() { return static_cast<int32_t>(offsetof(EaseColor_t3804070093, ___fromValue_32)); }
	inline FsmColor_t118301965 * get_fromValue_32() const { return ___fromValue_32; }
	inline FsmColor_t118301965 ** get_address_of_fromValue_32() { return &___fromValue_32; }
	inline void set_fromValue_32(FsmColor_t118301965 * value)
	{
		___fromValue_32 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_32, value);
	}

	inline static int32_t get_offset_of_toValue_33() { return static_cast<int32_t>(offsetof(EaseColor_t3804070093, ___toValue_33)); }
	inline FsmColor_t118301965 * get_toValue_33() const { return ___toValue_33; }
	inline FsmColor_t118301965 ** get_address_of_toValue_33() { return &___toValue_33; }
	inline void set_toValue_33(FsmColor_t118301965 * value)
	{
		___toValue_33 = value;
		Il2CppCodeGenWriteBarrier(&___toValue_33, value);
	}

	inline static int32_t get_offset_of_colorVariable_34() { return static_cast<int32_t>(offsetof(EaseColor_t3804070093, ___colorVariable_34)); }
	inline FsmColor_t118301965 * get_colorVariable_34() const { return ___colorVariable_34; }
	inline FsmColor_t118301965 ** get_address_of_colorVariable_34() { return &___colorVariable_34; }
	inline void set_colorVariable_34(FsmColor_t118301965 * value)
	{
		___colorVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___colorVariable_34, value);
	}

	inline static int32_t get_offset_of_finishInNextStep_35() { return static_cast<int32_t>(offsetof(EaseColor_t3804070093, ___finishInNextStep_35)); }
	inline bool get_finishInNextStep_35() const { return ___finishInNextStep_35; }
	inline bool* get_address_of_finishInNextStep_35() { return &___finishInNextStep_35; }
	inline void set_finishInNextStep_35(bool value)
	{
		___finishInNextStep_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
