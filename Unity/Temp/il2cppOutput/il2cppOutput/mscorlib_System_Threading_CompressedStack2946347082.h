﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t2946347082  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2121638921 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t2946347082, ____list_0)); }
	inline ArrayList_t2121638921 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2121638921 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2121638921 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
