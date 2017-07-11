#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ActionHelpers
struct  ActionHelpers_t246470375  : public Il2CppObject
{
public:

public:
};

struct ActionHelpers_t246470375_StaticFields
{
public:
	// UnityEngine.Texture2D HutongGames.PlayMaker.ActionHelpers::whiteTexture
	Texture2D_t3542995729 * ___whiteTexture_0;
	// UnityEngine.RaycastHit HutongGames.PlayMaker.ActionHelpers::mousePickInfo
	RaycastHit_t87180320  ___mousePickInfo_1;
	// System.Single HutongGames.PlayMaker.ActionHelpers::mousePickRaycastTime
	float ___mousePickRaycastTime_2;
	// System.Single HutongGames.PlayMaker.ActionHelpers::mousePickDistanceUsed
	float ___mousePickDistanceUsed_3;
	// System.Int32 HutongGames.PlayMaker.ActionHelpers::mousePickLayerMaskUsed
	int32_t ___mousePickLayerMaskUsed_4;

public:
	inline static int32_t get_offset_of_whiteTexture_0() { return static_cast<int32_t>(offsetof(ActionHelpers_t246470375_StaticFields, ___whiteTexture_0)); }
	inline Texture2D_t3542995729 * get_whiteTexture_0() const { return ___whiteTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_whiteTexture_0() { return &___whiteTexture_0; }
	inline void set_whiteTexture_0(Texture2D_t3542995729 * value)
	{
		___whiteTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___whiteTexture_0, value);
	}

	inline static int32_t get_offset_of_mousePickInfo_1() { return static_cast<int32_t>(offsetof(ActionHelpers_t246470375_StaticFields, ___mousePickInfo_1)); }
	inline RaycastHit_t87180320  get_mousePickInfo_1() const { return ___mousePickInfo_1; }
	inline RaycastHit_t87180320 * get_address_of_mousePickInfo_1() { return &___mousePickInfo_1; }
	inline void set_mousePickInfo_1(RaycastHit_t87180320  value)
	{
		___mousePickInfo_1 = value;
	}

	inline static int32_t get_offset_of_mousePickRaycastTime_2() { return static_cast<int32_t>(offsetof(ActionHelpers_t246470375_StaticFields, ___mousePickRaycastTime_2)); }
	inline float get_mousePickRaycastTime_2() const { return ___mousePickRaycastTime_2; }
	inline float* get_address_of_mousePickRaycastTime_2() { return &___mousePickRaycastTime_2; }
	inline void set_mousePickRaycastTime_2(float value)
	{
		___mousePickRaycastTime_2 = value;
	}

	inline static int32_t get_offset_of_mousePickDistanceUsed_3() { return static_cast<int32_t>(offsetof(ActionHelpers_t246470375_StaticFields, ___mousePickDistanceUsed_3)); }
	inline float get_mousePickDistanceUsed_3() const { return ___mousePickDistanceUsed_3; }
	inline float* get_address_of_mousePickDistanceUsed_3() { return &___mousePickDistanceUsed_3; }
	inline void set_mousePickDistanceUsed_3(float value)
	{
		___mousePickDistanceUsed_3 = value;
	}

	inline static int32_t get_offset_of_mousePickLayerMaskUsed_4() { return static_cast<int32_t>(offsetof(ActionHelpers_t246470375_StaticFields, ___mousePickLayerMaskUsed_4)); }
	inline int32_t get_mousePickLayerMaskUsed_4() const { return ___mousePickLayerMaskUsed_4; }
	inline int32_t* get_address_of_mousePickLayerMaskUsed_4() { return &___mousePickLayerMaskUsed_4; }
	inline void set_mousePickLayerMaskUsed_4(int32_t value)
	{
		___mousePickLayerMaskUsed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
