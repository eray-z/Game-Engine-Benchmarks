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

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Component
struct Component_t2126946602;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t552366831;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_SendMessageOptions2623293100.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UnityEngine.GameObject::.ctor()
extern "C"  void GameObject__ctor_m845034556 (GameObject_t4012695102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t2126946602 * GameObject_GetComponent_m1004814461 (GameObject_t4012695102 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t2126946602 * GameObject_GetComponentInChildren_m1490154500 (GameObject_t4012695102 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C"  Component_t2126946602 * GameObject_GetComponentInParent_m434474382 (GameObject_t4012695102 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t552366831* GameObject_GetComponents_m1126578334 (GameObject_t4012695102 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t552366831* GameObject_GetComponentsInChildren_m305836803 (GameObject_t4012695102 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t552366831* GameObject_GetComponentsInParent_m521317102 (GameObject_t4012695102 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Il2CppArray * GameObject_GetComponentsInternal_m181453881 (GameObject_t4012695102 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, Il2CppObject * ___resultList5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t284553113 * GameObject_get_transform_m1278640159 (GameObject_t4012695102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m211612200 (GameObject_t4012695102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m859036203 (GameObject_t4012695102 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m423373689 (GameObject_t4012695102 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C"  Component_t2126946602 * GameObject_Internal_AddComponentWithType_m2266369934 (GameObject_t4012695102 * __this, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t2126946602 * GameObject_AddComponent_m2208780168 (GameObject_t4012695102 * __this, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m2521325981 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___mono0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
