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

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugVector3
struct  DebugVector3_t3987895819  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugVector3::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DebugVector3::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugVector3_t3987895819, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_vector3Variable_13() { return static_cast<int32_t>(offsetof(DebugVector3_t3987895819, ___vector3Variable_13)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_13() const { return ___vector3Variable_13; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_13() { return &___vector3Variable_13; }
	inline void set_vector3Variable_13(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_13 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
