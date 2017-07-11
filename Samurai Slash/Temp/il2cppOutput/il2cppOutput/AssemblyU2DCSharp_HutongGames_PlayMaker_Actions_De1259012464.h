#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "PlayMaker_HutongGames_PlayMaker_LogLevel3809977218.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugVector2
struct  DebugVector2_t1259012464  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugVector2::logLevel
	int32_t ___logLevel_11;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.DebugVector2::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_12;

public:
	inline static int32_t get_offset_of_logLevel_11() { return static_cast<int32_t>(offsetof(DebugVector2_t1259012464, ___logLevel_11)); }
	inline int32_t get_logLevel_11() const { return ___logLevel_11; }
	inline int32_t* get_address_of_logLevel_11() { return &___logLevel_11; }
	inline void set_logLevel_11(int32_t value)
	{
		___logLevel_11 = value;
	}

	inline static int32_t get_offset_of_vector2Variable_12() { return static_cast<int32_t>(offsetof(DebugVector2_t1259012464, ___vector2Variable_12)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_12() const { return ___vector2Variable_12; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_12() { return &___vector2Variable_12; }
	inline void set_vector2Variable_12(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_12 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
