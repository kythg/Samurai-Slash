#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com858890304.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetVisibility
struct  SetVisibility_t862291906  : public ComponentAction_1_t858890304
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetVisibility::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetVisibility::toggle
	FsmBool_t664485696 * ___toggle_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetVisibility::visible
	FsmBool_t664485696 * ___visible_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetVisibility::resetOnExit
	bool ___resetOnExit_16;
	// System.Boolean HutongGames.PlayMaker.Actions.SetVisibility::initialVisibility
	bool ___initialVisibility_17;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetVisibility_t862291906, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_toggle_14() { return static_cast<int32_t>(offsetof(SetVisibility_t862291906, ___toggle_14)); }
	inline FsmBool_t664485696 * get_toggle_14() const { return ___toggle_14; }
	inline FsmBool_t664485696 ** get_address_of_toggle_14() { return &___toggle_14; }
	inline void set_toggle_14(FsmBool_t664485696 * value)
	{
		___toggle_14 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_14, value);
	}

	inline static int32_t get_offset_of_visible_15() { return static_cast<int32_t>(offsetof(SetVisibility_t862291906, ___visible_15)); }
	inline FsmBool_t664485696 * get_visible_15() const { return ___visible_15; }
	inline FsmBool_t664485696 ** get_address_of_visible_15() { return &___visible_15; }
	inline void set_visible_15(FsmBool_t664485696 * value)
	{
		___visible_15 = value;
		Il2CppCodeGenWriteBarrier(&___visible_15, value);
	}

	inline static int32_t get_offset_of_resetOnExit_16() { return static_cast<int32_t>(offsetof(SetVisibility_t862291906, ___resetOnExit_16)); }
	inline bool get_resetOnExit_16() const { return ___resetOnExit_16; }
	inline bool* get_address_of_resetOnExit_16() { return &___resetOnExit_16; }
	inline void set_resetOnExit_16(bool value)
	{
		___resetOnExit_16 = value;
	}

	inline static int32_t get_offset_of_initialVisibility_17() { return static_cast<int32_t>(offsetof(SetVisibility_t862291906, ___initialVisibility_17)); }
	inline bool get_initialVisibility_17() const { return ___initialVisibility_17; }
	inline bool* get_address_of_initialVisibility_17() { return &___initialVisibility_17; }
	inline void set_initialVisibility_17(bool value)
	{
		___initialVisibility_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
