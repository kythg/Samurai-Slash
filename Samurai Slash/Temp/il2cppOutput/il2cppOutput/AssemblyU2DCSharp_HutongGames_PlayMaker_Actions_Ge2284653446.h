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
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAnimatorLeftFootBottomHeight
struct  GetAnimatorLeftFootBottomHeight_t2284653446  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetAnimatorLeftFootBottomHeight::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAnimatorLeftFootBottomHeight::leftFootHeight
	FsmFloat_t937133978 * ___leftFootHeight_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetAnimatorLeftFootBottomHeight::everyFrame
	bool ___everyFrame_13;
	// UnityEngine.Animator HutongGames.PlayMaker.Actions.GetAnimatorLeftFootBottomHeight::_animator
	Animator_t69676727 * ____animator_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetAnimatorLeftFootBottomHeight_t2284653446, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_leftFootHeight_12() { return static_cast<int32_t>(offsetof(GetAnimatorLeftFootBottomHeight_t2284653446, ___leftFootHeight_12)); }
	inline FsmFloat_t937133978 * get_leftFootHeight_12() const { return ___leftFootHeight_12; }
	inline FsmFloat_t937133978 ** get_address_of_leftFootHeight_12() { return &___leftFootHeight_12; }
	inline void set_leftFootHeight_12(FsmFloat_t937133978 * value)
	{
		___leftFootHeight_12 = value;
		Il2CppCodeGenWriteBarrier(&___leftFootHeight_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetAnimatorLeftFootBottomHeight_t2284653446, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}

	inline static int32_t get_offset_of__animator_14() { return static_cast<int32_t>(offsetof(GetAnimatorLeftFootBottomHeight_t2284653446, ____animator_14)); }
	inline Animator_t69676727 * get__animator_14() const { return ____animator_14; }
	inline Animator_t69676727 ** get_address_of__animator_14() { return &____animator_14; }
	inline void set__animator_14(Animator_t69676727 * value)
	{
		____animator_14 = value;
		Il2CppCodeGenWriteBarrier(&____animator_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
