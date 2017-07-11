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

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugGameObject
struct  DebugGameObject_t628992080  : public BaseLogAction_t2924498175
{
public:
	// HutongGames.PlayMaker.LogLevel HutongGames.PlayMaker.Actions.DebugGameObject::logLevel
	int32_t ___logLevel_12;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.DebugGameObject::gameObject
	FsmGameObject_t3097142863 * ___gameObject_13;

public:
	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(DebugGameObject_t628992080, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(DebugGameObject_t628992080, ___gameObject_13)); }
	inline FsmGameObject_t3097142863 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmGameObject_t3097142863 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmGameObject_t3097142863 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
