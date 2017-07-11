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

// HutongGames.PlayMaker.Actions.Comment
struct  Comment_t334371209  : public FsmStateAction_t2862378169
{
public:
	// System.String HutongGames.PlayMaker.Actions.Comment::comment
	String_t* ___comment_11;

public:
	inline static int32_t get_offset_of_comment_11() { return static_cast<int32_t>(offsetof(Comment_t334371209, ___comment_11)); }
	inline String_t* get_comment_11() const { return ___comment_11; }
	inline String_t** get_address_of_comment_11() { return &___comment_11; }
	inline void set_comment_11(String_t* value)
	{
		___comment_11 = value;
		Il2CppCodeGenWriteBarrier(&___comment_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
