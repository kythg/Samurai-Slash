#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetVectorLength
struct  GetVectorLength_t2380057171  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetVectorLength::vector3
	FsmVector3_t3996534004 * ___vector3_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetVectorLength::storeLength
	FsmFloat_t937133978 * ___storeLength_12;

public:
	inline static int32_t get_offset_of_vector3_11() { return static_cast<int32_t>(offsetof(GetVectorLength_t2380057171, ___vector3_11)); }
	inline FsmVector3_t3996534004 * get_vector3_11() const { return ___vector3_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3_11() { return &___vector3_11; }
	inline void set_vector3_11(FsmVector3_t3996534004 * value)
	{
		___vector3_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3_11, value);
	}

	inline static int32_t get_offset_of_storeLength_12() { return static_cast<int32_t>(offsetof(GetVectorLength_t2380057171, ___storeLength_12)); }
	inline FsmFloat_t937133978 * get_storeLength_12() const { return ___storeLength_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeLength_12() { return &___storeLength_12; }
	inline void set_storeLength_12(FsmFloat_t937133978 * value)
	{
		___storeLength_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeLength_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
