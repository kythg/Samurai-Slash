#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayMakerFSM[]
struct PlayMakerFSMU5BU5D_t623924777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMakerRPCProxy
struct  PlayMakerRPCProxy_t3984151499  : public MonoBehaviour_t1158329972
{
public:
	// PlayMakerFSM[] PlayMakerRPCProxy::fsms
	PlayMakerFSMU5BU5D_t623924777* ___fsms_2;

public:
	inline static int32_t get_offset_of_fsms_2() { return static_cast<int32_t>(offsetof(PlayMakerRPCProxy_t3984151499, ___fsms_2)); }
	inline PlayMakerFSMU5BU5D_t623924777* get_fsms_2() const { return ___fsms_2; }
	inline PlayMakerFSMU5BU5D_t623924777** get_address_of_fsms_2() { return &___fsms_2; }
	inline void set_fsms_2(PlayMakerFSMU5BU5D_t623924777* value)
	{
		___fsms_2 = value;
		Il2CppCodeGenWriteBarrier(&___fsms_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
