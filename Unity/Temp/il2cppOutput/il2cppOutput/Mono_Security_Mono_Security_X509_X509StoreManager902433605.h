﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509Stores
struct X509Stores_t2754714603;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t902433605  : public Il2CppObject
{
public:

public:
};

struct X509StoreManager_t902433605_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t2754714603 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t2754714603 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t902433605_StaticFields, ____userStore_0)); }
	inline X509Stores_t2754714603 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t2754714603 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t2754714603 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier(&____userStore_0, value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t902433605_StaticFields, ____machineStore_1)); }
	inline X509Stores_t2754714603 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t2754714603 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t2754714603 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier(&____machineStore_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
