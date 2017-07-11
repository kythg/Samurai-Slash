#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t2430450063;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t2637547802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MousePick2d
struct  MousePick2d_t2567292880  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePick2d::storeDidPickObject
	FsmBool_t664485696 * ___storeDidPickObject_11;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.MousePick2d::storeGameObject
	FsmGameObject_t3097142863 * ___storeGameObject_12;
	// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.Actions.MousePick2d::storePoint
	FsmVector2_t2430450063 * ___storePoint_13;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.Actions.MousePick2d::layerMask
	FsmIntU5BU5D_t2637547802* ___layerMask_14;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.Actions.MousePick2d::invertMask
	FsmBool_t664485696 * ___invertMask_15;
	// System.Boolean HutongGames.PlayMaker.Actions.MousePick2d::everyFrame
	bool ___everyFrame_16;

public:
	inline static int32_t get_offset_of_storeDidPickObject_11() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___storeDidPickObject_11)); }
	inline FsmBool_t664485696 * get_storeDidPickObject_11() const { return ___storeDidPickObject_11; }
	inline FsmBool_t664485696 ** get_address_of_storeDidPickObject_11() { return &___storeDidPickObject_11; }
	inline void set_storeDidPickObject_11(FsmBool_t664485696 * value)
	{
		___storeDidPickObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___storeDidPickObject_11, value);
	}

	inline static int32_t get_offset_of_storeGameObject_12() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___storeGameObject_12)); }
	inline FsmGameObject_t3097142863 * get_storeGameObject_12() const { return ___storeGameObject_12; }
	inline FsmGameObject_t3097142863 ** get_address_of_storeGameObject_12() { return &___storeGameObject_12; }
	inline void set_storeGameObject_12(FsmGameObject_t3097142863 * value)
	{
		___storeGameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___storeGameObject_12, value);
	}

	inline static int32_t get_offset_of_storePoint_13() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___storePoint_13)); }
	inline FsmVector2_t2430450063 * get_storePoint_13() const { return ___storePoint_13; }
	inline FsmVector2_t2430450063 ** get_address_of_storePoint_13() { return &___storePoint_13; }
	inline void set_storePoint_13(FsmVector2_t2430450063 * value)
	{
		___storePoint_13 = value;
		Il2CppCodeGenWriteBarrier(&___storePoint_13, value);
	}

	inline static int32_t get_offset_of_layerMask_14() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___layerMask_14)); }
	inline FsmIntU5BU5D_t2637547802* get_layerMask_14() const { return ___layerMask_14; }
	inline FsmIntU5BU5D_t2637547802** get_address_of_layerMask_14() { return &___layerMask_14; }
	inline void set_layerMask_14(FsmIntU5BU5D_t2637547802* value)
	{
		___layerMask_14 = value;
		Il2CppCodeGenWriteBarrier(&___layerMask_14, value);
	}

	inline static int32_t get_offset_of_invertMask_15() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___invertMask_15)); }
	inline FsmBool_t664485696 * get_invertMask_15() const { return ___invertMask_15; }
	inline FsmBool_t664485696 ** get_address_of_invertMask_15() { return &___invertMask_15; }
	inline void set_invertMask_15(FsmBool_t664485696 * value)
	{
		___invertMask_15 = value;
		Il2CppCodeGenWriteBarrier(&___invertMask_15, value);
	}

	inline static int32_t get_offset_of_everyFrame_16() { return static_cast<int32_t>(offsetof(MousePick2d_t2567292880, ___everyFrame_16)); }
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
