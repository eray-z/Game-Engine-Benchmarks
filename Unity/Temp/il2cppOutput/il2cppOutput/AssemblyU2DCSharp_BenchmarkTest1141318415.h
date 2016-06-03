#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<BunnyObj>
struct List_1_t3871517354;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BenchmarkTest
struct  BenchmarkTest_t1141318415  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<BunnyObj> BenchmarkTest::allOfBunnyObjects
	List_1_t3871517354 * ___allOfBunnyObjects_2;
	// System.Single BenchmarkTest::minX
	float ___minX_3;
	// System.Single BenchmarkTest::minY
	float ___minY_4;
	// System.Single BenchmarkTest::maxX
	float ___maxX_5;
	// System.Single BenchmarkTest::maxY
	float ___maxY_6;
	// UnityEngine.GameObject BenchmarkTest::bunny
	GameObject_t4012695102 * ___bunny_7;

public:
	inline static int32_t get_offset_of_allOfBunnyObjects_2() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___allOfBunnyObjects_2)); }
	inline List_1_t3871517354 * get_allOfBunnyObjects_2() const { return ___allOfBunnyObjects_2; }
	inline List_1_t3871517354 ** get_address_of_allOfBunnyObjects_2() { return &___allOfBunnyObjects_2; }
	inline void set_allOfBunnyObjects_2(List_1_t3871517354 * value)
	{
		___allOfBunnyObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___allOfBunnyObjects_2, value);
	}

	inline static int32_t get_offset_of_minX_3() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___minX_3)); }
	inline float get_minX_3() const { return ___minX_3; }
	inline float* get_address_of_minX_3() { return &___minX_3; }
	inline void set_minX_3(float value)
	{
		___minX_3 = value;
	}

	inline static int32_t get_offset_of_minY_4() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___minY_4)); }
	inline float get_minY_4() const { return ___minY_4; }
	inline float* get_address_of_minY_4() { return &___minY_4; }
	inline void set_minY_4(float value)
	{
		___minY_4 = value;
	}

	inline static int32_t get_offset_of_maxX_5() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___maxX_5)); }
	inline float get_maxX_5() const { return ___maxX_5; }
	inline float* get_address_of_maxX_5() { return &___maxX_5; }
	inline void set_maxX_5(float value)
	{
		___maxX_5 = value;
	}

	inline static int32_t get_offset_of_maxY_6() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___maxY_6)); }
	inline float get_maxY_6() const { return ___maxY_6; }
	inline float* get_address_of_maxY_6() { return &___maxY_6; }
	inline void set_maxY_6(float value)
	{
		___maxY_6 = value;
	}

	inline static int32_t get_offset_of_bunny_7() { return static_cast<int32_t>(offsetof(BenchmarkTest_t1141318415, ___bunny_7)); }
	inline GameObject_t4012695102 * get_bunny_7() const { return ___bunny_7; }
	inline GameObject_t4012695102 ** get_address_of_bunny_7() { return &___bunny_7; }
	inline void set_bunny_7(GameObject_t4012695102 * value)
	{
		___bunny_7 = value;
		Il2CppCodeGenWriteBarrier(&___bunny_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
