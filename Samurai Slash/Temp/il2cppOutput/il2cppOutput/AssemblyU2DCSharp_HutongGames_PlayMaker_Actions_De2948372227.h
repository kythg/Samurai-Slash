#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_FullScreenMovieControlMode1948535497.h"
#include "UnityEngine_UnityEngine_FullScreenMovieScalingMode2619190977.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DevicePlayFullScreenMovie
struct  DevicePlayFullScreenMovie_t2948372227  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.DevicePlayFullScreenMovie::moviePath
	FsmString_t2414474701 * ___moviePath_11;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.DevicePlayFullScreenMovie::fadeColor
	FsmColor_t118301965 * ___fadeColor_12;
	// UnityEngine.FullScreenMovieControlMode HutongGames.PlayMaker.Actions.DevicePlayFullScreenMovie::movieControlMode
	int32_t ___movieControlMode_13;
	// UnityEngine.FullScreenMovieScalingMode HutongGames.PlayMaker.Actions.DevicePlayFullScreenMovie::movieScalingMode
	int32_t ___movieScalingMode_14;

public:
	inline static int32_t get_offset_of_moviePath_11() { return static_cast<int32_t>(offsetof(DevicePlayFullScreenMovie_t2948372227, ___moviePath_11)); }
	inline FsmString_t2414474701 * get_moviePath_11() const { return ___moviePath_11; }
	inline FsmString_t2414474701 ** get_address_of_moviePath_11() { return &___moviePath_11; }
	inline void set_moviePath_11(FsmString_t2414474701 * value)
	{
		___moviePath_11 = value;
		Il2CppCodeGenWriteBarrier(&___moviePath_11, value);
	}

	inline static int32_t get_offset_of_fadeColor_12() { return static_cast<int32_t>(offsetof(DevicePlayFullScreenMovie_t2948372227, ___fadeColor_12)); }
	inline FsmColor_t118301965 * get_fadeColor_12() const { return ___fadeColor_12; }
	inline FsmColor_t118301965 ** get_address_of_fadeColor_12() { return &___fadeColor_12; }
	inline void set_fadeColor_12(FsmColor_t118301965 * value)
	{
		___fadeColor_12 = value;
		Il2CppCodeGenWriteBarrier(&___fadeColor_12, value);
	}

	inline static int32_t get_offset_of_movieControlMode_13() { return static_cast<int32_t>(offsetof(DevicePlayFullScreenMovie_t2948372227, ___movieControlMode_13)); }
	inline int32_t get_movieControlMode_13() const { return ___movieControlMode_13; }
	inline int32_t* get_address_of_movieControlMode_13() { return &___movieControlMode_13; }
	inline void set_movieControlMode_13(int32_t value)
	{
		___movieControlMode_13 = value;
	}

	inline static int32_t get_offset_of_movieScalingMode_14() { return static_cast<int32_t>(offsetof(DevicePlayFullScreenMovie_t2948372227, ___movieScalingMode_14)); }
	inline int32_t get_movieScalingMode_14() const { return ___movieScalingMode_14; }
	inline int32_t* get_address_of_movieScalingMode_14() { return &___movieScalingMode_14; }
	inline void set_movieScalingMode_14(int32_t value)
	{
		___movieScalingMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
