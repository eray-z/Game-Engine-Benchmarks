﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2732610389;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState3123539646.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t4127144549  : public Il2CppObject
{
public:
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2732610389 * ___m_Arguments_0;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_1;

public:
	inline static int32_t get_offset_of_m_Arguments_0() { return static_cast<int32_t>(offsetof(PersistentCall_t4127144549, ___m_Arguments_0)); }
	inline ArgumentCache_t2732610389 * get_m_Arguments_0() const { return ___m_Arguments_0; }
	inline ArgumentCache_t2732610389 ** get_address_of_m_Arguments_0() { return &___m_Arguments_0; }
	inline void set_m_Arguments_0(ArgumentCache_t2732610389 * value)
	{
		___m_Arguments_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Arguments_0, value);
	}

	inline static int32_t get_offset_of_m_CallState_1() { return static_cast<int32_t>(offsetof(PersistentCall_t4127144549, ___m_CallState_1)); }
	inline int32_t get_m_CallState_1() const { return ___m_CallState_1; }
	inline int32_t* get_address_of_m_CallState_1() { return &___m_CallState_1; }
	inline void set_m_CallState_1(int32_t value)
	{
		___m_CallState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
