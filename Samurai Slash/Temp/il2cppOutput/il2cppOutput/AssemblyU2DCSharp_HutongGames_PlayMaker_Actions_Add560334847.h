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
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AddAnimationClip
struct  AddAnimationClip_t560334847  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.AddAnimationClip::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.AddAnimationClip::animationClip
	FsmObject_t2785794313 * ___animationClip_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AddAnimationClip::animationName
	FsmString_t2414474701 * ___animationName_13;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.AddAnimationClip::firstFrame
	FsmInt_t1273009179 * ___firstFrame_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.AddAnimationClip::lastFrame
	FsmInt_t1273009179 * ___lastFrame_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.AddAnimationClip::addLoopFrame
	FsmBool_t664485696 * ___addLoopFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_animationClip_12() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___animationClip_12)); }
	inline FsmObject_t2785794313 * get_animationClip_12() const { return ___animationClip_12; }
	inline FsmObject_t2785794313 ** get_address_of_animationClip_12() { return &___animationClip_12; }
	inline void set_animationClip_12(FsmObject_t2785794313 * value)
	{
		___animationClip_12 = value;
		Il2CppCodeGenWriteBarrier(&___animationClip_12, value);
	}

	inline static int32_t get_offset_of_animationName_13() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___animationName_13)); }
	inline FsmString_t2414474701 * get_animationName_13() const { return ___animationName_13; }
	inline FsmString_t2414474701 ** get_address_of_animationName_13() { return &___animationName_13; }
	inline void set_animationName_13(FsmString_t2414474701 * value)
	{
		___animationName_13 = value;
		Il2CppCodeGenWriteBarrier(&___animationName_13, value);
	}

	inline static int32_t get_offset_of_firstFrame_14() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___firstFrame_14)); }
	inline FsmInt_t1273009179 * get_firstFrame_14() const { return ___firstFrame_14; }
	inline FsmInt_t1273009179 ** get_address_of_firstFrame_14() { return &___firstFrame_14; }
	inline void set_firstFrame_14(FsmInt_t1273009179 * value)
	{
		___firstFrame_14 = value;
		Il2CppCodeGenWriteBarrier(&___firstFrame_14, value);
	}

	inline static int32_t get_offset_of_lastFrame_15() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___lastFrame_15)); }
	inline FsmInt_t1273009179 * get_lastFrame_15() const { return ___lastFrame_15; }
	inline FsmInt_t1273009179 ** get_address_of_lastFrame_15() { return &___lastFrame_15; }
	inline void set_lastFrame_15(FsmInt_t1273009179 * value)
	{
		___lastFrame_15 = value;
		Il2CppCodeGenWriteBarrier(&___lastFrame_15, value);
	}

	inline static int32_t get_offset_of_addLoopFrame_16() { return static_cast<int32_t>(offsetof(AddAnimationClip_t560334847, ___addLoopFrame_16)); }
	inline FsmBool_t664485696 * get_addLoopFrame_16() const { return ___addLoopFrame_16; }
	inline FsmBool_t664485696 ** get_address_of_addLoopFrame_16() { return &___addLoopFrame_16; }
	inline void set_addLoopFrame_16(FsmBool_t664485696 * value)
	{
		___addLoopFrame_16 = value;
		Il2CppCodeGenWriteBarrier(&___addLoopFrame_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
