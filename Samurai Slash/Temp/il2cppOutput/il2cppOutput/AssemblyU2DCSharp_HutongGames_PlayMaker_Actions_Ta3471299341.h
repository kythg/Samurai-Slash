#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ta1076718947.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.TakeScreenshot
struct  TakeScreenshot_t3471299341  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.TakeScreenshot/Destination HutongGames.PlayMaker.Actions.TakeScreenshot::destination
	int32_t ___destination_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.TakeScreenshot::customPath
	FsmString_t2414474701 * ___customPath_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.TakeScreenshot::filename
	FsmString_t2414474701 * ___filename_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.TakeScreenshot::autoNumber
	FsmBool_t664485696 * ___autoNumber_14;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.TakeScreenshot::superSize
	FsmInt_t1273009179 * ___superSize_15;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.TakeScreenshot::debugLog
	FsmBool_t664485696 * ___debugLog_16;
	// System.Int32 HutongGames.PlayMaker.Actions.TakeScreenshot::screenshotCount
	int32_t ___screenshotCount_17;

public:
	inline static int32_t get_offset_of_destination_11() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___destination_11)); }
	inline int32_t get_destination_11() const { return ___destination_11; }
	inline int32_t* get_address_of_destination_11() { return &___destination_11; }
	inline void set_destination_11(int32_t value)
	{
		___destination_11 = value;
	}

	inline static int32_t get_offset_of_customPath_12() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___customPath_12)); }
	inline FsmString_t2414474701 * get_customPath_12() const { return ___customPath_12; }
	inline FsmString_t2414474701 ** get_address_of_customPath_12() { return &___customPath_12; }
	inline void set_customPath_12(FsmString_t2414474701 * value)
	{
		___customPath_12 = value;
		Il2CppCodeGenWriteBarrier(&___customPath_12, value);
	}

	inline static int32_t get_offset_of_filename_13() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___filename_13)); }
	inline FsmString_t2414474701 * get_filename_13() const { return ___filename_13; }
	inline FsmString_t2414474701 ** get_address_of_filename_13() { return &___filename_13; }
	inline void set_filename_13(FsmString_t2414474701 * value)
	{
		___filename_13 = value;
		Il2CppCodeGenWriteBarrier(&___filename_13, value);
	}

	inline static int32_t get_offset_of_autoNumber_14() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___autoNumber_14)); }
	inline FsmBool_t664485696 * get_autoNumber_14() const { return ___autoNumber_14; }
	inline FsmBool_t664485696 ** get_address_of_autoNumber_14() { return &___autoNumber_14; }
	inline void set_autoNumber_14(FsmBool_t664485696 * value)
	{
		___autoNumber_14 = value;
		Il2CppCodeGenWriteBarrier(&___autoNumber_14, value);
	}

	inline static int32_t get_offset_of_superSize_15() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___superSize_15)); }
	inline FsmInt_t1273009179 * get_superSize_15() const { return ___superSize_15; }
	inline FsmInt_t1273009179 ** get_address_of_superSize_15() { return &___superSize_15; }
	inline void set_superSize_15(FsmInt_t1273009179 * value)
	{
		___superSize_15 = value;
		Il2CppCodeGenWriteBarrier(&___superSize_15, value);
	}

	inline static int32_t get_offset_of_debugLog_16() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___debugLog_16)); }
	inline FsmBool_t664485696 * get_debugLog_16() const { return ___debugLog_16; }
	inline FsmBool_t664485696 ** get_address_of_debugLog_16() { return &___debugLog_16; }
	inline void set_debugLog_16(FsmBool_t664485696 * value)
	{
		___debugLog_16 = value;
		Il2CppCodeGenWriteBarrier(&___debugLog_16, value);
	}

	inline static int32_t get_offset_of_screenshotCount_17() { return static_cast<int32_t>(offsetof(TakeScreenshot_t3471299341, ___screenshotCount_17)); }
	inline int32_t get_screenshotCount_17() const { return ___screenshotCount_17; }
	inline int32_t* get_address_of_screenshotCount_17() { return &___screenshotCount_17; }
	inline void set_screenshotCount_17(int32_t value)
	{
		___screenshotCount_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
