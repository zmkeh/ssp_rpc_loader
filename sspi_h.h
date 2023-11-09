

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 11:14:07 2038
 */
 /* Compiler settings for lsass.idl:
	 Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626
	 protocol : dce , ms_ext, c_ext, robust
	 error checks: allocation ref bounds_check enum stub_data
	 VC __declspec() decoration level:
		  __declspec(uuid()), __declspec(selectany), __declspec(novtable)
		  DECLSPEC_UUID(), MIDL_INTERFACE()
 */
 /* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __lsass_h__
#define __lsass_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */

#ifdef __cplusplus
extern "C" {
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

	/* interface DefaultIfName */
	/* [version][uuid] */

	typedef struct Struct_128_t
	{
		long StructMember0;
		long StructMember1;
		/* [size_is][unique] */ unsigned char* StructMember2;
	} 	Struct_128_t;

	typedef struct Struct_150_t
	{
		long StructMember0;
		long StructMember1;
		long StructMember2;
		struct Struct_128_t StructMember3;
		unsigned char StructMember4;
	} 	Struct_150_t;

	typedef struct Struct_176_t
	{
		hyper StructMember0;
		hyper StructMember1;
	} 	Struct_176_t;

	typedef struct Struct_226_t
	{
		short StructMember0;
		short StructMember1;
		/* [length_is][size_is][unique] */ short* StructMember2;
	} 	Struct_226_t;

	typedef struct Struct_256_t
	{
		long StructMember0;
		long StructMember1;
	} 	Struct_256_t;

	typedef struct Struct_290_t
	{
		long StructMember0;
		hyper StructMember1;
		/* [size_is][unique] */ unsigned char* StructMember2;
	} 	Struct_290_t;

	typedef struct Struct_312_t
	{
		hyper StructMember0;
		hyper StructMember1;
	} 	Struct_312_t;

	typedef struct Struct_324_t
	{
		hyper StructMember0;
	} 	Struct_324_t;

	typedef struct Struct_456_t
	{
		long StructMember0;
		long StructMember1;
		/* [size_is][unique] */ struct Struct_128_t* StructMember2;
	} 	Struct_456_t;

	typedef struct Struct_482_t
	{
		long StructMember0;
		long StructMember1;
	} 	Struct_482_t;

	typedef struct Struct_516_t
	{
		long StructMember0;
		long StructMember1;
		/* [size_is][unique] */ struct Struct_482_t* StructMember2;
	} 	Struct_516_t;

	typedef /* [switch_type] */ /* [switch_type] */ union union_630
	{
		/* [case()][unique] */ struct Struct_664_t* unionMember_1;
		/* [case()][unique] */ struct Struct_688_t* unionMember_86;
		/* [case()][unique] */ struct Struct_712_t* unionMember_87;
		/* [case()][unique] */ struct Struct_724_t* unionMember_88;
		/* [default] */  /* Empty union arm */
	} 	union_630;

	typedef struct Struct_664_t
	{
		/* [string][unique] */ wchar_t* StructMember0;
	} 	Struct_664_t;

	typedef struct Struct_688_t
	{
		long StructMember0;
		/* [unique] */ long* StructMember1;
	} 	Struct_688_t;

	typedef struct Struct_712_t
	{
		long StructMember0;
		long StructMember1;
	} 	Struct_712_t;

	typedef struct Struct_724_t
	{
		long StructMember0;
	} 	Struct_724_t;

	typedef /* [switch_type] */ /* [switch_type] */ union union_766
	{
		/* [case()][unique] */ struct Struct_788_t* unionMember_0;
		/* [case()][unique] */ struct Struct_836_t* unionMember_12;
		/* [default] */  /* Empty union arm */
	} 	union_766;

	typedef struct Struct_788_t
	{
		long StructMember0;
		long StructMember1;
		long StructMember2;
		long StructMember3;
	} 	Struct_788_t;

	typedef struct Struct_802_t
	{
		long StructMember0;
		short StructMember1;
		short StructMember2;
		long StructMember3;
		/* [string][unique] */ wchar_t* StructMember4;
		/* [string][unique] */ wchar_t* StructMember5;
	} 	Struct_802_t;

	typedef struct Struct_836_t
	{
		/* [unique] */ struct Struct_802_t* StructMember0;
		long StructMember1;
	} 	Struct_836_t;

	typedef struct Struct_878_t
	{
		long StructMember0;
		short StructMember1;
		short StructMember2;
		byte StructMember3[8];
	} 	Struct_878_t;

	typedef struct Struct_918_t
	{
		long StructMember0;
		struct Struct_878_t StructMember1;
		long StructMember2;
		long StructMember3;
		long StructMember4;
		long StructMember5;
		long StructMember6;
		/* [string][range][unique] */ wchar_t* StructMember7;
		/* [string][range][unique] */ wchar_t* StructMember8;
	} 	Struct_918_t;

	typedef struct Struct_1024_t
	{
		short StructMember0;
		short StructMember1;
		/* [length_is][size_is][unique] */ unsigned char* StructMember2;
	} 	Struct_1024_t;

	typedef struct Struct_1060_t
	{
		unsigned char StructMember0[8];
		struct Struct_256_t StructMember1;
	} 	Struct_1060_t;

	typedef struct Struct_1084_t
	{
		unsigned char StructMember0[6];
	} 	Struct_1084_t;

	typedef struct Struct_1116_t
	{
		unsigned char StructMember0;
		unsigned char StructMember1;
		struct Struct_1084_t StructMember2;
		/* [size_is] */ long StructMember3[1];
	} 	Struct_1116_t;

	typedef struct Struct_1130_t
	{
		/* [unique] */ struct Struct_1116_t* StructMember0;
		long StructMember1;
	} 	Struct_1130_t;

	typedef struct Struct_1176_t
	{
		long StructMember0;
		/* [size_is] */ struct Struct_1130_t StructMember1[1];
	} 	Struct_1176_t;

	typedef struct Struct_1254_t
	{
		hyper StructMember0;
		hyper StructMember1;
		hyper StructMember2;
		hyper StructMember3;
		hyper StructMember4;
		struct Struct_324_t StructMember5;
	} 	Struct_1254_t;

	long Proc0_SspirConnectRpc(
		/* [string][unique][in] */ unsigned char* arg_1,
		/* [in] */ long arg_2,
		/* [out] */ long* arg_3,
		/* [out] */ long* arg_4,
		/* [context_handle][out] */ void** arg_5);

	long Proc1_SspirDisconnectRpc(
		/* [context_handle][out][in] */ void** arg_0);

	long Proc2_SspirDisconnectRpc(
		/* [context_handle][out][in] */ void** arg_0);

	long Proc3_SspirCallRpc(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ long arg_1,
		/* [size_is][in] */ unsigned char* arg_2,
		/* [out] */ long* arg_3,
		/* [size_is][size_is][ref][out] */ unsigned char** arg_4,
		/* [out] */ struct Struct_150_t* arg_5);

	long Proc4_SspirAcquireCredentialsHandle(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [unique][in] */ struct Struct_226_t* arg_2,
		/* [in] */ struct Struct_226_t* arg_3,
		/* [in] */ long arg_4,
		/* [unique][in] */ struct Struct_256_t* arg_5,
		/* [in] */ struct Struct_290_t* arg_6,
		/* [in] */ hyper arg_7,
		/* [in] */ hyper arg_9,
		/* [in] */ long arg_11,
		/* [out] */ struct Struct_312_t* arg_12,
		/* [out] */ struct Struct_324_t* arg_13,
		/* [in] */ struct Struct_150_t* arg_14,
		/* [out] */ struct Struct_150_t* arg_15);

	long Proc5_SspirFreeCredentialsHandle(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [out] */ struct Struct_150_t* arg_3);

	long Proc6_SspirProcessSecurityContext(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [out][in] */ long* arg_2,
		/* [unique][in] */ struct Struct_226_t* arg_3,
		/* [in] */ struct Struct_312_t* arg_4,
		/* [in] */ struct Struct_312_t* arg_5,
		/* [in] */ long arg_6,
		/* [in] */ long arg_7,
		/* [size_is][unique][in] */ unsigned char* arg_8,
		/* [string][unique][in] */ wchar_t* arg_9,
		/* [in] */ struct Struct_456_t* arg_10,
		/* [ref][in] */ struct Struct_516_t* arg_11,
		/* [out] */ struct Struct_456_t* arg_12,
		/* [ref][out] */ struct Struct_516_t** arg_13,
		/* [out] */ struct Struct_128_t* arg_14,
		/* [out] */ struct Struct_312_t* arg_15,
		/* [out] */ long* arg_16,
		/* [out] */ struct Struct_324_t* arg_17,
		/* [out] */ long* arg_18,
		/* [in] */ struct Struct_150_t* arg_19,
		/* [out] */ struct Struct_150_t* arg_20);

	long Proc7_SspirDeleteSecurityContext(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [out] */ struct Struct_150_t* arg_3);

	long Proc8_SspirSslQueryCredentialsAttributes(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [in] */ long arg_3,
		/* [switch_is][out] */ union union_630* arg_4);

	long Proc9_SspirNegQueryContextAttributes(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [in] */ long arg_3,
		/* [switch_is][out] */ union union_766* arg_4);

	long Proc10_SspirSslSetCredentialsAttributes(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [in] */ struct Struct_918_t* arg_3);

	long Proc11_SspirApplyControlToken(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_312_t* arg_2,
		/* [in] */ struct Struct_456_t* arg_3);

	long Proc12_SspirLogonUser(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_1024_t* arg_2,
		/* [in] */ short arg_3,
		/* [in] */ long arg_4,
		/* [in] */ struct Struct_290_t* arg_5,
		/* [in] */ struct Struct_1060_t* arg_6,
		/* [unique][in] */ struct Struct_1176_t* arg_7,
		/* [in] */ long arg_8,
		/* [size_is][unique][in] */ unsigned char* arg_9,
		/* [out] */ long* arg_10,
		/* [out] */ hyper* arg_11,
		/* [out] */ long* arg_12,
		/* [out][in] */ struct Struct_256_t* arg_13,
		/* [out] */ hyper* arg_14,
		/* [out] */ struct Struct_1254_t* arg_15);

	long Proc13_SspirLookupAccountSid(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ struct Struct_1116_t* arg_2,
		/* [out] */ struct Struct_226_t* arg_3,
		/* [out] */ struct Struct_226_t* arg_4,
		/* [ref][out] */ short* arg_5);

	long Proc14_SspirGetUserName(
		/* [context_handle][in] */ void* arg_0,
		/* [in] */ struct Struct_176_t* arg_1,
		/* [in] */ long arg_2,
		/* [out] */ struct Struct_226_t* arg_3,
		/* [out] */ long* arg_4);

	long Proc15_SspirGetInprocDispatchTable(
		/* [context_handle][in] */ void* arg_0,
		/* [out] */ long* arg_1);


	extern handle_t default_IfHandle;
	extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
	extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

	/* Additional Prototypes for ALL interfaces */

	/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


