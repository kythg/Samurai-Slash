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
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.InvokeMethod
struct  InvokeMethod_t250156135  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.InvokeMethod::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.InvokeMethod::behaviour
	FsmString_t2414474701 * ___behaviour_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.InvokeMethod::methodName
	FsmString_t2414474701 * ___methodName_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.InvokeMethod::delay
	FsmFloat_t937133978 * ___delay_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.InvokeMethod::repeating
	FsmBool_t664485696 * ___repeating_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.InvokeMethod::repeatDelay
	FsmFloat_t937133978 * ___repeatDelay_16;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.InvokeMethod::cancelOnExit
	FsmBool_t664485696 * ___cancelOnExit_17;
	// UnityEngine.MonoBehaviour HutongGames.PlayMaker.Actions.InvokeMethod::component
	MonoBehaviour_t1158329972 * ___component_18;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_behaviour_12() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___behaviour_12)); }
	inline FsmString_t2414474701 * get_behaviour_12() const { return ___behaviour_12; }
	inline FsmString_t2414474701 ** get_address_of_behaviour_12() { return &___behaviour_12; }
	inline void set_behaviour_12(FsmString_t2414474701 * value)
	{
		___behaviour_12 = value;
		Il2CppCodeGenWriteBarrier(&___behaviour_12, value);
	}

	inline static int32_t get_offset_of_methodName_13() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___methodName_13)); }
	inline FsmString_t2414474701 * get_methodName_13() const { return ___methodName_13; }
	inline FsmString_t2414474701 ** get_address_of_methodName_13() { return &___methodName_13; }
	inline void set_methodName_13(FsmString_t2414474701 * value)
	{
		___methodName_13 = value;
		Il2CppCodeGenWriteBarrier(&___methodName_13, value);
	}

	inline static int32_t get_offset_of_delay_14() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___delay_14)); }
	inline FsmFloat_t937133978 * get_delay_14() const { return ___delay_14; }
	inline FsmFloat_t937133978 ** get_address_of_delay_14() { return &___delay_14; }
	inline void set_delay_14(FsmFloat_t937133978 * value)
	{
		___delay_14 = value;
		Il2CppCodeGenWriteBarrier(&___delay_14, value);
	}

	inline static int32_t get_offset_of_repeating_15() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___repeating_15)); }
	inline FsmBool_t664485696 * get_repeating_15() const { return ___repeating_15; }
	inline FsmBool_t664485696 ** get_address_of_repeating_15() { return &___repeating_15; }
	inline void set_repeating_15(FsmBool_t664485696 * value)
	{
		___repeating_15 = value;
		Il2CppCodeGenWriteBarrier(&___repeating_15, value);
	}

	inline static int32_t get_offset_of_repeatDelay_16() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___repeatDelay_16)); }
	inline FsmFloat_t937133978 * get_repeatDelay_16() const { return ___repeatDelay_16; }
	inline FsmFloat_t937133978 ** get_address_of_repeatDelay_16() { return &___repeatDelay_16; }
	inline void set_repeatDelay_16(FsmFloat_t937133978 * value)
	{
		___repeatDelay_16 = value;
		Il2CppCodeGenWriteBarrier(&___repeatDelay_16, value);
	}

	inline static int32_t get_offset_of_cancelOnExit_17() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___cancelOnExit_17)); }
	inline FsmBool_t664485696 * get_cancelOnExit_17() const { return ___cancelOnExit_17; }
	inline FsmBool_t664485696 ** get_address_of_cancelOnExit_17() { return &___cancelOnExit_17; }
	inline void set_cancelOnExit_17(FsmBool_t664485696 * value)
	{
		___cancelOnExit_17 = value;
		Il2CppCodeGenWriteBarrier(&___cancelOnExit_17, value);
	}

	inline static int32_t get_offset_of_component_18() { return static_cast<int32_t>(offsetof(InvokeMethod_t250156135, ___component_18)); }
	inline MonoBehaviour_t1158329972 * get_component_18() const { return ___component_18; }
	inline MonoBehaviour_t1158329972 ** get_address_of_component_18() { return &___component_18; }
	inline void set_component_18(MonoBehaviour_t1158329972 * value)
	{
		___component_18 = value;
		Il2CppCodeGenWriteBarrier(&___component_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
