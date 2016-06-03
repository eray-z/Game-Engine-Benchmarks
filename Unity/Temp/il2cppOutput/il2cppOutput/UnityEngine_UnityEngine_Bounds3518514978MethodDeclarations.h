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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m3067388679 (Bounds_t3518514978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m2517451939 (Bounds_t3518514978 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t3525329789  Bounds_get_center_m4084610404 (Bounds_t3518514978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3525329789  Bounds_get_size_m3666348432 (Bounds_t3518514978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t3525329789  Bounds_get_extents_m2111648188 (Bounds_t3518514978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1795228795 (Bounds_t3518514978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Bounds_t3518514978;
struct Bounds_t3518514978_marshaled_pinvoke;

extern "C" void Bounds_t3518514978_marshal_pinvoke(const Bounds_t3518514978& unmarshaled, Bounds_t3518514978_marshaled_pinvoke& marshaled);
extern "C" void Bounds_t3518514978_marshal_pinvoke_back(const Bounds_t3518514978_marshaled_pinvoke& marshaled, Bounds_t3518514978& unmarshaled);
extern "C" void Bounds_t3518514978_marshal_pinvoke_cleanup(Bounds_t3518514978_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Bounds_t3518514978;
struct Bounds_t3518514978_marshaled_com;

extern "C" void Bounds_t3518514978_marshal_com(const Bounds_t3518514978& unmarshaled, Bounds_t3518514978_marshaled_com& marshaled);
extern "C" void Bounds_t3518514978_marshal_com_back(const Bounds_t3518514978_marshaled_com& marshaled, Bounds_t3518514978& unmarshaled);
extern "C" void Bounds_t3518514978_marshal_com_cleanup(Bounds_t3518514978_marshaled_com& marshaled);
