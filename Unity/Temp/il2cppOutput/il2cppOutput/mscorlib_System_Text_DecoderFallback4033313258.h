﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t4033313258;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t4033313258  : public Il2CppObject
{
public:

public:
};

struct DecoderFallback_t4033313258_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t4033313258 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t4033313258 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t4033313258 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t4033313258_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t4033313258 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t4033313258 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t4033313258 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___exception_fallback_0, value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t4033313258_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t4033313258 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t4033313258 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t4033313258 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___replacement_fallback_1, value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t4033313258_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t4033313258 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t4033313258 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t4033313258 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___standard_safe_fallback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
