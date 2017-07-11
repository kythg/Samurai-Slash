#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "PlayMaker_HutongGames_PlayMaker_Fsm_EditorFlags125951225.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// HutongGames.PlayMaker.FsmEventData
struct FsmEventData_t2110469976;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// FsmTemplate
struct FsmTemplate_t1285897084;
// HutongGames.PlayMaker.FsmState[]
struct FsmStateU5BU5D_t1586422282;
// HutongGames.PlayMaker.FsmEvent[]
struct FsmEventU5BU5D_t287863993;
// HutongGames.PlayMaker.FsmTransition[]
struct FsmTransitionU5BU5D_t1091630918;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t630687169;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm>
struct List_1_t287007488;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent>
struct List_1_t627694868;
// HutongGames.PlayMaker.FsmLog
struct FsmLog_t3672513366;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent>
struct List_1_t993821960;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D>
struct Dictionary_2_t2746488205;
// HutongGames.PlayMaker.FsmEventTarget
struct FsmEventTarget_t172293745;
// HutongGames.PlayMaker.FsmTransition
struct FsmTransition_t1534990431;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Joint2D
struct Joint2D_t854621618;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Fsm
struct  Fsm_t917886356  : public Il2CppObject
{
public:
	// System.Reflection.MethodInfo HutongGames.PlayMaker.Fsm::updateHelperSetDirty
	MethodInfo_t * ___updateHelperSetDirty_3;
	// System.Int32 HutongGames.PlayMaker.Fsm::dataVersion
	int32_t ___dataVersion_7;
	// UnityEngine.MonoBehaviour HutongGames.PlayMaker.Fsm::owner
	MonoBehaviour_t1158329972 * ___owner_8;
	// FsmTemplate HutongGames.PlayMaker.Fsm::usedInTemplate
	FsmTemplate_t1285897084 * ___usedInTemplate_9;
	// System.String HutongGames.PlayMaker.Fsm::name
	String_t* ___name_10;
	// System.String HutongGames.PlayMaker.Fsm::startState
	String_t* ___startState_11;
	// HutongGames.PlayMaker.FsmState[] HutongGames.PlayMaker.Fsm::states
	FsmStateU5BU5D_t1586422282* ___states_12;
	// HutongGames.PlayMaker.FsmEvent[] HutongGames.PlayMaker.Fsm::events
	FsmEventU5BU5D_t287863993* ___events_13;
	// HutongGames.PlayMaker.FsmTransition[] HutongGames.PlayMaker.Fsm::globalTransitions
	FsmTransitionU5BU5D_t1091630918* ___globalTransitions_14;
	// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.Fsm::variables
	FsmVariables_t630687169 * ___variables_15;
	// System.String HutongGames.PlayMaker.Fsm::description
	String_t* ___description_16;
	// System.String HutongGames.PlayMaker.Fsm::docUrl
	String_t* ___docUrl_17;
	// System.Boolean HutongGames.PlayMaker.Fsm::showStateLabel
	bool ___showStateLabel_18;
	// System.Int32 HutongGames.PlayMaker.Fsm::maxLoopCount
	int32_t ___maxLoopCount_19;
	// System.String HutongGames.PlayMaker.Fsm::watermark
	String_t* ___watermark_20;
	// System.String HutongGames.PlayMaker.Fsm::password
	String_t* ___password_21;
	// System.Boolean HutongGames.PlayMaker.Fsm::locked
	bool ___locked_22;
	// System.Boolean HutongGames.PlayMaker.Fsm::manualUpdate
	bool ___manualUpdate_23;
	// System.Boolean HutongGames.PlayMaker.Fsm::keepDelayedEventsOnStateExit
	bool ___keepDelayedEventsOnStateExit_24;
	// System.Boolean HutongGames.PlayMaker.Fsm::preprocessed
	bool ___preprocessed_25;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::host
	Fsm_t917886356 * ___host_26;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::rootFsm
	Fsm_t917886356 * ___rootFsm_27;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.Fsm> HutongGames.PlayMaker.Fsm::subFsmList
	List_1_t287007488 * ___subFsmList_28;
	// System.Boolean HutongGames.PlayMaker.Fsm::setDirty
	bool ___setDirty_29;
	// System.Boolean HutongGames.PlayMaker.Fsm::activeStateEntered
	bool ___activeStateEntered_30;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.FsmEvent> HutongGames.PlayMaker.Fsm::ExposedEvents
	List_1_t627694868 * ___ExposedEvents_31;
	// HutongGames.PlayMaker.FsmLog HutongGames.PlayMaker.Fsm::myLog
	FsmLog_t3672513366 * ___myLog_32;
	// System.Boolean HutongGames.PlayMaker.Fsm::RestartOnEnable
	bool ___RestartOnEnable_33;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableDebugFlow
	bool ___EnableDebugFlow_34;
	// System.Boolean HutongGames.PlayMaker.Fsm::EnableBreakpoints
	bool ___EnableBreakpoints_35;
	// System.Boolean HutongGames.PlayMaker.Fsm::StepFrame
	bool ___StepFrame_36;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::delayedEvents
	List_1_t993821960 * ___delayedEvents_37;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::updateEvents
	List_1_t993821960 * ___updateEvents_38;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.DelayedEvent> HutongGames.PlayMaker.Fsm::removeEvents
	List_1_t993821960 * ___removeEvents_39;
	// HutongGames.PlayMaker.Fsm/EditorFlags HutongGames.PlayMaker.Fsm::editorFlags
	int32_t ___editorFlags_40;
	// System.Boolean HutongGames.PlayMaker.Fsm::initialized
	bool ___initialized_41;
	// System.String HutongGames.PlayMaker.Fsm::activeStateName
	String_t* ___activeStateName_42;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::activeState
	FsmState_t1643911659 * ___activeState_43;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::switchToState
	FsmState_t1643911659 * ___switchToState_44;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::previousActiveState
	FsmState_t1643911659 * ___previousActiveState_45;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::editState
	FsmState_t1643911659 * ___editState_47;
	// System.Boolean HutongGames.PlayMaker.Fsm::mouseEvents
	bool ___mouseEvents_48;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleLevelLoaded
	bool ___handleLevelLoaded_49;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter2D
	bool ___handleTriggerEnter2D_50;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit2D
	bool ___handleTriggerExit2D_51;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay2D
	bool ___handleTriggerStay2D_52;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter2D
	bool ___handleCollisionEnter2D_53;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit2D
	bool ___handleCollisionExit2D_54;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay2D
	bool ___handleCollisionStay2D_55;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerEnter
	bool ___handleTriggerEnter_56;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerExit
	bool ___handleTriggerExit_57;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleTriggerStay
	bool ___handleTriggerStay_58;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionEnter
	bool ___handleCollisionEnter_59;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionExit
	bool ___handleCollisionExit_60;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleCollisionStay
	bool ___handleCollisionStay_61;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleParticleCollision
	bool ___handleParticleCollision_62;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleControllerColliderHit
	bool ___handleControllerColliderHit_63;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak
	bool ___handleJointBreak_64;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleJointBreak2D
	bool ___handleJointBreak2D_65;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleOnGUI
	bool ___handleOnGUI_66;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleFixedUpdate
	bool ___handleFixedUpdate_67;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleApplicationEvents
	bool ___handleApplicationEvents_68;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorMove
	bool ___handleAnimatorMove_70;
	// System.Boolean HutongGames.PlayMaker.Fsm::handleAnimatorIK
	bool ___handleAnimatorIK_71;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_73;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::<EventTarget>k__BackingField
	FsmEventTarget_t172293745 * ___U3CEventTargetU3Ek__BackingField_74;
	// System.Boolean HutongGames.PlayMaker.Fsm::<Finished>k__BackingField
	bool ___U3CFinishedU3Ek__BackingField_75;
	// HutongGames.PlayMaker.FsmTransition HutongGames.PlayMaker.Fsm::<LastTransition>k__BackingField
	FsmTransition_t1534990431 * ___U3CLastTransitionU3Ek__BackingField_76;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsModifiedPrefabInstance>k__BackingField
	bool ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_77;
	// System.Boolean HutongGames.PlayMaker.Fsm::<SwitchedState>k__BackingField
	bool ___U3CSwitchedStateU3Ek__BackingField_88;
	// UnityEngine.Collision HutongGames.PlayMaker.Fsm::<CollisionInfo>k__BackingField
	Collision_t2876846408 * ___U3CCollisionInfoU3Ek__BackingField_89;
	// UnityEngine.Collider HutongGames.PlayMaker.Fsm::<TriggerCollider>k__BackingField
	Collider_t3497673348 * ___U3CTriggerColliderU3Ek__BackingField_90;
	// UnityEngine.Collision2D HutongGames.PlayMaker.Fsm::<Collision2DInfo>k__BackingField
	Collision2D_t1539500754 * ___U3CCollision2DInfoU3Ek__BackingField_91;
	// UnityEngine.Collider2D HutongGames.PlayMaker.Fsm::<TriggerCollider2D>k__BackingField
	Collider2D_t646061738 * ___U3CTriggerCollider2DU3Ek__BackingField_92;
	// System.Single HutongGames.PlayMaker.Fsm::<JointBreakForce>k__BackingField
	float ___U3CJointBreakForceU3Ek__BackingField_93;
	// UnityEngine.Joint2D HutongGames.PlayMaker.Fsm::<BrokenJoint2D>k__BackingField
	Joint2D_t854621618 * ___U3CBrokenJoint2DU3Ek__BackingField_94;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<ParticleCollisionGO>k__BackingField
	GameObject_t1756533147 * ___U3CParticleCollisionGOU3Ek__BackingField_95;
	// System.String HutongGames.PlayMaker.Fsm::<TriggerName>k__BackingField
	String_t* ___U3CTriggerNameU3Ek__BackingField_96;
	// System.String HutongGames.PlayMaker.Fsm::<CollisionName>k__BackingField
	String_t* ___U3CCollisionNameU3Ek__BackingField_97;
	// System.String HutongGames.PlayMaker.Fsm::<Trigger2dName>k__BackingField
	String_t* ___U3CTrigger2dNameU3Ek__BackingField_98;
	// System.String HutongGames.PlayMaker.Fsm::<Collision2dName>k__BackingField
	String_t* ___U3CCollision2dNameU3Ek__BackingField_99;
	// UnityEngine.ControllerColliderHit HutongGames.PlayMaker.Fsm::<ControllerCollider>k__BackingField
	ControllerColliderHit_t4070855101 * ___U3CControllerColliderU3Ek__BackingField_100;
	// UnityEngine.RaycastHit HutongGames.PlayMaker.Fsm::<RaycastHitInfo>k__BackingField
	RaycastHit_t87180320  ___U3CRaycastHitInfoU3Ek__BackingField_101;

public:
	inline static int32_t get_offset_of_updateHelperSetDirty_3() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___updateHelperSetDirty_3)); }
	inline MethodInfo_t * get_updateHelperSetDirty_3() const { return ___updateHelperSetDirty_3; }
	inline MethodInfo_t ** get_address_of_updateHelperSetDirty_3() { return &___updateHelperSetDirty_3; }
	inline void set_updateHelperSetDirty_3(MethodInfo_t * value)
	{
		___updateHelperSetDirty_3 = value;
		Il2CppCodeGenWriteBarrier(&___updateHelperSetDirty_3, value);
	}

	inline static int32_t get_offset_of_dataVersion_7() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___dataVersion_7)); }
	inline int32_t get_dataVersion_7() const { return ___dataVersion_7; }
	inline int32_t* get_address_of_dataVersion_7() { return &___dataVersion_7; }
	inline void set_dataVersion_7(int32_t value)
	{
		___dataVersion_7 = value;
	}

	inline static int32_t get_offset_of_owner_8() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___owner_8)); }
	inline MonoBehaviour_t1158329972 * get_owner_8() const { return ___owner_8; }
	inline MonoBehaviour_t1158329972 ** get_address_of_owner_8() { return &___owner_8; }
	inline void set_owner_8(MonoBehaviour_t1158329972 * value)
	{
		___owner_8 = value;
		Il2CppCodeGenWriteBarrier(&___owner_8, value);
	}

	inline static int32_t get_offset_of_usedInTemplate_9() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___usedInTemplate_9)); }
	inline FsmTemplate_t1285897084 * get_usedInTemplate_9() const { return ___usedInTemplate_9; }
	inline FsmTemplate_t1285897084 ** get_address_of_usedInTemplate_9() { return &___usedInTemplate_9; }
	inline void set_usedInTemplate_9(FsmTemplate_t1285897084 * value)
	{
		___usedInTemplate_9 = value;
		Il2CppCodeGenWriteBarrier(&___usedInTemplate_9, value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier(&___name_10, value);
	}

	inline static int32_t get_offset_of_startState_11() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___startState_11)); }
	inline String_t* get_startState_11() const { return ___startState_11; }
	inline String_t** get_address_of_startState_11() { return &___startState_11; }
	inline void set_startState_11(String_t* value)
	{
		___startState_11 = value;
		Il2CppCodeGenWriteBarrier(&___startState_11, value);
	}

	inline static int32_t get_offset_of_states_12() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___states_12)); }
	inline FsmStateU5BU5D_t1586422282* get_states_12() const { return ___states_12; }
	inline FsmStateU5BU5D_t1586422282** get_address_of_states_12() { return &___states_12; }
	inline void set_states_12(FsmStateU5BU5D_t1586422282* value)
	{
		___states_12 = value;
		Il2CppCodeGenWriteBarrier(&___states_12, value);
	}

	inline static int32_t get_offset_of_events_13() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___events_13)); }
	inline FsmEventU5BU5D_t287863993* get_events_13() const { return ___events_13; }
	inline FsmEventU5BU5D_t287863993** get_address_of_events_13() { return &___events_13; }
	inline void set_events_13(FsmEventU5BU5D_t287863993* value)
	{
		___events_13 = value;
		Il2CppCodeGenWriteBarrier(&___events_13, value);
	}

	inline static int32_t get_offset_of_globalTransitions_14() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___globalTransitions_14)); }
	inline FsmTransitionU5BU5D_t1091630918* get_globalTransitions_14() const { return ___globalTransitions_14; }
	inline FsmTransitionU5BU5D_t1091630918** get_address_of_globalTransitions_14() { return &___globalTransitions_14; }
	inline void set_globalTransitions_14(FsmTransitionU5BU5D_t1091630918* value)
	{
		___globalTransitions_14 = value;
		Il2CppCodeGenWriteBarrier(&___globalTransitions_14, value);
	}

	inline static int32_t get_offset_of_variables_15() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___variables_15)); }
	inline FsmVariables_t630687169 * get_variables_15() const { return ___variables_15; }
	inline FsmVariables_t630687169 ** get_address_of_variables_15() { return &___variables_15; }
	inline void set_variables_15(FsmVariables_t630687169 * value)
	{
		___variables_15 = value;
		Il2CppCodeGenWriteBarrier(&___variables_15, value);
	}

	inline static int32_t get_offset_of_description_16() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___description_16)); }
	inline String_t* get_description_16() const { return ___description_16; }
	inline String_t** get_address_of_description_16() { return &___description_16; }
	inline void set_description_16(String_t* value)
	{
		___description_16 = value;
		Il2CppCodeGenWriteBarrier(&___description_16, value);
	}

	inline static int32_t get_offset_of_docUrl_17() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___docUrl_17)); }
	inline String_t* get_docUrl_17() const { return ___docUrl_17; }
	inline String_t** get_address_of_docUrl_17() { return &___docUrl_17; }
	inline void set_docUrl_17(String_t* value)
	{
		___docUrl_17 = value;
		Il2CppCodeGenWriteBarrier(&___docUrl_17, value);
	}

	inline static int32_t get_offset_of_showStateLabel_18() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___showStateLabel_18)); }
	inline bool get_showStateLabel_18() const { return ___showStateLabel_18; }
	inline bool* get_address_of_showStateLabel_18() { return &___showStateLabel_18; }
	inline void set_showStateLabel_18(bool value)
	{
		___showStateLabel_18 = value;
	}

	inline static int32_t get_offset_of_maxLoopCount_19() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___maxLoopCount_19)); }
	inline int32_t get_maxLoopCount_19() const { return ___maxLoopCount_19; }
	inline int32_t* get_address_of_maxLoopCount_19() { return &___maxLoopCount_19; }
	inline void set_maxLoopCount_19(int32_t value)
	{
		___maxLoopCount_19 = value;
	}

	inline static int32_t get_offset_of_watermark_20() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___watermark_20)); }
	inline String_t* get_watermark_20() const { return ___watermark_20; }
	inline String_t** get_address_of_watermark_20() { return &___watermark_20; }
	inline void set_watermark_20(String_t* value)
	{
		___watermark_20 = value;
		Il2CppCodeGenWriteBarrier(&___watermark_20, value);
	}

	inline static int32_t get_offset_of_password_21() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___password_21)); }
	inline String_t* get_password_21() const { return ___password_21; }
	inline String_t** get_address_of_password_21() { return &___password_21; }
	inline void set_password_21(String_t* value)
	{
		___password_21 = value;
		Il2CppCodeGenWriteBarrier(&___password_21, value);
	}

	inline static int32_t get_offset_of_locked_22() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___locked_22)); }
	inline bool get_locked_22() const { return ___locked_22; }
	inline bool* get_address_of_locked_22() { return &___locked_22; }
	inline void set_locked_22(bool value)
	{
		___locked_22 = value;
	}

	inline static int32_t get_offset_of_manualUpdate_23() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___manualUpdate_23)); }
	inline bool get_manualUpdate_23() const { return ___manualUpdate_23; }
	inline bool* get_address_of_manualUpdate_23() { return &___manualUpdate_23; }
	inline void set_manualUpdate_23(bool value)
	{
		___manualUpdate_23 = value;
	}

	inline static int32_t get_offset_of_keepDelayedEventsOnStateExit_24() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___keepDelayedEventsOnStateExit_24)); }
	inline bool get_keepDelayedEventsOnStateExit_24() const { return ___keepDelayedEventsOnStateExit_24; }
	inline bool* get_address_of_keepDelayedEventsOnStateExit_24() { return &___keepDelayedEventsOnStateExit_24; }
	inline void set_keepDelayedEventsOnStateExit_24(bool value)
	{
		___keepDelayedEventsOnStateExit_24 = value;
	}

	inline static int32_t get_offset_of_preprocessed_25() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___preprocessed_25)); }
	inline bool get_preprocessed_25() const { return ___preprocessed_25; }
	inline bool* get_address_of_preprocessed_25() { return &___preprocessed_25; }
	inline void set_preprocessed_25(bool value)
	{
		___preprocessed_25 = value;
	}

	inline static int32_t get_offset_of_host_26() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___host_26)); }
	inline Fsm_t917886356 * get_host_26() const { return ___host_26; }
	inline Fsm_t917886356 ** get_address_of_host_26() { return &___host_26; }
	inline void set_host_26(Fsm_t917886356 * value)
	{
		___host_26 = value;
		Il2CppCodeGenWriteBarrier(&___host_26, value);
	}

	inline static int32_t get_offset_of_rootFsm_27() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___rootFsm_27)); }
	inline Fsm_t917886356 * get_rootFsm_27() const { return ___rootFsm_27; }
	inline Fsm_t917886356 ** get_address_of_rootFsm_27() { return &___rootFsm_27; }
	inline void set_rootFsm_27(Fsm_t917886356 * value)
	{
		___rootFsm_27 = value;
		Il2CppCodeGenWriteBarrier(&___rootFsm_27, value);
	}

	inline static int32_t get_offset_of_subFsmList_28() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___subFsmList_28)); }
	inline List_1_t287007488 * get_subFsmList_28() const { return ___subFsmList_28; }
	inline List_1_t287007488 ** get_address_of_subFsmList_28() { return &___subFsmList_28; }
	inline void set_subFsmList_28(List_1_t287007488 * value)
	{
		___subFsmList_28 = value;
		Il2CppCodeGenWriteBarrier(&___subFsmList_28, value);
	}

	inline static int32_t get_offset_of_setDirty_29() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___setDirty_29)); }
	inline bool get_setDirty_29() const { return ___setDirty_29; }
	inline bool* get_address_of_setDirty_29() { return &___setDirty_29; }
	inline void set_setDirty_29(bool value)
	{
		___setDirty_29 = value;
	}

	inline static int32_t get_offset_of_activeStateEntered_30() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___activeStateEntered_30)); }
	inline bool get_activeStateEntered_30() const { return ___activeStateEntered_30; }
	inline bool* get_address_of_activeStateEntered_30() { return &___activeStateEntered_30; }
	inline void set_activeStateEntered_30(bool value)
	{
		___activeStateEntered_30 = value;
	}

	inline static int32_t get_offset_of_ExposedEvents_31() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___ExposedEvents_31)); }
	inline List_1_t627694868 * get_ExposedEvents_31() const { return ___ExposedEvents_31; }
	inline List_1_t627694868 ** get_address_of_ExposedEvents_31() { return &___ExposedEvents_31; }
	inline void set_ExposedEvents_31(List_1_t627694868 * value)
	{
		___ExposedEvents_31 = value;
		Il2CppCodeGenWriteBarrier(&___ExposedEvents_31, value);
	}

	inline static int32_t get_offset_of_myLog_32() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___myLog_32)); }
	inline FsmLog_t3672513366 * get_myLog_32() const { return ___myLog_32; }
	inline FsmLog_t3672513366 ** get_address_of_myLog_32() { return &___myLog_32; }
	inline void set_myLog_32(FsmLog_t3672513366 * value)
	{
		___myLog_32 = value;
		Il2CppCodeGenWriteBarrier(&___myLog_32, value);
	}

	inline static int32_t get_offset_of_RestartOnEnable_33() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___RestartOnEnable_33)); }
	inline bool get_RestartOnEnable_33() const { return ___RestartOnEnable_33; }
	inline bool* get_address_of_RestartOnEnable_33() { return &___RestartOnEnable_33; }
	inline void set_RestartOnEnable_33(bool value)
	{
		___RestartOnEnable_33 = value;
	}

	inline static int32_t get_offset_of_EnableDebugFlow_34() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___EnableDebugFlow_34)); }
	inline bool get_EnableDebugFlow_34() const { return ___EnableDebugFlow_34; }
	inline bool* get_address_of_EnableDebugFlow_34() { return &___EnableDebugFlow_34; }
	inline void set_EnableDebugFlow_34(bool value)
	{
		___EnableDebugFlow_34 = value;
	}

	inline static int32_t get_offset_of_EnableBreakpoints_35() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___EnableBreakpoints_35)); }
	inline bool get_EnableBreakpoints_35() const { return ___EnableBreakpoints_35; }
	inline bool* get_address_of_EnableBreakpoints_35() { return &___EnableBreakpoints_35; }
	inline void set_EnableBreakpoints_35(bool value)
	{
		___EnableBreakpoints_35 = value;
	}

	inline static int32_t get_offset_of_StepFrame_36() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___StepFrame_36)); }
	inline bool get_StepFrame_36() const { return ___StepFrame_36; }
	inline bool* get_address_of_StepFrame_36() { return &___StepFrame_36; }
	inline void set_StepFrame_36(bool value)
	{
		___StepFrame_36 = value;
	}

	inline static int32_t get_offset_of_delayedEvents_37() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___delayedEvents_37)); }
	inline List_1_t993821960 * get_delayedEvents_37() const { return ___delayedEvents_37; }
	inline List_1_t993821960 ** get_address_of_delayedEvents_37() { return &___delayedEvents_37; }
	inline void set_delayedEvents_37(List_1_t993821960 * value)
	{
		___delayedEvents_37 = value;
		Il2CppCodeGenWriteBarrier(&___delayedEvents_37, value);
	}

	inline static int32_t get_offset_of_updateEvents_38() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___updateEvents_38)); }
	inline List_1_t993821960 * get_updateEvents_38() const { return ___updateEvents_38; }
	inline List_1_t993821960 ** get_address_of_updateEvents_38() { return &___updateEvents_38; }
	inline void set_updateEvents_38(List_1_t993821960 * value)
	{
		___updateEvents_38 = value;
		Il2CppCodeGenWriteBarrier(&___updateEvents_38, value);
	}

	inline static int32_t get_offset_of_removeEvents_39() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___removeEvents_39)); }
	inline List_1_t993821960 * get_removeEvents_39() const { return ___removeEvents_39; }
	inline List_1_t993821960 ** get_address_of_removeEvents_39() { return &___removeEvents_39; }
	inline void set_removeEvents_39(List_1_t993821960 * value)
	{
		___removeEvents_39 = value;
		Il2CppCodeGenWriteBarrier(&___removeEvents_39, value);
	}

	inline static int32_t get_offset_of_editorFlags_40() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___editorFlags_40)); }
	inline int32_t get_editorFlags_40() const { return ___editorFlags_40; }
	inline int32_t* get_address_of_editorFlags_40() { return &___editorFlags_40; }
	inline void set_editorFlags_40(int32_t value)
	{
		___editorFlags_40 = value;
	}

	inline static int32_t get_offset_of_initialized_41() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___initialized_41)); }
	inline bool get_initialized_41() const { return ___initialized_41; }
	inline bool* get_address_of_initialized_41() { return &___initialized_41; }
	inline void set_initialized_41(bool value)
	{
		___initialized_41 = value;
	}

	inline static int32_t get_offset_of_activeStateName_42() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___activeStateName_42)); }
	inline String_t* get_activeStateName_42() const { return ___activeStateName_42; }
	inline String_t** get_address_of_activeStateName_42() { return &___activeStateName_42; }
	inline void set_activeStateName_42(String_t* value)
	{
		___activeStateName_42 = value;
		Il2CppCodeGenWriteBarrier(&___activeStateName_42, value);
	}

	inline static int32_t get_offset_of_activeState_43() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___activeState_43)); }
	inline FsmState_t1643911659 * get_activeState_43() const { return ___activeState_43; }
	inline FsmState_t1643911659 ** get_address_of_activeState_43() { return &___activeState_43; }
	inline void set_activeState_43(FsmState_t1643911659 * value)
	{
		___activeState_43 = value;
		Il2CppCodeGenWriteBarrier(&___activeState_43, value);
	}

	inline static int32_t get_offset_of_switchToState_44() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___switchToState_44)); }
	inline FsmState_t1643911659 * get_switchToState_44() const { return ___switchToState_44; }
	inline FsmState_t1643911659 ** get_address_of_switchToState_44() { return &___switchToState_44; }
	inline void set_switchToState_44(FsmState_t1643911659 * value)
	{
		___switchToState_44 = value;
		Il2CppCodeGenWriteBarrier(&___switchToState_44, value);
	}

	inline static int32_t get_offset_of_previousActiveState_45() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___previousActiveState_45)); }
	inline FsmState_t1643911659 * get_previousActiveState_45() const { return ___previousActiveState_45; }
	inline FsmState_t1643911659 ** get_address_of_previousActiveState_45() { return &___previousActiveState_45; }
	inline void set_previousActiveState_45(FsmState_t1643911659 * value)
	{
		___previousActiveState_45 = value;
		Il2CppCodeGenWriteBarrier(&___previousActiveState_45, value);
	}

	inline static int32_t get_offset_of_editState_47() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___editState_47)); }
	inline FsmState_t1643911659 * get_editState_47() const { return ___editState_47; }
	inline FsmState_t1643911659 ** get_address_of_editState_47() { return &___editState_47; }
	inline void set_editState_47(FsmState_t1643911659 * value)
	{
		___editState_47 = value;
		Il2CppCodeGenWriteBarrier(&___editState_47, value);
	}

	inline static int32_t get_offset_of_mouseEvents_48() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___mouseEvents_48)); }
	inline bool get_mouseEvents_48() const { return ___mouseEvents_48; }
	inline bool* get_address_of_mouseEvents_48() { return &___mouseEvents_48; }
	inline void set_mouseEvents_48(bool value)
	{
		___mouseEvents_48 = value;
	}

	inline static int32_t get_offset_of_handleLevelLoaded_49() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleLevelLoaded_49)); }
	inline bool get_handleLevelLoaded_49() const { return ___handleLevelLoaded_49; }
	inline bool* get_address_of_handleLevelLoaded_49() { return &___handleLevelLoaded_49; }
	inline void set_handleLevelLoaded_49(bool value)
	{
		___handleLevelLoaded_49 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter2D_50() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerEnter2D_50)); }
	inline bool get_handleTriggerEnter2D_50() const { return ___handleTriggerEnter2D_50; }
	inline bool* get_address_of_handleTriggerEnter2D_50() { return &___handleTriggerEnter2D_50; }
	inline void set_handleTriggerEnter2D_50(bool value)
	{
		___handleTriggerEnter2D_50 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit2D_51() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerExit2D_51)); }
	inline bool get_handleTriggerExit2D_51() const { return ___handleTriggerExit2D_51; }
	inline bool* get_address_of_handleTriggerExit2D_51() { return &___handleTriggerExit2D_51; }
	inline void set_handleTriggerExit2D_51(bool value)
	{
		___handleTriggerExit2D_51 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay2D_52() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerStay2D_52)); }
	inline bool get_handleTriggerStay2D_52() const { return ___handleTriggerStay2D_52; }
	inline bool* get_address_of_handleTriggerStay2D_52() { return &___handleTriggerStay2D_52; }
	inline void set_handleTriggerStay2D_52(bool value)
	{
		___handleTriggerStay2D_52 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter2D_53() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionEnter2D_53)); }
	inline bool get_handleCollisionEnter2D_53() const { return ___handleCollisionEnter2D_53; }
	inline bool* get_address_of_handleCollisionEnter2D_53() { return &___handleCollisionEnter2D_53; }
	inline void set_handleCollisionEnter2D_53(bool value)
	{
		___handleCollisionEnter2D_53 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit2D_54() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionExit2D_54)); }
	inline bool get_handleCollisionExit2D_54() const { return ___handleCollisionExit2D_54; }
	inline bool* get_address_of_handleCollisionExit2D_54() { return &___handleCollisionExit2D_54; }
	inline void set_handleCollisionExit2D_54(bool value)
	{
		___handleCollisionExit2D_54 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay2D_55() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionStay2D_55)); }
	inline bool get_handleCollisionStay2D_55() const { return ___handleCollisionStay2D_55; }
	inline bool* get_address_of_handleCollisionStay2D_55() { return &___handleCollisionStay2D_55; }
	inline void set_handleCollisionStay2D_55(bool value)
	{
		___handleCollisionStay2D_55 = value;
	}

	inline static int32_t get_offset_of_handleTriggerEnter_56() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerEnter_56)); }
	inline bool get_handleTriggerEnter_56() const { return ___handleTriggerEnter_56; }
	inline bool* get_address_of_handleTriggerEnter_56() { return &___handleTriggerEnter_56; }
	inline void set_handleTriggerEnter_56(bool value)
	{
		___handleTriggerEnter_56 = value;
	}

	inline static int32_t get_offset_of_handleTriggerExit_57() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerExit_57)); }
	inline bool get_handleTriggerExit_57() const { return ___handleTriggerExit_57; }
	inline bool* get_address_of_handleTriggerExit_57() { return &___handleTriggerExit_57; }
	inline void set_handleTriggerExit_57(bool value)
	{
		___handleTriggerExit_57 = value;
	}

	inline static int32_t get_offset_of_handleTriggerStay_58() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleTriggerStay_58)); }
	inline bool get_handleTriggerStay_58() const { return ___handleTriggerStay_58; }
	inline bool* get_address_of_handleTriggerStay_58() { return &___handleTriggerStay_58; }
	inline void set_handleTriggerStay_58(bool value)
	{
		___handleTriggerStay_58 = value;
	}

	inline static int32_t get_offset_of_handleCollisionEnter_59() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionEnter_59)); }
	inline bool get_handleCollisionEnter_59() const { return ___handleCollisionEnter_59; }
	inline bool* get_address_of_handleCollisionEnter_59() { return &___handleCollisionEnter_59; }
	inline void set_handleCollisionEnter_59(bool value)
	{
		___handleCollisionEnter_59 = value;
	}

	inline static int32_t get_offset_of_handleCollisionExit_60() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionExit_60)); }
	inline bool get_handleCollisionExit_60() const { return ___handleCollisionExit_60; }
	inline bool* get_address_of_handleCollisionExit_60() { return &___handleCollisionExit_60; }
	inline void set_handleCollisionExit_60(bool value)
	{
		___handleCollisionExit_60 = value;
	}

	inline static int32_t get_offset_of_handleCollisionStay_61() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleCollisionStay_61)); }
	inline bool get_handleCollisionStay_61() const { return ___handleCollisionStay_61; }
	inline bool* get_address_of_handleCollisionStay_61() { return &___handleCollisionStay_61; }
	inline void set_handleCollisionStay_61(bool value)
	{
		___handleCollisionStay_61 = value;
	}

	inline static int32_t get_offset_of_handleParticleCollision_62() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleParticleCollision_62)); }
	inline bool get_handleParticleCollision_62() const { return ___handleParticleCollision_62; }
	inline bool* get_address_of_handleParticleCollision_62() { return &___handleParticleCollision_62; }
	inline void set_handleParticleCollision_62(bool value)
	{
		___handleParticleCollision_62 = value;
	}

	inline static int32_t get_offset_of_handleControllerColliderHit_63() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleControllerColliderHit_63)); }
	inline bool get_handleControllerColliderHit_63() const { return ___handleControllerColliderHit_63; }
	inline bool* get_address_of_handleControllerColliderHit_63() { return &___handleControllerColliderHit_63; }
	inline void set_handleControllerColliderHit_63(bool value)
	{
		___handleControllerColliderHit_63 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak_64() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleJointBreak_64)); }
	inline bool get_handleJointBreak_64() const { return ___handleJointBreak_64; }
	inline bool* get_address_of_handleJointBreak_64() { return &___handleJointBreak_64; }
	inline void set_handleJointBreak_64(bool value)
	{
		___handleJointBreak_64 = value;
	}

	inline static int32_t get_offset_of_handleJointBreak2D_65() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleJointBreak2D_65)); }
	inline bool get_handleJointBreak2D_65() const { return ___handleJointBreak2D_65; }
	inline bool* get_address_of_handleJointBreak2D_65() { return &___handleJointBreak2D_65; }
	inline void set_handleJointBreak2D_65(bool value)
	{
		___handleJointBreak2D_65 = value;
	}

	inline static int32_t get_offset_of_handleOnGUI_66() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleOnGUI_66)); }
	inline bool get_handleOnGUI_66() const { return ___handleOnGUI_66; }
	inline bool* get_address_of_handleOnGUI_66() { return &___handleOnGUI_66; }
	inline void set_handleOnGUI_66(bool value)
	{
		___handleOnGUI_66 = value;
	}

	inline static int32_t get_offset_of_handleFixedUpdate_67() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleFixedUpdate_67)); }
	inline bool get_handleFixedUpdate_67() const { return ___handleFixedUpdate_67; }
	inline bool* get_address_of_handleFixedUpdate_67() { return &___handleFixedUpdate_67; }
	inline void set_handleFixedUpdate_67(bool value)
	{
		___handleFixedUpdate_67 = value;
	}

	inline static int32_t get_offset_of_handleApplicationEvents_68() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleApplicationEvents_68)); }
	inline bool get_handleApplicationEvents_68() const { return ___handleApplicationEvents_68; }
	inline bool* get_address_of_handleApplicationEvents_68() { return &___handleApplicationEvents_68; }
	inline void set_handleApplicationEvents_68(bool value)
	{
		___handleApplicationEvents_68 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorMove_70() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleAnimatorMove_70)); }
	inline bool get_handleAnimatorMove_70() const { return ___handleAnimatorMove_70; }
	inline bool* get_address_of_handleAnimatorMove_70() { return &___handleAnimatorMove_70; }
	inline void set_handleAnimatorMove_70(bool value)
	{
		___handleAnimatorMove_70 = value;
	}

	inline static int32_t get_offset_of_handleAnimatorIK_71() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___handleAnimatorIK_71)); }
	inline bool get_handleAnimatorIK_71() const { return ___handleAnimatorIK_71; }
	inline bool* get_address_of_handleAnimatorIK_71() { return &___handleAnimatorIK_71; }
	inline void set_handleAnimatorIK_71(bool value)
	{
		___handleAnimatorIK_71 = value;
	}

	inline static int32_t get_offset_of_U3CStartedU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CStartedU3Ek__BackingField_73)); }
	inline bool get_U3CStartedU3Ek__BackingField_73() const { return ___U3CStartedU3Ek__BackingField_73; }
	inline bool* get_address_of_U3CStartedU3Ek__BackingField_73() { return &___U3CStartedU3Ek__BackingField_73; }
	inline void set_U3CStartedU3Ek__BackingField_73(bool value)
	{
		___U3CStartedU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CEventTargetU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CEventTargetU3Ek__BackingField_74)); }
	inline FsmEventTarget_t172293745 * get_U3CEventTargetU3Ek__BackingField_74() const { return ___U3CEventTargetU3Ek__BackingField_74; }
	inline FsmEventTarget_t172293745 ** get_address_of_U3CEventTargetU3Ek__BackingField_74() { return &___U3CEventTargetU3Ek__BackingField_74; }
	inline void set_U3CEventTargetU3Ek__BackingField_74(FsmEventTarget_t172293745 * value)
	{
		___U3CEventTargetU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventTargetU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of_U3CFinishedU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CFinishedU3Ek__BackingField_75)); }
	inline bool get_U3CFinishedU3Ek__BackingField_75() const { return ___U3CFinishedU3Ek__BackingField_75; }
	inline bool* get_address_of_U3CFinishedU3Ek__BackingField_75() { return &___U3CFinishedU3Ek__BackingField_75; }
	inline void set_U3CFinishedU3Ek__BackingField_75(bool value)
	{
		___U3CFinishedU3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_U3CLastTransitionU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CLastTransitionU3Ek__BackingField_76)); }
	inline FsmTransition_t1534990431 * get_U3CLastTransitionU3Ek__BackingField_76() const { return ___U3CLastTransitionU3Ek__BackingField_76; }
	inline FsmTransition_t1534990431 ** get_address_of_U3CLastTransitionU3Ek__BackingField_76() { return &___U3CLastTransitionU3Ek__BackingField_76; }
	inline void set_U3CLastTransitionU3Ek__BackingField_76(FsmTransition_t1534990431 * value)
	{
		___U3CLastTransitionU3Ek__BackingField_76 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLastTransitionU3Ek__BackingField_76, value);
	}

	inline static int32_t get_offset_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_77() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_77)); }
	inline bool get_U3CIsModifiedPrefabInstanceU3Ek__BackingField_77() const { return ___U3CIsModifiedPrefabInstanceU3Ek__BackingField_77; }
	inline bool* get_address_of_U3CIsModifiedPrefabInstanceU3Ek__BackingField_77() { return &___U3CIsModifiedPrefabInstanceU3Ek__BackingField_77; }
	inline void set_U3CIsModifiedPrefabInstanceU3Ek__BackingField_77(bool value)
	{
		___U3CIsModifiedPrefabInstanceU3Ek__BackingField_77 = value;
	}

	inline static int32_t get_offset_of_U3CSwitchedStateU3Ek__BackingField_88() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CSwitchedStateU3Ek__BackingField_88)); }
	inline bool get_U3CSwitchedStateU3Ek__BackingField_88() const { return ___U3CSwitchedStateU3Ek__BackingField_88; }
	inline bool* get_address_of_U3CSwitchedStateU3Ek__BackingField_88() { return &___U3CSwitchedStateU3Ek__BackingField_88; }
	inline void set_U3CSwitchedStateU3Ek__BackingField_88(bool value)
	{
		___U3CSwitchedStateU3Ek__BackingField_88 = value;
	}

	inline static int32_t get_offset_of_U3CCollisionInfoU3Ek__BackingField_89() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CCollisionInfoU3Ek__BackingField_89)); }
	inline Collision_t2876846408 * get_U3CCollisionInfoU3Ek__BackingField_89() const { return ___U3CCollisionInfoU3Ek__BackingField_89; }
	inline Collision_t2876846408 ** get_address_of_U3CCollisionInfoU3Ek__BackingField_89() { return &___U3CCollisionInfoU3Ek__BackingField_89; }
	inline void set_U3CCollisionInfoU3Ek__BackingField_89(Collision_t2876846408 * value)
	{
		___U3CCollisionInfoU3Ek__BackingField_89 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionInfoU3Ek__BackingField_89, value);
	}

	inline static int32_t get_offset_of_U3CTriggerColliderU3Ek__BackingField_90() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CTriggerColliderU3Ek__BackingField_90)); }
	inline Collider_t3497673348 * get_U3CTriggerColliderU3Ek__BackingField_90() const { return ___U3CTriggerColliderU3Ek__BackingField_90; }
	inline Collider_t3497673348 ** get_address_of_U3CTriggerColliderU3Ek__BackingField_90() { return &___U3CTriggerColliderU3Ek__BackingField_90; }
	inline void set_U3CTriggerColliderU3Ek__BackingField_90(Collider_t3497673348 * value)
	{
		___U3CTriggerColliderU3Ek__BackingField_90 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerColliderU3Ek__BackingField_90, value);
	}

	inline static int32_t get_offset_of_U3CCollision2DInfoU3Ek__BackingField_91() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CCollision2DInfoU3Ek__BackingField_91)); }
	inline Collision2D_t1539500754 * get_U3CCollision2DInfoU3Ek__BackingField_91() const { return ___U3CCollision2DInfoU3Ek__BackingField_91; }
	inline Collision2D_t1539500754 ** get_address_of_U3CCollision2DInfoU3Ek__BackingField_91() { return &___U3CCollision2DInfoU3Ek__BackingField_91; }
	inline void set_U3CCollision2DInfoU3Ek__BackingField_91(Collision2D_t1539500754 * value)
	{
		___U3CCollision2DInfoU3Ek__BackingField_91 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollision2DInfoU3Ek__BackingField_91, value);
	}

	inline static int32_t get_offset_of_U3CTriggerCollider2DU3Ek__BackingField_92() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CTriggerCollider2DU3Ek__BackingField_92)); }
	inline Collider2D_t646061738 * get_U3CTriggerCollider2DU3Ek__BackingField_92() const { return ___U3CTriggerCollider2DU3Ek__BackingField_92; }
	inline Collider2D_t646061738 ** get_address_of_U3CTriggerCollider2DU3Ek__BackingField_92() { return &___U3CTriggerCollider2DU3Ek__BackingField_92; }
	inline void set_U3CTriggerCollider2DU3Ek__BackingField_92(Collider2D_t646061738 * value)
	{
		___U3CTriggerCollider2DU3Ek__BackingField_92 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerCollider2DU3Ek__BackingField_92, value);
	}

	inline static int32_t get_offset_of_U3CJointBreakForceU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CJointBreakForceU3Ek__BackingField_93)); }
	inline float get_U3CJointBreakForceU3Ek__BackingField_93() const { return ___U3CJointBreakForceU3Ek__BackingField_93; }
	inline float* get_address_of_U3CJointBreakForceU3Ek__BackingField_93() { return &___U3CJointBreakForceU3Ek__BackingField_93; }
	inline void set_U3CJointBreakForceU3Ek__BackingField_93(float value)
	{
		___U3CJointBreakForceU3Ek__BackingField_93 = value;
	}

	inline static int32_t get_offset_of_U3CBrokenJoint2DU3Ek__BackingField_94() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CBrokenJoint2DU3Ek__BackingField_94)); }
	inline Joint2D_t854621618 * get_U3CBrokenJoint2DU3Ek__BackingField_94() const { return ___U3CBrokenJoint2DU3Ek__BackingField_94; }
	inline Joint2D_t854621618 ** get_address_of_U3CBrokenJoint2DU3Ek__BackingField_94() { return &___U3CBrokenJoint2DU3Ek__BackingField_94; }
	inline void set_U3CBrokenJoint2DU3Ek__BackingField_94(Joint2D_t854621618 * value)
	{
		___U3CBrokenJoint2DU3Ek__BackingField_94 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBrokenJoint2DU3Ek__BackingField_94, value);
	}

	inline static int32_t get_offset_of_U3CParticleCollisionGOU3Ek__BackingField_95() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CParticleCollisionGOU3Ek__BackingField_95)); }
	inline GameObject_t1756533147 * get_U3CParticleCollisionGOU3Ek__BackingField_95() const { return ___U3CParticleCollisionGOU3Ek__BackingField_95; }
	inline GameObject_t1756533147 ** get_address_of_U3CParticleCollisionGOU3Ek__BackingField_95() { return &___U3CParticleCollisionGOU3Ek__BackingField_95; }
	inline void set_U3CParticleCollisionGOU3Ek__BackingField_95(GameObject_t1756533147 * value)
	{
		___U3CParticleCollisionGOU3Ek__BackingField_95 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParticleCollisionGOU3Ek__BackingField_95, value);
	}

	inline static int32_t get_offset_of_U3CTriggerNameU3Ek__BackingField_96() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CTriggerNameU3Ek__BackingField_96)); }
	inline String_t* get_U3CTriggerNameU3Ek__BackingField_96() const { return ___U3CTriggerNameU3Ek__BackingField_96; }
	inline String_t** get_address_of_U3CTriggerNameU3Ek__BackingField_96() { return &___U3CTriggerNameU3Ek__BackingField_96; }
	inline void set_U3CTriggerNameU3Ek__BackingField_96(String_t* value)
	{
		___U3CTriggerNameU3Ek__BackingField_96 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTriggerNameU3Ek__BackingField_96, value);
	}

	inline static int32_t get_offset_of_U3CCollisionNameU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CCollisionNameU3Ek__BackingField_97)); }
	inline String_t* get_U3CCollisionNameU3Ek__BackingField_97() const { return ___U3CCollisionNameU3Ek__BackingField_97; }
	inline String_t** get_address_of_U3CCollisionNameU3Ek__BackingField_97() { return &___U3CCollisionNameU3Ek__BackingField_97; }
	inline void set_U3CCollisionNameU3Ek__BackingField_97(String_t* value)
	{
		___U3CCollisionNameU3Ek__BackingField_97 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollisionNameU3Ek__BackingField_97, value);
	}

	inline static int32_t get_offset_of_U3CTrigger2dNameU3Ek__BackingField_98() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CTrigger2dNameU3Ek__BackingField_98)); }
	inline String_t* get_U3CTrigger2dNameU3Ek__BackingField_98() const { return ___U3CTrigger2dNameU3Ek__BackingField_98; }
	inline String_t** get_address_of_U3CTrigger2dNameU3Ek__BackingField_98() { return &___U3CTrigger2dNameU3Ek__BackingField_98; }
	inline void set_U3CTrigger2dNameU3Ek__BackingField_98(String_t* value)
	{
		___U3CTrigger2dNameU3Ek__BackingField_98 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTrigger2dNameU3Ek__BackingField_98, value);
	}

	inline static int32_t get_offset_of_U3CCollision2dNameU3Ek__BackingField_99() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CCollision2dNameU3Ek__BackingField_99)); }
	inline String_t* get_U3CCollision2dNameU3Ek__BackingField_99() const { return ___U3CCollision2dNameU3Ek__BackingField_99; }
	inline String_t** get_address_of_U3CCollision2dNameU3Ek__BackingField_99() { return &___U3CCollision2dNameU3Ek__BackingField_99; }
	inline void set_U3CCollision2dNameU3Ek__BackingField_99(String_t* value)
	{
		___U3CCollision2dNameU3Ek__BackingField_99 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollision2dNameU3Ek__BackingField_99, value);
	}

	inline static int32_t get_offset_of_U3CControllerColliderU3Ek__BackingField_100() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CControllerColliderU3Ek__BackingField_100)); }
	inline ControllerColliderHit_t4070855101 * get_U3CControllerColliderU3Ek__BackingField_100() const { return ___U3CControllerColliderU3Ek__BackingField_100; }
	inline ControllerColliderHit_t4070855101 ** get_address_of_U3CControllerColliderU3Ek__BackingField_100() { return &___U3CControllerColliderU3Ek__BackingField_100; }
	inline void set_U3CControllerColliderU3Ek__BackingField_100(ControllerColliderHit_t4070855101 * value)
	{
		___U3CControllerColliderU3Ek__BackingField_100 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControllerColliderU3Ek__BackingField_100, value);
	}

	inline static int32_t get_offset_of_U3CRaycastHitInfoU3Ek__BackingField_101() { return static_cast<int32_t>(offsetof(Fsm_t917886356, ___U3CRaycastHitInfoU3Ek__BackingField_101)); }
	inline RaycastHit_t87180320  get_U3CRaycastHitInfoU3Ek__BackingField_101() const { return ___U3CRaycastHitInfoU3Ek__BackingField_101; }
	inline RaycastHit_t87180320 * get_address_of_U3CRaycastHitInfoU3Ek__BackingField_101() { return &___U3CRaycastHitInfoU3Ek__BackingField_101; }
	inline void set_U3CRaycastHitInfoU3Ek__BackingField_101(RaycastHit_t87180320  value)
	{
		___U3CRaycastHitInfoU3Ek__BackingField_101 = value;
	}
};

struct Fsm_t917886356_StaticFields
{
public:
	// HutongGames.PlayMaker.FsmEventData HutongGames.PlayMaker.Fsm::EventData
	FsmEventData_t2110469976 * ___EventData_4;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::debugLookAtColor
	Color_t2020392075  ___debugLookAtColor_5;
	// UnityEngine.Color HutongGames.PlayMaker.Fsm::debugRaycastColor
	Color_t2020392075  ___debugRaycastColor_6;
	// UnityEngine.Color[] HutongGames.PlayMaker.Fsm::StateColors
	ColorU5BU5D_t672350442* ___StateColors_46;
	// System.Collections.Generic.Dictionary`2<HutongGames.PlayMaker.Fsm,UnityEngine.RaycastHit2D> HutongGames.PlayMaker.Fsm::lastRaycastHit2DInfoLUT
	Dictionary_2_t2746488205 * ___lastRaycastHit2DInfoLUT_69;
	// HutongGames.PlayMaker.FsmEventTarget HutongGames.PlayMaker.Fsm::targetSelf
	FsmEventTarget_t172293745 * ___targetSelf_72;
	// UnityEngine.GameObject HutongGames.PlayMaker.Fsm::<LastClickedObject>k__BackingField
	GameObject_t1756533147 * ___U3CLastClickedObjectU3Ek__BackingField_78;
	// System.Boolean HutongGames.PlayMaker.Fsm::<BreakpointsEnabled>k__BackingField
	bool ___U3CBreakpointsEnabledU3Ek__BackingField_79;
	// System.Boolean HutongGames.PlayMaker.Fsm::<HitBreakpoint>k__BackingField
	bool ___U3CHitBreakpointU3Ek__BackingField_80;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<BreakAtFsm>k__BackingField
	Fsm_t917886356 * ___U3CBreakAtFsmU3Ek__BackingField_81;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.Fsm::<BreakAtState>k__BackingField
	FsmState_t1643911659 * ___U3CBreakAtStateU3Ek__BackingField_82;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsBreak>k__BackingField
	bool ___U3CIsBreakU3Ek__BackingField_83;
	// System.Boolean HutongGames.PlayMaker.Fsm::<IsErrorBreak>k__BackingField
	bool ___U3CIsErrorBreakU3Ek__BackingField_84;
	// System.String HutongGames.PlayMaker.Fsm::<LastError>k__BackingField
	String_t* ___U3CLastErrorU3Ek__BackingField_85;
	// System.Boolean HutongGames.PlayMaker.Fsm::<StepToStateChange>k__BackingField
	bool ___U3CStepToStateChangeU3Ek__BackingField_86;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.Fsm::<StepFsm>k__BackingField
	Fsm_t917886356 * ___U3CStepFsmU3Ek__BackingField_87;

public:
	inline static int32_t get_offset_of_EventData_4() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___EventData_4)); }
	inline FsmEventData_t2110469976 * get_EventData_4() const { return ___EventData_4; }
	inline FsmEventData_t2110469976 ** get_address_of_EventData_4() { return &___EventData_4; }
	inline void set_EventData_4(FsmEventData_t2110469976 * value)
	{
		___EventData_4 = value;
		Il2CppCodeGenWriteBarrier(&___EventData_4, value);
	}

	inline static int32_t get_offset_of_debugLookAtColor_5() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___debugLookAtColor_5)); }
	inline Color_t2020392075  get_debugLookAtColor_5() const { return ___debugLookAtColor_5; }
	inline Color_t2020392075 * get_address_of_debugLookAtColor_5() { return &___debugLookAtColor_5; }
	inline void set_debugLookAtColor_5(Color_t2020392075  value)
	{
		___debugLookAtColor_5 = value;
	}

	inline static int32_t get_offset_of_debugRaycastColor_6() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___debugRaycastColor_6)); }
	inline Color_t2020392075  get_debugRaycastColor_6() const { return ___debugRaycastColor_6; }
	inline Color_t2020392075 * get_address_of_debugRaycastColor_6() { return &___debugRaycastColor_6; }
	inline void set_debugRaycastColor_6(Color_t2020392075  value)
	{
		___debugRaycastColor_6 = value;
	}

	inline static int32_t get_offset_of_StateColors_46() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___StateColors_46)); }
	inline ColorU5BU5D_t672350442* get_StateColors_46() const { return ___StateColors_46; }
	inline ColorU5BU5D_t672350442** get_address_of_StateColors_46() { return &___StateColors_46; }
	inline void set_StateColors_46(ColorU5BU5D_t672350442* value)
	{
		___StateColors_46 = value;
		Il2CppCodeGenWriteBarrier(&___StateColors_46, value);
	}

	inline static int32_t get_offset_of_lastRaycastHit2DInfoLUT_69() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___lastRaycastHit2DInfoLUT_69)); }
	inline Dictionary_2_t2746488205 * get_lastRaycastHit2DInfoLUT_69() const { return ___lastRaycastHit2DInfoLUT_69; }
	inline Dictionary_2_t2746488205 ** get_address_of_lastRaycastHit2DInfoLUT_69() { return &___lastRaycastHit2DInfoLUT_69; }
	inline void set_lastRaycastHit2DInfoLUT_69(Dictionary_2_t2746488205 * value)
	{
		___lastRaycastHit2DInfoLUT_69 = value;
		Il2CppCodeGenWriteBarrier(&___lastRaycastHit2DInfoLUT_69, value);
	}

	inline static int32_t get_offset_of_targetSelf_72() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___targetSelf_72)); }
	inline FsmEventTarget_t172293745 * get_targetSelf_72() const { return ___targetSelf_72; }
	inline FsmEventTarget_t172293745 ** get_address_of_targetSelf_72() { return &___targetSelf_72; }
	inline void set_targetSelf_72(FsmEventTarget_t172293745 * value)
	{
		___targetSelf_72 = value;
		Il2CppCodeGenWriteBarrier(&___targetSelf_72, value);
	}

	inline static int32_t get_offset_of_U3CLastClickedObjectU3Ek__BackingField_78() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CLastClickedObjectU3Ek__BackingField_78)); }
	inline GameObject_t1756533147 * get_U3CLastClickedObjectU3Ek__BackingField_78() const { return ___U3CLastClickedObjectU3Ek__BackingField_78; }
	inline GameObject_t1756533147 ** get_address_of_U3CLastClickedObjectU3Ek__BackingField_78() { return &___U3CLastClickedObjectU3Ek__BackingField_78; }
	inline void set_U3CLastClickedObjectU3Ek__BackingField_78(GameObject_t1756533147 * value)
	{
		___U3CLastClickedObjectU3Ek__BackingField_78 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLastClickedObjectU3Ek__BackingField_78, value);
	}

	inline static int32_t get_offset_of_U3CBreakpointsEnabledU3Ek__BackingField_79() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CBreakpointsEnabledU3Ek__BackingField_79)); }
	inline bool get_U3CBreakpointsEnabledU3Ek__BackingField_79() const { return ___U3CBreakpointsEnabledU3Ek__BackingField_79; }
	inline bool* get_address_of_U3CBreakpointsEnabledU3Ek__BackingField_79() { return &___U3CBreakpointsEnabledU3Ek__BackingField_79; }
	inline void set_U3CBreakpointsEnabledU3Ek__BackingField_79(bool value)
	{
		___U3CBreakpointsEnabledU3Ek__BackingField_79 = value;
	}

	inline static int32_t get_offset_of_U3CHitBreakpointU3Ek__BackingField_80() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CHitBreakpointU3Ek__BackingField_80)); }
	inline bool get_U3CHitBreakpointU3Ek__BackingField_80() const { return ___U3CHitBreakpointU3Ek__BackingField_80; }
	inline bool* get_address_of_U3CHitBreakpointU3Ek__BackingField_80() { return &___U3CHitBreakpointU3Ek__BackingField_80; }
	inline void set_U3CHitBreakpointU3Ek__BackingField_80(bool value)
	{
		___U3CHitBreakpointU3Ek__BackingField_80 = value;
	}

	inline static int32_t get_offset_of_U3CBreakAtFsmU3Ek__BackingField_81() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CBreakAtFsmU3Ek__BackingField_81)); }
	inline Fsm_t917886356 * get_U3CBreakAtFsmU3Ek__BackingField_81() const { return ___U3CBreakAtFsmU3Ek__BackingField_81; }
	inline Fsm_t917886356 ** get_address_of_U3CBreakAtFsmU3Ek__BackingField_81() { return &___U3CBreakAtFsmU3Ek__BackingField_81; }
	inline void set_U3CBreakAtFsmU3Ek__BackingField_81(Fsm_t917886356 * value)
	{
		___U3CBreakAtFsmU3Ek__BackingField_81 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBreakAtFsmU3Ek__BackingField_81, value);
	}

	inline static int32_t get_offset_of_U3CBreakAtStateU3Ek__BackingField_82() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CBreakAtStateU3Ek__BackingField_82)); }
	inline FsmState_t1643911659 * get_U3CBreakAtStateU3Ek__BackingField_82() const { return ___U3CBreakAtStateU3Ek__BackingField_82; }
	inline FsmState_t1643911659 ** get_address_of_U3CBreakAtStateU3Ek__BackingField_82() { return &___U3CBreakAtStateU3Ek__BackingField_82; }
	inline void set_U3CBreakAtStateU3Ek__BackingField_82(FsmState_t1643911659 * value)
	{
		___U3CBreakAtStateU3Ek__BackingField_82 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBreakAtStateU3Ek__BackingField_82, value);
	}

	inline static int32_t get_offset_of_U3CIsBreakU3Ek__BackingField_83() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CIsBreakU3Ek__BackingField_83)); }
	inline bool get_U3CIsBreakU3Ek__BackingField_83() const { return ___U3CIsBreakU3Ek__BackingField_83; }
	inline bool* get_address_of_U3CIsBreakU3Ek__BackingField_83() { return &___U3CIsBreakU3Ek__BackingField_83; }
	inline void set_U3CIsBreakU3Ek__BackingField_83(bool value)
	{
		___U3CIsBreakU3Ek__BackingField_83 = value;
	}

	inline static int32_t get_offset_of_U3CIsErrorBreakU3Ek__BackingField_84() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CIsErrorBreakU3Ek__BackingField_84)); }
	inline bool get_U3CIsErrorBreakU3Ek__BackingField_84() const { return ___U3CIsErrorBreakU3Ek__BackingField_84; }
	inline bool* get_address_of_U3CIsErrorBreakU3Ek__BackingField_84() { return &___U3CIsErrorBreakU3Ek__BackingField_84; }
	inline void set_U3CIsErrorBreakU3Ek__BackingField_84(bool value)
	{
		___U3CIsErrorBreakU3Ek__BackingField_84 = value;
	}

	inline static int32_t get_offset_of_U3CLastErrorU3Ek__BackingField_85() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CLastErrorU3Ek__BackingField_85)); }
	inline String_t* get_U3CLastErrorU3Ek__BackingField_85() const { return ___U3CLastErrorU3Ek__BackingField_85; }
	inline String_t** get_address_of_U3CLastErrorU3Ek__BackingField_85() { return &___U3CLastErrorU3Ek__BackingField_85; }
	inline void set_U3CLastErrorU3Ek__BackingField_85(String_t* value)
	{
		___U3CLastErrorU3Ek__BackingField_85 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLastErrorU3Ek__BackingField_85, value);
	}

	inline static int32_t get_offset_of_U3CStepToStateChangeU3Ek__BackingField_86() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CStepToStateChangeU3Ek__BackingField_86)); }
	inline bool get_U3CStepToStateChangeU3Ek__BackingField_86() const { return ___U3CStepToStateChangeU3Ek__BackingField_86; }
	inline bool* get_address_of_U3CStepToStateChangeU3Ek__BackingField_86() { return &___U3CStepToStateChangeU3Ek__BackingField_86; }
	inline void set_U3CStepToStateChangeU3Ek__BackingField_86(bool value)
	{
		___U3CStepToStateChangeU3Ek__BackingField_86 = value;
	}

	inline static int32_t get_offset_of_U3CStepFsmU3Ek__BackingField_87() { return static_cast<int32_t>(offsetof(Fsm_t917886356_StaticFields, ___U3CStepFsmU3Ek__BackingField_87)); }
	inline Fsm_t917886356 * get_U3CStepFsmU3Ek__BackingField_87() const { return ___U3CStepFsmU3Ek__BackingField_87; }
	inline Fsm_t917886356 ** get_address_of_U3CStepFsmU3Ek__BackingField_87() { return &___U3CStepFsmU3Ek__BackingField_87; }
	inline void set_U3CStepFsmU3Ek__BackingField_87(Fsm_t917886356 * value)
	{
		___U3CStepFsmU3Ek__BackingField_87 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStepFsmU3Ek__BackingField_87, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
