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
// HutongGames.PlayMaker.FsmVar[]
struct FsmVarU5BU5D_t16885852;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayAddRange
struct  ArrayAddRange_t1039804349  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayAddRange::array
	FsmArray_t527459893 * ___array_11;
	// HutongGames.PlayMaker.FsmVar[] HutongGames.PlayMaker.Actions.ArrayAddRange::variables
	FsmVarU5BU5D_t16885852* ___variables_12;

public:
	inline static int32_t get_offset_of_array_11() { return static_cast<int32_t>(offsetof(ArrayAddRange_t1039804349, ___array_11)); }
	inline FsmArray_t527459893 * get_array_11() const { return ___array_11; }
	inline FsmArray_t527459893 ** get_address_of_array_11() { return &___array_11; }
	inline void set_array_11(FsmArray_t527459893 * value)
	{
		___array_11 = value;
		Il2CppCodeGenWriteBarrier(&___array_11, value);
	}

	inline static int32_t get_offset_of_variables_12() { return static_cast<int32_t>(offsetof(ArrayAddRange_t1039804349, ___variables_12)); }
	inline FsmVarU5BU5D_t16885852* get_variables_12() const { return ___variables_12; }
	inline FsmVarU5BU5D_t16885852** get_address_of_variables_12() { return &___variables_12; }
	inline void set_variables_12(FsmVarU5BU5D_t16885852* value)
	{
		___variables_12 = value;
		Il2CppCodeGenWriteBarrier(&___variables_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
