#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// PlayMakerPrefs
struct PlayMakerPrefs_t1833055544;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMakerPrefs
struct  PlayMakerPrefs_t1833055544  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Color[] PlayMakerPrefs::colors
	ColorU5BU5D_t672350442* ___colors_5;
	// System.String[] PlayMakerPrefs::colorNames
	StringU5BU5D_t1642385972* ___colorNames_6;

public:
	inline static int32_t get_offset_of_colors_5() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544, ___colors_5)); }
	inline ColorU5BU5D_t672350442* get_colors_5() const { return ___colors_5; }
	inline ColorU5BU5D_t672350442** get_address_of_colors_5() { return &___colors_5; }
	inline void set_colors_5(ColorU5BU5D_t672350442* value)
	{
		___colors_5 = value;
		Il2CppCodeGenWriteBarrier(&___colors_5, value);
	}

	inline static int32_t get_offset_of_colorNames_6() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544, ___colorNames_6)); }
	inline StringU5BU5D_t1642385972* get_colorNames_6() const { return ___colorNames_6; }
	inline StringU5BU5D_t1642385972** get_address_of_colorNames_6() { return &___colorNames_6; }
	inline void set_colorNames_6(StringU5BU5D_t1642385972* value)
	{
		___colorNames_6 = value;
		Il2CppCodeGenWriteBarrier(&___colorNames_6, value);
	}
};

struct PlayMakerPrefs_t1833055544_StaticFields
{
public:
	// PlayMakerPrefs PlayMakerPrefs::instance
	PlayMakerPrefs_t1833055544 * ___instance_2;
	// UnityEngine.Color[] PlayMakerPrefs::defaultColors
	ColorU5BU5D_t672350442* ___defaultColors_3;
	// System.String[] PlayMakerPrefs::defaultColorNames
	StringU5BU5D_t1642385972* ___defaultColorNames_4;
	// UnityEngine.Color[] PlayMakerPrefs::minimapColors
	ColorU5BU5D_t672350442* ___minimapColors_7;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544_StaticFields, ___instance_2)); }
	inline PlayMakerPrefs_t1833055544 * get_instance_2() const { return ___instance_2; }
	inline PlayMakerPrefs_t1833055544 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PlayMakerPrefs_t1833055544 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_defaultColors_3() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544_StaticFields, ___defaultColors_3)); }
	inline ColorU5BU5D_t672350442* get_defaultColors_3() const { return ___defaultColors_3; }
	inline ColorU5BU5D_t672350442** get_address_of_defaultColors_3() { return &___defaultColors_3; }
	inline void set_defaultColors_3(ColorU5BU5D_t672350442* value)
	{
		___defaultColors_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultColors_3, value);
	}

	inline static int32_t get_offset_of_defaultColorNames_4() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544_StaticFields, ___defaultColorNames_4)); }
	inline StringU5BU5D_t1642385972* get_defaultColorNames_4() const { return ___defaultColorNames_4; }
	inline StringU5BU5D_t1642385972** get_address_of_defaultColorNames_4() { return &___defaultColorNames_4; }
	inline void set_defaultColorNames_4(StringU5BU5D_t1642385972* value)
	{
		___defaultColorNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultColorNames_4, value);
	}

	inline static int32_t get_offset_of_minimapColors_7() { return static_cast<int32_t>(offsetof(PlayMakerPrefs_t1833055544_StaticFields, ___minimapColors_7)); }
	inline ColorU5BU5D_t672350442* get_minimapColors_7() const { return ___minimapColors_7; }
	inline ColorU5BU5D_t672350442** get_address_of_minimapColors_7() { return &___minimapColors_7; }
	inline void set_minimapColors_7(ColorU5BU5D_t672350442* value)
	{
		___minimapColors_7 = value;
		Il2CppCodeGenWriteBarrier(&___minimapColors_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
