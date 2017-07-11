#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent>
struct List_1_t627694868;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmEvent
struct  FsmEvent_t1258573736  : public Il2CppObject
{
public:
	// System.String HutongGames.PlayMaker.FsmEvent::name
	String_t* ___name_2;
	// System.Boolean HutongGames.PlayMaker.FsmEvent::isSystemEvent
	bool ___isSystemEvent_3;
	// System.Boolean HutongGames.PlayMaker.FsmEvent::isGlobal
	bool ___isGlobal_4;
	// System.String HutongGames.PlayMaker.FsmEvent::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_isSystemEvent_3() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736, ___isSystemEvent_3)); }
	inline bool get_isSystemEvent_3() const { return ___isSystemEvent_3; }
	inline bool* get_address_of_isSystemEvent_3() { return &___isSystemEvent_3; }
	inline void set_isSystemEvent_3(bool value)
	{
		___isSystemEvent_3 = value;
	}

	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736, ___U3CPathU3Ek__BackingField_5)); }
	inline String_t* get_U3CPathU3Ek__BackingField_5() const { return ___U3CPathU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_5() { return &___U3CPathU3Ek__BackingField_5; }
	inline void set_U3CPathU3Ek__BackingField_5(String_t* value)
	{
		___U3CPathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_5, value);
	}
};

struct FsmEvent_t1258573736_StaticFields
{
public:
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.FsmEvent::eventList
	List_1_t627694868 * ___eventList_0;
	// System.Object HutongGames.PlayMaker.FsmEvent::syncObj
	Il2CppObject * ___syncObj_1;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<BecameInvisible>k__BackingField
	FsmEvent_t1258573736 * ___U3CBecameInvisibleU3Ek__BackingField_6;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<BecameVisible>k__BackingField
	FsmEvent_t1258573736 * ___U3CBecameVisibleU3Ek__BackingField_7;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionEnter>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionEnterU3Ek__BackingField_8;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionExit>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionExitU3Ek__BackingField_9;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionStay>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionStayU3Ek__BackingField_10;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionEnter2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionEnter2DU3Ek__BackingField_11;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionExit2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionExit2DU3Ek__BackingField_12;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<CollisionStay2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CCollisionStay2DU3Ek__BackingField_13;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ControllerColliderHit>k__BackingField
	FsmEvent_t1258573736 * ___U3CControllerColliderHitU3Ek__BackingField_14;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<Finished>k__BackingField
	FsmEvent_t1258573736 * ___U3CFinishedU3Ek__BackingField_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<LevelLoaded>k__BackingField
	FsmEvent_t1258573736 * ___U3CLevelLoadedU3Ek__BackingField_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseDown>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseDownU3Ek__BackingField_17;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseDrag>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseDragU3Ek__BackingField_18;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseEnter>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseEnterU3Ek__BackingField_19;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseExit>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseExitU3Ek__BackingField_20;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseOver>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseOverU3Ek__BackingField_21;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseUp>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseUpU3Ek__BackingField_22;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MouseUpAsButton>k__BackingField
	FsmEvent_t1258573736 * ___U3CMouseUpAsButtonU3Ek__BackingField_23;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerEnter>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerEnterU3Ek__BackingField_24;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerExit>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerExitU3Ek__BackingField_25;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerStay>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerStayU3Ek__BackingField_26;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerEnter2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerEnter2DU3Ek__BackingField_27;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerExit2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerExit2DU3Ek__BackingField_28;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<TriggerStay2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CTriggerStay2DU3Ek__BackingField_29;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationFocus>k__BackingField
	FsmEvent_t1258573736 * ___U3CApplicationFocusU3Ek__BackingField_30;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationPause>k__BackingField
	FsmEvent_t1258573736 * ___U3CApplicationPauseU3Ek__BackingField_31;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ApplicationQuit>k__BackingField
	FsmEvent_t1258573736 * ___U3CApplicationQuitU3Ek__BackingField_32;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ParticleCollision>k__BackingField
	FsmEvent_t1258573736 * ___U3CParticleCollisionU3Ek__BackingField_33;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<JointBreak>k__BackingField
	FsmEvent_t1258573736 * ___U3CJointBreakU3Ek__BackingField_34;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<JointBreak2D>k__BackingField
	FsmEvent_t1258573736 * ___U3CJointBreak2DU3Ek__BackingField_35;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<PlayerConnected>k__BackingField
	FsmEvent_t1258573736 * ___U3CPlayerConnectedU3Ek__BackingField_36;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ServerInitialized>k__BackingField
	FsmEvent_t1258573736 * ___U3CServerInitializedU3Ek__BackingField_37;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<ConnectedToServer>k__BackingField
	FsmEvent_t1258573736 * ___U3CConnectedToServerU3Ek__BackingField_38;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<PlayerDisconnected>k__BackingField
	FsmEvent_t1258573736 * ___U3CPlayerDisconnectedU3Ek__BackingField_39;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<DisconnectedFromServer>k__BackingField
	FsmEvent_t1258573736 * ___U3CDisconnectedFromServerU3Ek__BackingField_40;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<FailedToConnect>k__BackingField
	FsmEvent_t1258573736 * ___U3CFailedToConnectU3Ek__BackingField_41;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<FailedToConnectToMasterServer>k__BackingField
	FsmEvent_t1258573736 * ___U3CFailedToConnectToMasterServerU3Ek__BackingField_42;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<MasterServerEvent>k__BackingField
	FsmEvent_t1258573736 * ___U3CMasterServerEventU3Ek__BackingField_43;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.FsmEvent::<NetworkInstantiate>k__BackingField
	FsmEvent_t1258573736 * ___U3CNetworkInstantiateU3Ek__BackingField_44;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___eventList_0)); }
	inline List_1_t627694868 * get_eventList_0() const { return ___eventList_0; }
	inline List_1_t627694868 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(List_1_t627694868 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventList_0, value);
	}

	inline static int32_t get_offset_of_syncObj_1() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___syncObj_1)); }
	inline Il2CppObject * get_syncObj_1() const { return ___syncObj_1; }
	inline Il2CppObject ** get_address_of_syncObj_1() { return &___syncObj_1; }
	inline void set_syncObj_1(Il2CppObject * value)
	{
		___syncObj_1 = value;
		Il2CppCodeGenWriteBarrier(&___syncObj_1, value);
	}

	inline static int32_t get_offset_of_U3CBecameInvisibleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CBecameInvisibleU3Ek__BackingField_6)); }
	inline FsmEvent_t1258573736 * get_U3CBecameInvisibleU3Ek__BackingField_6() const { return ___U3CBecameInvisibleU3Ek__BackingField_6; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CBecameInvisibleU3Ek__BackingField_6() { return &___U3CBecameInvisibleU3Ek__BackingField_6; }
	inline void set_U3CBecameInvisibleU3Ek__BackingField_6(FsmEvent_t1258573736 * value)
	{
		___U3CBecameInvisibleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBecameInvisibleU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CBecameVisibleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CBecameVisibleU3Ek__BackingField_7)); }
	inline FsmEvent_t1258573736 * get_U3CBecameVisibleU3Ek__BackingField_7() const { return ___U3CBecameVisibleU3Ek__BackingField_7; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CBecameVisibleU3Ek__BackingField_7() { return &___U3CBecameVisibleU3Ek__BackingField_7; }
	inline void set_U3CBecameVisibleU3Ek__BackingField_7(FsmEvent_t1258573736 * value)
	{
		___U3CBecameVisibleU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBecameVisibleU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CCollisionEnterU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionEnterU3Ek__BackingField_8)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionEnterU3Ek__BackingField_8() const { return ___U3CCollisionEnterU3Ek__BackingField_8; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionEnterU3Ek__BackingField_8() { return &___U3CCollisionEnterU3Ek__BackingField_8; }
	inline void set_U3CCollisionEnterU3Ek__BackingField_8(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionEnterU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionEnterU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CCollisionExitU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionExitU3Ek__BackingField_9)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionExitU3Ek__BackingField_9() const { return ___U3CCollisionExitU3Ek__BackingField_9; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionExitU3Ek__BackingField_9() { return &___U3CCollisionExitU3Ek__BackingField_9; }
	inline void set_U3CCollisionExitU3Ek__BackingField_9(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionExitU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionExitU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CCollisionStayU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionStayU3Ek__BackingField_10)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionStayU3Ek__BackingField_10() const { return ___U3CCollisionStayU3Ek__BackingField_10; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionStayU3Ek__BackingField_10() { return &___U3CCollisionStayU3Ek__BackingField_10; }
	inline void set_U3CCollisionStayU3Ek__BackingField_10(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionStayU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionStayU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CCollisionEnter2DU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionEnter2DU3Ek__BackingField_11)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionEnter2DU3Ek__BackingField_11() const { return ___U3CCollisionEnter2DU3Ek__BackingField_11; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionEnter2DU3Ek__BackingField_11() { return &___U3CCollisionEnter2DU3Ek__BackingField_11; }
	inline void set_U3CCollisionEnter2DU3Ek__BackingField_11(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionEnter2DU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionEnter2DU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CCollisionExit2DU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionExit2DU3Ek__BackingField_12)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionExit2DU3Ek__BackingField_12() const { return ___U3CCollisionExit2DU3Ek__BackingField_12; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionExit2DU3Ek__BackingField_12() { return &___U3CCollisionExit2DU3Ek__BackingField_12; }
	inline void set_U3CCollisionExit2DU3Ek__BackingField_12(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionExit2DU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionExit2DU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CCollisionStay2DU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CCollisionStay2DU3Ek__BackingField_13)); }
	inline FsmEvent_t1258573736 * get_U3CCollisionStay2DU3Ek__BackingField_13() const { return ___U3CCollisionStay2DU3Ek__BackingField_13; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CCollisionStay2DU3Ek__BackingField_13() { return &___U3CCollisionStay2DU3Ek__BackingField_13; }
	inline void set_U3CCollisionStay2DU3Ek__BackingField_13(FsmEvent_t1258573736 * value)
	{
		___U3CCollisionStay2DU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionStay2DU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CControllerColliderHitU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CControllerColliderHitU3Ek__BackingField_14)); }
	inline FsmEvent_t1258573736 * get_U3CControllerColliderHitU3Ek__BackingField_14() const { return ___U3CControllerColliderHitU3Ek__BackingField_14; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CControllerColliderHitU3Ek__BackingField_14() { return &___U3CControllerColliderHitU3Ek__BackingField_14; }
	inline void set_U3CControllerColliderHitU3Ek__BackingField_14(FsmEvent_t1258573736 * value)
	{
		___U3CControllerColliderHitU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControllerColliderHitU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CFinishedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CFinishedU3Ek__BackingField_15)); }
	inline FsmEvent_t1258573736 * get_U3CFinishedU3Ek__BackingField_15() const { return ___U3CFinishedU3Ek__BackingField_15; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CFinishedU3Ek__BackingField_15() { return &___U3CFinishedU3Ek__BackingField_15; }
	inline void set_U3CFinishedU3Ek__BackingField_15(FsmEvent_t1258573736 * value)
	{
		___U3CFinishedU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFinishedU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CLevelLoadedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CLevelLoadedU3Ek__BackingField_16)); }
	inline FsmEvent_t1258573736 * get_U3CLevelLoadedU3Ek__BackingField_16() const { return ___U3CLevelLoadedU3Ek__BackingField_16; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CLevelLoadedU3Ek__BackingField_16() { return &___U3CLevelLoadedU3Ek__BackingField_16; }
	inline void set_U3CLevelLoadedU3Ek__BackingField_16(FsmEvent_t1258573736 * value)
	{
		___U3CLevelLoadedU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLevelLoadedU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CMouseDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseDownU3Ek__BackingField_17)); }
	inline FsmEvent_t1258573736 * get_U3CMouseDownU3Ek__BackingField_17() const { return ___U3CMouseDownU3Ek__BackingField_17; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseDownU3Ek__BackingField_17() { return &___U3CMouseDownU3Ek__BackingField_17; }
	inline void set_U3CMouseDownU3Ek__BackingField_17(FsmEvent_t1258573736 * value)
	{
		___U3CMouseDownU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseDownU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CMouseDragU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseDragU3Ek__BackingField_18)); }
	inline FsmEvent_t1258573736 * get_U3CMouseDragU3Ek__BackingField_18() const { return ___U3CMouseDragU3Ek__BackingField_18; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseDragU3Ek__BackingField_18() { return &___U3CMouseDragU3Ek__BackingField_18; }
	inline void set_U3CMouseDragU3Ek__BackingField_18(FsmEvent_t1258573736 * value)
	{
		___U3CMouseDragU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseDragU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CMouseEnterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseEnterU3Ek__BackingField_19)); }
	inline FsmEvent_t1258573736 * get_U3CMouseEnterU3Ek__BackingField_19() const { return ___U3CMouseEnterU3Ek__BackingField_19; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseEnterU3Ek__BackingField_19() { return &___U3CMouseEnterU3Ek__BackingField_19; }
	inline void set_U3CMouseEnterU3Ek__BackingField_19(FsmEvent_t1258573736 * value)
	{
		___U3CMouseEnterU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseEnterU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3CMouseExitU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseExitU3Ek__BackingField_20)); }
	inline FsmEvent_t1258573736 * get_U3CMouseExitU3Ek__BackingField_20() const { return ___U3CMouseExitU3Ek__BackingField_20; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseExitU3Ek__BackingField_20() { return &___U3CMouseExitU3Ek__BackingField_20; }
	inline void set_U3CMouseExitU3Ek__BackingField_20(FsmEvent_t1258573736 * value)
	{
		___U3CMouseExitU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseExitU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3CMouseOverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseOverU3Ek__BackingField_21)); }
	inline FsmEvent_t1258573736 * get_U3CMouseOverU3Ek__BackingField_21() const { return ___U3CMouseOverU3Ek__BackingField_21; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseOverU3Ek__BackingField_21() { return &___U3CMouseOverU3Ek__BackingField_21; }
	inline void set_U3CMouseOverU3Ek__BackingField_21(FsmEvent_t1258573736 * value)
	{
		___U3CMouseOverU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseOverU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CMouseUpU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseUpU3Ek__BackingField_22)); }
	inline FsmEvent_t1258573736 * get_U3CMouseUpU3Ek__BackingField_22() const { return ___U3CMouseUpU3Ek__BackingField_22; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseUpU3Ek__BackingField_22() { return &___U3CMouseUpU3Ek__BackingField_22; }
	inline void set_U3CMouseUpU3Ek__BackingField_22(FsmEvent_t1258573736 * value)
	{
		___U3CMouseUpU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseUpU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_U3CMouseUpAsButtonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMouseUpAsButtonU3Ek__BackingField_23)); }
	inline FsmEvent_t1258573736 * get_U3CMouseUpAsButtonU3Ek__BackingField_23() const { return ___U3CMouseUpAsButtonU3Ek__BackingField_23; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMouseUpAsButtonU3Ek__BackingField_23() { return &___U3CMouseUpAsButtonU3Ek__BackingField_23; }
	inline void set_U3CMouseUpAsButtonU3Ek__BackingField_23(FsmEvent_t1258573736 * value)
	{
		___U3CMouseUpAsButtonU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMouseUpAsButtonU3Ek__BackingField_23, value);
	}

	inline static int32_t get_offset_of_U3CTriggerEnterU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerEnterU3Ek__BackingField_24)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerEnterU3Ek__BackingField_24() const { return ___U3CTriggerEnterU3Ek__BackingField_24; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerEnterU3Ek__BackingField_24() { return &___U3CTriggerEnterU3Ek__BackingField_24; }
	inline void set_U3CTriggerEnterU3Ek__BackingField_24(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerEnterU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerEnterU3Ek__BackingField_24, value);
	}

	inline static int32_t get_offset_of_U3CTriggerExitU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerExitU3Ek__BackingField_25)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerExitU3Ek__BackingField_25() const { return ___U3CTriggerExitU3Ek__BackingField_25; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerExitU3Ek__BackingField_25() { return &___U3CTriggerExitU3Ek__BackingField_25; }
	inline void set_U3CTriggerExitU3Ek__BackingField_25(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerExitU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerExitU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3CTriggerStayU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerStayU3Ek__BackingField_26)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerStayU3Ek__BackingField_26() const { return ___U3CTriggerStayU3Ek__BackingField_26; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerStayU3Ek__BackingField_26() { return &___U3CTriggerStayU3Ek__BackingField_26; }
	inline void set_U3CTriggerStayU3Ek__BackingField_26(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerStayU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerStayU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_U3CTriggerEnter2DU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerEnter2DU3Ek__BackingField_27)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerEnter2DU3Ek__BackingField_27() const { return ___U3CTriggerEnter2DU3Ek__BackingField_27; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerEnter2DU3Ek__BackingField_27() { return &___U3CTriggerEnter2DU3Ek__BackingField_27; }
	inline void set_U3CTriggerEnter2DU3Ek__BackingField_27(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerEnter2DU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerEnter2DU3Ek__BackingField_27, value);
	}

	inline static int32_t get_offset_of_U3CTriggerExit2DU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerExit2DU3Ek__BackingField_28)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerExit2DU3Ek__BackingField_28() const { return ___U3CTriggerExit2DU3Ek__BackingField_28; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerExit2DU3Ek__BackingField_28() { return &___U3CTriggerExit2DU3Ek__BackingField_28; }
	inline void set_U3CTriggerExit2DU3Ek__BackingField_28(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerExit2DU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerExit2DU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3CTriggerStay2DU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CTriggerStay2DU3Ek__BackingField_29)); }
	inline FsmEvent_t1258573736 * get_U3CTriggerStay2DU3Ek__BackingField_29() const { return ___U3CTriggerStay2DU3Ek__BackingField_29; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CTriggerStay2DU3Ek__BackingField_29() { return &___U3CTriggerStay2DU3Ek__BackingField_29; }
	inline void set_U3CTriggerStay2DU3Ek__BackingField_29(FsmEvent_t1258573736 * value)
	{
		___U3CTriggerStay2DU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerStay2DU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CApplicationFocusU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CApplicationFocusU3Ek__BackingField_30)); }
	inline FsmEvent_t1258573736 * get_U3CApplicationFocusU3Ek__BackingField_30() const { return ___U3CApplicationFocusU3Ek__BackingField_30; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CApplicationFocusU3Ek__BackingField_30() { return &___U3CApplicationFocusU3Ek__BackingField_30; }
	inline void set_U3CApplicationFocusU3Ek__BackingField_30(FsmEvent_t1258573736 * value)
	{
		___U3CApplicationFocusU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CApplicationFocusU3Ek__BackingField_30, value);
	}

	inline static int32_t get_offset_of_U3CApplicationPauseU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CApplicationPauseU3Ek__BackingField_31)); }
	inline FsmEvent_t1258573736 * get_U3CApplicationPauseU3Ek__BackingField_31() const { return ___U3CApplicationPauseU3Ek__BackingField_31; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CApplicationPauseU3Ek__BackingField_31() { return &___U3CApplicationPauseU3Ek__BackingField_31; }
	inline void set_U3CApplicationPauseU3Ek__BackingField_31(FsmEvent_t1258573736 * value)
	{
		___U3CApplicationPauseU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CApplicationPauseU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3CApplicationQuitU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CApplicationQuitU3Ek__BackingField_32)); }
	inline FsmEvent_t1258573736 * get_U3CApplicationQuitU3Ek__BackingField_32() const { return ___U3CApplicationQuitU3Ek__BackingField_32; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CApplicationQuitU3Ek__BackingField_32() { return &___U3CApplicationQuitU3Ek__BackingField_32; }
	inline void set_U3CApplicationQuitU3Ek__BackingField_32(FsmEvent_t1258573736 * value)
	{
		___U3CApplicationQuitU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CApplicationQuitU3Ek__BackingField_32, value);
	}

	inline static int32_t get_offset_of_U3CParticleCollisionU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CParticleCollisionU3Ek__BackingField_33)); }
	inline FsmEvent_t1258573736 * get_U3CParticleCollisionU3Ek__BackingField_33() const { return ___U3CParticleCollisionU3Ek__BackingField_33; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CParticleCollisionU3Ek__BackingField_33() { return &___U3CParticleCollisionU3Ek__BackingField_33; }
	inline void set_U3CParticleCollisionU3Ek__BackingField_33(FsmEvent_t1258573736 * value)
	{
		___U3CParticleCollisionU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParticleCollisionU3Ek__BackingField_33, value);
	}

	inline static int32_t get_offset_of_U3CJointBreakU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CJointBreakU3Ek__BackingField_34)); }
	inline FsmEvent_t1258573736 * get_U3CJointBreakU3Ek__BackingField_34() const { return ___U3CJointBreakU3Ek__BackingField_34; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CJointBreakU3Ek__BackingField_34() { return &___U3CJointBreakU3Ek__BackingField_34; }
	inline void set_U3CJointBreakU3Ek__BackingField_34(FsmEvent_t1258573736 * value)
	{
		___U3CJointBreakU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CJointBreakU3Ek__BackingField_34, value);
	}

	inline static int32_t get_offset_of_U3CJointBreak2DU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CJointBreak2DU3Ek__BackingField_35)); }
	inline FsmEvent_t1258573736 * get_U3CJointBreak2DU3Ek__BackingField_35() const { return ___U3CJointBreak2DU3Ek__BackingField_35; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CJointBreak2DU3Ek__BackingField_35() { return &___U3CJointBreak2DU3Ek__BackingField_35; }
	inline void set_U3CJointBreak2DU3Ek__BackingField_35(FsmEvent_t1258573736 * value)
	{
		___U3CJointBreak2DU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CJointBreak2DU3Ek__BackingField_35, value);
	}

	inline static int32_t get_offset_of_U3CPlayerConnectedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CPlayerConnectedU3Ek__BackingField_36)); }
	inline FsmEvent_t1258573736 * get_U3CPlayerConnectedU3Ek__BackingField_36() const { return ___U3CPlayerConnectedU3Ek__BackingField_36; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CPlayerConnectedU3Ek__BackingField_36() { return &___U3CPlayerConnectedU3Ek__BackingField_36; }
	inline void set_U3CPlayerConnectedU3Ek__BackingField_36(FsmEvent_t1258573736 * value)
	{
		___U3CPlayerConnectedU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlayerConnectedU3Ek__BackingField_36, value);
	}

	inline static int32_t get_offset_of_U3CServerInitializedU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CServerInitializedU3Ek__BackingField_37)); }
	inline FsmEvent_t1258573736 * get_U3CServerInitializedU3Ek__BackingField_37() const { return ___U3CServerInitializedU3Ek__BackingField_37; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CServerInitializedU3Ek__BackingField_37() { return &___U3CServerInitializedU3Ek__BackingField_37; }
	inline void set_U3CServerInitializedU3Ek__BackingField_37(FsmEvent_t1258573736 * value)
	{
		___U3CServerInitializedU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CServerInitializedU3Ek__BackingField_37, value);
	}

	inline static int32_t get_offset_of_U3CConnectedToServerU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CConnectedToServerU3Ek__BackingField_38)); }
	inline FsmEvent_t1258573736 * get_U3CConnectedToServerU3Ek__BackingField_38() const { return ___U3CConnectedToServerU3Ek__BackingField_38; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CConnectedToServerU3Ek__BackingField_38() { return &___U3CConnectedToServerU3Ek__BackingField_38; }
	inline void set_U3CConnectedToServerU3Ek__BackingField_38(FsmEvent_t1258573736 * value)
	{
		___U3CConnectedToServerU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConnectedToServerU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_U3CPlayerDisconnectedU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CPlayerDisconnectedU3Ek__BackingField_39)); }
	inline FsmEvent_t1258573736 * get_U3CPlayerDisconnectedU3Ek__BackingField_39() const { return ___U3CPlayerDisconnectedU3Ek__BackingField_39; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CPlayerDisconnectedU3Ek__BackingField_39() { return &___U3CPlayerDisconnectedU3Ek__BackingField_39; }
	inline void set_U3CPlayerDisconnectedU3Ek__BackingField_39(FsmEvent_t1258573736 * value)
	{
		___U3CPlayerDisconnectedU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlayerDisconnectedU3Ek__BackingField_39, value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedFromServerU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CDisconnectedFromServerU3Ek__BackingField_40)); }
	inline FsmEvent_t1258573736 * get_U3CDisconnectedFromServerU3Ek__BackingField_40() const { return ___U3CDisconnectedFromServerU3Ek__BackingField_40; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CDisconnectedFromServerU3Ek__BackingField_40() { return &___U3CDisconnectedFromServerU3Ek__BackingField_40; }
	inline void set_U3CDisconnectedFromServerU3Ek__BackingField_40(FsmEvent_t1258573736 * value)
	{
		___U3CDisconnectedFromServerU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDisconnectedFromServerU3Ek__BackingField_40, value);
	}

	inline static int32_t get_offset_of_U3CFailedToConnectU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CFailedToConnectU3Ek__BackingField_41)); }
	inline FsmEvent_t1258573736 * get_U3CFailedToConnectU3Ek__BackingField_41() const { return ___U3CFailedToConnectU3Ek__BackingField_41; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CFailedToConnectU3Ek__BackingField_41() { return &___U3CFailedToConnectU3Ek__BackingField_41; }
	inline void set_U3CFailedToConnectU3Ek__BackingField_41(FsmEvent_t1258573736 * value)
	{
		___U3CFailedToConnectU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFailedToConnectU3Ek__BackingField_41, value);
	}

	inline static int32_t get_offset_of_U3CFailedToConnectToMasterServerU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CFailedToConnectToMasterServerU3Ek__BackingField_42)); }
	inline FsmEvent_t1258573736 * get_U3CFailedToConnectToMasterServerU3Ek__BackingField_42() const { return ___U3CFailedToConnectToMasterServerU3Ek__BackingField_42; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CFailedToConnectToMasterServerU3Ek__BackingField_42() { return &___U3CFailedToConnectToMasterServerU3Ek__BackingField_42; }
	inline void set_U3CFailedToConnectToMasterServerU3Ek__BackingField_42(FsmEvent_t1258573736 * value)
	{
		___U3CFailedToConnectToMasterServerU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFailedToConnectToMasterServerU3Ek__BackingField_42, value);
	}

	inline static int32_t get_offset_of_U3CMasterServerEventU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CMasterServerEventU3Ek__BackingField_43)); }
	inline FsmEvent_t1258573736 * get_U3CMasterServerEventU3Ek__BackingField_43() const { return ___U3CMasterServerEventU3Ek__BackingField_43; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CMasterServerEventU3Ek__BackingField_43() { return &___U3CMasterServerEventU3Ek__BackingField_43; }
	inline void set_U3CMasterServerEventU3Ek__BackingField_43(FsmEvent_t1258573736 * value)
	{
		___U3CMasterServerEventU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMasterServerEventU3Ek__BackingField_43, value);
	}

	inline static int32_t get_offset_of_U3CNetworkInstantiateU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(FsmEvent_t1258573736_StaticFields, ___U3CNetworkInstantiateU3Ek__BackingField_44)); }
	inline FsmEvent_t1258573736 * get_U3CNetworkInstantiateU3Ek__BackingField_44() const { return ___U3CNetworkInstantiateU3Ek__BackingField_44; }
	inline FsmEvent_t1258573736 ** get_address_of_U3CNetworkInstantiateU3Ek__BackingField_44() { return &___U3CNetworkInstantiateU3Ek__BackingField_44; }
	inline void set_U3CNetworkInstantiateU3Ek__BackingField_44(FsmEvent_t1258573736 * value)
	{
		___U3CNetworkInstantiateU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNetworkInstantiateU3Ek__BackingField_44, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
