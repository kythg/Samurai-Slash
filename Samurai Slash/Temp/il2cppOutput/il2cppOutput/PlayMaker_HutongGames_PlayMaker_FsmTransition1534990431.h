#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_FsmTransition_Cust3741871820.h"
#include "PlayMaker_HutongGames_PlayMaker_FsmTransition_Cust2686433720.h"

// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmTransition
struct  FsmTransition_t1534990431  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmTransition::fsmEvent
	FsmEvent_t1258573736 * ___fsmEvent_0;
	// System.String HutongGames.PlayMaker.FsmTransition::toState
	String_t* ___toState_1;
	// HutongGames.PlayMaker.FsmTransition/CustomLinkStyle HutongGames.PlayMaker.FsmTransition::linkStyle
	uint8_t ___linkStyle_2;
	// HutongGames.PlayMaker.FsmTransition/CustomLinkConstraint HutongGames.PlayMaker.FsmTransition::linkConstraint
	uint8_t ___linkConstraint_3;
	// System.Byte HutongGames.PlayMaker.FsmTransition::colorIndex
	uint8_t ___colorIndex_4;

public:
	inline static int32_t get_offset_of_fsmEvent_0() { return static_cast<int32_t>(offsetof(FsmTransition_t1534990431, ___fsmEvent_0)); }
	inline FsmEvent_t1258573736 * get_fsmEvent_0() const { return ___fsmEvent_0; }
	inline FsmEvent_t1258573736 ** get_address_of_fsmEvent_0() { return &___fsmEvent_0; }
	inline void set_fsmEvent_0(FsmEvent_t1258573736 * value)
	{
		___fsmEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsmEvent_0, value);
	}

	inline static int32_t get_offset_of_toState_1() { return static_cast<int32_t>(offsetof(FsmTransition_t1534990431, ___toState_1)); }
	inline String_t* get_toState_1() const { return ___toState_1; }
	inline String_t** get_address_of_toState_1() { return &___toState_1; }
	inline void set_toState_1(String_t* value)
	{
		___toState_1 = value;
		Il2CppCodeGenWriteBarrier(&___toState_1, value);
	}

	inline static int32_t get_offset_of_linkStyle_2() { return static_cast<int32_t>(offsetof(FsmTransition_t1534990431, ___linkStyle_2)); }
	inline uint8_t get_linkStyle_2() const { return ___linkStyle_2; }
	inline uint8_t* get_address_of_linkStyle_2() { return &___linkStyle_2; }
	inline void set_linkStyle_2(uint8_t value)
	{
		___linkStyle_2 = value;
	}

	inline static int32_t get_offset_of_linkConstraint_3() { return static_cast<int32_t>(offsetof(FsmTransition_t1534990431, ___linkConstraint_3)); }
	inline uint8_t get_linkConstraint_3() const { return ___linkConstraint_3; }
	inline uint8_t* get_address_of_linkConstraint_3() { return &___linkConstraint_3; }
	inline void set_linkConstraint_3(uint8_t value)
	{
		___linkConstraint_3 = value;
	}

	inline static int32_t get_offset_of_colorIndex_4() { return static_cast<int32_t>(offsetof(FsmTransition_t1534990431, ___colorIndex_4)); }
	inline uint8_t get_colorIndex_4() const { return ___colorIndex_4; }
	inline uint8_t* get_address_of_colorIndex_4() { return &___colorIndex_4; }
	inline void set_colorIndex_4(uint8_t value)
	{
		___colorIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
