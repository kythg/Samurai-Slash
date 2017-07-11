#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t3372293163;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetMouseCursor
struct  SetMouseCursor_t4051796723  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.Actions.SetMouseCursor::cursorTexture
	FsmTexture_t3372293163 * ___cursorTexture_11;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetMouseCursor::hideCursor
	FsmBool_t664485696 * ___hideCursor_12;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetMouseCursor::lockCursor
	FsmBool_t664485696 * ___lockCursor_13;

public:
	inline static int32_t get_offset_of_cursorTexture_11() { return static_cast<int32_t>(offsetof(SetMouseCursor_t4051796723, ___cursorTexture_11)); }
	inline FsmTexture_t3372293163 * get_cursorTexture_11() const { return ___cursorTexture_11; }
	inline FsmTexture_t3372293163 ** get_address_of_cursorTexture_11() { return &___cursorTexture_11; }
	inline void set_cursorTexture_11(FsmTexture_t3372293163 * value)
	{
		___cursorTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTexture_11, value);
	}

	inline static int32_t get_offset_of_hideCursor_12() { return static_cast<int32_t>(offsetof(SetMouseCursor_t4051796723, ___hideCursor_12)); }
	inline FsmBool_t664485696 * get_hideCursor_12() const { return ___hideCursor_12; }
	inline FsmBool_t664485696 ** get_address_of_hideCursor_12() { return &___hideCursor_12; }
	inline void set_hideCursor_12(FsmBool_t664485696 * value)
	{
		___hideCursor_12 = value;
		Il2CppCodeGenWriteBarrier(&___hideCursor_12, value);
	}

	inline static int32_t get_offset_of_lockCursor_13() { return static_cast<int32_t>(offsetof(SetMouseCursor_t4051796723, ___lockCursor_13)); }
	inline FsmBool_t664485696 * get_lockCursor_13() const { return ___lockCursor_13; }
	inline FsmBool_t664485696 ** get_address_of_lockCursor_13() { return &___lockCursor_13; }
	inline void set_lockCursor_13(FsmBool_t664485696 * value)
	{
		___lockCursor_13 = value;
		Il2CppCodeGenWriteBarrier(&___lockCursor_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
