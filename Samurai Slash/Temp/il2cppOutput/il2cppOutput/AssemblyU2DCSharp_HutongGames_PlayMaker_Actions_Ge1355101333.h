#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge4222918818.h"

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetTimeInfo
struct  GetTimeInfo_t1355101333  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.Actions.GetTimeInfo/TimeInfo HutongGames.PlayMaker.Actions.GetTimeInfo::getInfo
	int32_t ___getInfo_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetTimeInfo::storeValue
	FsmFloat_t937133978 * ___storeValue_12;
	// System.Boolean HutongGames.PlayMaker.Actions.GetTimeInfo::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_getInfo_11() { return static_cast<int32_t>(offsetof(GetTimeInfo_t1355101333, ___getInfo_11)); }
	inline int32_t get_getInfo_11() const { return ___getInfo_11; }
	inline int32_t* get_address_of_getInfo_11() { return &___getInfo_11; }
	inline void set_getInfo_11(int32_t value)
	{
		___getInfo_11 = value;
	}

	inline static int32_t get_offset_of_storeValue_12() { return static_cast<int32_t>(offsetof(GetTimeInfo_t1355101333, ___storeValue_12)); }
	inline FsmFloat_t937133978 * get_storeValue_12() const { return ___storeValue_12; }
	inline FsmFloat_t937133978 ** get_address_of_storeValue_12() { return &___storeValue_12; }
	inline void set_storeValue_12(FsmFloat_t937133978 * value)
	{
		___storeValue_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeValue_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(GetTimeInfo_t1355101333, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
