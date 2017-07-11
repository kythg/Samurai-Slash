#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "AssemblyU2DCSharp_iTweenFSMType369394580.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenStop
struct  iTweenStop_t3748785574  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenStop::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.iTweenStop::id
	FsmString_t2414474701 * ___id_12;
	// iTweenFSMType HutongGames.PlayMaker.Actions.iTweenStop::iTweenType
	int32_t ___iTweenType_13;
	// System.Boolean HutongGames.PlayMaker.Actions.iTweenStop::includeChildren
	bool ___includeChildren_14;
	// System.Boolean HutongGames.PlayMaker.Actions.iTweenStop::inScene
	bool ___inScene_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(iTweenStop_t3748785574, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_id_12() { return static_cast<int32_t>(offsetof(iTweenStop_t3748785574, ___id_12)); }
	inline FsmString_t2414474701 * get_id_12() const { return ___id_12; }
	inline FsmString_t2414474701 ** get_address_of_id_12() { return &___id_12; }
	inline void set_id_12(FsmString_t2414474701 * value)
	{
		___id_12 = value;
		Il2CppCodeGenWriteBarrier(&___id_12, value);
	}

	inline static int32_t get_offset_of_iTweenType_13() { return static_cast<int32_t>(offsetof(iTweenStop_t3748785574, ___iTweenType_13)); }
	inline int32_t get_iTweenType_13() const { return ___iTweenType_13; }
	inline int32_t* get_address_of_iTweenType_13() { return &___iTweenType_13; }
	inline void set_iTweenType_13(int32_t value)
	{
		___iTweenType_13 = value;
	}

	inline static int32_t get_offset_of_includeChildren_14() { return static_cast<int32_t>(offsetof(iTweenStop_t3748785574, ___includeChildren_14)); }
	inline bool get_includeChildren_14() const { return ___includeChildren_14; }
	inline bool* get_address_of_includeChildren_14() { return &___includeChildren_14; }
	inline void set_includeChildren_14(bool value)
	{
		___includeChildren_14 = value;
	}

	inline static int32_t get_offset_of_inScene_15() { return static_cast<int32_t>(offsetof(iTweenStop_t3748785574, ___inScene_15)); }
	inline bool get_inScene_15() const { return ___inScene_15; }
	inline bool* get_address_of_inScene_15() { return &___inScene_15; }
	inline void set_inScene_15(bool value)
	{
		___inScene_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
