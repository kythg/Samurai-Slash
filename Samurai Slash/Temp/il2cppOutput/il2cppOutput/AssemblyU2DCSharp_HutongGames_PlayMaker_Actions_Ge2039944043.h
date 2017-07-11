#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t937133978;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.GetLocationInfo
struct  GetLocationInfo_t2039944043  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.GetLocationInfo::vectorPosition
	FsmVector3_t3996534004 * ___vectorPosition_11;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetLocationInfo::longitude
	FsmFloat_t937133978 * ___longitude_12;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetLocationInfo::latitude
	FsmFloat_t937133978 * ___latitude_13;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetLocationInfo::altitude
	FsmFloat_t937133978 * ___altitude_14;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetLocationInfo::horizontalAccuracy
	FsmFloat_t937133978 * ___horizontalAccuracy_15;
	// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.Actions.GetLocationInfo::verticalAccuracy
	FsmFloat_t937133978 * ___verticalAccuracy_16;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.GetLocationInfo::errorEvent
	FsmEvent_t1258573736 * ___errorEvent_17;

public:
	inline static int32_t get_offset_of_vectorPosition_11() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___vectorPosition_11)); }
	inline FsmVector3_t3996534004 * get_vectorPosition_11() const { return ___vectorPosition_11; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorPosition_11() { return &___vectorPosition_11; }
	inline void set_vectorPosition_11(FsmVector3_t3996534004 * value)
	{
		___vectorPosition_11 = value;
		Il2CppCodeGenWriteBarrier(&___vectorPosition_11, value);
	}

	inline static int32_t get_offset_of_longitude_12() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___longitude_12)); }
	inline FsmFloat_t937133978 * get_longitude_12() const { return ___longitude_12; }
	inline FsmFloat_t937133978 ** get_address_of_longitude_12() { return &___longitude_12; }
	inline void set_longitude_12(FsmFloat_t937133978 * value)
	{
		___longitude_12 = value;
		Il2CppCodeGenWriteBarrier(&___longitude_12, value);
	}

	inline static int32_t get_offset_of_latitude_13() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___latitude_13)); }
	inline FsmFloat_t937133978 * get_latitude_13() const { return ___latitude_13; }
	inline FsmFloat_t937133978 ** get_address_of_latitude_13() { return &___latitude_13; }
	inline void set_latitude_13(FsmFloat_t937133978 * value)
	{
		___latitude_13 = value;
		Il2CppCodeGenWriteBarrier(&___latitude_13, value);
	}

	inline static int32_t get_offset_of_altitude_14() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___altitude_14)); }
	inline FsmFloat_t937133978 * get_altitude_14() const { return ___altitude_14; }
	inline FsmFloat_t937133978 ** get_address_of_altitude_14() { return &___altitude_14; }
	inline void set_altitude_14(FsmFloat_t937133978 * value)
	{
		___altitude_14 = value;
		Il2CppCodeGenWriteBarrier(&___altitude_14, value);
	}

	inline static int32_t get_offset_of_horizontalAccuracy_15() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___horizontalAccuracy_15)); }
	inline FsmFloat_t937133978 * get_horizontalAccuracy_15() const { return ___horizontalAccuracy_15; }
	inline FsmFloat_t937133978 ** get_address_of_horizontalAccuracy_15() { return &___horizontalAccuracy_15; }
	inline void set_horizontalAccuracy_15(FsmFloat_t937133978 * value)
	{
		___horizontalAccuracy_15 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAccuracy_15, value);
	}

	inline static int32_t get_offset_of_verticalAccuracy_16() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___verticalAccuracy_16)); }
	inline FsmFloat_t937133978 * get_verticalAccuracy_16() const { return ___verticalAccuracy_16; }
	inline FsmFloat_t937133978 ** get_address_of_verticalAccuracy_16() { return &___verticalAccuracy_16; }
	inline void set_verticalAccuracy_16(FsmFloat_t937133978 * value)
	{
		___verticalAccuracy_16 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAccuracy_16, value);
	}

	inline static int32_t get_offset_of_errorEvent_17() { return static_cast<int32_t>(offsetof(GetLocationInfo_t2039944043, ___errorEvent_17)); }
	inline FsmEvent_t1258573736 * get_errorEvent_17() const { return ___errorEvent_17; }
	inline FsmEvent_t1258573736 ** get_address_of_errorEvent_17() { return &___errorEvent_17; }
	inline void set_errorEvent_17(FsmEvent_t1258573736 * value)
	{
		___errorEvent_17 = value;
		Il2CppCodeGenWriteBarrier(&___errorEvent_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
