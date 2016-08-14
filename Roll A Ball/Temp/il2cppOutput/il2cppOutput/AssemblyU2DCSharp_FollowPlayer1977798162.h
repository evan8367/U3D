#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_t1977798162  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform FollowPlayer::_playerTransform
	Transform_t1659122786 * ____playerTransform_2;
	// UnityEngine.Vector3 FollowPlayer::_offset
	Vector3_t4282066566  ____offset_3;

public:
	inline static int32_t get_offset_of__playerTransform_2() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ____playerTransform_2)); }
	inline Transform_t1659122786 * get__playerTransform_2() const { return ____playerTransform_2; }
	inline Transform_t1659122786 ** get_address_of__playerTransform_2() { return &____playerTransform_2; }
	inline void set__playerTransform_2(Transform_t1659122786 * value)
	{
		____playerTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&____playerTransform_2, value);
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ____offset_3)); }
	inline Vector3_t4282066566  get__offset_3() const { return ____offset_3; }
	inline Vector3_t4282066566 * get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(Vector3_t4282066566  value)
	{
		____offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
