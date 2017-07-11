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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.iTweenResume
struct  iTweenResume_t4280322891  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.iTweenResume::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// iTweenFSMType HutongGames.PlayMaker.Actions.iTweenResume::iTweenType
	int32_t ___iTweenType_12;
	// System.Boolean HutongGames.PlayMaker.Actions.iTweenResume::includeChildren
	bool ___includeChildren_13;
	// System.Boolean HutongGames.PlayMaker.Actions.iTweenResume::inScene
	bool ___inScene_14;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(iTweenResume_t4280322891, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_iTweenType_12() { return static_cast<int32_t>(offsetof(iTweenResume_t4280322891, ___iTweenType_12)); }
	inline int32_t get_iTweenType_12() const { return ___iTweenType_12; }
	inline int32_t* get_address_of_iTweenType_12() { return &___iTweenType_12; }
	inline void set_iTweenType_12(int32_t value)
	{
		___iTweenType_12 = value;
	}

	inline static int32_t get_offset_of_includeChildren_13() { return static_cast<int32_t>(offsetof(iTweenResume_t4280322891, ___includeChildren_13)); }
	inline bool get_includeChildren_13() const { return ___includeChildren_13; }
	inline bool* get_address_of_includeChildren_13() { return &___includeChildren_13; }
	inline void set_includeChildren_13(bool value)
	{
		___includeChildren_13 = value;
	}

	inline static int32_t get_offset_of_inScene_14() { return static_cast<int32_t>(offsetof(iTweenResume_t4280322891, ___inScene_14)); }
	inline bool get_inScene_14() const { return ___inScene_14; }
	inline bool* get_address_of_inScene_14() { return &___inScene_14; }
	inline void set_inScene_14(bool value)
	{
		___inScene_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
