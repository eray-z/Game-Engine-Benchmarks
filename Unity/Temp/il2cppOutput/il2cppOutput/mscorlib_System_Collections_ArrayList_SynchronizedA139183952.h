﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Collections_ArrayList_ArrayListWra3057374748.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct  SynchronizedArrayListWrapper_t139183952  : public ArrayListWrapper_t3057374748
{
public:
	// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::m_SyncRoot
	Il2CppObject * ___m_SyncRoot_5;

public:
	inline static int32_t get_offset_of_m_SyncRoot_5() { return static_cast<int32_t>(offsetof(SynchronizedArrayListWrapper_t139183952, ___m_SyncRoot_5)); }
	inline Il2CppObject * get_m_SyncRoot_5() const { return ___m_SyncRoot_5; }
	inline Il2CppObject ** get_address_of_m_SyncRoot_5() { return &___m_SyncRoot_5; }
	inline void set_m_SyncRoot_5(Il2CppObject * value)
	{
		___m_SyncRoot_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SyncRoot_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
