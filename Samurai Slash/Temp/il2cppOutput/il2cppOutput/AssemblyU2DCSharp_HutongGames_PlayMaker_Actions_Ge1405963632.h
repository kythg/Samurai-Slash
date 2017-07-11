#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetIPhoneSettings
struct  GetIPhoneSettings_t1405963632  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.GetIPhoneSettings::getScreenCanDarken
	FsmBool_t664485696 * ___getScreenCanDarken_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetIPhoneSettings::getUniqueIdentifier
	FsmString_t2414474701 * ___getUniqueIdentifier_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetIPhoneSettings::getName
	FsmString_t2414474701 * ___getName_13;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetIPhoneSettings::getModel
	FsmString_t2414474701 * ___getModel_14;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetIPhoneSettings::getSystemName
	FsmString_t2414474701 * ___getSystemName_15;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetIPhoneSettings::getGeneration
	FsmString_t2414474701 * ___getGeneration_16;

public:
	inline static int32_t get_offset_of_getScreenCanDarken_11() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getScreenCanDarken_11)); }
	inline FsmBool_t664485696 * get_getScreenCanDarken_11() const { return ___getScreenCanDarken_11; }
	inline FsmBool_t664485696 ** get_address_of_getScreenCanDarken_11() { return &___getScreenCanDarken_11; }
	inline void set_getScreenCanDarken_11(FsmBool_t664485696 * value)
	{
		___getScreenCanDarken_11 = value;
		Il2CppCodeGenWriteBarrier(&___getScreenCanDarken_11, value);
	}

	inline static int32_t get_offset_of_getUniqueIdentifier_12() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getUniqueIdentifier_12)); }
	inline FsmString_t2414474701 * get_getUniqueIdentifier_12() const { return ___getUniqueIdentifier_12; }
	inline FsmString_t2414474701 ** get_address_of_getUniqueIdentifier_12() { return &___getUniqueIdentifier_12; }
	inline void set_getUniqueIdentifier_12(FsmString_t2414474701 * value)
	{
		___getUniqueIdentifier_12 = value;
		Il2CppCodeGenWriteBarrier(&___getUniqueIdentifier_12, value);
	}

	inline static int32_t get_offset_of_getName_13() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getName_13)); }
	inline FsmString_t2414474701 * get_getName_13() const { return ___getName_13; }
	inline FsmString_t2414474701 ** get_address_of_getName_13() { return &___getName_13; }
	inline void set_getName_13(FsmString_t2414474701 * value)
	{
		___getName_13 = value;
		Il2CppCodeGenWriteBarrier(&___getName_13, value);
	}

	inline static int32_t get_offset_of_getModel_14() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getModel_14)); }
	inline FsmString_t2414474701 * get_getModel_14() const { return ___getModel_14; }
	inline FsmString_t2414474701 ** get_address_of_getModel_14() { return &___getModel_14; }
	inline void set_getModel_14(FsmString_t2414474701 * value)
	{
		___getModel_14 = value;
		Il2CppCodeGenWriteBarrier(&___getModel_14, value);
	}

	inline static int32_t get_offset_of_getSystemName_15() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getSystemName_15)); }
	inline FsmString_t2414474701 * get_getSystemName_15() const { return ___getSystemName_15; }
	inline FsmString_t2414474701 ** get_address_of_getSystemName_15() { return &___getSystemName_15; }
	inline void set_getSystemName_15(FsmString_t2414474701 * value)
	{
		___getSystemName_15 = value;
		Il2CppCodeGenWriteBarrier(&___getSystemName_15, value);
	}

	inline static int32_t get_offset_of_getGeneration_16() { return static_cast<int32_t>(offsetof(GetIPhoneSettings_t1405963632, ___getGeneration_16)); }
	inline FsmString_t2414474701 * get_getGeneration_16() const { return ___getGeneration_16; }
	inline FsmString_t2414474701 ** get_address_of_getGeneration_16() { return &___getGeneration_16; }
	inline void set_getGeneration_16(FsmString_t2414474701 * value)
	{
		___getGeneration_16 = value;
		Il2CppCodeGenWriteBarrier(&___getGeneration_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
