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

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t3996534004;
// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateVector3
struct  AnimateVector3_t3374166687  : public AnimateFsmAction_t3469388247
{
public:
	// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.Actions.AnimateVector3::vectorVariable
	FsmVector3_t3996534004 * ___vectorVariable_34;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateVector3::curveX
	FsmAnimationCurve_t326747561 * ___curveX_35;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateVector3::calculationX
	int32_t ___calculationX_36;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateVector3::curveY
	FsmAnimationCurve_t326747561 * ___curveY_37;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateVector3::calculationY
	int32_t ___calculationY_38;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateVector3::curveZ
	FsmAnimationCurve_t326747561 * ___curveZ_39;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateVector3::calculationZ
	int32_t ___calculationZ_40;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateVector3::finishInNextStep
	bool ___finishInNextStep_41;

public:
	inline static int32_t get_offset_of_vectorVariable_34() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___vectorVariable_34)); }
	inline FsmVector3_t3996534004 * get_vectorVariable_34() const { return ___vectorVariable_34; }
	inline FsmVector3_t3996534004 ** get_address_of_vectorVariable_34() { return &___vectorVariable_34; }
	inline void set_vectorVariable_34(FsmVector3_t3996534004 * value)
	{
		___vectorVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___vectorVariable_34, value);
	}

	inline static int32_t get_offset_of_curveX_35() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___curveX_35)); }
	inline FsmAnimationCurve_t326747561 * get_curveX_35() const { return ___curveX_35; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveX_35() { return &___curveX_35; }
	inline void set_curveX_35(FsmAnimationCurve_t326747561 * value)
	{
		___curveX_35 = value;
		Il2CppCodeGenWriteBarrier(&___curveX_35, value);
	}

	inline static int32_t get_offset_of_calculationX_36() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___calculationX_36)); }
	inline int32_t get_calculationX_36() const { return ___calculationX_36; }
	inline int32_t* get_address_of_calculationX_36() { return &___calculationX_36; }
	inline void set_calculationX_36(int32_t value)
	{
		___calculationX_36 = value;
	}

	inline static int32_t get_offset_of_curveY_37() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___curveY_37)); }
	inline FsmAnimationCurve_t326747561 * get_curveY_37() const { return ___curveY_37; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveY_37() { return &___curveY_37; }
	inline void set_curveY_37(FsmAnimationCurve_t326747561 * value)
	{
		___curveY_37 = value;
		Il2CppCodeGenWriteBarrier(&___curveY_37, value);
	}

	inline static int32_t get_offset_of_calculationY_38() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___calculationY_38)); }
	inline int32_t get_calculationY_38() const { return ___calculationY_38; }
	inline int32_t* get_address_of_calculationY_38() { return &___calculationY_38; }
	inline void set_calculationY_38(int32_t value)
	{
		___calculationY_38 = value;
	}

	inline static int32_t get_offset_of_curveZ_39() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___curveZ_39)); }
	inline FsmAnimationCurve_t326747561 * get_curveZ_39() const { return ___curveZ_39; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveZ_39() { return &___curveZ_39; }
	inline void set_curveZ_39(FsmAnimationCurve_t326747561 * value)
	{
		___curveZ_39 = value;
		Il2CppCodeGenWriteBarrier(&___curveZ_39, value);
	}

	inline static int32_t get_offset_of_calculationZ_40() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___calculationZ_40)); }
	inline int32_t get_calculationZ_40() const { return ___calculationZ_40; }
	inline int32_t* get_address_of_calculationZ_40() { return &___calculationZ_40; }
	inline void set_calculationZ_40(int32_t value)
	{
		___calculationZ_40 = value;
	}

	inline static int32_t get_offset_of_finishInNextStep_41() { return static_cast<int32_t>(offsetof(AnimateVector3_t3374166687, ___finishInNextStep_41)); }
	inline bool get_finishInNextStep_41() const { return ___finishInNextStep_41; }
	inline bool* get_address_of_finishInNextStep_41() { return &___finishInNextStep_41; }
	inline void set_finishInNextStep_41(bool value)
	{
		___finishInNextStep_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
