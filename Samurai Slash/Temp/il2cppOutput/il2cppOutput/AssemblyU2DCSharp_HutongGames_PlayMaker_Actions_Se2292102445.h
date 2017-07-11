#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Se1591313614.h"
#include "UnityEngine_UnityEngine_SendMessageOptions1414041951.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FunctionCall
struct FunctionCall_t2754669930;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SendMessage
struct  SendMessage_t2292102445  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SendMessage::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.Actions.SendMessage/MessageType HutongGames.PlayMaker.Actions.SendMessage::delivery
	int32_t ___delivery_12;
	// UnityEngine.SendMessageOptions HutongGames.PlayMaker.Actions.SendMessage::options
	int32_t ___options_13;
	// HutongGames.PlayMaker.FunctionCall HutongGames.PlayMaker.Actions.SendMessage::functionCall
	FunctionCall_t2754669930 * ___functionCall_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(SendMessage_t2292102445, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_delivery_12() { return static_cast<int32_t>(offsetof(SendMessage_t2292102445, ___delivery_12)); }
	inline int32_t get_delivery_12() const { return ___delivery_12; }
	inline int32_t* get_address_of_delivery_12() { return &___delivery_12; }
	inline void set_delivery_12(int32_t value)
	{
		___delivery_12 = value;
	}

	inline static int32_t get_offset_of_options_13() { return static_cast<int32_t>(offsetof(SendMessage_t2292102445, ___options_13)); }
	inline int32_t get_options_13() const { return ___options_13; }
	inline int32_t* get_address_of_options_13() { return &___options_13; }
	inline void set_options_13(int32_t value)
	{
		___options_13 = value;
	}

	inline static int32_t get_offset_of_functionCall_14() { return static_cast<int32_t>(offsetof(SendMessage_t2292102445, ___functionCall_14)); }
	inline FunctionCall_t2754669930 * get_functionCall_14() const { return ___functionCall_14; }
	inline FunctionCall_t2754669930 ** get_address_of_functionCall_14() { return &___functionCall_14; }
	inline void set_functionCall_14(FunctionCall_t2754669930 * value)
	{
		___functionCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___functionCall_14, value);
	}
};

struct SendMessage_t2292102445_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> HutongGames.PlayMaker.Actions.SendMessage::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_15() { return static_cast<int32_t>(offsetof(SendMessage_t2292102445_StaticFields, ___U3CU3Ef__switchU24map0_15)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_15() const { return ___U3CU3Ef__switchU24map0_15; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_15() { return &___U3CU3Ef__switchU24map0_15; }
	inline void set_U3CU3Ef__switchU24map0_15(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
