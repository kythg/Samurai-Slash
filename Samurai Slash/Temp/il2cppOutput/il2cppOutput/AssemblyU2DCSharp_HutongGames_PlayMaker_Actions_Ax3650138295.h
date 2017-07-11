#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AxisEvent
struct  AxisEvent_t3650138295  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AxisEvent::horizontalAxis
	FsmString_t2414474701 * ___horizontalAxis_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.AxisEvent::verticalAxis
	FsmString_t2414474701 * ___verticalAxis_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::leftEvent
	FsmEvent_t1258573736 * ___leftEvent_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::rightEvent
	FsmEvent_t1258573736 * ___rightEvent_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::upEvent
	FsmEvent_t1258573736 * ___upEvent_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::downEvent
	FsmEvent_t1258573736 * ___downEvent_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::anyDirection
	FsmEvent_t1258573736 * ___anyDirection_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.AxisEvent::noDirection
	FsmEvent_t1258573736 * ___noDirection_18;

public:
	inline static int32_t get_offset_of_horizontalAxis_11() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___horizontalAxis_11)); }
	inline FsmString_t2414474701 * get_horizontalAxis_11() const { return ___horizontalAxis_11; }
	inline FsmString_t2414474701 ** get_address_of_horizontalAxis_11() { return &___horizontalAxis_11; }
	inline void set_horizontalAxis_11(FsmString_t2414474701 * value)
	{
		___horizontalAxis_11 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxis_11, value);
	}

	inline static int32_t get_offset_of_verticalAxis_12() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___verticalAxis_12)); }
	inline FsmString_t2414474701 * get_verticalAxis_12() const { return ___verticalAxis_12; }
	inline FsmString_t2414474701 ** get_address_of_verticalAxis_12() { return &___verticalAxis_12; }
	inline void set_verticalAxis_12(FsmString_t2414474701 * value)
	{
		___verticalAxis_12 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxis_12, value);
	}

	inline static int32_t get_offset_of_leftEvent_13() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___leftEvent_13)); }
	inline FsmEvent_t1258573736 * get_leftEvent_13() const { return ___leftEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_leftEvent_13() { return &___leftEvent_13; }
	inline void set_leftEvent_13(FsmEvent_t1258573736 * value)
	{
		___leftEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___leftEvent_13, value);
	}

	inline static int32_t get_offset_of_rightEvent_14() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___rightEvent_14)); }
	inline FsmEvent_t1258573736 * get_rightEvent_14() const { return ___rightEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_rightEvent_14() { return &___rightEvent_14; }
	inline void set_rightEvent_14(FsmEvent_t1258573736 * value)
	{
		___rightEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___rightEvent_14, value);
	}

	inline static int32_t get_offset_of_upEvent_15() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___upEvent_15)); }
	inline FsmEvent_t1258573736 * get_upEvent_15() const { return ___upEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_upEvent_15() { return &___upEvent_15; }
	inline void set_upEvent_15(FsmEvent_t1258573736 * value)
	{
		___upEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___upEvent_15, value);
	}

	inline static int32_t get_offset_of_downEvent_16() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___downEvent_16)); }
	inline FsmEvent_t1258573736 * get_downEvent_16() const { return ___downEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_downEvent_16() { return &___downEvent_16; }
	inline void set_downEvent_16(FsmEvent_t1258573736 * value)
	{
		___downEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___downEvent_16, value);
	}

	inline static int32_t get_offset_of_anyDirection_17() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___anyDirection_17)); }
	inline FsmEvent_t1258573736 * get_anyDirection_17() const { return ___anyDirection_17; }
	inline FsmEvent_t1258573736 ** get_address_of_anyDirection_17() { return &___anyDirection_17; }
	inline void set_anyDirection_17(FsmEvent_t1258573736 * value)
	{
		___anyDirection_17 = value;
		Il2CppCodeGenWriteBarrier(&___anyDirection_17, value);
	}

	inline static int32_t get_offset_of_noDirection_18() { return static_cast<int32_t>(offsetof(AxisEvent_t3650138295, ___noDirection_18)); }
	inline FsmEvent_t1258573736 * get_noDirection_18() const { return ___noDirection_18; }
	inline FsmEvent_t1258573736 ** get_address_of_noDirection_18() { return &___noDirection_18; }
	inline void set_noDirection_18(FsmEvent_t1258573736 * value)
	{
		___noDirection_18 = value;
		Il2CppCodeGenWriteBarrier(&___noDirection_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
