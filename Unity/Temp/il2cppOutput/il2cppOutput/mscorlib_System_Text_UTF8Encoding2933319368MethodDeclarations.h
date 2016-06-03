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

// System.Text.UTF8Encoding
struct UTF8Encoding_t2933319368;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1215858122;
// System.Text.Decoder
struct Decoder_t1611780840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Text_DecoderFallbackBuffer1215858122.h"

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C"  void UTF8Encoding__ctor_m2222266828 (UTF8Encoding_t2933319368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C"  void UTF8Encoding__ctor_m508869187 (UTF8Encoding_t2933319368 * __this, bool ___encoderShouldEmitUTF8Identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF8Encoding__ctor_m4274875098 (UTF8Encoding_t2933319368 * __this, bool ___encoderShouldEmitUTF8Identifier0, bool ___throwOnInvalidBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetByteCount_m1402598209 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars0, int32_t ___index1, int32_t ___count2, uint16_t* ___leftOver3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetByteCount_m776634770 (Il2CppObject * __this /* static, unused */, uint16_t* ___chars0, int32_t ___count1, uint16_t* ___leftOver2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF8Encoding_GetByteCount_m3411969974 (UTF8Encoding_t2933319368 * __this, CharU5BU5D_t3416858730* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF8Encoding_GetByteCount_m2560927815 (UTF8Encoding_t2933319368 * __this, uint16_t* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetBytes_m1304805863 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, uint16_t* ___leftOver5, bool ___flush6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetBytes_m4145641218 (Il2CppObject * __this /* static, unused */, uint16_t* ___chars0, int32_t ___count1, uint8_t* ___bytes2, int32_t ___bcount3, uint16_t* ___leftOver4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m758519618 (UTF8Encoding_t2933319368 * __this, CharU5BU5D_t3416858730* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m332798299 (UTF8Encoding_t2933319368 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t58506160* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF8Encoding_GetBytes_m1643674103 (UTF8Encoding_t2933319368 * __this, uint16_t* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetCharCount_m3413246797 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, int32_t ___index1, int32_t ___count2, uint32_t ___leftOverBits3, uint32_t ___leftOverCount4, Il2CppObject * ___provider5, DecoderFallbackBuffer_t1215858122 ** ___fallbackBuffer6, ByteU5BU5D_t58506160** ___bufferArg7, bool ___flush8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetCharCount_m1382612956 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, int32_t ___count1, uint32_t ___leftOverBits2, uint32_t ___leftOverCount3, Il2CppObject * ___provider4, DecoderFallbackBuffer_t1215858122 ** ___fallbackBuffer5, ByteU5BU5D_t58506160** ___bufferArg6, bool ___flush7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C"  int32_t UTF8Encoding_Fallback_m2998229612 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, DecoderFallbackBuffer_t1215858122 ** ___buffer1, ByteU5BU5D_t58506160** ___bufferArg2, uint8_t* ___bytes3, int64_t ___index4, uint32_t ___size5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C"  void UTF8Encoding_Fallback_m1420233630 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, DecoderFallbackBuffer_t1215858122 ** ___buffer1, ByteU5BU5D_t58506160** ___bufferArg2, uint8_t* ___bytes3, int64_t ___byteIndex4, uint32_t ___size5, uint16_t* ___chars6, int32_t* ___charIndex7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF8Encoding_GetCharCount_m2213382418 (UTF8Encoding_t2933319368 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetChars_m456868025 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3416858730* ___chars3, int32_t ___charIndex4, uint32_t* ___leftOverBits5, uint32_t* ___leftOverCount6, Il2CppObject * ___provider7, DecoderFallbackBuffer_t1215858122 ** ___fallbackBuffer8, ByteU5BU5D_t58506160** ___bufferArg9, bool ___flush10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C"  int32_t UTF8Encoding_InternalGetChars_m402940066 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, int32_t ___byteCount1, uint16_t* ___chars2, int32_t ___charCount3, uint32_t* ___leftOverBits4, uint32_t* ___leftOverCount5, Il2CppObject * ___provider6, DecoderFallbackBuffer_t1215858122 ** ___fallbackBuffer7, ByteU5BU5D_t58506160** ___bufferArg8, bool ___flush9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF8Encoding_GetChars_m3098770356 (UTF8Encoding_t2933319368 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3416858730* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF8Encoding_GetMaxByteCount_m356326648 (UTF8Encoding_t2933319368 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF8Encoding_GetMaxCharCount_m1147861994 (UTF8Encoding_t2933319368 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C"  Decoder_t1611780840 * UTF8Encoding_GetDecoder_m1536997015 (UTF8Encoding_t2933319368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t58506160* UTF8Encoding_GetPreamble_m3276889634 (UTF8Encoding_t2933319368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C"  bool UTF8Encoding_Equals_m2369930107 (UTF8Encoding_t2933319368 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C"  int32_t UTF8Encoding_GetHashCode_m3715871199 (UTF8Encoding_t2933319368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF8Encoding_GetByteCount_m372084253 (UTF8Encoding_t2933319368 * __this, String_t* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF8Encoding_GetString_m3266530939 (UTF8Encoding_t2933319368 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
