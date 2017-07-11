#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ActionSection
struct  ActionSection_t2860151895  : public Attribute_t542643598
{
public:
	// System.String HutongGames.PlayMaker.ActionSection::section
	String_t* ___section_0;

public:
	inline static int32_t get_offset_of_section_0() { return static_cast<int32_t>(offsetof(ActionSection_t2860151895, ___section_0)); }
	inline String_t* get_section_0() const { return ___section_0; }
	inline String_t** get_address_of_section_0() { return &___section_0; }
	inline void set_section_0(String_t* value)
	{
		___section_0 = value;
		Il2CppCodeGenWriteBarrier(&___section_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
