#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetJointBreak2dInfo
struct  GetJointBreak2dInfo_t837069493  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.GetJointBreak2dInfo::brokenJoint
	FsmObject_t2785794313 * ___brokenJoint_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.GetJointBreak2dInfo::reactionForce
	FsmVector2_t2430450063 * ___reactionForce_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetJointBreak2dInfo::reactionForceMagnitude
	FsmFloat_t937133978 * ___reactionForceMagnitude_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetJointBreak2dInfo::reactionTorque
	FsmFloat_t937133978 * ___reactionTorque_14;

public:
	inline static int32_t get_offset_of_brokenJoint_11() { return static_cast<int32_t>(offsetof(GetJointBreak2dInfo_t837069493, ___brokenJoint_11)); }
	inline FsmObject_t2785794313 * get_brokenJoint_11() const { return ___brokenJoint_11; }
	inline FsmObject_t2785794313 ** get_address_of_brokenJoint_11() { return &___brokenJoint_11; }
	inline void set_brokenJoint_11(FsmObject_t2785794313 * value)
	{
		___brokenJoint_11 = value;
		Il2CppCodeGenWriteBarrier(&___brokenJoint_11, value);
	}

	inline static int32_t get_offset_of_reactionForce_12() { return static_cast<int32_t>(offsetof(GetJointBreak2dInfo_t837069493, ___reactionForce_12)); }
	inline FsmVector2_t2430450063 * get_reactionForce_12() const { return ___reactionForce_12; }
	inline FsmVector2_t2430450063 ** get_address_of_reactionForce_12() { return &___reactionForce_12; }
	inline void set_reactionForce_12(FsmVector2_t2430450063 * value)
	{
		___reactionForce_12 = value;
		Il2CppCodeGenWriteBarrier(&___reactionForce_12, value);
	}

	inline static int32_t get_offset_of_reactionForceMagnitude_13() { return static_cast<int32_t>(offsetof(GetJointBreak2dInfo_t837069493, ___reactionForceMagnitude_13)); }
	inline FsmFloat_t937133978 * get_reactionForceMagnitude_13() const { return ___reactionForceMagnitude_13; }
	inline FsmFloat_t937133978 ** get_address_of_reactionForceMagnitude_13() { return &___reactionForceMagnitude_13; }
	inline void set_reactionForceMagnitude_13(FsmFloat_t937133978 * value)
	{
		___reactionForceMagnitude_13 = value;
		Il2CppCodeGenWriteBarrier(&___reactionForceMagnitude_13, value);
	}

	inline static int32_t get_offset_of_reactionTorque_14() { return static_cast<int32_t>(offsetof(GetJointBreak2dInfo_t837069493, ___reactionTorque_14)); }
	inline FsmFloat_t937133978 * get_reactionTorque_14() const { return ___reactionTorque_14; }
	inline FsmFloat_t937133978 ** get_address_of_reactionTorque_14() { return &___reactionTorque_14; }
	inline void set_reactionTorque_14(FsmFloat_t937133978 * value)
	{
		___reactionTorque_14 = value;
		Il2CppCodeGenWriteBarrier(&___reactionTorque_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
