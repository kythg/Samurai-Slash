#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea2453967042.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EaseVector3
struct  EaseVector3_t2756442322  : public EaseFsmAction_t2453967042
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.EaseVector3::fromValue
	FsmVector3_t3996534004 * ___fromValue_32;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.EaseVector3::toValue
	FsmVector3_t3996534004 * ___toValue_33;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.EaseVector3::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_34;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseVector3::finishInNextStep
	bool ___finishInNextStep_35;

public:
	inline static int32_t get_offset_of_fromValue_32() { return static_cast<int32_t>(offsetof(EaseVector3_t2756442322, ___fromValue_32)); }
	inline FsmVector3_t3996534004 * get_fromValue_32() const { return ___fromValue_32; }
	inline FsmVector3_t3996534004 ** get_address_of_fromValue_32() { return &___fromValue_32; }
	inline void set_fromValue_32(FsmVector3_t3996534004 * value)
	{
		___fromValue_32 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_32, value);
	}

	inline static int32_t get_offset_of_toValue_33() { return static_cast<int32_t>(offsetof(EaseVector3_t2756442322, ___toValue_33)); }
	inline FsmVector3_t3996534004 * get_toValue_33() const { return ___toValue_33; }
	inline FsmVector3_t3996534004 ** get_address_of_toValue_33() { return &___toValue_33; }
	inline void set_toValue_33(FsmVector3_t3996534004 * value)
	{
		___toValue_33 = value;
		Il2CppCodeGenWriteBarrier(&___toValue_33, value);
	}

	inline static int32_t get_offset_of_vector3Variable_34() { return static_cast<int32_t>(offsetof(EaseVector3_t2756442322, ___vector3Variable_34)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_34() const { return ___vector3Variable_34; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_34() { return &___vector3Variable_34; }
	inline void set_vector3Variable_34(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_34 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_34, value);
	}

	inline static int32_t get_offset_of_finishInNextStep_35() { return static_cast<int32_t>(offsetof(EaseVector3_t2756442322, ___finishInNextStep_35)); }
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
