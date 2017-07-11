#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com791040716.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetBackgroundColor
struct  SetBackgroundColor_t423384025  : public ComponentAction_1_t791040716
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetBackgroundColor::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.SetBackgroundColor::backgroundColor
	FsmColor_t118301965 * ___backgroundColor_14;
	// System.Boolean HutongGames.PlayMaker.Actions.SetBackgroundColor::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetBackgroundColor_t423384025, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_backgroundColor_14() { return static_cast<int32_t>(offsetof(SetBackgroundColor_t423384025, ___backgroundColor_14)); }
	inline FsmColor_t118301965 * get_backgroundColor_14() const { return ___backgroundColor_14; }
	inline FsmColor_t118301965 ** get_address_of_backgroundColor_14() { return &___backgroundColor_14; }
	inline void set_backgroundColor_14(FsmColor_t118301965 * value)
	{
		___backgroundColor_14 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundColor_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(SetBackgroundColor_t423384025, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
