#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector3LowPassFilter
struct  Vector3LowPassFilter_t1267086375  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.Vector3LowPassFilter::vector3Variable
	FsmVector3_t3996534004 * ___vector3Variable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector3LowPassFilter::filteringFactor
	FsmFloat_t937133978 * ___filteringFactor_12;
	// UnityEngine.Vector3 HutongGames.PlayMaker.Actions.Vector3LowPassFilter::filteredVector
	Vector3_t2243707580  ___filteredVector_13;

public:
	inline static int32_t get_offset_of_vector3Variable_11() { return static_cast<int32_t>(offsetof(Vector3LowPassFilter_t1267086375, ___vector3Variable_11)); }
	inline FsmVector3_t3996534004 * get_vector3Variable_11() const { return ___vector3Variable_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vector3Variable_11() { return &___vector3Variable_11; }
	inline void set_vector3Variable_11(FsmVector3_t3996534004 * value)
	{
		___vector3Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Variable_11, value);
	}

	inline static int32_t get_offset_of_filteringFactor_12() { return static_cast<int32_t>(offsetof(Vector3LowPassFilter_t1267086375, ___filteringFactor_12)); }
	inline FsmFloat_t937133978 * get_filteringFactor_12() const { return ___filteringFactor_12; }
	inline FsmFloat_t937133978 ** get_address_of_filteringFactor_12() { return &___filteringFactor_12; }
	inline void set_filteringFactor_12(FsmFloat_t937133978 * value)
	{
		___filteringFactor_12 = value;
		Il2CppCodeGenWriteBarrier(&___filteringFactor_12, value);
	}

	inline static int32_t get_offset_of_filteredVector_13() { return static_cast<int32_t>(offsetof(Vector3LowPassFilter_t1267086375, ___filteredVector_13)); }
	inline Vector3_t2243707580  get_filteredVector_13() const { return ___filteredVector_13; }
	inline Vector3_t2243707580 * get_address_of_filteredVector_13() { return &___filteredVector_13; }
	inline void set_filteredVector_13(Vector3_t2243707580  value)
	{
		___filteredVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
