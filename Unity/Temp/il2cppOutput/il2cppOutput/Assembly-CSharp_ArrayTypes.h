#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// BunnyObj
struct BunnyObj_t3074558385;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_BunnyObj3074558385.h"

#pragma once
// BunnyObj[]
struct BunnyObjU5BU5D_t1652182124  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BunnyObj_t3074558385 * m_Items[1];

public:
	inline BunnyObj_t3074558385 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BunnyObj_t3074558385 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BunnyObj_t3074558385 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
