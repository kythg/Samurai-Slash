#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetRaycastAllInfo
struct  GetRaycastAllInfo_t885129436  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetRaycastAllInfo::storeHitObjects
	FsmArray_t527459893 * ___storeHitObjects_11;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetRaycastAllInfo::points
	FsmArray_t527459893 * ___points_12;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetRaycastAllInfo::normals
	FsmArray_t527459893 * ___normals_13;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.GetRaycastAllInfo::distances
	FsmArray_t527459893 * ___distances_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetRaycastAllInfo::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_storeHitObjects_11() { return static_cast<int32_t>(offsetof(GetRaycastAllInfo_t885129436, ___storeHitObjects_11)); }
	inline FsmArray_t527459893 * get_storeHitObjects_11() const { return ___storeHitObjects_11; }
	inline FsmArray_t527459893 ** get_address_of_storeHitObjects_11() { return &___storeHitObjects_11; }
	inline void set_storeHitObjects_11(FsmArray_t527459893 * value)
	{
		___storeHitObjects_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeHitObjects_11, value);
	}

	inline static int32_t get_offset_of_points_12() { return static_cast<int32_t>(offsetof(GetRaycastAllInfo_t885129436, ___points_12)); }
	inline FsmArray_t527459893 * get_points_12() const { return ___points_12; }
	inline FsmArray_t527459893 ** get_address_of_points_12() { return &___points_12; }
	inline void set_points_12(FsmArray_t527459893 * value)
	{
		___points_12 = value;
		Il2CppCodeGenWriteBarrier(&___points_12, value);
	}

	inline static int32_t get_offset_of_normals_13() { return static_cast<int32_t>(offsetof(GetRaycastAllInfo_t885129436, ___normals_13)); }
	inline FsmArray_t527459893 * get_normals_13() const { return ___normals_13; }
	inline FsmArray_t527459893 ** get_address_of_normals_13() { return &___normals_13; }
	inline void set_normals_13(FsmArray_t527459893 * value)
	{
		___normals_13 = value;
		Il2CppCodeGenWriteBarrier(&___normals_13, value);
	}

	inline static int32_t get_offset_of_distances_14() { return static_cast<int32_t>(offsetof(GetRaycastAllInfo_t885129436, ___distances_14)); }
	inline FsmArray_t527459893 * get_distances_14() const { return ___distances_14; }
	inline FsmArray_t527459893 ** get_address_of_distances_14() { return &___distances_14; }
	inline void set_distances_14(FsmArray_t527459893 * value)
	{
		___distances_14 = value;
		Il2CppCodeGenWriteBarrier(&___distances_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetRaycastAllInfo_t885129436, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
