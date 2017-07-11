#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetRectFields
struct  GetRectFields_t1761229231  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.GetRectFields::rectVariable
	FsmRect_t19023354 * ___rectVariable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRectFields::storeX
	FsmFloat_t937133978 * ___storeX_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRectFields::storeY
	FsmFloat_t937133978 * ___storeY_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRectFields::storeWidth
	FsmFloat_t937133978 * ___storeWidth_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetRectFields::storeHeight
	FsmFloat_t937133978 * ___storeHeight_15;
	// System.Boolean HutongGames.PlayMaker.Actions.GetRectFields::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_rectVariable_11() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___rectVariable_11)); }
	inline FsmRect_t19023354 * get_rectVariable_11() const { return ___rectVariable_11; }
	inline FsmRect_t19023354 ** get_address_of_rectVariable_11() { return &___rectVariable_11; }
	inline void set_rectVariable_11(FsmRect_t19023354 * value)
	{
		___rectVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___rectVariable_11, value);
	}

	inline static int32_t get_offset_of_storeX_12() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___storeX_12)); }
	inline FsmFloat_t937133978 * get_storeX_12() const { return ___storeX_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeX_12() { return &___storeX_12; }
	inline void set_storeX_12(FsmFloat_t937133978 * value)
	{
		___storeX_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeX_12, value);
	}

	inline static int32_t get_offset_of_storeY_13() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___storeY_13)); }
	inline FsmFloat_t937133978 * get_storeY_13() const { return ___storeY_13; }
	inline FsmFloat_t937133978 ** get_address_of_storeY_13() { return &___storeY_13; }
	inline void set_storeY_13(FsmFloat_t937133978 * value)
	{
		___storeY_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeY_13, value);
	}

	inline static int32_t get_offset_of_storeWidth_14() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___storeWidth_14)); }
	inline FsmFloat_t937133978 * get_storeWidth_14() const { return ___storeWidth_14; }
	inline FsmFloat_t937133978 ** get_address_of_storeWidth_14() { return &___storeWidth_14; }
	inline void set_storeWidth_14(FsmFloat_t937133978 * value)
	{
		___storeWidth_14 = value;
		Il2CppCodeGenWriteBarrier(&___storeWidth_14, value);
	}

	inline static int32_t get_offset_of_storeHeight_15() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___storeHeight_15)); }
	inline FsmFloat_t937133978 * get_storeHeight_15() const { return ___storeHeight_15; }
	inline FsmFloat_t937133978 ** get_address_of_storeHeight_15() { return &___storeHeight_15; }
	inline void set_storeHeight_15(FsmFloat_t937133978 * value)
	{
		___storeHeight_15 = value;
		Il2CppCodeGenWriteBarrier(&___storeHeight_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(GetRectFields_t1761229231, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
