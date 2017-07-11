#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

// HutongGames.PlayMaker.FsmOwnerDefault
struct FsmOwnerDefault_t2023674184;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetVertexPosition
struct  GetVertexPosition_t2958953717  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmOwnerDefault HutongGames.PlayMaker.Actions.GetVertexPosition::gameObject
	FsmOwnerDefault_t2023674184 * ___gameObject_11;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.GetVertexPosition::vertexIndex
	FsmInt_t1273009179 * ___vertexIndex_12;
	// UnityEngine.Space HutongGames.PlayMaker.Actions.GetVertexPosition::space
	int32_t ___space_13;
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetVertexPosition::storePosition
	FsmVector3_t3996534004 * ___storePosition_14;
	// System.Boolean HutongGames.PlayMaker.Actions.GetVertexPosition::everyFrame
	bool ___everyFrame_15;

public:
	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(GetVertexPosition_t2958953717, ___gameObject_11)); }
	inline FsmOwnerDefault_t2023674184 * get_gameObject_11() const { return ___gameObject_11; }
	inline FsmOwnerDefault_t2023674184 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(FsmOwnerDefault_t2023674184 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of_vertexIndex_12() { return static_cast<int32_t>(offsetof(GetVertexPosition_t2958953717, ___vertexIndex_12)); }
	inline FsmInt_t1273009179 * get_vertexIndex_12() const { return ___vertexIndex_12; }
	inline FsmInt_t1273009179 ** get_address_of_vertexIndex_12() { return &___vertexIndex_12; }
	inline void set_vertexIndex_12(FsmInt_t1273009179 * value)
	{
		___vertexIndex_12 = value;
		Il2CppCodeGenWriteBarrier(&___vertexIndex_12, value);
	}

	inline static int32_t get_offset_of_space_13() { return static_cast<int32_t>(offsetof(GetVertexPosition_t2958953717, ___space_13)); }
	inline int32_t get_space_13() const { return ___space_13; }
	inline int32_t* get_address_of_space_13() { return &___space_13; }
	inline void set_space_13(int32_t value)
	{
		___space_13 = value;
	}

	inline static int32_t get_offset_of_storePosition_14() { return static_cast<int32_t>(offsetof(GetVertexPosition_t2958953717, ___storePosition_14)); }
	inline FsmVector3_t3996534004 * get_storePosition_14() const { return ___storePosition_14; }
	inline FsmVector3_t3996534004 ** get_address_of_storePosition_14() { return &___storePosition_14; }
	inline void set_storePosition_14(FsmVector3_t3996534004 * value)
	{
		___storePosition_14 = value;
		Il2CppCodeGenWriteBarrier(&___storePosition_14, value);
	}

	inline static int32_t get_offset_of_everyFrame_15() { return static_cast<int32_t>(offsetof(GetVertexPosition_t2958953717, ___everyFrame_15)); }
	inline bool get_everyFrame_15() const { return ___everyFrame_15; }
	inline bool* get_address_of_everyFrame_15() { return &___everyFrame_15; }
	inline void set_everyFrame_15(bool value)
	{
		___everyFrame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
