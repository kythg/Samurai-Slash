#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.LayoutOption[]
struct LayoutOptionU5BU5D_t896618960;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GUILayoutAction
struct  GUILayoutAction_t899174319  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.LayoutOption[] HutongGames.PlayMaker.Actions.GUILayoutAction::layoutOptions
	LayoutOptionU5BU5D_t896618960* ___layoutOptions_11;
	// UnityEngine.GUILayoutOption[] HutongGames.PlayMaker.Actions.GUILayoutAction::options
	GUILayoutOptionU5BU5D_t2108882777* ___options_12;

public:
	inline static int32_t get_offset_of_layoutOptions_11() { return static_cast<int32_t>(offsetof(GUILayoutAction_t899174319, ___layoutOptions_11)); }
	inline LayoutOptionU5BU5D_t896618960* get_layoutOptions_11() const { return ___layoutOptions_11; }
	inline LayoutOptionU5BU5D_t896618960** get_address_of_layoutOptions_11() { return &___layoutOptions_11; }
	inline void set_layoutOptions_11(LayoutOptionU5BU5D_t896618960* value)
	{
		___layoutOptions_11 = value;
		Il2CppCodeGenWriteBarrier(&___layoutOptions_11, value);
	}

	inline static int32_t get_offset_of_options_12() { return static_cast<int32_t>(offsetof(GUILayoutAction_t899174319, ___options_12)); }
	inline GUILayoutOptionU5BU5D_t2108882777* get_options_12() const { return ___options_12; }
	inline GUILayoutOptionU5BU5D_t2108882777** get_address_of_options_12() { return &___options_12; }
	inline void set_options_12(GUILayoutOptionU5BU5D_t2108882777* value)
	{
		___options_12 = value;
		Il2CppCodeGenWriteBarrier(&___options_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
