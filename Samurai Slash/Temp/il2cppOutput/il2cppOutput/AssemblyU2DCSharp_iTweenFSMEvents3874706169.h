#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// HutongGames.PlayMaker.Actions.iTweenFsmAction
struct iTweenFsmAction_t3900135744;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTweenFSMEvents
struct  iTweenFSMEvents_t3874706169  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 iTweenFSMEvents::itweenID
	int32_t ___itweenID_3;
	// HutongGames.PlayMaker.Actions.iTweenFsmAction iTweenFSMEvents::itweenFSMAction
	iTweenFsmAction_t3900135744 * ___itweenFSMAction_4;
	// System.Boolean iTweenFSMEvents::donotfinish
	bool ___donotfinish_5;
	// System.Boolean iTweenFSMEvents::islooping
	bool ___islooping_6;

public:
	inline static int32_t get_offset_of_itweenID_3() { return static_cast<int32_t>(offsetof(iTweenFSMEvents_t3874706169, ___itweenID_3)); }
	inline int32_t get_itweenID_3() const { return ___itweenID_3; }
	inline int32_t* get_address_of_itweenID_3() { return &___itweenID_3; }
	inline void set_itweenID_3(int32_t value)
	{
		___itweenID_3 = value;
	}

	inline static int32_t get_offset_of_itweenFSMAction_4() { return static_cast<int32_t>(offsetof(iTweenFSMEvents_t3874706169, ___itweenFSMAction_4)); }
	inline iTweenFsmAction_t3900135744 * get_itweenFSMAction_4() const { return ___itweenFSMAction_4; }
	inline iTweenFsmAction_t3900135744 ** get_address_of_itweenFSMAction_4() { return &___itweenFSMAction_4; }
	inline void set_itweenFSMAction_4(iTweenFsmAction_t3900135744 * value)
	{
		___itweenFSMAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___itweenFSMAction_4, value);
	}

	inline static int32_t get_offset_of_donotfinish_5() { return static_cast<int32_t>(offsetof(iTweenFSMEvents_t3874706169, ___donotfinish_5)); }
	inline bool get_donotfinish_5() const { return ___donotfinish_5; }
	inline bool* get_address_of_donotfinish_5() { return &___donotfinish_5; }
	inline void set_donotfinish_5(bool value)
	{
		___donotfinish_5 = value;
	}

	inline static int32_t get_offset_of_islooping_6() { return static_cast<int32_t>(offsetof(iTweenFSMEvents_t3874706169, ___islooping_6)); }
	inline bool get_islooping_6() const { return ___islooping_6; }
	inline bool* get_address_of_islooping_6() { return &___islooping_6; }
	inline void set_islooping_6(bool value)
	{
		___islooping_6 = value;
	}
};

struct iTweenFSMEvents_t3874706169_StaticFields
{
public:
	// System.Int32 iTweenFSMEvents::itweenIDCount
	int32_t ___itweenIDCount_2;

public:
	inline static int32_t get_offset_of_itweenIDCount_2() { return static_cast<int32_t>(offsetof(iTweenFSMEvents_t3874706169_StaticFields, ___itweenIDCount_2)); }
	inline int32_t get_itweenIDCount_2() const { return ___itweenIDCount_2; }
	inline int32_t* get_address_of_itweenIDCount_2() { return &___itweenIDCount_2; }
	inline void set_itweenIDCount_2(int32_t value)
	{
		___itweenIDCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
