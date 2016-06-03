﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t256805485;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "System_System_Security_Cryptography_X509Certificat1387926129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct  X509ChainElement_t4224632376  : public Il2CppObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::certificate
	X509Certificate2_t2583282360 * ___certificate_0;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::status
	X509ChainStatusU5BU5D_t256805485* ___status_1;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainElement::info
	String_t* ___info_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::compressed_status_flags
	int32_t ___compressed_status_flags_3;

public:
	inline static int32_t get_offset_of_certificate_0() { return static_cast<int32_t>(offsetof(X509ChainElement_t4224632376, ___certificate_0)); }
	inline X509Certificate2_t2583282360 * get_certificate_0() const { return ___certificate_0; }
	inline X509Certificate2_t2583282360 ** get_address_of_certificate_0() { return &___certificate_0; }
	inline void set_certificate_0(X509Certificate2_t2583282360 * value)
	{
		___certificate_0 = value;
		Il2CppCodeGenWriteBarrier(&___certificate_0, value);
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(X509ChainElement_t4224632376, ___status_1)); }
	inline X509ChainStatusU5BU5D_t256805485* get_status_1() const { return ___status_1; }
	inline X509ChainStatusU5BU5D_t256805485** get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(X509ChainStatusU5BU5D_t256805485* value)
	{
		___status_1 = value;
		Il2CppCodeGenWriteBarrier(&___status_1, value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(X509ChainElement_t4224632376, ___info_2)); }
	inline String_t* get_info_2() const { return ___info_2; }
	inline String_t** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(String_t* value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier(&___info_2, value);
	}

	inline static int32_t get_offset_of_compressed_status_flags_3() { return static_cast<int32_t>(offsetof(X509ChainElement_t4224632376, ___compressed_status_flags_3)); }
	inline int32_t get_compressed_status_flags_3() const { return ___compressed_status_flags_3; }
	inline int32_t* get_address_of_compressed_status_flags_3() { return &___compressed_status_flags_3; }
	inline void set_compressed_status_flags_3(int32_t value)
	{
		___compressed_status_flags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
