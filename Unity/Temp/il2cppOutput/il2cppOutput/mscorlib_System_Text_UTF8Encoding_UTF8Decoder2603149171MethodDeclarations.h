﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t2603149171;
// System.Text.DecoderFallback
struct DecoderFallback_t4033313258;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderFallback4033313258.h"

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
extern "C"  void UTF8Decoder__ctor_m2938677702 (UTF8Decoder_t2603149171 * __this, DecoderFallback_t4033313258 * ___fallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF8Decoder_GetChars_m1551461400 (UTF8Decoder_t2603149171 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3416858730* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
