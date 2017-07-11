#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "PlayMaker_HutongGames_PlayMaker_MouseButton1622948991.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetMouseButton
struct  GetMouseButton_t1647357977  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.MouseButton HutongGames.PlayMaker.Actions.GetMouseButton::button
	int32_t ___button_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetMouseButton::storeResult
	FsmBool_t664485696 * ___storeResult_12;

public:
	inline static int32_t get_offset_of_button_11() { return static_cast<int32_t>(offsetof(GetMouseButton_t1647357977, ___button_11)); }
	inline int32_t get_button_11() const { return ___button_11; }
	inline int32_t* get_address_of_button_11() { return &___button_11; }
	inline void set_button_11(int32_t value)
	{
		___button_11 = value;
	}

	inline static int32_t get_offset_of_storeResult_12() { return static_cast<int32_t>(offsetof(GetMouseButton_t1647357977, ___storeResult_12)); }
	inline FsmBool_t664485696 * get_storeResult_12() const { return ___storeResult_12; }
	inline FsmBool_t664485696 ** get_address_of_storeResult_12() { return &___storeResult_12; }
	inline void set_storeResult_12(FsmBool_t664485696 * value)
	{
		___storeResult_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
