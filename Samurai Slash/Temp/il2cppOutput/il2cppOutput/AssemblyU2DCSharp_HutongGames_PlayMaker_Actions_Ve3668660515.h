#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2AddXY
struct  Vector2AddXY_t3668660515  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2AddXY::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2AddXY::addX
	FsmFloat_t937133978 * ___addX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2AddXY::addY
	FsmFloat_t937133978 * ___addY_13;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2AddXY::everyFrame
	bool ___everyFrame_14;
	// System.Boolean HutongGames.PlayMaker.Actions.Vector2AddXY::perSecond
	bool ___perSecond_15;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(Vector2AddXY_t3668660515, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_addX_12() { return static_cast<int32_t>(offsetof(Vector2AddXY_t3668660515, ___addX_12)); }
	inline FsmFloat_t937133978 * get_addX_12() const { return ___addX_12; }
	inline FsmFloat_t937133978 ** get_address_of_addX_12() { return &___addX_12; }
	inline void set_addX_12(FsmFloat_t937133978 * value)
	{
		___addX_12 = value;
		Il2CppCodeGenWriteBarrier(&___addX_12, value);
	}

	inline static int32_t get_offset_of_addY_13() { return static_cast<int32_t>(offsetof(Vector2AddXY_t3668660515, ___addY_13)); }
	inline FsmFloat_t937133978 * get_addY_13() const { return ___addY_13; }
	inline FsmFloat_t937133978 ** get_address_of_addY_13() { return &___addY_13; }
	inline void set_addY_13(FsmFloat_t937133978 * value)
	{
		___addY_13 = value;
		Il2CppCodeGenWriteBarrier(&___addY_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(Vector2AddXY_t3668660515, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_perSecond_15() { return static_cast<int32_t>(offsetof(Vector2AddXY_t3668660515, ___perSecond_15)); }
	inline bool get_perSecond_15() const { return ___perSecond_15; }
	inline bool* get_address_of_perSecond_15() { return &___perSecond_15; }
	inline void set_perSecond_15(bool value)
	{
		___perSecond_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
