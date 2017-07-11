#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Proj84548270.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ProjectLocationToMap
struct  ProjectLocationToMap_t2469662469  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.ProjectLocationToMap::GPSLocation
	FsmVector3_t3996534004 * ___GPSLocation_11;
	// HutongGames.PlayMaker.Actions.ProjectLocationToMap/MapProjection HutongGames.PlayMaker.Actions.ProjectLocationToMap::mapProjection
	int32_t ___mapProjection_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::minLongitude
	FsmFloat_t937133978 * ___minLongitude_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::maxLongitude
	FsmFloat_t937133978 * ___maxLongitude_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::minLatitude
	FsmFloat_t937133978 * ___minLatitude_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::maxLatitude
	FsmFloat_t937133978 * ___maxLatitude_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::minX
	FsmFloat_t937133978 * ___minX_17;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::minY
	FsmFloat_t937133978 * ___minY_18;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::width
	FsmFloat_t937133978 * ___width_19;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::height
	FsmFloat_t937133978 * ___height_20;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::projectedX
	FsmFloat_t937133978 * ___projectedX_21;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.ProjectLocationToMap::projectedY
	FsmFloat_t937133978 * ___projectedY_22;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.ProjectLocationToMap::normalized
	FsmBool_t664485696 * ___normalized_23;
	// System.Boolean HutongGames.PlayMaker.Actions.ProjectLocationToMap::everyFrame
	bool ___everyFrame_24;
	// System.Single HutongGames.PlayMaker.Actions.ProjectLocationToMap::x
	float ___x_25;
	// System.Single HutongGames.PlayMaker.Actions.ProjectLocationToMap::y
	float ___y_26;

public:
	inline static int32_t get_offset_of_GPSLocation_11() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___GPSLocation_11)); }
	inline FsmVector3_t3996534004 * get_GPSLocation_11() const { return ___GPSLocation_11; }
	inline FsmVector3_t3996534004 ** get_address_of_GPSLocation_11() { return &___GPSLocation_11; }
	inline void set_GPSLocation_11(FsmVector3_t3996534004 * value)
	{
		___GPSLocation_11 = value;
		Il2CppCodeGenWriteBarrier(&___GPSLocation_11, value);
	}

	inline static int32_t get_offset_of_mapProjection_12() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___mapProjection_12)); }
	inline int32_t get_mapProjection_12() const { return ___mapProjection_12; }
	inline int32_t* get_address_of_mapProjection_12() { return &___mapProjection_12; }
	inline void set_mapProjection_12(int32_t value)
	{
		___mapProjection_12 = value;
	}

	inline static int32_t get_offset_of_minLongitude_13() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___minLongitude_13)); }
	inline FsmFloat_t937133978 * get_minLongitude_13() const { return ___minLongitude_13; }
	inline FsmFloat_t937133978 ** get_address_of_minLongitude_13() { return &___minLongitude_13; }
	inline void set_minLongitude_13(FsmFloat_t937133978 * value)
	{
		___minLongitude_13 = value;
		Il2CppCodeGenWriteBarrier(&___minLongitude_13, value);
	}

	inline static int32_t get_offset_of_maxLongitude_14() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___maxLongitude_14)); }
	inline FsmFloat_t937133978 * get_maxLongitude_14() const { return ___maxLongitude_14; }
	inline FsmFloat_t937133978 ** get_address_of_maxLongitude_14() { return &___maxLongitude_14; }
	inline void set_maxLongitude_14(FsmFloat_t937133978 * value)
	{
		___maxLongitude_14 = value;
		Il2CppCodeGenWriteBarrier(&___maxLongitude_14, value);
	}

	inline static int32_t get_offset_of_minLatitude_15() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___minLatitude_15)); }
	inline FsmFloat_t937133978 * get_minLatitude_15() const { return ___minLatitude_15; }
	inline FsmFloat_t937133978 ** get_address_of_minLatitude_15() { return &___minLatitude_15; }
	inline void set_minLatitude_15(FsmFloat_t937133978 * value)
	{
		___minLatitude_15 = value;
		Il2CppCodeGenWriteBarrier(&___minLatitude_15, value);
	}

	inline static int32_t get_offset_of_maxLatitude_16() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___maxLatitude_16)); }
	inline FsmFloat_t937133978 * get_maxLatitude_16() const { return ___maxLatitude_16; }
	inline FsmFloat_t937133978 ** get_address_of_maxLatitude_16() { return &___maxLatitude_16; }
	inline void set_maxLatitude_16(FsmFloat_t937133978 * value)
	{
		___maxLatitude_16 = value;
		Il2CppCodeGenWriteBarrier(&___maxLatitude_16, value);
	}

	inline static int32_t get_offset_of_minX_17() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___minX_17)); }
	inline FsmFloat_t937133978 * get_minX_17() const { return ___minX_17; }
	inline FsmFloat_t937133978 ** get_address_of_minX_17() { return &___minX_17; }
	inline void set_minX_17(FsmFloat_t937133978 * value)
	{
		___minX_17 = value;
		Il2CppCodeGenWriteBarrier(&___minX_17, value);
	}

	inline static int32_t get_offset_of_minY_18() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___minY_18)); }
	inline FsmFloat_t937133978 * get_minY_18() const { return ___minY_18; }
	inline FsmFloat_t937133978 ** get_address_of_minY_18() { return &___minY_18; }
	inline void set_minY_18(FsmFloat_t937133978 * value)
	{
		___minY_18 = value;
		Il2CppCodeGenWriteBarrier(&___minY_18, value);
	}

	inline static int32_t get_offset_of_width_19() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___width_19)); }
	inline FsmFloat_t937133978 * get_width_19() const { return ___width_19; }
	inline FsmFloat_t937133978 ** get_address_of_width_19() { return &___width_19; }
	inline void set_width_19(FsmFloat_t937133978 * value)
	{
		___width_19 = value;
		Il2CppCodeGenWriteBarrier(&___width_19, value);
	}

	inline static int32_t get_offset_of_height_20() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___height_20)); }
	inline FsmFloat_t937133978 * get_height_20() const { return ___height_20; }
	inline FsmFloat_t937133978 ** get_address_of_height_20() { return &___height_20; }
	inline void set_height_20(FsmFloat_t937133978 * value)
	{
		___height_20 = value;
		Il2CppCodeGenWriteBarrier(&___height_20, value);
	}

	inline static int32_t get_offset_of_projectedX_21() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___projectedX_21)); }
	inline FsmFloat_t937133978 * get_projectedX_21() const { return ___projectedX_21; }
	inline FsmFloat_t937133978 ** get_address_of_projectedX_21() { return &___projectedX_21; }
	inline void set_projectedX_21(FsmFloat_t937133978 * value)
	{
		___projectedX_21 = value;
		Il2CppCodeGenWriteBarrier(&___projectedX_21, value);
	}

	inline static int32_t get_offset_of_projectedY_22() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___projectedY_22)); }
	inline FsmFloat_t937133978 * get_projectedY_22() const { return ___projectedY_22; }
	inline FsmFloat_t937133978 ** get_address_of_projectedY_22() { return &___projectedY_22; }
	inline void set_projectedY_22(FsmFloat_t937133978 * value)
	{
		___projectedY_22 = value;
		Il2CppCodeGenWriteBarrier(&___projectedY_22, value);
	}

	inline static int32_t get_offset_of_normalized_23() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___normalized_23)); }
	inline FsmBool_t664485696 * get_normalized_23() const { return ___normalized_23; }
	inline FsmBool_t664485696 ** get_address_of_normalized_23() { return &___normalized_23; }
	inline void set_normalized_23(FsmBool_t664485696 * value)
	{
		___normalized_23 = value;
		Il2CppCodeGenWriteBarrier(&___normalized_23, value);
	}

	inline static int32_t get_offset_of_everyFrame_24() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___everyFrame_24)); }
	inline bool get_everyFrame_24() const { return ___everyFrame_24; }
	inline bool* get_address_of_everyFrame_24() { return &___everyFrame_24; }
	inline void set_everyFrame_24(bool value)
	{
		___everyFrame_24 = value;
	}

	inline static int32_t get_offset_of_x_25() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___x_25)); }
	inline float get_x_25() const { return ___x_25; }
	inline float* get_address_of_x_25() { return &___x_25; }
	inline void set_x_25(float value)
	{
		___x_25 = value;
	}

	inline static int32_t get_offset_of_y_26() { return static_cast<int32_t>(offsetof(ProjectLocationToMap_t2469662469, ___y_26)); }
	inline float get_y_26() const { return ___y_26; }
	inline float* get_address_of_y_26() { return &___y_26; }
	inline void set_y_26(float value)
	{
		___y_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
