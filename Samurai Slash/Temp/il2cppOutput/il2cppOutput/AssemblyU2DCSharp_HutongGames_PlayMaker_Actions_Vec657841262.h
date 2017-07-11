#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.Vector2HighPassFilter
struct  Vector2HighPassFilter_t657841262  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.Vector2HighPassFilter::vector2Variable
	FsmVector2_t2430450063 * ___vector2Variable_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.Vector2HighPassFilter::filteringFactor
	FsmFloat_t937133978 * ___filteringFactor_12;
	// UnityEngine.Vector2 HutongGames.PlayMaker.Actions.Vector2HighPassFilter::filteredVector
	Vector2_t2243707579  ___filteredVector_13;

public:
	inline static int32_t get_offset_of_vector2Variable_11() { return static_cast<int32_t>(offsetof(Vector2HighPassFilter_t657841262, ___vector2Variable_11)); }
	inline FsmVector2_t2430450063 * get_vector2Variable_11() const { return ___vector2Variable_11; }
	inline FsmVector2_t2430450063 ** get_address_of_vector2Variable_11() { return &___vector2Variable_11; }
	inline void set_vector2Variable_11(FsmVector2_t2430450063 * value)
	{
		___vector2Variable_11 = value;
		Il2CppCodeGenWriteBarrier(&___vector2Variable_11, value);
	}

	inline static int32_t get_offset_of_filteringFactor_12() { return static_cast<int32_t>(offsetof(Vector2HighPassFilter_t657841262, ___filteringFactor_12)); }
	inline FsmFloat_t937133978 * get_filteringFactor_12() const { return ___filteringFactor_12; }
	inline FsmFloat_t937133978 ** get_address_of_filteringFactor_12() { return &___filteringFactor_12; }
	inline void set_filteringFactor_12(FsmFloat_t937133978 * value)
	{
		___filteringFactor_12 = value;
		Il2CppCodeGenWriteBarrier(&___filteringFactor_12, value);
	}

	inline static int32_t get_offset_of_filteredVector_13() { return static_cast<int32_t>(offsetof(Vector2HighPassFilter_t657841262, ___filteredVector_13)); }
	inline Vector2_t2243707579  get_filteredVector_13() const { return ___filteredVector_13; }
	inline Vector2_t2243707579 * get_address_of_filteredVector_13() { return &___filteredVector_13; }
	inline void set_filteredVector_13(Vector2_t2243707579  value)
	{
		___filteredVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
