#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ba3235583395.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmVar
struct FsmVar_t2872592513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetFsmArrayItem
struct  GetFsmArrayItem_t476224692  : public BaseFsmVariableIndexAction_t3235583395
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetFsmArrayItem::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_17;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmArrayItem::fsmName
	FsmString_t2414474701 * ___fsmName_18;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetFsmArrayItem::variableName
	FsmString_t2414474701 * ___variableName_19;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetFsmArrayItem::index
	FsmInt_t1273009179 * ___index_20;
	// HutongGames.PlayMaker.FsmVar HutongGames.PlayMaker.Actions.GetFsmArrayItem::storeValue
	FsmVar_t2872592513 * ___storeValue_21;
	// System.Boolean HutongGames.PlayMaker.Actions.GetFsmArrayItem::everyFrame
	bool ___everyFrame_22;

public:
	inline static int32_t get_offset_of_gameObject_17() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___gameObject_17)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_17() const { return ___gameObject_17; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_17() { return &___gameObject_17; }
	inline void set_gameObject_17(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_17 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_17, value);
	}

	inline static int32_t get_offset_of_fsmName_18() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___fsmName_18)); }
	inline FsmString_t2414474701 * get_fsmName_18() const { return ___fsmName_18; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_18() { return &___fsmName_18; }
	inline void set_fsmName_18(FsmString_t2414474701 * value)
	{
		___fsmName_18 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_18, value);
	}

	inline static int32_t get_offset_of_variableName_19() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___variableName_19)); }
	inline FsmString_t2414474701 * get_variableName_19() const { return ___variableName_19; }
	inline FsmString_t2414474701 ** get_address_of_variableName_19() { return &___variableName_19; }
	inline void set_variableName_19(FsmString_t2414474701 * value)
	{
		___variableName_19 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_19, value);
	}

	inline static int32_t get_offset_of_index_20() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___index_20)); }
	inline FsmInt_t1273009179 * get_index_20() const { return ___index_20; }
	inline FsmInt_t1273009179 ** get_address_of_index_20() { return &___index_20; }
	inline void set_index_20(FsmInt_t1273009179 * value)
	{
		___index_20 = value;
		Il2CppCodeGenWriteBarrier(&___index_20, value);
	}

	inline static int32_t get_offset_of_storeValue_21() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___storeValue_21)); }
	inline FsmVar_t2872592513 * get_storeValue_21() const { return ___storeValue_21; }
	inline FsmVar_t2872592513 ** get_address_of_storeValue_21() { return &___storeValue_21; }
	inline void set_storeValue_21(FsmVar_t2872592513 * value)
	{
		___storeValue_21 = value;
		Il2CppCodeGenWriteBarrier(&___storeValue_21, value);
	}

	inline static int32_t get_offset_of_everyFrame_22() { return static_cast<int32_t>(offsetof(GetFsmArrayItem_t476224692, ___everyFrame_22)); }
	inline bool get_everyFrame_22() const { return ___everyFrame_22; }
	inline bool* get_address_of_everyFrame_22() { return &___everyFrame_22; }
	inline void set_everyFrame_22(bool value)
	{
		___everyFrame_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
