#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayAdd
struct  ArrayAdd_t1320648502  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayAdd::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.ArrayAdd::value
	FsmVar_t2872592513 * ___value_12;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayAdd_t1320648502, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_value_12() { return static_cast<int32_t>(offsetof(ArrayAdd_t1320648502, ___value_12)); }
	inline FsmVar_t2872592513 * get_value_12() const { return ___value_12; }
	inline FsmVar_t2872592513 ** get_address_of_value_12() { return &___value_12; }
	inline void set_value_12(FsmVar_t2872592513 * value)
	{
		___value_12 = value;
		Il2CppCodeGenWriteBarrier(&___value_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
