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
// HutongGames.PlayMaker.FunctionCall
struct FunctionCall_t2754669930;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.StartCoroutine
struct  StartCoroutine_t732815040  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.StartCoroutine::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.StartCoroutine::behaviour
	FsmString_t2414474701 * ___behaviour_12;
	// HutongGames.PlayMaker.FunctionCall HutongGames.PlayMaker.Actions.StartCoroutine::functionCall
	FunctionCall_t2754669930 * ___functionCall_13;
	// System.Boolean HutongGames.PlayMaker.Actions.StartCoroutine::stopOnExit
	bool ___stopOnExit_14;
	// UnityEngine.MonoBehaviour HutongGames.PlayMaker.Actions.StartCoroutine::component
	MonoBehaviour_t1158329972 * ___component_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_behaviour_12() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040, ___behaviour_12)); }
	inline FsmString_t2414474701 * get_behaviour_12() const { return ___behaviour_12; }
	inline FsmString_t2414474701 ** get_address_of_behaviour_12() { return &___behaviour_12; }
	inline void set_behaviour_12(FsmString_t2414474701 * value)
	{
		___behaviour_12 = value;
		Il2CppCodeGenWriteBarrier(&___behaviour_12, value);
	}

	inline static int32_t get_offset_of_functionCall_13() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040, ___functionCall_13)); }
	inline FunctionCall_t2754669930 * get_functionCall_13() const { return ___functionCall_13; }
	inline FunctionCall_t2754669930 ** get_address_of_functionCall_13() { return &___functionCall_13; }
	inline void set_functionCall_13(FunctionCall_t2754669930 * value)
	{
		___functionCall_13 = value;
		Il2CppCodeGenWriteBarrier(&___functionCall_13, value);
	}

	inline static int32_t get_offset_of_stopOnExit_14() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040, ___stopOnExit_14)); }
	inline bool get_stopOnExit_14() const { return ___stopOnExit_14; }
	inline bool* get_address_of_stopOnExit_14() { return &___stopOnExit_14; }
	inline void set_stopOnExit_14(bool value)
	{
		___stopOnExit_14 = value;
	}

	inline static int32_t get_offset_of_component_15() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040, ___component_15)); }
	inline MonoBehaviour_t1158329972 * get_component_15() const { return ___component_15; }
	inline MonoBehaviour_t1158329972 ** get_address_of_component_15() { return &___component_15; }
	inline void set_component_15(MonoBehaviour_t1158329972 * value)
	{
		___component_15 = value;
		Il2CppCodeGenWriteBarrier(&___component_15, value);
	}
};

struct StartCoroutine_t732815040_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> HutongGames.PlayMaker.Actions.StartCoroutine::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_16() { return static_cast<int32_t>(offsetof(StartCoroutine_t732815040_StaticFields, ___U3CU3Ef__switchU24map1_16)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_16() const { return ___U3CU3Ef__switchU24map1_16; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_16() { return &___U3CU3Ef__switchU24map1_16; }
	inline void set_U3CU3Ef__switchU24map1_16(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
