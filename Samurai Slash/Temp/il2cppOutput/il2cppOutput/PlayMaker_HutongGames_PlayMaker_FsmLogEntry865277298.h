#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "PlayMaker_HutongGames_PlayMaker_FsmLogType1161667734.h"

// System.String
struct String_t;
// HutongGames.PlayMaker.FsmLog
struct FsmLog_t3672513366;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2862378169;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;
// HutongGames.PlayMaker.FsmTransition
struct FsmTransition_t1534990431;
// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t630687169;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmLogEntry
struct  FsmLogEntry_t865277298  : public Il2CppObject
{
public:
	// System.String HutongGames.PlayMaker.FsmLogEntry::text
	String_t* ___text_0;
	// System.String HutongGames.PlayMaker.FsmLogEntry::textWithTimecode
	String_t* ___textWithTimecode_1;
	// HutongGames.PlayMaker.FsmLog HutongGames.PlayMaker.FsmLogEntry::<Log>k__BackingField
	FsmLog_t3672513366 * ___U3CLogU3Ek__BackingField_2;
	// HutongGames.PlayMaker.FsmLogType HutongGames.PlayMaker.FsmLogEntry::<LogType>k__BackingField
	int32_t ___U3CLogTypeU3Ek__BackingField_3;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmLogEntry::<State>k__BackingField
	FsmState_t1643911659 * ___U3CStateU3Ek__BackingField_4;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmLogEntry::<SentByState>k__BackingField
	FsmState_t1643911659 * ___U3CSentByStateU3Ek__BackingField_5;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.FsmLogEntry::<Action>k__BackingField
	FsmStateAction_t2862378169 * ___U3CActionU3Ek__BackingField_6;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmLogEntry::<Event>k__BackingField
	FsmEvent_t1258573736 * ___U3CEventU3Ek__BackingField_7;
	// HutongGames.PlayMaker.FsmTransition HutongGames.PlayMaker.FsmLogEntry::<Transition>k__BackingField
	FsmTransition_t1534990431 * ___U3CTransitionU3Ek__BackingField_8;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.FsmLogEntry::<EventTarget>k__BackingField
	FsmEventTarget_t172293745 * ___U3CEventTargetU3Ek__BackingField_9;
	// System.Single HutongGames.PlayMaker.FsmLogEntry::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_10;
	// System.Single HutongGames.PlayMaker.FsmLogEntry::<StateTime>k__BackingField
	float ___U3CStateTimeU3Ek__BackingField_11;
	// System.Int32 HutongGames.PlayMaker.FsmLogEntry::<FrameCount>k__BackingField
	int32_t ___U3CFrameCountU3Ek__BackingField_12;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.FsmLogEntry::<FsmVariablesCopy>k__BackingField
	FsmVariables_t630687169 * ___U3CFsmVariablesCopyU3Ek__BackingField_13;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.FsmLogEntry::<GlobalVariablesCopy>k__BackingField
	FsmVariables_t630687169 * ___U3CGlobalVariablesCopyU3Ek__BackingField_14;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmLogEntry::<GameObject>k__BackingField
	GameObject_t1756533147 * ___U3CGameObjectU3Ek__BackingField_15;
	// System.String HutongGames.PlayMaker.FsmLogEntry::<GameObjectName>k__BackingField
	String_t* ___U3CGameObjectNameU3Ek__BackingField_16;
	// UnityEngine.Texture HutongGames.PlayMaker.FsmLogEntry::<GameObjectIcon>k__BackingField
	Texture_t2243626319 * ___U3CGameObjectIconU3Ek__BackingField_17;
	// System.String HutongGames.PlayMaker.FsmLogEntry::<Text2>k__BackingField
	String_t* ___U3CText2U3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_textWithTimecode_1() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___textWithTimecode_1)); }
	inline String_t* get_textWithTimecode_1() const { return ___textWithTimecode_1; }
	inline String_t** get_address_of_textWithTimecode_1() { return &___textWithTimecode_1; }
	inline void set_textWithTimecode_1(String_t* value)
	{
		___textWithTimecode_1 = value;
		Il2CppCodeGenWriteBarrier(&___textWithTimecode_1, value);
	}

	inline static int32_t get_offset_of_U3CLogU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CLogU3Ek__BackingField_2)); }
	inline FsmLog_t3672513366 * get_U3CLogU3Ek__BackingField_2() const { return ___U3CLogU3Ek__BackingField_2; }
	inline FsmLog_t3672513366 ** get_address_of_U3CLogU3Ek__BackingField_2() { return &___U3CLogU3Ek__BackingField_2; }
	inline void set_U3CLogU3Ek__BackingField_2(FsmLog_t3672513366 * value)
	{
		___U3CLogU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLogU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CLogTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CLogTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CLogTypeU3Ek__BackingField_3() const { return ___U3CLogTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CLogTypeU3Ek__BackingField_3() { return &___U3CLogTypeU3Ek__BackingField_3; }
	inline void set_U3CLogTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CLogTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CStateU3Ek__BackingField_4)); }
	inline FsmState_t1643911659 * get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline FsmState_t1643911659 ** get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(FsmState_t1643911659 * value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStateU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CSentByStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CSentByStateU3Ek__BackingField_5)); }
	inline FsmState_t1643911659 * get_U3CSentByStateU3Ek__BackingField_5() const { return ___U3CSentByStateU3Ek__BackingField_5; }
	inline FsmState_t1643911659 ** get_address_of_U3CSentByStateU3Ek__BackingField_5() { return &___U3CSentByStateU3Ek__BackingField_5; }
	inline void set_U3CSentByStateU3Ek__BackingField_5(FsmState_t1643911659 * value)
	{
		___U3CSentByStateU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSentByStateU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CActionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CActionU3Ek__BackingField_6)); }
	inline FsmStateAction_t2862378169 * get_U3CActionU3Ek__BackingField_6() const { return ___U3CActionU3Ek__BackingField_6; }
	inline FsmStateAction_t2862378169 ** get_address_of_U3CActionU3Ek__BackingField_6() { return &___U3CActionU3Ek__BackingField_6; }
	inline void set_U3CActionU3Ek__BackingField_6(FsmStateAction_t2862378169 * value)
	{
		___U3CActionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CActionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CEventU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CEventU3Ek__BackingField_7)); }
	inline FsmEvent_t1258573736 * get_U3CEventU3Ek__BackingField_7() const { return ___U3CEventU3Ek__BackingField_7; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CEventU3Ek__BackingField_7() { return &___U3CEventU3Ek__BackingField_7; }
	inline void set_U3CEventU3Ek__BackingField_7(FsmEvent_t1258573736 * value)
	{
		___U3CEventU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CTransitionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CTransitionU3Ek__BackingField_8)); }
	inline FsmTransition_t1534990431 * get_U3CTransitionU3Ek__BackingField_8() const { return ___U3CTransitionU3Ek__BackingField_8; }
	inline FsmTransition_t1534990431 ** get_address_of_U3CTransitionU3Ek__BackingField_8() { return &___U3CTransitionU3Ek__BackingField_8; }
	inline void set_U3CTransitionU3Ek__BackingField_8(FsmTransition_t1534990431 * value)
	{
		___U3CTransitionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTransitionU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CEventTargetU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CEventTargetU3Ek__BackingField_9)); }
	inline FsmEventTarget_t172293745 * get_U3CEventTargetU3Ek__BackingField_9() const { return ___U3CEventTargetU3Ek__BackingField_9; }
	inline FsmEventTarget_t172293745 ** get_address_of_U3CEventTargetU3Ek__BackingField_9() { return &___U3CEventTargetU3Ek__BackingField_9; }
	inline void set_U3CEventTargetU3Ek__BackingField_9(FsmEventTarget_t172293745 * value)
	{
		___U3CEventTargetU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventTargetU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CTimeU3Ek__BackingField_10)); }
	inline float get_U3CTimeU3Ek__BackingField_10() const { return ___U3CTimeU3Ek__BackingField_10; }
	inline float* get_address_of_U3CTimeU3Ek__BackingField_10() { return &___U3CTimeU3Ek__BackingField_10; }
	inline void set_U3CTimeU3Ek__BackingField_10(float value)
	{
		___U3CTimeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CStateTimeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CStateTimeU3Ek__BackingField_11)); }
	inline float get_U3CStateTimeU3Ek__BackingField_11() const { return ___U3CStateTimeU3Ek__BackingField_11; }
	inline float* get_address_of_U3CStateTimeU3Ek__BackingField_11() { return &___U3CStateTimeU3Ek__BackingField_11; }
	inline void set_U3CStateTimeU3Ek__BackingField_11(float value)
	{
		___U3CStateTimeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CFrameCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CFrameCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CFrameCountU3Ek__BackingField_12() const { return ___U3CFrameCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CFrameCountU3Ek__BackingField_12() { return &___U3CFrameCountU3Ek__BackingField_12; }
	inline void set_U3CFrameCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CFrameCountU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CFsmVariablesCopyU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CFsmVariablesCopyU3Ek__BackingField_13)); }
	inline FsmVariables_t630687169 * get_U3CFsmVariablesCopyU3Ek__BackingField_13() const { return ___U3CFsmVariablesCopyU3Ek__BackingField_13; }
	inline FsmVariables_t630687169 ** get_address_of_U3CFsmVariablesCopyU3Ek__BackingField_13() { return &___U3CFsmVariablesCopyU3Ek__BackingField_13; }
	inline void set_U3CFsmVariablesCopyU3Ek__BackingField_13(FsmVariables_t630687169 * value)
	{
		___U3CFsmVariablesCopyU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFsmVariablesCopyU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CGlobalVariablesCopyU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CGlobalVariablesCopyU3Ek__BackingField_14)); }
	inline FsmVariables_t630687169 * get_U3CGlobalVariablesCopyU3Ek__BackingField_14() const { return ___U3CGlobalVariablesCopyU3Ek__BackingField_14; }
	inline FsmVariables_t630687169 ** get_address_of_U3CGlobalVariablesCopyU3Ek__BackingField_14() { return &___U3CGlobalVariablesCopyU3Ek__BackingField_14; }
	inline void set_U3CGlobalVariablesCopyU3Ek__BackingField_14(FsmVariables_t630687169 * value)
	{
		___U3CGlobalVariablesCopyU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGlobalVariablesCopyU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CGameObjectU3Ek__BackingField_15)); }
	inline GameObject_t1756533147 * get_U3CGameObjectU3Ek__BackingField_15() const { return ___U3CGameObjectU3Ek__BackingField_15; }
	inline GameObject_t1756533147 ** get_address_of_U3CGameObjectU3Ek__BackingField_15() { return &___U3CGameObjectU3Ek__BackingField_15; }
	inline void set_U3CGameObjectU3Ek__BackingField_15(GameObject_t1756533147 * value)
	{
		___U3CGameObjectU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameObjectU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CGameObjectNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CGameObjectNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CGameObjectNameU3Ek__BackingField_16() const { return ___U3CGameObjectNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CGameObjectNameU3Ek__BackingField_16() { return &___U3CGameObjectNameU3Ek__BackingField_16; }
	inline void set_U3CGameObjectNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CGameObjectNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameObjectNameU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CGameObjectIconU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CGameObjectIconU3Ek__BackingField_17)); }
	inline Texture_t2243626319 * get_U3CGameObjectIconU3Ek__BackingField_17() const { return ___U3CGameObjectIconU3Ek__BackingField_17; }
	inline Texture_t2243626319 ** get_address_of_U3CGameObjectIconU3Ek__BackingField_17() { return &___U3CGameObjectIconU3Ek__BackingField_17; }
	inline void set_U3CGameObjectIconU3Ek__BackingField_17(Texture_t2243626319 * value)
	{
		___U3CGameObjectIconU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameObjectIconU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CText2U3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FsmLogEntry_t865277298, ___U3CText2U3Ek__BackingField_18)); }
	inline String_t* get_U3CText2U3Ek__BackingField_18() const { return ___U3CText2U3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CText2U3Ek__BackingField_18() { return &___U3CText2U3Ek__BackingField_18; }
	inline void set_U3CText2U3Ek__BackingField_18(String_t* value)
	{
		___U3CText2U3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CText2U3Ek__BackingField_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
