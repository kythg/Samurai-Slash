#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MissingAction
struct  MissingAction_t51374616  : public FsmStateAction_t2862378169
{
public:
	// System.String HutongGames.PlayMaker.Actions.MissingAction::actionName
	String_t* ___actionName_11;

public:
	inline static int32_t get_offset_of_actionName_11() { return static_cast<int32_t>(offsetof(MissingAction_t51374616, ___actionName_11)); }
	inline String_t* get_actionName_11() const { return ___actionName_11; }
	inline String_t** get_address_of_actionName_11() { return &___actionName_11; }
	inline void set_actionName_11(String_t* value)
	{
		___actionName_11 = value;
		Il2CppCodeGenWriteBarrier(&___actionName_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
