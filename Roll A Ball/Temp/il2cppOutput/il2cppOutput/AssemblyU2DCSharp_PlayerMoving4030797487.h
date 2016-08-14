#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMoving
struct  PlayerMoving_t4030797487  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody PlayerMoving::_rigidbody
	Rigidbody_t3346577219 * ____rigidbody_2;
	// System.Int32 PlayerMoving::_score
	int32_t ____score_3;
	// System.Int32 PlayerMoving::_forceRatio
	int32_t ____forceRatio_4;
	// UnityEngine.UI.Text PlayerMoving::_scoreText
	Text_t9039225 * ____scoreText_5;
	// UnityEngine.UI.Text PlayerMoving::_winText
	Text_t9039225 * ____winText_6;

public:
	inline static int32_t get_offset_of__rigidbody_2() { return static_cast<int32_t>(offsetof(PlayerMoving_t4030797487, ____rigidbody_2)); }
	inline Rigidbody_t3346577219 * get__rigidbody_2() const { return ____rigidbody_2; }
	inline Rigidbody_t3346577219 ** get_address_of__rigidbody_2() { return &____rigidbody_2; }
	inline void set__rigidbody_2(Rigidbody_t3346577219 * value)
	{
		____rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_2, value);
	}

	inline static int32_t get_offset_of__score_3() { return static_cast<int32_t>(offsetof(PlayerMoving_t4030797487, ____score_3)); }
	inline int32_t get__score_3() const { return ____score_3; }
	inline int32_t* get_address_of__score_3() { return &____score_3; }
	inline void set__score_3(int32_t value)
	{
		____score_3 = value;
	}

	inline static int32_t get_offset_of__forceRatio_4() { return static_cast<int32_t>(offsetof(PlayerMoving_t4030797487, ____forceRatio_4)); }
	inline int32_t get__forceRatio_4() const { return ____forceRatio_4; }
	inline int32_t* get_address_of__forceRatio_4() { return &____forceRatio_4; }
	inline void set__forceRatio_4(int32_t value)
	{
		____forceRatio_4 = value;
	}

	inline static int32_t get_offset_of__scoreText_5() { return static_cast<int32_t>(offsetof(PlayerMoving_t4030797487, ____scoreText_5)); }
	inline Text_t9039225 * get__scoreText_5() const { return ____scoreText_5; }
	inline Text_t9039225 ** get_address_of__scoreText_5() { return &____scoreText_5; }
	inline void set__scoreText_5(Text_t9039225 * value)
	{
		____scoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&____scoreText_5, value);
	}

	inline static int32_t get_offset_of__winText_6() { return static_cast<int32_t>(offsetof(PlayerMoving_t4030797487, ____winText_6)); }
	inline Text_t9039225 * get__winText_6() const { return ____winText_6; }
	inline Text_t9039225 ** get_address_of__winText_6() { return &____winText_6; }
	inline void set__winText_6(Text_t9039225 * value)
	{
		____winText_6 = value;
		Il2CppCodeGenWriteBarrier(&____winText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
