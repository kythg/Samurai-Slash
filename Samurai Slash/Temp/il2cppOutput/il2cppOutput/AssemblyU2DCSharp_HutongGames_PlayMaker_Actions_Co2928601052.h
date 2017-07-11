#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_t1421632035;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t2785794313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ConvertMaterialToObject
struct  ConvertMaterialToObject_t2928601052  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.Actions.ConvertMaterialToObject::materialVariable
	FsmMaterial_t1421632035 * ___materialVariable_11;
	// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.Actions.ConvertMaterialToObject::objectVariable
	FsmObject_t2785794313 * ___objectVariable_12;
	// System.Boolean HutongGames.PlayMaker.Actions.ConvertMaterialToObject::everyFrame
	bool ___everyFrame_13;

public:
	inline static int32_t get_offset_of_materialVariable_11() { return static_cast<int32_t>(offsetof(ConvertMaterialToObject_t2928601052, ___materialVariable_11)); }
	inline FsmMaterial_t1421632035 * get_materialVariable_11() const { return ___materialVariable_11; }
	inline FsmMaterial_t1421632035 ** get_address_of_materialVariable_11() { return &___materialVariable_11; }
	inline void set_materialVariable_11(FsmMaterial_t1421632035 * value)
	{
		___materialVariable_11 = value;
		Il2CppCodeGenWriteBarrier(&___materialVariable_11, value);
	}

	inline static int32_t get_offset_of_objectVariable_12() { return static_cast<int32_t>(offsetof(ConvertMaterialToObject_t2928601052, ___objectVariable_12)); }
	inline FsmObject_t2785794313 * get_objectVariable_12() const { return ___objectVariable_12; }
	inline FsmObject_t2785794313 ** get_address_of_objectVariable_12() { return &___objectVariable_12; }
	inline void set_objectVariable_12(FsmObject_t2785794313 * value)
	{
		___objectVariable_12 = value;
		Il2CppCodeGenWriteBarrier(&___objectVariable_12, value);
	}

	inline static int32_t get_offset_of_everyFrame_13() { return static_cast<int32_t>(offsetof(ConvertMaterialToObject_t2928601052, ___everyFrame_13)); }
	inline bool get_everyFrame_13() const { return ___everyFrame_13; }
	inline bool* get_address_of_everyFrame_13() { return &___everyFrame_13; }
	inline void set_everyFrame_13(bool value)
	{
		___everyFrame_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
