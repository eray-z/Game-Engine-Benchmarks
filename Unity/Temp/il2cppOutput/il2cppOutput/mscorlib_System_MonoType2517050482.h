﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.MonoTypeInfo
struct MonoTypeInfo_t2715305664;

#include "mscorlib_System_Type2779229935.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t2715305664 * ___type_info_7;

public:
	inline static int32_t get_offset_of_type_info_7() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_7)); }
	inline MonoTypeInfo_t2715305664 * get_type_info_7() const { return ___type_info_7; }
	inline MonoTypeInfo_t2715305664 ** get_address_of_type_info_7() { return &___type_info_7; }
	inline void set_type_info_7(MonoTypeInfo_t2715305664 * value)
	{
		___type_info_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_info_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
