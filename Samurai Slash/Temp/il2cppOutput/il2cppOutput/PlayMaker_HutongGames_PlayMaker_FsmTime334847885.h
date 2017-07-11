#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmTime
struct  FsmTime_t334847885  : public Il2CppObject
{
public:

public:
};

struct FsmTime_t334847885_StaticFields
{
public:
	// System.Boolean HutongGames.PlayMaker.FsmTime::firstUpdateHasHappened
	bool ___firstUpdateHasHappened_0;
	// System.Single HutongGames.PlayMaker.FsmTime::totalEditorPlayerPausedTime
	float ___totalEditorPlayerPausedTime_1;
	// System.Single HutongGames.PlayMaker.FsmTime::realtimeLastUpdate
	float ___realtimeLastUpdate_2;
	// System.Int32 HutongGames.PlayMaker.FsmTime::frameCountLastUpdate
	int32_t ___frameCountLastUpdate_3;

public:
	inline static int32_t get_offset_of_firstUpdateHasHappened_0() { return static_cast<int32_t>(offsetof(FsmTime_t334847885_StaticFields, ___firstUpdateHasHappened_0)); }
	inline bool get_firstUpdateHasHappened_0() const { return ___firstUpdateHasHappened_0; }
	inline bool* get_address_of_firstUpdateHasHappened_0() { return &___firstUpdateHasHappened_0; }
	inline void set_firstUpdateHasHappened_0(bool value)
	{
		___firstUpdateHasHappened_0 = value;
	}

	inline static int32_t get_offset_of_totalEditorPlayerPausedTime_1() { return static_cast<int32_t>(offsetof(FsmTime_t334847885_StaticFields, ___totalEditorPlayerPausedTime_1)); }
	inline float get_totalEditorPlayerPausedTime_1() const { return ___totalEditorPlayerPausedTime_1; }
	inline float* get_address_of_totalEditorPlayerPausedTime_1() { return &___totalEditorPlayerPausedTime_1; }
	inline void set_totalEditorPlayerPausedTime_1(float value)
	{
		___totalEditorPlayerPausedTime_1 = value;
	}

	inline static int32_t get_offset_of_realtimeLastUpdate_2() { return static_cast<int32_t>(offsetof(FsmTime_t334847885_StaticFields, ___realtimeLastUpdate_2)); }
	inline float get_realtimeLastUpdate_2() const { return ___realtimeLastUpdate_2; }
	inline float* get_address_of_realtimeLastUpdate_2() { return &___realtimeLastUpdate_2; }
	inline void set_realtimeLastUpdate_2(float value)
	{
		___realtimeLastUpdate_2 = value;
	}

	inline static int32_t get_offset_of_frameCountLastUpdate_3() { return static_cast<int32_t>(offsetof(FsmTime_t334847885_StaticFields, ___frameCountLastUpdate_3)); }
	inline int32_t get_frameCountLastUpdate_3() const { return ___frameCountLastUpdate_3; }
	inline int32_t* get_address_of_frameCountLastUpdate_3() { return &___frameCountLastUpdate_3; }
	inline void set_frameCountLastUpdate_3(int32_t value)
	{
		___frameCountLastUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
