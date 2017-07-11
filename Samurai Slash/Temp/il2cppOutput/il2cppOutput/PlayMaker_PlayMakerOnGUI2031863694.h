#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayMakerFSM
struct PlayMakerFSM_t437737208;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayMakerOnGUI
struct  PlayMakerOnGUI_t2031863694  : public MonoBehaviour_t1158329972
{
public:
	// PlayMakerFSM PlayMakerOnGUI::playMakerFSM
	PlayMakerFSM_t437737208 * ___playMakerFSM_2;
	// System.Boolean PlayMakerOnGUI::previewInEditMode
	bool ___previewInEditMode_3;

public:
	inline static int32_t get_offset_of_playMakerFSM_2() { return static_cast<int32_t>(offsetof(PlayMakerOnGUI_t2031863694, ___playMakerFSM_2)); }
	inline PlayMakerFSM_t437737208 * get_playMakerFSM_2() const { return ___playMakerFSM_2; }
	inline PlayMakerFSM_t437737208 ** get_address_of_playMakerFSM_2() { return &___playMakerFSM_2; }
	inline void set_playMakerFSM_2(PlayMakerFSM_t437737208 * value)
	{
		___playMakerFSM_2 = value;
		Il2CppCodeGenWriteBarrier(&___playMakerFSM_2, value);
	}

	inline static int32_t get_offset_of_previewInEditMode_3() { return static_cast<int32_t>(offsetof(PlayMakerOnGUI_t2031863694, ___previewInEditMode_3)); }
	inline bool get_previewInEditMode_3() const { return ___previewInEditMode_3; }
	inline bool* get_address_of_previewInEditMode_3() { return &___previewInEditMode_3; }
	inline void set_previewInEditMode_3(bool value)
	{
		___previewInEditMode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
