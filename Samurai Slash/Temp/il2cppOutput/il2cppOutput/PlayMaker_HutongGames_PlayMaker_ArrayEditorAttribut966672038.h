#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"
#include "PlayMaker_HutongGames_PlayMaker_VariableType930978778.h"

// System.Type
struct Type_t;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.ArrayEditorAttribute
struct  ArrayEditorAttribute_t966672038  : public Attribute_t542643598
{
public:
	// HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.ArrayEditorAttribute::variableType
	int32_t ___variableType_0;
	// System.Type HutongGames.PlayMaker.ArrayEditorAttribute::objectType
	Type_t * ___objectType_1;
	// System.String HutongGames.PlayMaker.ArrayEditorAttribute::elementName
	String_t* ___elementName_2;
	// System.Int32 HutongGames.PlayMaker.ArrayEditorAttribute::fixedSize
	int32_t ___fixedSize_3;
	// System.Int32 HutongGames.PlayMaker.ArrayEditorAttribute::maxSize
	int32_t ___maxSize_4;
	// System.Int32 HutongGames.PlayMaker.ArrayEditorAttribute::minSize
	int32_t ___minSize_5;

public:
	inline static int32_t get_offset_of_variableType_0() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___variableType_0)); }
	inline int32_t get_variableType_0() const { return ___variableType_0; }
	inline int32_t* get_address_of_variableType_0() { return &___variableType_0; }
	inline void set_variableType_0(int32_t value)
	{
		___variableType_0 = value;
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier(&___objectType_1, value);
	}

	inline static int32_t get_offset_of_elementName_2() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___elementName_2)); }
	inline String_t* get_elementName_2() const { return ___elementName_2; }
	inline String_t** get_address_of_elementName_2() { return &___elementName_2; }
	inline void set_elementName_2(String_t* value)
	{
		___elementName_2 = value;
		Il2CppCodeGenWriteBarrier(&___elementName_2, value);
	}

	inline static int32_t get_offset_of_fixedSize_3() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___fixedSize_3)); }
	inline int32_t get_fixedSize_3() const { return ___fixedSize_3; }
	inline int32_t* get_address_of_fixedSize_3() { return &___fixedSize_3; }
	inline void set_fixedSize_3(int32_t value)
	{
		___fixedSize_3 = value;
	}

	inline static int32_t get_offset_of_maxSize_4() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___maxSize_4)); }
	inline int32_t get_maxSize_4() const { return ___maxSize_4; }
	inline int32_t* get_address_of_maxSize_4() { return &___maxSize_4; }
	inline void set_maxSize_4(int32_t value)
	{
		___maxSize_4 = value;
	}

	inline static int32_t get_offset_of_minSize_5() { return static_cast<int32_t>(offsetof(ArrayEditorAttribute_t966672038, ___minSize_5)); }
	inline int32_t get_minSize_5() const { return ___minSize_5; }
	inline int32_t* get_address_of_minSize_5() { return &___minSize_5; }
	inline void set_minSize_5(int32_t value)
	{
		___minSize_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
