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
// HutongGames.PlayMaker.FsmVar[]
struct FsmVarU5BU5D_t16885852;
// System.Object[]
struct ObjectU5BU5D_t3614634134;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.FormatString
struct  FormatString_t3978075300  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FormatString::format
	FsmString_t2414474701 * ___format_11;
	// HutongGames.PlayMaker.FsmVar[] HutongGames.PlayMaker.Actions.FormatString::variables
	FsmVarU5BU5D_t16885852* ___variables_12;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.FormatString::storeResult
	FsmString_t2414474701 * ___storeResult_13;
	// System.Boolean HutongGames.PlayMaker.Actions.FormatString::everyFrame
	bool ___everyFrame_14;
	// System.Object[] HutongGames.PlayMaker.Actions.FormatString::objectArray
	ObjectU5BU5D_t3614634134* ___objectArray_15;

public:
	inline static int32_t get_offset_of_format_11() { return static_cast<int32_t>(offsetof(FormatString_t3978075300, ___format_11)); }
	inline FsmString_t2414474701 * get_format_11() const { return ___format_11; }
	inline FsmString_t2414474701 ** get_address_of_format_11() { return &___format_11; }
	inline void set_format_11(FsmString_t2414474701 * value)
	{
		___format_11 = value;
		Il2CppCodeGenWriteBarrier(&___format_11, value);
	}

	inline static int32_t get_offset_of_variables_12() { return static_cast<int32_t>(offsetof(FormatString_t3978075300, ___variables_12)); }
	inline FsmVarU5BU5D_t16885852* get_variables_12() const { return ___variables_12; }
	inline FsmVarU5BU5D_t16885852** get_address_of_variables_12() { return &___variables_12; }
	inline void set_variables_12(FsmVarU5BU5D_t16885852* value)
	{
		___variables_12 = value;
		Il2CppCodeGenWriteBarrier(&___variables_12, value);
	}

	inline static int32_t get_offset_of_storeResult_13() { return static_cast<int32_t>(offsetof(FormatString_t3978075300, ___storeResult_13)); }
	inline FsmString_t2414474701 * get_storeResult_13() const { return ___storeResult_13; }
	inline FsmString_t2414474701 ** get_address_of_storeResult_13() { return &___storeResult_13; }
	inline void set_storeResult_13(FsmString_t2414474701 * value)
	{
		___storeResult_13 = value;
		Il2CppCodeGenWriteBarrier(&___storeResult_13, value);
	}

	inline static int32_t get_offset_of_everyFrame_14() { return static_cast<int32_t>(offsetof(FormatString_t3978075300, ___everyFrame_14)); }
	inline bool get_everyFrame_14() const { return ___everyFrame_14; }
	inline bool* get_address_of_everyFrame_14() { return &___everyFrame_14; }
	inline void set_everyFrame_14(bool value)
	{
		___everyFrame_14 = value;
	}

	inline static int32_t get_offset_of_objectArray_15() { return static_cast<int32_t>(offsetof(FormatString_t3978075300, ___objectArray_15)); }
	inline ObjectU5BU5D_t3614634134* get_objectArray_15() const { return ___objectArray_15; }
	inline ObjectU5BU5D_t3614634134** get_address_of_objectArray_15() { return &___objectArray_15; }
	inline void set_objectArray_15(ObjectU5BU5D_t3614634134* value)
	{
		___objectArray_15 = value;
		Il2CppCodeGenWriteBarrier(&___objectArray_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
