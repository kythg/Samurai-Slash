#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmLog>
struct List_1_t3041634498;
// HutongGames.PlayMaker.FsmLogEntry[]
struct FsmLogEntryU5BU5D_t2612624519;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmLogEntry>
struct List_1_t234398430;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmLog
struct  FsmLog_t3672513366  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmLogEntry> HutongGames.PlayMaker.FsmLog::entries
	List_1_t234398430 * ___entries_4;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmLog::<Fsm>k__BackingField
	Fsm_t917886356 * ___U3CFsmU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366, ___entries_4)); }
	inline List_1_t234398430 * get_entries_4() const { return ___entries_4; }
	inline List_1_t234398430 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(List_1_t234398430 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier(&___entries_4, value);
	}

	inline static int32_t get_offset_of_U3CFsmU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366, ___U3CFsmU3Ek__BackingField_8)); }
	inline Fsm_t917886356 * get_U3CFsmU3Ek__BackingField_8() const { return ___U3CFsmU3Ek__BackingField_8; }
	inline Fsm_t917886356 ** get_address_of_U3CFsmU3Ek__BackingField_8() { return &___U3CFsmU3Ek__BackingField_8; }
	inline void set_U3CFsmU3Ek__BackingField_8(Fsm_t917886356 * value)
	{
		___U3CFsmU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFsmU3Ek__BackingField_8, value);
	}
};

struct FsmLog_t3672513366_StaticFields
{
public:
	// System.Int32 HutongGames.PlayMaker.FsmLog::MaxSize
	int32_t ___MaxSize_0;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmLog> HutongGames.PlayMaker.FsmLog::Logs
	List_1_t3041634498 * ___Logs_1;
	// HutongGames.PlayMaker.FsmLogEntry[] HutongGames.PlayMaker.FsmLog::logEntryPool
	FsmLogEntryU5BU5D_t2612624519* ___logEntryPool_2;
	// System.Int32 HutongGames.PlayMaker.FsmLog::nextLogEntryPoolIndex
	int32_t ___nextLogEntryPoolIndex_3;
	// System.Boolean HutongGames.PlayMaker.FsmLog::<LoggingEnabled>k__BackingField
	bool ___U3CLoggingEnabledU3Ek__BackingField_5;
	// System.Boolean HutongGames.PlayMaker.FsmLog::<MirrorDebugLog>k__BackingField
	bool ___U3CMirrorDebugLogU3Ek__BackingField_6;
	// System.Boolean HutongGames.PlayMaker.FsmLog::<EnableDebugFlow>k__BackingField
	bool ___U3CEnableDebugFlowU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_MaxSize_0() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___MaxSize_0)); }
	inline int32_t get_MaxSize_0() const { return ___MaxSize_0; }
	inline int32_t* get_address_of_MaxSize_0() { return &___MaxSize_0; }
	inline void set_MaxSize_0(int32_t value)
	{
		___MaxSize_0 = value;
	}

	inline static int32_t get_offset_of_Logs_1() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___Logs_1)); }
	inline List_1_t3041634498 * get_Logs_1() const { return ___Logs_1; }
	inline List_1_t3041634498 ** get_address_of_Logs_1() { return &___Logs_1; }
	inline void set_Logs_1(List_1_t3041634498 * value)
	{
		___Logs_1 = value;
		Il2CppCodeGenWriteBarrier(&___Logs_1, value);
	}

	inline static int32_t get_offset_of_logEntryPool_2() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___logEntryPool_2)); }
	inline FsmLogEntryU5BU5D_t2612624519* get_logEntryPool_2() const { return ___logEntryPool_2; }
	inline FsmLogEntryU5BU5D_t2612624519** get_address_of_logEntryPool_2() { return &___logEntryPool_2; }
	inline void set_logEntryPool_2(FsmLogEntryU5BU5D_t2612624519* value)
	{
		___logEntryPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___logEntryPool_2, value);
	}

	inline static int32_t get_offset_of_nextLogEntryPoolIndex_3() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___nextLogEntryPoolIndex_3)); }
	inline int32_t get_nextLogEntryPoolIndex_3() const { return ___nextLogEntryPoolIndex_3; }
	inline int32_t* get_address_of_nextLogEntryPoolIndex_3() { return &___nextLogEntryPoolIndex_3; }
	inline void set_nextLogEntryPoolIndex_3(int32_t value)
	{
		___nextLogEntryPoolIndex_3 = value;
	}

	inline static int32_t get_offset_of_U3CLoggingEnabledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___U3CLoggingEnabledU3Ek__BackingField_5)); }
	inline bool get_U3CLoggingEnabledU3Ek__BackingField_5() const { return ___U3CLoggingEnabledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CLoggingEnabledU3Ek__BackingField_5() { return &___U3CLoggingEnabledU3Ek__BackingField_5; }
	inline void set_U3CLoggingEnabledU3Ek__BackingField_5(bool value)
	{
		___U3CLoggingEnabledU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMirrorDebugLogU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___U3CMirrorDebugLogU3Ek__BackingField_6)); }
	inline bool get_U3CMirrorDebugLogU3Ek__BackingField_6() const { return ___U3CMirrorDebugLogU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CMirrorDebugLogU3Ek__BackingField_6() { return &___U3CMirrorDebugLogU3Ek__BackingField_6; }
	inline void set_U3CMirrorDebugLogU3Ek__BackingField_6(bool value)
	{
		___U3CMirrorDebugLogU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnableDebugFlowU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FsmLog_t3672513366_StaticFields, ___U3CEnableDebugFlowU3Ek__BackingField_7)); }
	inline bool get_U3CEnableDebugFlowU3Ek__BackingField_7() const { return ___U3CEnableDebugFlowU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CEnableDebugFlowU3Ek__BackingField_7() { return &___U3CEnableDebugFlowU3Ek__BackingField_7; }
	inline void set_U3CEnableDebugFlowU3Ek__BackingField_7(bool value)
	{
		___U3CEnableDebugFlowU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
