﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3930099966;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t281281019;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t758429435;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;

#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t4287691406  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_7;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_8;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_9;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_10;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3431720054* ___interfaces_11;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_12;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3930099966* ___methods_13;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t281281019* ___ctors_14;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t758429435* ___fields_15;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_16;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t1058295580 * ___pmodule_17;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t685103793* ___generic_params_18;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_19;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_20;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_21;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_22;

public:
	inline static int32_t get_offset_of_tname_7() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___tname_7)); }
	inline String_t* get_tname_7() const { return ___tname_7; }
	inline String_t** get_address_of_tname_7() { return &___tname_7; }
	inline void set_tname_7(String_t* value)
	{
		___tname_7 = value;
		Il2CppCodeGenWriteBarrier(&___tname_7, value);
	}

	inline static int32_t get_offset_of_nspace_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___nspace_8)); }
	inline String_t* get_nspace_8() const { return ___nspace_8; }
	inline String_t** get_address_of_nspace_8() { return &___nspace_8; }
	inline void set_nspace_8(String_t* value)
	{
		___nspace_8 = value;
		Il2CppCodeGenWriteBarrier(&___nspace_8, value);
	}

	inline static int32_t get_offset_of_parent_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___parent_9)); }
	inline Type_t * get_parent_9() const { return ___parent_9; }
	inline Type_t ** get_address_of_parent_9() { return &___parent_9; }
	inline void set_parent_9(Type_t * value)
	{
		___parent_9 = value;
		Il2CppCodeGenWriteBarrier(&___parent_9, value);
	}

	inline static int32_t get_offset_of_nesting_type_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___nesting_type_10)); }
	inline Type_t * get_nesting_type_10() const { return ___nesting_type_10; }
	inline Type_t ** get_address_of_nesting_type_10() { return &___nesting_type_10; }
	inline void set_nesting_type_10(Type_t * value)
	{
		___nesting_type_10 = value;
		Il2CppCodeGenWriteBarrier(&___nesting_type_10, value);
	}

	inline static int32_t get_offset_of_interfaces_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___interfaces_11)); }
	inline TypeU5BU5D_t3431720054* get_interfaces_11() const { return ___interfaces_11; }
	inline TypeU5BU5D_t3431720054** get_address_of_interfaces_11() { return &___interfaces_11; }
	inline void set_interfaces_11(TypeU5BU5D_t3431720054* value)
	{
		___interfaces_11 = value;
		Il2CppCodeGenWriteBarrier(&___interfaces_11, value);
	}

	inline static int32_t get_offset_of_num_methods_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___num_methods_12)); }
	inline int32_t get_num_methods_12() const { return ___num_methods_12; }
	inline int32_t* get_address_of_num_methods_12() { return &___num_methods_12; }
	inline void set_num_methods_12(int32_t value)
	{
		___num_methods_12 = value;
	}

	inline static int32_t get_offset_of_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___methods_13)); }
	inline MethodBuilderU5BU5D_t3930099966* get_methods_13() const { return ___methods_13; }
	inline MethodBuilderU5BU5D_t3930099966** get_address_of_methods_13() { return &___methods_13; }
	inline void set_methods_13(MethodBuilderU5BU5D_t3930099966* value)
	{
		___methods_13 = value;
		Il2CppCodeGenWriteBarrier(&___methods_13, value);
	}

	inline static int32_t get_offset_of_ctors_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___ctors_14)); }
	inline ConstructorBuilderU5BU5D_t281281019* get_ctors_14() const { return ___ctors_14; }
	inline ConstructorBuilderU5BU5D_t281281019** get_address_of_ctors_14() { return &___ctors_14; }
	inline void set_ctors_14(ConstructorBuilderU5BU5D_t281281019* value)
	{
		___ctors_14 = value;
		Il2CppCodeGenWriteBarrier(&___ctors_14, value);
	}

	inline static int32_t get_offset_of_fields_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___fields_15)); }
	inline FieldBuilderU5BU5D_t758429435* get_fields_15() const { return ___fields_15; }
	inline FieldBuilderU5BU5D_t758429435** get_address_of_fields_15() { return &___fields_15; }
	inline void set_fields_15(FieldBuilderU5BU5D_t758429435* value)
	{
		___fields_15 = value;
		Il2CppCodeGenWriteBarrier(&___fields_15, value);
	}

	inline static int32_t get_offset_of_attrs_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___attrs_16)); }
	inline int32_t get_attrs_16() const { return ___attrs_16; }
	inline int32_t* get_address_of_attrs_16() { return &___attrs_16; }
	inline void set_attrs_16(int32_t value)
	{
		___attrs_16 = value;
	}

	inline static int32_t get_offset_of_pmodule_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___pmodule_17)); }
	inline ModuleBuilder_t1058295580 * get_pmodule_17() const { return ___pmodule_17; }
	inline ModuleBuilder_t1058295580 ** get_address_of_pmodule_17() { return &___pmodule_17; }
	inline void set_pmodule_17(ModuleBuilder_t1058295580 * value)
	{
		___pmodule_17 = value;
		Il2CppCodeGenWriteBarrier(&___pmodule_17, value);
	}

	inline static int32_t get_offset_of_generic_params_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___generic_params_18)); }
	inline GenericTypeParameterBuilderU5BU5D_t685103793* get_generic_params_18() const { return ___generic_params_18; }
	inline GenericTypeParameterBuilderU5BU5D_t685103793** get_address_of_generic_params_18() { return &___generic_params_18; }
	inline void set_generic_params_18(GenericTypeParameterBuilderU5BU5D_t685103793* value)
	{
		___generic_params_18 = value;
		Il2CppCodeGenWriteBarrier(&___generic_params_18, value);
	}

	inline static int32_t get_offset_of_created_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___created_19)); }
	inline Type_t * get_created_19() const { return ___created_19; }
	inline Type_t ** get_address_of_created_19() { return &___created_19; }
	inline void set_created_19(Type_t * value)
	{
		___created_19 = value;
		Il2CppCodeGenWriteBarrier(&___created_19, value);
	}

	inline static int32_t get_offset_of_fullname_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___fullname_20)); }
	inline String_t* get_fullname_20() const { return ___fullname_20; }
	inline String_t** get_address_of_fullname_20() { return &___fullname_20; }
	inline void set_fullname_20(String_t* value)
	{
		___fullname_20 = value;
		Il2CppCodeGenWriteBarrier(&___fullname_20, value);
	}

	inline static int32_t get_offset_of_createTypeCalled_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___createTypeCalled_21)); }
	inline bool get_createTypeCalled_21() const { return ___createTypeCalled_21; }
	inline bool* get_address_of_createTypeCalled_21() { return &___createTypeCalled_21; }
	inline void set_createTypeCalled_21(bool value)
	{
		___createTypeCalled_21 = value;
	}

	inline static int32_t get_offset_of_underlying_type_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t4287691406, ___underlying_type_22)); }
	inline Type_t * get_underlying_type_22() const { return ___underlying_type_22; }
	inline Type_t ** get_address_of_underlying_type_22() { return &___underlying_type_22; }
	inline void set_underlying_type_22(Type_t * value)
	{
		___underlying_type_22 = value;
		Il2CppCodeGenWriteBarrier(&___underlying_type_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
