#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BunnyObj
struct  BunnyObj_t3074558385  : public Il2CppObject
{
public:
	// System.Single BunnyObj::_vx
	float ____vx_0;
	// System.Single BunnyObj::_vy
	float ____vy_1;
	// UnityEngine.GameObject BunnyObj::bunny
	GameObject_t4012695102 * ___bunny_2;

public:
	inline static int32_t get_offset_of__vx_0() { return static_cast<int32_t>(offsetof(BunnyObj_t3074558385, ____vx_0)); }
	inline float get__vx_0() const { return ____vx_0; }
	inline float* get_address_of__vx_0() { return &____vx_0; }
	inline void set__vx_0(float value)
	{
		____vx_0 = value;
	}

	inline static int32_t get_offset_of__vy_1() { return static_cast<int32_t>(offsetof(BunnyObj_t3074558385, ____vy_1)); }
	inline float get__vy_1() const { return ____vy_1; }
	inline float* get_address_of__vy_1() { return &____vy_1; }
	inline void set__vy_1(float value)
	{
		____vy_1 = value;
	}

	inline static int32_t get_offset_of_bunny_2() { return static_cast<int32_t>(offsetof(BunnyObj_t3074558385, ___bunny_2)); }
	inline GameObject_t4012695102 * get_bunny_2() const { return ___bunny_2; }
	inline GameObject_t4012695102 ** get_address_of_bunny_2() { return &___bunny_2; }
	inline void set_bunny_2(GameObject_t4012695102 * value)
	{
		___bunny_2 = value;
		Il2CppCodeGenWriteBarrier(&___bunny_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
