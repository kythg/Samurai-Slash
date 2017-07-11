#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ba2924498175.h"
#include "PlayMaker_HutongGames_PlayMaker_LogLevel3809977218.h"

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugEnum
struct  DebugEnum_t4057512696  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugEnum::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.DebugEnum::enumVariable
	FsmEnum_t2808516103 * ___enumVariable_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugEnum_t4057512696, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_enumVariable_13() { return static_cast<int32_t>(offsetof(DebugEnum_t4057512696, ___enumVariable_13)); }
	inline FsmEnum_t2808516103 * get_enumVariable_13() const { return ___enumVariable_13; }
	inline FsmEnum_t2808516103 ** get_address_of_enumVariable_13() { return &___enumVariable_13; }
	inline void set_enumVariable_13(FsmEnum_t2808516103 * value)
	{
		___enumVariable_13 = value;
		Il2CppCodeGenWriteBarrier(&___enumVariable_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
