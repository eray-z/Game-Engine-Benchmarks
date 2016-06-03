#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Event
struct Event_t1590224583;
struct Event_t1590224583_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t1590224583  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t1590224583, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t1590224583_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t1590224583 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t1590224583 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t1590224583_StaticFields, ___s_Current_1)); }
	inline Event_t1590224583 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t1590224583 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t1590224583 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_Current_1, value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t1590224583_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t1590224583 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t1590224583 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t1590224583 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_MasterEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Event
struct Event_t1590224583_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for marshalling of: UnityEngine.Event
struct Event_t1590224583_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
