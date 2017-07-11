#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CutToCamera
struct  CutToCamera_t4198148310  : public FsmStateAction_t2862378169
{
public:
	// UnityEngine.Camera HutongGames.PlayMaker.Actions.CutToCamera::camera
	Camera_t189460977 * ___camera_11;
	// System.Boolean HutongGames.PlayMaker.Actions.CutToCamera::makeMainCamera
	bool ___makeMainCamera_12;
	// System.Boolean HutongGames.PlayMaker.Actions.CutToCamera::cutBackOnExit
	bool ___cutBackOnExit_13;
	// UnityEngine.Camera HutongGames.PlayMaker.Actions.CutToCamera::oldCamera
	Camera_t189460977 * ___oldCamera_14;

public:
	inline static int32_t get_offset_of_camera_11() { return static_cast<int32_t>(offsetof(CutToCamera_t4198148310, ___camera_11)); }
	inline Camera_t189460977 * get_camera_11() const { return ___camera_11; }
	inline Camera_t189460977 ** get_address_of_camera_11() { return &___camera_11; }
	inline void set_camera_11(Camera_t189460977 * value)
	{
		___camera_11 = value;
		Il2CppCodeGenWriteBarrier(&___camera_11, value);
	}

	inline static int32_t get_offset_of_makeMainCamera_12() { return static_cast<int32_t>(offsetof(CutToCamera_t4198148310, ___makeMainCamera_12)); }
	inline bool get_makeMainCamera_12() const { return ___makeMainCamera_12; }
	inline bool* get_address_of_makeMainCamera_12() { return &___makeMainCamera_12; }
	inline void set_makeMainCamera_12(bool value)
	{
		___makeMainCamera_12 = value;
	}

	inline static int32_t get_offset_of_cutBackOnExit_13() { return static_cast<int32_t>(offsetof(CutToCamera_t4198148310, ___cutBackOnExit_13)); }
	inline bool get_cutBackOnExit_13() const { return ___cutBackOnExit_13; }
	inline bool* get_address_of_cutBackOnExit_13() { return &___cutBackOnExit_13; }
	inline void set_cutBackOnExit_13(bool value)
	{
		___cutBackOnExit_13 = value;
	}

	inline static int32_t get_offset_of_oldCamera_14() { return static_cast<int32_t>(offsetof(CutToCamera_t4198148310, ___oldCamera_14)); }
	inline Camera_t189460977 * get_oldCamera_14() const { return ___oldCamera_14; }
	inline Camera_t189460977 ** get_address_of_oldCamera_14() { return &___oldCamera_14; }
	inline void set_oldCamera_14(Camera_t189460977 * value)
	{
		___oldCamera_14 = value;
		Il2CppCodeGenWriteBarrier(&___oldCamera_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
