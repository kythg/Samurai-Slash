#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.HasFloatSliderAttribute
struct  HasFloatSliderAttribute_t1179041011  : public Attribute_t542643598
{
public:
	// System.Single HutongGames.PlayMaker.HasFloatSliderAttribute::minValue
	float ___minValue_0;
	// System.Single HutongGames.PlayMaker.HasFloatSliderAttribute::maxValue
	float ___maxValue_1;

public:
	inline static int32_t get_offset_of_minValue_0() { return static_cast<int32_t>(offsetof(HasFloatSliderAttribute_t1179041011, ___minValue_0)); }
	inline float get_minValue_0() const { return ___minValue_0; }
	inline float* get_address_of_minValue_0() { return &___minValue_0; }
	inline void set_minValue_0(float value)
	{
		___minValue_0 = value;
	}

	inline static int32_t get_offset_of_maxValue_1() { return static_cast<int32_t>(offsetof(HasFloatSliderAttribute_t1179041011, ___maxValue_1)); }
	inline float get_maxValue_1() const { return ___maxValue_1; }
	inline float* get_address_of_maxValue_1() { return &___maxValue_1; }
	inline void set_maxValue_1(float value)
	{
		___maxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
