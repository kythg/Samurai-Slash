#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Com791040716.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.SetCameraCullingMask
struct  SetCameraCullingMask_t2337594823  : public ComponentAction_1_t791040716
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.SetCameraCullingMask::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_13;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.SetCameraCullingMask::cullingMask
	FsmIntU5BU5D_t2637547802* ___cullingMask_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.SetCameraCullingMask::invertMask
	FsmBool_t664485696 * ___invertMask_15;
	// System.Boolean HutongGames.PlayMaker.Actions.SetCameraCullingMask::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_gameObject_13() { return static_cast<int32_t>(offsetof(SetCameraCullingMask_t2337594823, ___gameObject_13)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_13() const { return ___gameObject_13; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_13() { return &___gameObject_13; }
	inline void set_gameObject_13(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_13, value);
	}

	inline static int32_t get_offset_of_cullingMask_14() { return static_cast<int32_t>(offsetof(SetCameraCullingMask_t2337594823, ___cullingMask_14)); }
	inline FsmIntU5BU5D_t2637547802* get_cullingMask_14() const { return ___cullingMask_14; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_cullingMask_14() { return &___cullingMask_14; }
	inline void set_cullingMask_14(FsmIntU5BU5D_t2637547802* value)
	{
		___cullingMask_14 = value;
		Il2CppCodeGenWriteBarrier(&___cullingMask_14, value);
	}

	inline static int32_t get_offset_of_invertMask_15() { return static_cast<int32_t>(offsetof(SetCameraCullingMask_t2337594823, ___invertMask_15)); }
	inline FsmBool_t664485696 * get_invertMask_15() const { return ___invertMask_15; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_15() { return &___invertMask_15; }
	inline void set_invertMask_15(FsmBool_t664485696 * value)
	{
		___invertMask_15 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(SetCameraCullingMask_t2337594823, ___everyFrame_16)); }
	inline bool get_everyFrame_16() const { return ___everyFrame_16; }
	inline bool* get_address_of_everyFrame_16() { return &___everyFrame_16; }
	inline void set_everyFrame_16(bool value)
	{
		___everyFrame_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
