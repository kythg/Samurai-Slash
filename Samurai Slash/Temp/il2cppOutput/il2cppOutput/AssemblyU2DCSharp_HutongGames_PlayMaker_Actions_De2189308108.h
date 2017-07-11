#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_De3364408541.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.DebugDrawShape
struct  DebugDrawShape_t2189308108  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.DebugDrawShape::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.Actions.DebugDrawShape/ShapeType HutongGames.PlayMaker.Actions.DebugDrawShape::shape
	int32_t ___shape_12;
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.DebugDrawShape::color
	FsmColor_t118301965 * ___color_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.DebugDrawShape::radius
	FsmFloat_t937133978 * ___radius_14;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.DebugDrawShape::size
	FsmVector3_t3996534004 * ___size_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(DebugDrawShape_t2189308108, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_shape_12() { return static_cast<int32_t>(offsetof(DebugDrawShape_t2189308108, ___shape_12)); }
	inline int32_t get_shape_12() const { return ___shape_12; }
	inline int32_t* get_address_of_shape_12() { return &___shape_12; }
	inline void set_shape_12(int32_t value)
	{
		___shape_12 = value;
	}

	inline static int32_t get_offset_of_color_13() { return static_cast<int32_t>(offsetof(DebugDrawShape_t2189308108, ___color_13)); }
	inline FsmColor_t118301965 * get_color_13() const { return ___color_13; }
	inline FsmColor_t118301965 ** get_address_of_color_13() { return &___color_13; }
	inline void set_color_13(FsmColor_t118301965 * value)
	{
		___color_13 = value;
		Il2CppCodeGenWriteBarrier(&___color_13, value);
	}

	inline static int32_t get_offset_of_radius_14() { return static_cast<int32_t>(offsetof(DebugDrawShape_t2189308108, ___radius_14)); }
	inline FsmFloat_t937133978 * get_radius_14() const { return ___radius_14; }
	inline FsmFloat_t937133978 ** get_address_of_radius_14() { return &___radius_14; }
	inline void set_radius_14(FsmFloat_t937133978 * value)
	{
		___radius_14 = value;
		Il2CppCodeGenWriteBarrier(&___radius_14, value);
	}

	inline static int32_t get_offset_of_size_15() { return static_cast<int32_t>(offsetof(DebugDrawShape_t2189308108, ___size_15)); }
	inline FsmVector3_t3996534004 * get_size_15() const { return ___size_15; }
	inline FsmVector3_t3996534004 ** get_address_of_size_15() { return &___size_15; }
	inline void set_size_15(FsmVector3_t3996534004 * value)
	{
		___size_15 = value;
		Il2CppCodeGenWriteBarrier(&___size_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
