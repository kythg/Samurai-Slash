#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "PlayMaker_HutongGames_PlayMaker_FsmStateAction2862378169.h"

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t527459893;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t1273009179;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t2808516103;
// HutongGames.PlayMaker.FsmEvent
struct FsmEvent_t1258573736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.ArrayTransferValue
struct  ArrayTransferValue_t808037777  : public FsmStateAction_t2862378169
{
public:
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayTransferValue::arraySource
	FsmArray_t527459893 * ___arraySource_11;
	// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.Actions.ArrayTransferValue::arrayTarget
	FsmArray_t527459893 * ___arrayTarget_12;
	// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.Actions.ArrayTransferValue::indexToTransfer
	FsmInt_t1273009179 * ___indexToTransfer_13;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.ArrayTransferValue::copyType
	FsmEnum_t2808516103 * ___copyType_14;
	// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.Actions.ArrayTransferValue::pasteType
	FsmEnum_t2808516103 * ___pasteType_15;
	// HutongGames.PlayMaker.FsmEvent HutongGames.PlayMaker.Actions.ArrayTransferValue::indexOutOfRange
	FsmEvent_t1258573736 * ___indexOutOfRange_16;

public:
	inline static int32_t get_offset_of_arraySource_11() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___arraySource_11)); }
	inline FsmArray_t527459893 * get_arraySource_11() const { return ___arraySource_11; }
	inline FsmArray_t527459893 ** get_address_of_arraySource_11() { return &___arraySource_11; }
	inline void set_arraySource_11(FsmArray_t527459893 * value)
	{
		___arraySource_11 = value;
		Il2CppCodeGenWriteBarrier(&___arraySource_11, value);
	}

	inline static int32_t get_offset_of_arrayTarget_12() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___arrayTarget_12)); }
	inline FsmArray_t527459893 * get_arrayTarget_12() const { return ___arrayTarget_12; }
	inline FsmArray_t527459893 ** get_address_of_arrayTarget_12() { return &___arrayTarget_12; }
	inline void set_arrayTarget_12(FsmArray_t527459893 * value)
	{
		___arrayTarget_12 = value;
		Il2CppCodeGenWriteBarrier(&___arrayTarget_12, value);
	}

	inline static int32_t get_offset_of_indexToTransfer_13() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___indexToTransfer_13)); }
	inline FsmInt_t1273009179 * get_indexToTransfer_13() const { return ___indexToTransfer_13; }
	inline FsmInt_t1273009179 ** get_address_of_indexToTransfer_13() { return &___indexToTransfer_13; }
	inline void set_indexToTransfer_13(FsmInt_t1273009179 * value)
	{
		___indexToTransfer_13 = value;
		Il2CppCodeGenWriteBarrier(&___indexToTransfer_13, value);
	}

	inline static int32_t get_offset_of_copyType_14() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___copyType_14)); }
	inline FsmEnum_t2808516103 * get_copyType_14() const { return ___copyType_14; }
	inline FsmEnum_t2808516103 ** get_address_of_copyType_14() { return &___copyType_14; }
	inline void set_copyType_14(FsmEnum_t2808516103 * value)
	{
		___copyType_14 = value;
		Il2CppCodeGenWriteBarrier(&___copyType_14, value);
	}

	inline static int32_t get_offset_of_pasteType_15() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___pasteType_15)); }
	inline FsmEnum_t2808516103 * get_pasteType_15() const { return ___pasteType_15; }
	inline FsmEnum_t2808516103 ** get_address_of_pasteType_15() { return &___pasteType_15; }
	inline void set_pasteType_15(FsmEnum_t2808516103 * value)
	{
		___pasteType_15 = value;
		Il2CppCodeGenWriteBarrier(&___pasteType_15, value);
	}

	inline static int32_t get_offset_of_indexOutOfRange_16() { return static_cast<int32_t>(offsetof(ArrayTransferValue_t808037777, ___indexOutOfRange_16)); }
	inline FsmEvent_t1258573736 * get_indexOutOfRange_16() const { return ___indexOutOfRange_16; }
	inline FsmEvent_t1258573736 ** get_address_of_indexOutOfRange_16() { return &___indexOutOfRange_16; }
	inline void set_indexOutOfRange_16(FsmEvent_t1258573736 * value)
	{
		___indexOutOfRange_16 = value;
		Il2CppCodeGenWriteBarrier(&___indexOutOfRange_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
