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
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.LoadLevel
struct  LoadLevel_t4252058218  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.LoadLevel::levelName
	FsmString_t2414474701 * ___levelName_11;
	// System.Boolean HutongGames.PlayMaker.Actions.LoadLevel::additive
	bool ___additive_12;
	// System.Boolean HutongGames.PlayMaker.Actions.LoadLevel::async
	bool ___async_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadLevel::loadedEvent
	FsmEvent_t1258573736 * ___loadedEvent_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.LoadLevel::dontDestroyOnLoad
	FsmBool_t664485696 * ___dontDestroyOnLoad_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.LoadLevel::failedEvent
	FsmEvent_t1258573736 * ___failedEvent_16;
	// UnityEngine.AsyncOperation HutongGames.PlayMaker.Actions.LoadLevel::asyncOperation
	AsyncOperation_t3814632279 * ___asyncOperation_17;

public:
	inline static int32_t get_offset_of_levelName_11() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___levelName_11)); }
	inline FsmString_t2414474701 * get_levelName_11() const { return ___levelName_11; }
	inline FsmString_t2414474701 ** get_address_of_levelName_11() { return &___levelName_11; }
	inline void set_levelName_11(FsmString_t2414474701 * value)
	{
		___levelName_11 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_11, value);
	}

	inline static int32_t get_offset_of_additive_12() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___additive_12)); }
	inline bool get_additive_12() const { return ___additive_12; }
	inline bool* get_address_of_additive_12() { return &___additive_12; }
	inline void set_additive_12(bool value)
	{
		___additive_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_loadedEvent_14() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___loadedEvent_14)); }
	inline FsmEvent_t1258573736 * get_loadedEvent_14() const { return ___loadedEvent_14; }
	inline FsmEvent_t1258573736 ** get_address_of_loadedEvent_14() { return &___loadedEvent_14; }
	inline void set_loadedEvent_14(FsmEvent_t1258573736 * value)
	{
		___loadedEvent_14 = value;
		Il2CppCodeGenWriteBarrier(&___loadedEvent_14, value);
	}

	inline static int32_t get_offset_of_dontDestroyOnLoad_15() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___dontDestroyOnLoad_15)); }
	inline FsmBool_t664485696 * get_dontDestroyOnLoad_15() const { return ___dontDestroyOnLoad_15; }
	inline FsmBool_t664485696 ** get_address_of_dontDestroyOnLoad_15() { return &___dontDestroyOnLoad_15; }
	inline void set_dontDestroyOnLoad_15(FsmBool_t664485696 * value)
	{
		___dontDestroyOnLoad_15 = value;
		Il2CppCodeGenWriteBarrier(&___dontDestroyOnLoad_15, value);
	}

	inline static int32_t get_offset_of_failedEvent_16() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___failedEvent_16)); }
	inline FsmEvent_t1258573736 * get_failedEvent_16() const { return ___failedEvent_16; }
	inline FsmEvent_t1258573736 ** get_address_of_failedEvent_16() { return &___failedEvent_16; }
	inline void set_failedEvent_16(FsmEvent_t1258573736 * value)
	{
		___failedEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___failedEvent_16, value);
	}

	inline static int32_t get_offset_of_asyncOperation_17() { return static_cast<int32_t>(offsetof(LoadLevel_t4252058218, ___asyncOperation_17)); }
	inline AsyncOperation_t3814632279 * get_asyncOperation_17() const { return ___asyncOperation_17; }
	inline AsyncOperation_t3814632279 ** get_address_of_asyncOperation_17() { return &___asyncOperation_17; }
	inline void set_asyncOperation_17(AsyncOperation_t3814632279 * value)
	{
		___asyncOperation_17 = value;
		Il2CppCodeGenWriteBarrier(&___asyncOperation_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
