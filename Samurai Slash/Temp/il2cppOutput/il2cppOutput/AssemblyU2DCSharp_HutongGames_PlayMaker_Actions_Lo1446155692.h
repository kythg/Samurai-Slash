#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LoadLevelNum
struct  LoadLevelNum_t1446155692  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.LoadLevelNum::levelIndex
	FsmInt_t1273009179 * ___levelIndex_11;
	// System.Boolean HutongGames.PlayMaker.Actions.LoadLevelNum::additive
	bool ___additive_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadLevelNum::loadedEvent
	FsmEvent_t1258573736 * ___loadedEvent_13;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadLevelNum::dontDestroyOnLoad
	FsmBool_t664485696 * ___dontDestroyOnLoad_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadLevelNum::failedEvent
	FsmEvent_t1258573736 * ___failedEvent_15;

public:
	inline static int32_t get_offset_of_levelIndex_11() { return static_cast<int32_t>(offsetof(LoadLevelNum_t1446155692, ___levelIndex_11)); }
	inline FsmInt_t1273009179 * get_levelIndex_11() const { return ___levelIndex_11; }
	inline FsmInt_t1273009179 ** get_address_of_levelIndex_11() { return &___levelIndex_11; }
	inline void set_levelIndex_11(FsmInt_t1273009179 * value)
	{
		___levelIndex_11 = value;
		Il2CppCodeGenWriteBarrier(&___levelIndex_11, value);
	}

	inline static int32_t get_offset_of_additive_12() { return static_cast<int32_t>(offsetof(LoadLevelNum_t1446155692, ___additive_12)); }
	inline bool get_additive_12() const { return ___additive_12; }
	inline bool* get_address_of_additive_12() { return &___additive_12; }
	inline void set_additive_12(bool value)
	{
		___additive_12 = value;
	}

	inline static int32_t get_offset_of_loadedEvent_13() { return static_cast<int32_t>(offsetof(LoadLevelNum_t1446155692, ___loadedEvent_13)); }
	inline FsmEvent_t1258573736 * get_loadedEvent_13() const { return ___loadedEvent_13; }
	inline FsmEvent_t1258573736 ** get_address_of_loadedEvent_13() { return &___loadedEvent_13; }
	inline void set_loadedEvent_13(FsmEvent_t1258573736 * value)
	{
		___loadedEvent_13 = value;
		Il2CppCodeGenWriteBarrier(&___loadedEvent_13, value);
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_14() { return static_cast<int32_t>(offsetof(LoadLevelNum_t1446155692, ___dontDestroyOnLoad_14)); }
	inline FsmBool_t664485696 * get_dontDestroyOnLoad_14() const { return ___dontDestroyOnLoad_14; }
	inline FsmBool_t664485696 ** get_address_of_dontDestroyOnLoad_14() { return &___dontDestroyOnLoad_14; }
	inline void set_dontDestroyOnLoad_14(FsmBool_t664485696 * value)
	{
		___dontDestroyOnLoad_14 = value;
		Il2CppCodeGenWriteBarrier(&___dontDestroyOnLoad_14, value);
	}

	inline static int32_t get_offset_of_failedEvent_15() { return static_cast<int32_t>(offsetof(LoadLevelNum_t1446155692, ___failedEvent_15)); }
	inline FsmEvent_t1258573736 * get_failedEvent_15() const { return ___failedEvent_15; }
	inline FsmEvent_t1258573736 ** get_address_of_failedEvent_15() { return &___failedEvent_15; }
	inline void set_failedEvent_15(FsmEvent_t1258573736 * value)
	{
		___failedEvent_15 = value;
		Il2CppCodeGenWriteBarrier(&___failedEvent_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
