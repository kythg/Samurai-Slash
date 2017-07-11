#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetGameVolume
struct  SetGameVolume_t2795637550  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.SetGameVolume::volume
	FsmFloat_t937133978 * ___volume_11;
	// System.Boolean HutongGames.PlayMaker.Actions.SetGameVolume::everyFrame
	bool ___everyFrame_12;

public:
	inline static int32_t get_offset_of_volume_11() { return static_cast<int32_t>(offsetof(SetGameVolume_t2795637550, ___volume_11)); }
	inline FsmFloat_t937133978 * get_volume_11() const { return ___volume_11; }
	inline FsmFloat_t937133978 ** get_address_of_volume_11() { return &___volume_11; }
	inline void set_volume_11(FsmFloat_t937133978 * value)
	{
		___volume_11 = value;
		Il2CppCodeGenWriteBarrier(&___volume_11, value);
	}

	inline static int32_t get_offset_of_everyFrame_12() { return static_cast<int32_t>(offsetof(SetGameVolume_t2795637550, ___everyFrame_12)); }
	inline bool get_everyFrame_12() const { return ___everyFrame_12; }
	inline bool* get_address_of_everyFrame_12() { return &___everyFrame_12; }
	inline void set_everyFrame_12(bool value)
	{
		___everyFrame_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
