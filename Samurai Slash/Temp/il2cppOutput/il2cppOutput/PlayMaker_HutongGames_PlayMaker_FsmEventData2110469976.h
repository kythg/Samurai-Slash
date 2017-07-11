#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1243528291.h"
#include "UnityEngine_UnityEngine_NetworkDisconnection45590380.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError1607866742.h"
#include "UnityEngine_UnityEngine_NetworkMessageInfo614064059.h"
#include "UnityEngine_UnityEngine_MasterServerEvent2097711603.h"

// HutongGames.PlayMaker.Fsm
struct Fsm_t917886356;
// HutongGames.PlayMaker.FsmState
struct FsmState_t1643911659;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t2862378169;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.FsmEventData
struct  FsmEventData_t2110469976  : public Il2CppObject
{
public:
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmEventData::SentByFsm
	Fsm_t917886356 * ___SentByFsm_0;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmEventData::SentByState
	FsmState_t1643911659 * ___SentByState_1;
	// HutongGames.PlayMaker.FsmStateAction HutongGames.PlayMaker.FsmEventData::SentByAction
	FsmStateAction_t2862378169 * ___SentByAction_2;
	// System.Boolean HutongGames.PlayMaker.FsmEventData::BoolData
	bool ___BoolData_3;
	// System.Int32 HutongGames.PlayMaker.FsmEventData::IntData
	int32_t ___IntData_4;
	// System.Single HutongGames.PlayMaker.FsmEventData::FloatData
	float ___FloatData_5;
	// UnityEngine.Vector2 HutongGames.PlayMaker.FsmEventData::Vector2Data
	Vector2_t2243707579  ___Vector2Data_6;
	// UnityEngine.Vector3 HutongGames.PlayMaker.FsmEventData::Vector3Data
	Vector3_t2243707580  ___Vector3Data_7;
	// System.String HutongGames.PlayMaker.FsmEventData::StringData
	String_t* ___StringData_8;
	// UnityEngine.Quaternion HutongGames.PlayMaker.FsmEventData::QuaternionData
	Quaternion_t4030073918  ___QuaternionData_9;
	// UnityEngine.Rect HutongGames.PlayMaker.FsmEventData::RectData
	Rect_t3681755626  ___RectData_10;
	// UnityEngine.Color HutongGames.PlayMaker.FsmEventData::ColorData
	Color_t2020392075  ___ColorData_11;
	// UnityEngine.Object HutongGames.PlayMaker.FsmEventData::ObjectData
	Object_t1021602117 * ___ObjectData_12;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmEventData::GameObjectData
	GameObject_t1756533147 * ___GameObjectData_13;
	// UnityEngine.Material HutongGames.PlayMaker.FsmEventData::MaterialData
	Material_t193706927 * ___MaterialData_14;
	// UnityEngine.Texture HutongGames.PlayMaker.FsmEventData::TextureData
	Texture_t2243626319 * ___TextureData_15;
	// UnityEngine.NetworkPlayer HutongGames.PlayMaker.FsmEventData::Player
	NetworkPlayer_t1243528291  ___Player_16;
	// UnityEngine.NetworkDisconnection HutongGames.PlayMaker.FsmEventData::DisconnectionInfo
	int32_t ___DisconnectionInfo_17;
	// UnityEngine.NetworkConnectionError HutongGames.PlayMaker.FsmEventData::ConnectionError
	int32_t ___ConnectionError_18;
	// UnityEngine.NetworkMessageInfo HutongGames.PlayMaker.FsmEventData::NetworkMessageInfo
	NetworkMessageInfo_t614064059  ___NetworkMessageInfo_19;
	// UnityEngine.MasterServerEvent HutongGames.PlayMaker.FsmEventData::MasterServerEvent
	int32_t ___MasterServerEvent_20;

public:
	inline static int32_t get_offset_of_SentByFsm_0() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___SentByFsm_0)); }
	inline Fsm_t917886356 * get_SentByFsm_0() const { return ___SentByFsm_0; }
	inline Fsm_t917886356 ** get_address_of_SentByFsm_0() { return &___SentByFsm_0; }
	inline void set_SentByFsm_0(Fsm_t917886356 * value)
	{
		___SentByFsm_0 = value;
		Il2CppCodeGenWriteBarrier(&___SentByFsm_0, value);
	}

	inline static int32_t get_offset_of_SentByState_1() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___SentByState_1)); }
	inline FsmState_t1643911659 * get_SentByState_1() const { return ___SentByState_1; }
	inline FsmState_t1643911659 ** get_address_of_SentByState_1() { return &___SentByState_1; }
	inline void set_SentByState_1(FsmState_t1643911659 * value)
	{
		___SentByState_1 = value;
		Il2CppCodeGenWriteBarrier(&___SentByState_1, value);
	}

	inline static int32_t get_offset_of_SentByAction_2() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___SentByAction_2)); }
	inline FsmStateAction_t2862378169 * get_SentByAction_2() const { return ___SentByAction_2; }
	inline FsmStateAction_t2862378169 ** get_address_of_SentByAction_2() { return &___SentByAction_2; }
	inline void set_SentByAction_2(FsmStateAction_t2862378169 * value)
	{
		___SentByAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___SentByAction_2, value);
	}

	inline static int32_t get_offset_of_BoolData_3() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___BoolData_3)); }
	inline bool get_BoolData_3() const { return ___BoolData_3; }
	inline bool* get_address_of_BoolData_3() { return &___BoolData_3; }
	inline void set_BoolData_3(bool value)
	{
		___BoolData_3 = value;
	}

	inline static int32_t get_offset_of_IntData_4() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___IntData_4)); }
	inline int32_t get_IntData_4() const { return ___IntData_4; }
	inline int32_t* get_address_of_IntData_4() { return &___IntData_4; }
	inline void set_IntData_4(int32_t value)
	{
		___IntData_4 = value;
	}

	inline static int32_t get_offset_of_FloatData_5() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___FloatData_5)); }
	inline float get_FloatData_5() const { return ___FloatData_5; }
	inline float* get_address_of_FloatData_5() { return &___FloatData_5; }
	inline void set_FloatData_5(float value)
	{
		___FloatData_5 = value;
	}

	inline static int32_t get_offset_of_Vector2Data_6() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___Vector2Data_6)); }
	inline Vector2_t2243707579  get_Vector2Data_6() const { return ___Vector2Data_6; }
	inline Vector2_t2243707579 * get_address_of_Vector2Data_6() { return &___Vector2Data_6; }
	inline void set_Vector2Data_6(Vector2_t2243707579  value)
	{
		___Vector2Data_6 = value;
	}

	inline static int32_t get_offset_of_Vector3Data_7() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___Vector3Data_7)); }
	inline Vector3_t2243707580  get_Vector3Data_7() const { return ___Vector3Data_7; }
	inline Vector3_t2243707580 * get_address_of_Vector3Data_7() { return &___Vector3Data_7; }
	inline void set_Vector3Data_7(Vector3_t2243707580  value)
	{
		___Vector3Data_7 = value;
	}

	inline static int32_t get_offset_of_StringData_8() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___StringData_8)); }
	inline String_t* get_StringData_8() const { return ___StringData_8; }
	inline String_t** get_address_of_StringData_8() { return &___StringData_8; }
	inline void set_StringData_8(String_t* value)
	{
		___StringData_8 = value;
		Il2CppCodeGenWriteBarrier(&___StringData_8, value);
	}

	inline static int32_t get_offset_of_QuaternionData_9() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___QuaternionData_9)); }
	inline Quaternion_t4030073918  get_QuaternionData_9() const { return ___QuaternionData_9; }
	inline Quaternion_t4030073918 * get_address_of_QuaternionData_9() { return &___QuaternionData_9; }
	inline void set_QuaternionData_9(Quaternion_t4030073918  value)
	{
		___QuaternionData_9 = value;
	}

	inline static int32_t get_offset_of_RectData_10() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___RectData_10)); }
	inline Rect_t3681755626  get_RectData_10() const { return ___RectData_10; }
	inline Rect_t3681755626 * get_address_of_RectData_10() { return &___RectData_10; }
	inline void set_RectData_10(Rect_t3681755626  value)
	{
		___RectData_10 = value;
	}

	inline static int32_t get_offset_of_ColorData_11() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___ColorData_11)); }
	inline Color_t2020392075  get_ColorData_11() const { return ___ColorData_11; }
	inline Color_t2020392075 * get_address_of_ColorData_11() { return &___ColorData_11; }
	inline void set_ColorData_11(Color_t2020392075  value)
	{
		___ColorData_11 = value;
	}

	inline static int32_t get_offset_of_ObjectData_12() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___ObjectData_12)); }
	inline Object_t1021602117 * get_ObjectData_12() const { return ___ObjectData_12; }
	inline Object_t1021602117 ** get_address_of_ObjectData_12() { return &___ObjectData_12; }
	inline void set_ObjectData_12(Object_t1021602117 * value)
	{
		___ObjectData_12 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectData_12, value);
	}

	inline static int32_t get_offset_of_GameObjectData_13() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___GameObjectData_13)); }
	inline GameObject_t1756533147 * get_GameObjectData_13() const { return ___GameObjectData_13; }
	inline GameObject_t1756533147 ** get_address_of_GameObjectData_13() { return &___GameObjectData_13; }
	inline void set_GameObjectData_13(GameObject_t1756533147 * value)
	{
		___GameObjectData_13 = value;
		Il2CppCodeGenWriteBarrier(&___GameObjectData_13, value);
	}

	inline static int32_t get_offset_of_MaterialData_14() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___MaterialData_14)); }
	inline Material_t193706927 * get_MaterialData_14() const { return ___MaterialData_14; }
	inline Material_t193706927 ** get_address_of_MaterialData_14() { return &___MaterialData_14; }
	inline void set_MaterialData_14(Material_t193706927 * value)
	{
		___MaterialData_14 = value;
		Il2CppCodeGenWriteBarrier(&___MaterialData_14, value);
	}

	inline static int32_t get_offset_of_TextureData_15() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___TextureData_15)); }
	inline Texture_t2243626319 * get_TextureData_15() const { return ___TextureData_15; }
	inline Texture_t2243626319 ** get_address_of_TextureData_15() { return &___TextureData_15; }
	inline void set_TextureData_15(Texture_t2243626319 * value)
	{
		___TextureData_15 = value;
		Il2CppCodeGenWriteBarrier(&___TextureData_15, value);
	}

	inline static int32_t get_offset_of_Player_16() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___Player_16)); }
	inline NetworkPlayer_t1243528291  get_Player_16() const { return ___Player_16; }
	inline NetworkPlayer_t1243528291 * get_address_of_Player_16() { return &___Player_16; }
	inline void set_Player_16(NetworkPlayer_t1243528291  value)
	{
		___Player_16 = value;
	}

	inline static int32_t get_offset_of_DisconnectionInfo_17() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___DisconnectionInfo_17)); }
	inline int32_t get_DisconnectionInfo_17() const { return ___DisconnectionInfo_17; }
	inline int32_t* get_address_of_DisconnectionInfo_17() { return &___DisconnectionInfo_17; }
	inline void set_DisconnectionInfo_17(int32_t value)
	{
		___DisconnectionInfo_17 = value;
	}

	inline static int32_t get_offset_of_ConnectionError_18() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___ConnectionError_18)); }
	inline int32_t get_ConnectionError_18() const { return ___ConnectionError_18; }
	inline int32_t* get_address_of_ConnectionError_18() { return &___ConnectionError_18; }
	inline void set_ConnectionError_18(int32_t value)
	{
		___ConnectionError_18 = value;
	}

	inline static int32_t get_offset_of_NetworkMessageInfo_19() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___NetworkMessageInfo_19)); }
	inline NetworkMessageInfo_t614064059  get_NetworkMessageInfo_19() const { return ___NetworkMessageInfo_19; }
	inline NetworkMessageInfo_t614064059 * get_address_of_NetworkMessageInfo_19() { return &___NetworkMessageInfo_19; }
	inline void set_NetworkMessageInfo_19(NetworkMessageInfo_t614064059  value)
	{
		___NetworkMessageInfo_19 = value;
	}

	inline static int32_t get_offset_of_MasterServerEvent_20() { return static_cast<int32_t>(offsetof(FsmEventData_t2110469976, ___MasterServerEvent_20)); }
	inline int32_t get_MasterServerEvent_20() const { return ___MasterServerEvent_20; }
	inline int32_t* get_address_of_MasterServerEvent_20() { return &___MasterServerEvent_20; }
	inline void set_MasterServerEvent_20(int32_t value)
	{
		___MasterServerEvent_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
