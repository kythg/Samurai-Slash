#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_FsmEventTarget_Eve3694600655.h"

// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t664485696;
// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;
// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmEventTarget
struct  FsmEventTarget_t172293745  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.FsmEventTarget/EventTarget HutongGames.PlayMaker.FsmEventTarget::target
	int32_t ___target_1;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmEventTarget::excludeSelf
	FsmBool_t664485696 * ___excludeSelf_2;
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.FsmEventTarget::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_3;
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmEventTarget::fsmName
	FsmString_t2414474701 * ___fsmName_4;
	// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmEventTarget::sendToChildren
	FsmBool_t664485696 * ___sendToChildren_5;
	// PlayMakerFSM HutongGames.PlayMaker.FsmEventTarget::fsmComponent
	PlayMakerFSM_t437737208 * ___fsmComponent_6;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___target_1)); }
	inline int32_t get_target_1() const { return ___target_1; }
	inline int32_t* get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(int32_t value)
	{
		___target_1 = value;
	}

	inline static int32_t get_offset_of_excludeSelf_2() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___excludeSelf_2)); }
	inline FsmBool_t664485696 * get_excludeSelf_2() const { return ___excludeSelf_2; }
	inline FsmBool_t664485696 ** get_address_of_excludeSelf_2() { return &___excludeSelf_2; }
	inline void set_excludeSelf_2(FsmBool_t664485696 * value)
	{
		___excludeSelf_2 = value;
		Il2CppCodeGenWriteBarrier(&___excludeSelf_2, value);
	}

	inline static int32_t get_offset_of_gameObject_3() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___gameObject_3)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_3() const { return ___gameObject_3; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_3() { return &___gameObject_3; }
	inline void set_gameObject_3(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_3, value);
	}

	inline static int32_t get_offset_of_fsmName_4() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___fsmName_4)); }
	inline FsmString_t2414474701 * get_fsmName_4() const { return ___fsmName_4; }
	inline FsmString_t2414474701 ** get_address_of_fsmName_4() { return &___fsmName_4; }
	inline void set_fsmName_4(FsmString_t2414474701 * value)
	{
		___fsmName_4 = value;
		Il2CppCodeGenWriteBarrier(&___fsmName_4, value);
	}

	inline static int32_t get_offset_of_sendToChildren_5() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___sendToChildren_5)); }
	inline FsmBool_t664485696 * get_sendToChildren_5() const { return ___sendToChildren_5; }
	inline FsmBool_t664485696 ** get_address_of_sendToChildren_5() { return &___sendToChildren_5; }
	inline void set_sendToChildren_5(FsmBool_t664485696 * value)
	{
		___sendToChildren_5 = value;
		Il2CppCodeGenWriteBarrier(&___sendToChildren_5, value);
	}

	inline static int32_t get_offset_of_fsmComponent_6() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745, ___fsmComponent_6)); }
	inline PlayMakerFSM_t437737208 * get_fsmComponent_6() const { return ___fsmComponent_6; }
	inline PlayMakerFSM_t437737208 ** get_address_of_fsmComponent_6() { return &___fsmComponent_6; }
	inline void set_fsmComponent_6(PlayMakerFSM_t437737208 * value)
	{
		___fsmComponent_6 = value;
		Il2CppCodeGenWriteBarrier(&___fsmComponent_6, value);
	}
};

struct FsmEventTarget_t172293745_StaticFields
{
public:
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.FsmEventTarget::self
	FsmEventTarget_t172293745 * ___self_0;

public:
	inline static int32_t get_offset_of_self_0() { return static_cast<int32_t>(offsetof(FsmEventTarget_t172293745_StaticFields, ___self_0)); }
	inline FsmEventTarget_t172293745 * get_self_0() const { return ___self_0; }
	inline FsmEventTarget_t172293745 ** get_address_of_self_0() { return &___self_0; }
	inline void set_self_0(FsmEventTarget_t172293745 * value)
	{
		___self_0 = value;
		Il2CppCodeGenWriteBarrier(&___self_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
