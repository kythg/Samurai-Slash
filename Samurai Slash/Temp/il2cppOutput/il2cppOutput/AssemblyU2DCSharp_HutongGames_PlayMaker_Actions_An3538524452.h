#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_An3469388247.h"
#include "AssemblyU2DCSharp_HutongGames_PlayMaker_Actions_Ani322151382.h"

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t118301965;
// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateColor
struct  AnimateColor_t3538524452  : public AnimateFsmAction_t3469388247
{
public:
	// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.Actions.AnimateColor::colorVariable
	FsmColor_t118301965 * ___colorVariable_34;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateColor::curveR
	FsmAnimationCurve_t326747561 * ___curveR_35;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateColor::calculationR
	int32_t ___calculationR_36;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateColor::curveG
	FsmAnimationCurve_t326747561 * ___curveG_37;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateColor::calculationG
	int32_t ___calculationG_38;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateColor::curveB
	FsmAnimationCurve_t326747561 * ___curveB_39;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateColor::calculationB
	int32_t ___calculationB_40;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateColor::curveA
	FsmAnimationCurve_t326747561 * ___curveA_41;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateColor::calculationA
	int32_t ___calculationA_42;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateColor::finishInNextStep
	bool ___finishInNextStep_43;

public:
	inline static int32_t get_offset_of_colorVariable_34() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___colorVariable_34)); }
	inline FsmColor_t118301965 * get_colorVariable_34() const { return ___colorVariable_34; }
	inline FsmColor_t118301965 ** get_address_of_colorVariable_34() { return &___colorVariable_34; }
	inline void set_colorVariable_34(FsmColor_t118301965 * value)
	{
		___colorVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___colorVariable_34, value);
	}

	inline static int32_t get_offset_of_curveR_35() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___curveR_35)); }
	inline FsmAnimationCurve_t326747561 * get_curveR_35() const { return ___curveR_35; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveR_35() { return &___curveR_35; }
	inline void set_curveR_35(FsmAnimationCurve_t326747561 * value)
	{
		___curveR_35 = value;
		Il2CppCodeGenWriteBarrier(&___curveR_35, value);
	}

	inline static int32_t get_offset_of_calculationR_36() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___calculationR_36)); }
	inline int32_t get_calculationR_36() const { return ___calculationR_36; }
	inline int32_t* get_address_of_calculationR_36() { return &___calculationR_36; }
	inline void set_calculationR_36(int32_t value)
	{
		___calculationR_36 = value;
	}

	inline static int32_t get_offset_of_curveG_37() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___curveG_37)); }
	inline FsmAnimationCurve_t326747561 * get_curveG_37() const { return ___curveG_37; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveG_37() { return &___curveG_37; }
	inline void set_curveG_37(FsmAnimationCurve_t326747561 * value)
	{
		___curveG_37 = value;
		Il2CppCodeGenWriteBarrier(&___curveG_37, value);
	}

	inline static int32_t get_offset_of_calculationG_38() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___calculationG_38)); }
	inline int32_t get_calculationG_38() const { return ___calculationG_38; }
	inline int32_t* get_address_of_calculationG_38() { return &___calculationG_38; }
	inline void set_calculationG_38(int32_t value)
	{
		___calculationG_38 = value;
	}

	inline static int32_t get_offset_of_curveB_39() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___curveB_39)); }
	inline FsmAnimationCurve_t326747561 * get_curveB_39() const { return ___curveB_39; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveB_39() { return &___curveB_39; }
	inline void set_curveB_39(FsmAnimationCurve_t326747561 * value)
	{
		___curveB_39 = value;
		Il2CppCodeGenWriteBarrier(&___curveB_39, value);
	}

	inline static int32_t get_offset_of_calculationB_40() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___calculationB_40)); }
	inline int32_t get_calculationB_40() const { return ___calculationB_40; }
	inline int32_t* get_address_of_calculationB_40() { return &___calculationB_40; }
	inline void set_calculationB_40(int32_t value)
	{
		___calculationB_40 = value;
	}

	inline static int32_t get_offset_of_curveA_41() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___curveA_41)); }
	inline FsmAnimationCurve_t326747561 * get_curveA_41() const { return ___curveA_41; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveA_41() { return &___curveA_41; }
	inline void set_curveA_41(FsmAnimationCurve_t326747561 * value)
	{
		___curveA_41 = value;
		Il2CppCodeGenWriteBarrier(&___curveA_41, value);
	}

	inline static int32_t get_offset_of_calculationA_42() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___calculationA_42)); }
	inline int32_t get_calculationA_42() const { return ___calculationA_42; }
	inline int32_t* get_address_of_calculationA_42() { return &___calculationA_42; }
	inline void set_calculationA_42(int32_t value)
	{
		___calculationA_42 = value;
	}

	inline static int32_t get_offset_of_finishInNextStep_43() { return static_cast<int32_t>(offsetof(AnimateColor_t3538524452, ___finishInNextStep_43)); }
	inline bool get_finishInNextStep_43() const { return ___finishInNextStep_43; }
	inline bool* get_address_of_finishInNextStep_43() { return &___finishInNextStep_43; }
	inline void set_finishInNextStep_43(bool value)
	{
		___finishInNextStep_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
