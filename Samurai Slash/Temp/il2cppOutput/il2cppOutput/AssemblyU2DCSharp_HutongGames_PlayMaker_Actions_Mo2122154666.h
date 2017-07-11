#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ea2453967042.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3097142863;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.MoveObject
struct  MoveObject_t2122154666  : public EaseFsmAction_t2453967042
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.MoveObject::objectToMove
	FsmOwnerDefault_t2023674184 * ___objectToMove_32;
	// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.Actions.MoveObject::destination
	FsmGameObject_t3097142863 * ___destination_33;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MoveObject::fromValue
	FsmVector3_t3996534004 * ___fromValue_34;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MoveObject::toVector
	FsmVector3_t3996534004 * ___toVector_35;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.MoveObject::fromVector
	FsmVector3_t3996534004 * ___fromVector_36;
	// System.Boolean HutongGames.PlayMaker.Actions.MoveObject::finishInNextStep
	bool ___finishInNextStep_37;

public:
	inline static int32_t get_offset_of_objectToMove_32() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___objectToMove_32)); }
	inline FsmOwnerDefault_t2023674184 * get_objectToMove_32() const { return ___objectToMove_32; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_objectToMove_32() { return &___objectToMove_32; }
	inline void set_objectToMove_32(FsmOwnerDefault_t2023674184 * value)
	{
		___objectToMove_32 = value;
		Il2CppCodeGenWriteBarrier(&___objectToMove_32, value);
	}

	inline static int32_t get_offset_of_destination_33() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___destination_33)); }
	inline FsmGameObject_t3097142863 * get_destination_33() const { return ___destination_33; }
	inline FsmGameObject_t3097142863 ** get_address_of_destination_33() { return &___destination_33; }
	inline void set_destination_33(FsmGameObject_t3097142863 * value)
	{
		___destination_33 = value;
		Il2CppCodeGenWriteBarrier(&___destination_33, value);
	}

	inline static int32_t get_offset_of_fromValue_34() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___fromValue_34)); }
	inline FsmVector3_t3996534004 * get_fromValue_34() const { return ___fromValue_34; }
	inline FsmVector3_t3996534004 ** get_address_of_fromValue_34() { return &___fromValue_34; }
	inline void set_fromValue_34(FsmVector3_t3996534004 * value)
	{
		___fromValue_34 = value;
		Il2CppCodeGenWriteBarrier(&___fromValue_34, value);
	}

	inline static int32_t get_offset_of_toVector_35() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___toVector_35)); }
	inline FsmVector3_t3996534004 * get_toVector_35() const { return ___toVector_35; }
	inline FsmVector3_t3996534004 ** get_address_of_toVector_35() { return &___toVector_35; }
	inline void set_toVector_35(FsmVector3_t3996534004 * value)
	{
		___toVector_35 = value;
		Il2CppCodeGenWriteBarrier(&___toVector_35, value);
	}

	inline static int32_t get_offset_of_fromVector_36() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___fromVector_36)); }
	inline FsmVector3_t3996534004 * get_fromVector_36() const { return ___fromVector_36; }
	inline FsmVector3_t3996534004 ** get_address_of_fromVector_36() { return &___fromVector_36; }
	inline void set_fromVector_36(FsmVector3_t3996534004 * value)
	{
		___fromVector_36 = value;
		Il2CppCodeGenWriteBarrier(&___fromVector_36, value);
	}

	inline static int32_t get_offset_of_finishInNextStep_37() { return static_cast<int32_t>(offsetof(MoveObject_t2122154666, ___finishInNextStep_37)); }
	inline bool get_finishInNextStep_37() const { return ___finishInNextStep_37; }
	inline bool* get_address_of_finishInNextStep_37() { return &___finishInNextStep_37; }
	inline void set_finishInNextStep_37(bool value)
	{
		___finishInNextStep_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
