#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmString
struct FsmString_t2414474701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.CreateScene
struct  CreateScene_t2877982436  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.Actions.CreateScene::sceneName
	FsmString_t2414474701 * ___sceneName_11;

public:
	inline static int32_t get_offset_of_sceneName_11() { return static_cast<int32_t>(offsetof(CreateScene_t2877982436, ___sceneName_11)); }
	inline FsmString_t2414474701 * get_sceneName_11() const { return ___sceneName_11; }
	inline FsmString_t2414474701 ** get_address_of_sceneName_11() { return &___sceneName_11; }
	inline void set_sceneName_11(FsmString_t2414474701 * value)
	{
		___sceneName_11 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
