#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea2453967042.h"

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.EaseRect
struct  EaseRect_t2446331988  : public EaseFsmAction_t2453967042
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.EaseRect::fromValue
	FsmRect_t19023354 * ___fromValue_32;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.EaseRect::toValue
	FsmRect_t19023354 * ___toValue_33;
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.EaseRect::rectVariable
	FsmRect_t19023354 * ___rectVariable_34;
	// System.Boolean HutongGames.PlayMaker.Actions.EaseRect::finishInNextStep
	bool ___finishInNextStep_35;

public:
	inline static int32_t get_offset_of_fromValue_32() { return static_cast<int32_t>(offsetof(EaseRect_t2446331988, ___fromValue_32)); }
	inline FsmRect_t19023354 * get_fromValue_32() const { return ___fromValue_32; }
	inline FsmRect_t19023354 ** get_address_of_fromValue_32() { return &___fromValue_32; }
	inline void set_fromValue_32(FsmRect_t19023354 * value)
	{
		___fromValue_32 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_32, value);
	}

	inline static int32_t get_offset_of_toValue_33() { return static_cast<int32_t>(offsetof(EaseRect_t2446331988, ___toValue_33)); }
	inline FsmRect_t19023354 * get_toValue_33() const { return ___toValue_33; }
	inline FsmRect_t19023354 ** get_address_of_toValue_33() { return &___toValue_33; }
	inline void set_toValue_33(FsmRect_t19023354 * value)
	{
		___toValue_33 = value;
		Il2CppCodeGenWriteBarrier(&___toValue_33, value);
	}

	inline static int32_t get_offset_of_rectVariable_34() { return static_cast<int32_t>(offsetof(EaseRect_t2446331988, ___rectVariable_34)); }
	inline FsmRect_t19023354 * get_rectVariable_34() const { return ___rectVariable_34; }
	inline FsmRect_t19023354 ** get_address_of_rectVariable_34() { return &___rectVariable_34; }
	inline void set_rectVariable_34(FsmRect_t19023354 * value)
	{
		___rectVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___rectVariable_34, value);
	}

	inline static int32_t get_offset_of_finishInNextStep_35() { return static_cast<int32_t>(offsetof(EaseRect_t2446331988, ___finishInNextStep_35)); }
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
