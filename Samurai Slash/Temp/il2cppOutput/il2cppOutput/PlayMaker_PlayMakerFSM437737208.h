#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<PlayMakerFSM>
struct List_1_t4101825636;
// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// FsmTemplate
struct FsmTemplate_t1285897084;
// UnityEngine.GUITexture
struct GUITexture_t1909122990;
// UnityEngine.GUIText
struct GUIText_t2411476300;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMakerFSM
struct  PlayMakerFSM_t437737208  : public MonoBehaviour_t1158329972
{
public:
	// HutongGames.PlayMaker.Fsm PlayMakerFSM::fsm
	Fsm_t917886356 * ___fsm_6;
	// FsmTemplate PlayMakerFSM::fsmTemplate
	FsmTemplate_t1285897084 * ___fsmTemplate_7;
	// System.Boolean PlayMakerFSM::eventHandlerComponentsAdded
	bool ___eventHandlerComponentsAdded_8;
	// UnityEngine.GUITexture PlayMakerFSM::<GuiTexture>k__BackingField
	GUITexture_t1909122990 * ___U3CGuiTextureU3Ek__BackingField_9;
	// UnityEngine.GUIText PlayMakerFSM::<GuiText>k__BackingField
	GUIText_t2411476300 * ___U3CGuiTextU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_fsm_6() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208, ___fsm_6)); }
	inline Fsm_t917886356 * get_fsm_6() const { return ___fsm_6; }
	inline Fsm_t917886356 ** get_address_of_fsm_6() { return &___fsm_6; }
	inline void set_fsm_6(Fsm_t917886356 * value)
	{
		___fsm_6 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_6, value);
	}

	inline static int32_t get_offset_of_fsmTemplate_7() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208, ___fsmTemplate_7)); }
	inline FsmTemplate_t1285897084 * get_fsmTemplate_7() const { return ___fsmTemplate_7; }
	inline FsmTemplate_t1285897084 ** get_address_of_fsmTemplate_7() { return &___fsmTemplate_7; }
	inline void set_fsmTemplate_7(FsmTemplate_t1285897084 * value)
	{
		___fsmTemplate_7 = value;
		Il2CppCodeGenWriteBarrier(&___fsmTemplate_7, value);
	}

	inline static int32_t get_offset_of_eventHandlerComponentsAdded_8() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208, ___eventHandlerComponentsAdded_8)); }
	inline bool get_eventHandlerComponentsAdded_8() const { return ___eventHandlerComponentsAdded_8; }
	inline bool* get_address_of_eventHandlerComponentsAdded_8() { return &___eventHandlerComponentsAdded_8; }
	inline void set_eventHandlerComponentsAdded_8(bool value)
	{
		___eventHandlerComponentsAdded_8 = value;
	}

	inline static int32_t get_offset_of_U3CGuiTextureU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208, ___U3CGuiTextureU3Ek__BackingField_9)); }
	inline GUITexture_t1909122990 * get_U3CGuiTextureU3Ek__BackingField_9() const { return ___U3CGuiTextureU3Ek__BackingField_9; }
	inline GUITexture_t1909122990 ** get_address_of_U3CGuiTextureU3Ek__BackingField_9() { return &___U3CGuiTextureU3Ek__BackingField_9; }
	inline void set_U3CGuiTextureU3Ek__BackingField_9(GUITexture_t1909122990 * value)
	{
		___U3CGuiTextureU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGuiTextureU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CGuiTextU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208, ___U3CGuiTextU3Ek__BackingField_10)); }
	inline GUIText_t2411476300 * get_U3CGuiTextU3Ek__BackingField_10() const { return ___U3CGuiTextU3Ek__BackingField_10; }
	inline GUIText_t2411476300 ** get_address_of_U3CGuiTextU3Ek__BackingField_10() { return &___U3CGuiTextU3Ek__BackingField_10; }
	inline void set_U3CGuiTextU3Ek__BackingField_10(GUIText_t2411476300 * value)
	{
		___U3CGuiTextU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGuiTextU3Ek__BackingField_10, value);
	}
};

struct PlayMakerFSM_t437737208_StaticFields
{
public:
	// System.Collections.Generic.List`1<PlayMakerFSM> PlayMakerFSM::fsmList
	List_1_t4101825636 * ___fsmList_2;
	// System.Boolean PlayMakerFSM::MaximizeFileCompatibility
	bool ___MaximizeFileCompatibility_3;
	// System.Boolean PlayMakerFSM::ApplicationIsQuitting
	bool ___ApplicationIsQuitting_4;
	// System.Boolean PlayMakerFSM::NotMainThread
	bool ___NotMainThread_5;
	// System.Boolean PlayMakerFSM::<DrawGizmos>k__BackingField
	bool ___U3CDrawGizmosU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_fsmList_2() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208_StaticFields, ___fsmList_2)); }
	inline List_1_t4101825636 * get_fsmList_2() const { return ___fsmList_2; }
	inline List_1_t4101825636 ** get_address_of_fsmList_2() { return &___fsmList_2; }
	inline void set_fsmList_2(List_1_t4101825636 * value)
	{
		___fsmList_2 = value;
		Il2CppCodeGenWriteBarrier(&___fsmList_2, value);
	}

	inline static int32_t get_offset_of_MaximizeFileCompatibility_3() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208_StaticFields, ___MaximizeFileCompatibility_3)); }
	inline bool get_MaximizeFileCompatibility_3() const { return ___MaximizeFileCompatibility_3; }
	inline bool* get_address_of_MaximizeFileCompatibility_3() { return &___MaximizeFileCompatibility_3; }
	inline void set_MaximizeFileCompatibility_3(bool value)
	{
		___MaximizeFileCompatibility_3 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsQuitting_4() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208_StaticFields, ___ApplicationIsQuitting_4)); }
	inline bool get_ApplicationIsQuitting_4() const { return ___ApplicationIsQuitting_4; }
	inline bool* get_address_of_ApplicationIsQuitting_4() { return &___ApplicationIsQuitting_4; }
	inline void set_ApplicationIsQuitting_4(bool value)
	{
		___ApplicationIsQuitting_4 = value;
	}

	inline static int32_t get_offset_of_NotMainThread_5() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208_StaticFields, ___NotMainThread_5)); }
	inline bool get_NotMainThread_5() const { return ___NotMainThread_5; }
	inline bool* get_address_of_NotMainThread_5() { return &___NotMainThread_5; }
	inline void set_NotMainThread_5(bool value)
	{
		___NotMainThread_5 = value;
	}

	inline static int32_t get_offset_of_U3CDrawGizmosU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PlayMakerFSM_t437737208_StaticFields, ___U3CDrawGizmosU3Ek__BackingField_11)); }
	inline bool get_U3CDrawGizmosU3Ek__BackingField_11() const { return ___U3CDrawGizmosU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDrawGizmosU3Ek__BackingField_11() { return &___U3CDrawGizmosU3Ek__BackingField_11; }
	inline void set_U3CDrawGizmosU3Ek__BackingField_11(bool value)
	{
		___U3CDrawGizmosU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
