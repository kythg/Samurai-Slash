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

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t19023354;
// HutongGames.PlayMaker.FsmAnimationCurve
struct FsmAnimationCurve_t326747561;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.PlayMaker.Actions.AnimateRect
struct  AnimateRect_t2987571161  : public AnimateFsmAction_t3469388247
{
public:
	// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.Actions.AnimateRect::rectVariable
	FsmRect_t19023354 * ___rectVariable_34;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateRect::curveX
	FsmAnimationCurve_t326747561 * ___curveX_35;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateRect::calculationX
	int32_t ___calculationX_36;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateRect::curveY
	FsmAnimationCurve_t326747561 * ___curveY_37;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateRect::calculationY
	int32_t ___calculationY_38;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateRect::curveW
	FsmAnimationCurve_t326747561 * ___curveW_39;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateRect::calculationW
	int32_t ___calculationW_40;
	// HutongGames.PlayMaker.FsmAnimationCurve HutongGames.PlayMaker.Actions.AnimateRect::curveH
	FsmAnimationCurve_t326747561 * ___curveH_41;
	// HutongGames.PlayMaker.Actions.AnimateFsmAction/Calculation HutongGames.PlayMaker.Actions.AnimateRect::calculationH
	int32_t ___calculationH_42;
	// System.Boolean HutongGames.PlayMaker.Actions.AnimateRect::finishInNextStep
	bool ___finishInNextStep_43;

public:
	inline static int32_t get_offset_of_rectVariable_34() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___rectVariable_34)); }
	inline FsmRect_t19023354 * get_rectVariable_34() const { return ___rectVariable_34; }
	inline FsmRect_t19023354 ** get_address_of_rectVariable_34() { return &___rectVariable_34; }
	inline void set_rectVariable_34(FsmRect_t19023354 * value)
	{
		___rectVariable_34 = value;
		Il2CppCodeGenWriteBarrier(&___rectVariable_34, value);
	}

	inline static int32_t get_offset_of_curveX_35() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___curveX_35)); }
	inline FsmAnimationCurve_t326747561 * get_curveX_35() const { return ___curveX_35; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveX_35() { return &___curveX_35; }
	inline void set_curveX_35(FsmAnimationCurve_t326747561 * value)
	{
		___curveX_35 = value;
		Il2CppCodeGenWriteBarrier(&___curveX_35, value);
	}

	inline static int32_t get_offset_of_calculationX_36() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___calculationX_36)); }
	inline int32_t get_calculationX_36() const { return ___calculationX_36; }
	inline int32_t* get_address_of_calculationX_36() { return &___calculationX_36; }
	inline void set_calculationX_36(int32_t value)
	{
		___calculationX_36 = value;
	}

	inline static int32_t get_offset_of_curveY_37() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___curveY_37)); }
	inline FsmAnimationCurve_t326747561 * get_curveY_37() const { return ___curveY_37; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveY_37() { return &___curveY_37; }
	inline void set_curveY_37(FsmAnimationCurve_t326747561 * value)
	{
		___curveY_37 = value;
		Il2CppCodeGenWriteBarrier(&___curveY_37, value);
	}

	inline static int32_t get_offset_of_calculationY_38() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___calculationY_38)); }
	inline int32_t get_calculationY_38() const { return ___calculationY_38; }
	inline int32_t* get_address_of_calculationY_38() { return &___calculationY_38; }
	inline void set_calculationY_38(int32_t value)
	{
		___calculationY_38 = value;
	}

	inline static int32_t get_offset_of_curveW_39() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___curveW_39)); }
	inline FsmAnimationCurve_t326747561 * get_curveW_39() const { return ___curveW_39; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveW_39() { return &___curveW_39; }
	inline void set_curveW_39(FsmAnimationCurve_t326747561 * value)
	{
		___curveW_39 = value;
		Il2CppCodeGenWriteBarrier(&___curveW_39, value);
	}

	inline static int32_t get_offset_of_calculationW_40() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___calculationW_40)); }
	inline int32_t get_calculationW_40() const { return ___calculationW_40; }
	inline int32_t* get_address_of_calculationW_40() { return &___calculationW_40; }
	inline void set_calculationW_40(int32_t value)
	{
		___calculationW_40 = value;
	}

	inline static int32_t get_offset_of_curveH_41() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___curveH_41)); }
	inline FsmAnimationCurve_t326747561 * get_curveH_41() const { return ___curveH_41; }
	inline FsmAnimationCurve_t326747561 ** get_address_of_curveH_41() { return &___curveH_41; }
	inline void set_curveH_41(FsmAnimationCurve_t326747561 * value)
	{
		___curveH_41 = value;
		Il2CppCodeGenWriteBarrier(&___curveH_41, value);
	}

	inline static int32_t get_offset_of_calculationH_42() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___calculationH_42)); }
	inline int32_t get_calculationH_42() const { return ___calculationH_42; }
	inline int32_t* get_address_of_calculationH_42() { return &___calculationH_42; }
	inline void set_calculationH_42(int32_t value)
	{
		___calculationH_42 = value;
	}

	inline static int32_t get_offset_of_finishInNextStep_43() { return static_cast<int32_t>(offsetof(AnimateRect_t2987571161, ___finishInNextStep_43)); }
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
