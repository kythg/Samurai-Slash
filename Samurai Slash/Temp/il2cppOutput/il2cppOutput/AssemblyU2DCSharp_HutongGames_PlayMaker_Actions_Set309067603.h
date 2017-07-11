#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ba1849884759.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetFsmArray
struct  SetFsmArray_t309067603  : public BaseFsmVariableAction_t1849884759
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetFsmArray::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_16;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmArray::fsmName
	FsmString_t2414474701 * ___fsmName_17;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.SetFsmArray::variableName
	FsmString_t2414474701 * ___variableName_18;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.SetFsmArray::setValue
	FsmArray_t527459893 * ___setValue_19;
	// System.Boolean HutongGames.PlayMaker.Actions.SetFsmArray::copyValues
	bool ___copyValues_20;

public:
	inline static int32_t get_offset_of_gameObject_16() { return static_cast<int32_t>(offsetof(SetFsmArray_t309067603, ___gameObject_16)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_16() const { return ___gameObject_16; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_16() { return &___gameObject_16; }
	inline void set_gameObject_16(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_16 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_16, value);
	}

	inline static int32_t get_offset_of_fsmName_17() { return static_cast<int32_t>(offsetof(SetFsmArray_t309067603, ___fsmName_17)); }
	inline FsmString_t2414474701 * get_fsmName_17() const { return ___fsmName_17; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_17() { return &___fsmName_17; }
	inline void set_fsmName_17(FsmString_t2414474701 * value)
	{
		___fsmName_17 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_17, value);
	}

	inline static int32_t get_offset_of_variableName_18() { return static_cast<int32_t>(offsetof(SetFsmArray_t309067603, ___variableName_18)); }
	inline FsmString_t2414474701 * get_variableName_18() const { return ___variableName_18; }
	inline FsmString_t2414474701 ** get_address_of_variableName_18() { return &___variableName_18; }
	inline void set_variableName_18(FsmString_t2414474701 * value)
	{
		___variableName_18 = value;
		Il2CppCodeGenWriteBarrier(&___variableName_18, value);
	}

	inline static int32_t get_offset_of_setValue_19() { return static_cast<int32_t>(offsetof(SetFsmArray_t309067603, ___setValue_19)); }
	inline FsmArray_t527459893 * get_setValue_19() const { return ___setValue_19; }
	inline FsmArray_t527459893 ** get_address_of_setValue_19() { return &___setValue_19; }
	inline void set_setValue_19(FsmArray_t527459893 * value)
	{
		___setValue_19 = value;
		Il2CppCodeGenWriteBarrier(&___setValue_19, value);
	}

	inline static int32_t get_offset_of_copyValues_20() { return static_cast<int32_t>(offsetof(SetFsmArray_t309067603, ___copyValues_20)); }
	inline bool get_copyValues_20() const { return ___copyValues_20; }
	inline bool* get_address_of_copyValues_20() { return &___copyValues_20; }
	inline void set_copyValues_20(bool value)
	{
		___copyValues_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
