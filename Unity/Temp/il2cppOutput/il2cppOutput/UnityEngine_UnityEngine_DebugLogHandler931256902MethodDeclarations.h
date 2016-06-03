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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t931256902;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType3529269451.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m1521597024 (DebugLogHandler_t931256902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m3731237167 (Il2CppObject * __this /* static, unused */, int32_t ___level0, String_t* ___msg1, Object_t3878351788 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m1190453926 (DebugLogHandler_t931256902 * __this, int32_t ___logType0, Object_t3878351788 * ___context1, String_t* ___format2, ObjectU5BU5D_t11523773* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
