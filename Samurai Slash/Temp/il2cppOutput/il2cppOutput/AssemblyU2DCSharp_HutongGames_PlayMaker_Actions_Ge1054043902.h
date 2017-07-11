#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ge3666683357.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetAxisVector
struct  GetAxisVector_t1054043902  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAxisVector::horizontalAxis
	FsmString_t2414474701 * ___horizontalAxis_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.GetAxisVector::verticalAxis
	FsmString_t2414474701 * ___verticalAxis_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAxisVector::multiplier
	FsmFloat_t937133978 * ___multiplier_13;
	// HutongGames.PlayMaker.Actions.GetAxisVector/AxisPlane HutongGames.PlayMaker.Actions.GetAxisVector::mapToPlane
	int32_t ___mapToPlane_14;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.GetAxisVector::relativeTo
	FsmGameObject_t3097142863 * ___relativeTo_15;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetAxisVector::storeVector
	FsmVector3_t3996534004 * ___storeVector_16;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetAxisVector::storeMagnitude
	FsmFloat_t937133978 * ___storeMagnitude_17;

public:
	inline static int32_t get_offset_of_horizontalAxis_11() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___horizontalAxis_11)); }
	inline FsmString_t2414474701 * get_horizontalAxis_11() const { return ___horizontalAxis_11; }
	inline FsmString_t2414474701 ** get_address_of_horizontalAxis_11() { return &___horizontalAxis_11; }
	inline void set_horizontalAxis_11(FsmString_t2414474701 * value)
	{
		___horizontalAxis_11 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxis_11, value);
	}

	inline static int32_t get_offset_of_verticalAxis_12() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___verticalAxis_12)); }
	inline FsmString_t2414474701 * get_verticalAxis_12() const { return ___verticalAxis_12; }
	inline FsmString_t2414474701 ** get_address_of_verticalAxis_12() { return &___verticalAxis_12; }
	inline void set_verticalAxis_12(FsmString_t2414474701 * value)
	{
		___verticalAxis_12 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxis_12, value);
	}

	inline static int32_t get_offset_of_multiplier_13() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___multiplier_13)); }
	inline FsmFloat_t937133978 * get_multiplier_13() const { return ___multiplier_13; }
	inline FsmFloat_t937133978 ** get_address_of_multiplier_13() { return &___multiplier_13; }
	inline void set_multiplier_13(FsmFloat_t937133978 * value)
	{
		___multiplier_13 = value;
		Il2CppCodeGenWriteBarrier(&___multiplier_13, value);
	}

	inline static int32_t get_offset_of_mapToPlane_14() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___mapToPlane_14)); }
	inline int32_t get_mapToPlane_14() const { return ___mapToPlane_14; }
	inline int32_t* get_address_of_mapToPlane_14() { return &___mapToPlane_14; }
	inline void set_mapToPlane_14(int32_t value)
	{
		___mapToPlane_14 = value;
	}

	inline static int32_t get_offset_of_relativeTo_15() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___relativeTo_15)); }
	inline FsmGameObject_t3097142863 * get_relativeTo_15() const { return ___relativeTo_15; }
	inline FsmGameObject_t3097142863 ** get_address_of_relativeTo_15() { return &___relativeTo_15; }
	inline void set_relativeTo_15(FsmGameObject_t3097142863 * value)
	{
		___relativeTo_15 = value;
		Il2CppCodeGenWriteBarrier(&___relativeTo_15, value);
	}

	inline static int32_t get_offset_of_storeVector_16() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___storeVector_16)); }
	inline FsmVector3_t3996534004 * get_storeVector_16() const { return ___storeVector_16; }
	inline FsmVector3_t3996534004 ** get_address_of_storeVector_16() { return &___storeVector_16; }
	inline void set_storeVector_16(FsmVector3_t3996534004 * value)
	{
		___storeVector_16 = value;
		Il2CppCodeGenWriteBarrier(&___storeVector_16, value);
	}

	inline static int32_t get_offset_of_storeMagnitude_17() { return static_cast<int32_t>(offsetof(GetAxisVector_t1054043902, ___storeMagnitude_17)); }
	inline FsmFloat_t937133978 * get_storeMagnitude_17() const { return ___storeMagnitude_17; }
	inline FsmFloat_t937133978 ** get_address_of_storeMagnitude_17() { return &___storeMagnitude_17; }
	inline void set_storeMagnitude_17(FsmFloat_t937133978 * value)
	{
		___storeMagnitude_17 = value;
		Il2CppCodeGenWriteBarrier(&___storeMagnitude_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
