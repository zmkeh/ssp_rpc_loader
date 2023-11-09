

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "sspi_h.h"

#define TYPE_FORMAT_STRING_SIZE   1029                              
#define PROC_FORMAT_STRING_SIZE   1189                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _lsass_MIDL_TYPE_FORMAT_STRING
{
	short          Pad;
	unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
} lsass_MIDL_TYPE_FORMAT_STRING;

typedef struct _lsass_MIDL_PROC_FORMAT_STRING
{
	short          Pad;
	unsigned char  Format[PROC_FORMAT_STRING_SIZE];
} lsass_MIDL_PROC_FORMAT_STRING;

typedef struct _lsass_MIDL_EXPR_FORMAT_STRING
{
	long          Pad;
	unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
} lsass_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
{ {0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0} };

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
static unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
static unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#endif


extern const lsass_MIDL_TYPE_FORMAT_STRING lsass__MIDL_TypeFormatString;
extern const lsass_MIDL_PROC_FORMAT_STRING lsass__MIDL_ProcFormatString;
extern const lsass_MIDL_EXPR_FORMAT_STRING lsass__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0x4f32adc8,0x6052,0x4a04,{0x87,0x01,0x29,0x3c,0xcf,0x20,0x96,0xf0}} */



static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
{
sizeof(RPC_CLIENT_INTERFACE),
{{0x4f32adc8,0x6052,0x4a04,{0x87,0x01,0x29,0x3c,0xcf,0x20,0x96,0xf0}},{1,0}},
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
0,
0,
0,
0,
0,
0x00000000
};
RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec = (RPC_IF_HANDLE)&DefaultIfName___RpcClientInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;
handle_t default_IfHandle;

long Proc0_SspirConnectRpc(
	/* [string][unique][in] */ unsigned char* arg_1,
	/* [in] */ long arg_2,
	/* [out] */ long* arg_3,
	/* [out] */ long* arg_4,
	/* [context_handle][out] */ void** arg_5)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[0],
		(unsigned char*)&arg_1
		//, &arg_2, &arg_3, &arg_4, &arg_5
	);
	return (long)_RetVal.Simple;

}


long Proc1_SspirDisconnectRpc(
	/* [context_handle][out][in] */ void** arg_0)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[60],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc2_SspirDisconnectRpc(
	/* [context_handle][out][in] */ void** arg_0)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[102],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc3_SspirCallRpc(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ long arg_1,
	/* [size_is][in] */ unsigned char* arg_2,
	/* [out] */ long* arg_3,
	/* [size_is][size_is][ref][out] */ unsigned char** arg_4,
	/* [out] */ struct Struct_150_t* arg_5)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[144],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


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
	/* [out] */ struct Struct_150_t* arg_15)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[216],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc5_SspirFreeCredentialsHandle(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [out] */ struct Struct_150_t* arg_3)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[336],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


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
	/* [out] */ struct Struct_150_t* arg_20)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[396],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc7_SspirDeleteSecurityContext(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [out] */ struct Struct_150_t* arg_3)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[558],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc8_SspirSslQueryCredentialsAttributes(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [in] */ long arg_3,
	/* [switch_is][out] */ union union_630* arg_4)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[618],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc9_SspirNegQueryContextAttributes(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [in] */ long arg_3,
	/* [switch_is][out] */ union union_766* arg_4)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[684],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc10_SspirSslSetCredentialsAttributes(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [in] */ struct Struct_918_t* arg_3)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[750],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc11_SspirApplyControlToken(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_312_t* arg_2,
	/* [in] */ struct Struct_456_t* arg_3)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[810],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


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
	/* [out] */ struct Struct_1254_t* arg_15)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[870],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc13_SspirLookupAccountSid(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ struct Struct_1116_t* arg_2,
	/* [out] */ struct Struct_226_t* arg_3,
	/* [out] */ struct Struct_226_t* arg_4,
	/* [ref][out] */ short* arg_5)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[1002],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc14_SspirGetUserName(
	/* [context_handle][in] */ void* arg_0,
	/* [in] */ struct Struct_176_t* arg_1,
	/* [in] */ long arg_2,
	/* [out] */ struct Struct_226_t* arg_3,
	/* [out] */ long* arg_4)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[1074],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


long Proc15_SspirGetInprocDispatchTable(
	/* [context_handle][in] */ void* arg_0,
	/* [out] */ long* arg_1)
{

	CLIENT_CALL_RETURN _RetVal;

	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&DefaultIfName_StubDesc,
		(PFORMAT_STRING)&lsass__MIDL_ProcFormatString.Format[1140],
		(unsigned char*)&arg_0);
	return (long)_RetVal.Simple;

}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const lsass_MIDL_PROC_FORMAT_STRING lsass__MIDL_ProcFormatString =
{
	0,
	{

		/* Procedure Proc0_SspirConnectRpc */

				0x33,		/* FC_AUTO_HANDLE */
				0x48,		/* Old Flags:  */
				/*  2 */	NdrFcLong(0x0),	/* 0 */
				/*  6 */	NdrFcShort(0x0),	/* 0 */
				/*  8 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
				/* 10 */	NdrFcShort(0x8),	/* 8 */
				/* 12 */	NdrFcShort(0x78),	/* 120 */
				/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
							0x6,		/* 6 */
							/* 16 */	0x8,		/* 8 */
										0x41,		/* Ext Flags:  new corr desc, has range on conformance */
										/* 18 */	NdrFcShort(0x0),	/* 0 */
										/* 20 */	NdrFcShort(0x0),	/* 0 */
										/* 22 */	NdrFcShort(0x0),	/* 0 */

											/* Parameter arg_1 */

											/* 24 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
											/* 26 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
											/* 28 */	NdrFcShort(0x2),	/* Type Offset=2 */

												/* Parameter arg_2 */

												/* 30 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
												/* 32 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
												/* 34 */	0x8,		/* FC_LONG */
															0x0,		/* 0 */

													/* Parameter arg_3 */

													/* 36 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
													/* 38 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
													/* 40 */	0x8,		/* FC_LONG */
																0x0,		/* 0 */

														/* Parameter arg_4 */

														/* 42 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
														/* 44 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
														/* 46 */	0x8,		/* FC_LONG */
																	0x0,		/* 0 */

															/* Parameter arg_5 */

															/* 48 */	NdrFcShort(0x110),	/* Flags:  out, simple ref, */
															/* 50 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
															/* 52 */	NdrFcShort(0xe),	/* Type Offset=14 */

																/* Return value */

																/* 54 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																/* 56 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																/* 58 */	0x8,		/* FC_LONG */
																			0x0,		/* 0 */

																	/* Procedure Proc1_SspirDisconnectRpc */

																	/* 60 */	0x0,		/* 0 */
																				0x48,		/* Old Flags:  */
																				/* 62 */	NdrFcLong(0x0),	/* 0 */
																				/* 66 */	NdrFcShort(0x1),	/* 1 */
																				/* 68 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																				/* 70 */	0x30,		/* FC_BIND_CONTEXT */
																							0xe0,		/* Ctxt flags:  via ptr, in, out, */
																							/* 72 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																							/* 74 */	0x0,		/* 0 */
																										0x0,		/* 0 */
																										/* 76 */	NdrFcShort(0x38),	/* 56 */
																										/* 78 */	NdrFcShort(0x40),	/* 64 */
																										/* 80 */	0x44,		/* Oi2 Flags:  has return, has ext, */
																													0x2,		/* 2 */
																													/* 82 */	0x8,		/* 8 */
																																0x41,		/* Ext Flags:  new corr desc, has range on conformance */
																																/* 84 */	NdrFcShort(0x0),	/* 0 */
																																/* 86 */	NdrFcShort(0x0),	/* 0 */
																																/* 88 */	NdrFcShort(0x0),	/* 0 */

																																	/* Parameter arg_0 */

																																	/* 90 */	NdrFcShort(0x118),	/* Flags:  in, out, simple ref, */
																																	/* 92 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																	/* 94 */	NdrFcShort(0x16),	/* Type Offset=22 */

																																		/* Return value */

																																		/* 96 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																		/* 98 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																		/* 100 */	0x8,		/* FC_LONG */
																																					0x0,		/* 0 */

																																			/* Procedure Proc2_SspirDisconnectRpc */

																																			/* 102 */	0x0,		/* 0 */
																																						0x48,		/* Old Flags:  */
																																						/* 104 */	NdrFcLong(0x0),	/* 0 */
																																						/* 108 */	NdrFcShort(0x2),	/* 2 */
																																						/* 110 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																						/* 112 */	0x30,		/* FC_BIND_CONTEXT */
																																									0xe0,		/* Ctxt flags:  via ptr, in, out, */
																																									/* 114 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																									/* 116 */	0x0,		/* 0 */
																																												0x0,		/* 0 */
																																												/* 118 */	NdrFcShort(0x38),	/* 56 */
																																												/* 120 */	NdrFcShort(0x40),	/* 64 */
																																												/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
																																															0x2,		/* 2 */
																																															/* 124 */	0x8,		/* 8 */
																																																		0x41,		/* Ext Flags:  new corr desc, has range on conformance */
																																																		/* 126 */	NdrFcShort(0x0),	/* 0 */
																																																		/* 128 */	NdrFcShort(0x0),	/* 0 */
																																																		/* 130 */	NdrFcShort(0x0),	/* 0 */

																																																			/* Parameter arg_0 */

																																																			/* 132 */	NdrFcShort(0x118),	/* Flags:  in, out, simple ref, */
																																																			/* 134 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																			/* 136 */	NdrFcShort(0x16),	/* Type Offset=22 */

																																																				/* Return value */

																																																				/* 138 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																				/* 140 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																				/* 142 */	0x8,		/* FC_LONG */
																																																							0x0,		/* 0 */

																																																					/* Procedure Proc3_SspirCallRpc */

																																																					/* 144 */	0x0,		/* 0 */
																																																								0x48,		/* Old Flags:  */
																																																								/* 146 */	NdrFcLong(0x0),	/* 0 */
																																																								/* 150 */	NdrFcShort(0x3),	/* 3 */
																																																								/* 152 */	NdrFcShort(0x1c),	/* x86 Stack size/offset = 28 */
																																																								/* 154 */	0x30,		/* FC_BIND_CONTEXT */
																																																											0x40,		/* Ctxt flags:  in, */
																																																											/* 156 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																											/* 158 */	0x0,		/* 0 */
																																																														0x0,		/* 0 */
																																																														/* 160 */	NdrFcShort(0x2c),	/* 44 */
																																																														/* 162 */	NdrFcShort(0x24),	/* 36 */
																																																														/* 164 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																	0x7,		/* 7 */
																																																																	/* 166 */	0x8,		/* 8 */
																																																																				0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
																																																																				/* 168 */	NdrFcShort(0x1),	/* 1 */
																																																																				/* 170 */	NdrFcShort(0x1),	/* 1 */
																																																																				/* 172 */	NdrFcShort(0x0),	/* 0 */

																																																																					/* Parameter arg_0 */

																																																																					/* 174 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																					/* 176 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																					/* 178 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																						/* Parameter arg_1 */

																																																																						/* 180 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																						/* 182 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																						/* 184 */	0x8,		/* FC_LONG */
																																																																									0x0,		/* 0 */

																																																																							/* Parameter arg_2 */

																																																																							/* 186 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																							/* 188 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																							/* 190 */	NdrFcShort(0x22),	/* Type Offset=34 */

																																																																								/* Parameter arg_3 */

																																																																								/* 192 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																								/* 194 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																								/* 196 */	0x8,		/* FC_LONG */
																																																																											0x0,		/* 0 */

																																																																									/* Parameter arg_4 */

																																																																									/* 198 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																									/* 200 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																									/* 202 */	NdrFcShort(0x38),	/* Type Offset=56 */

																																																																										/* Parameter arg_5 */

																																																																										/* 204 */	NdrFcShort(0x8113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
																																																																										/* 206 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																										/* 208 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																											/* Return value */

																																																																											/* 210 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																											/* 212 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																											/* 214 */	0x8,		/* FC_LONG */
																																																																														0x0,		/* 0 */

																																																																												/* Procedure Proc4_SspirAcquireCredentialsHandle */

																																																																												/* 216 */	0x0,		/* 0 */
																																																																															0x48,		/* Old Flags:  */
																																																																															/* 218 */	NdrFcLong(0x0),	/* 0 */
																																																																															/* 222 */	NdrFcShort(0x4),	/* 4 */
																																																																															/* 224 */	NdrFcShort(0x44),	/* x86 Stack size/offset = 68 */
																																																																															/* 226 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																		0x40,		/* Ctxt flags:  in, */
																																																																																		/* 228 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																		/* 230 */	0x0,		/* 0 */
																																																																																					0x0,		/* 0 */
																																																																																					/* 232 */	NdrFcShort(0xb4),	/* 180 */
																																																																																					/* 234 */	NdrFcShort(0x68),	/* 104 */
																																																																																					/* 236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																								0xf,		/* 15 */
																																																																																								/* 238 */	0x8,		/* 8 */
																																																																																											0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
																																																																																											/* 240 */	NdrFcShort(0x1),	/* 1 */
																																																																																											/* 242 */	NdrFcShort(0x1),	/* 1 */
																																																																																											/* 244 */	NdrFcShort(0x0),	/* 0 */

																																																																																												/* Parameter arg_0 */

																																																																																												/* 246 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																												/* 248 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																												/* 250 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																													/* Parameter arg_1 */

																																																																																													/* 252 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																													/* 254 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																													/* 256 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																														/* Parameter arg_2 */

																																																																																														/* 258 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																														/* 260 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																														/* 262 */	NdrFcShort(0xa4),	/* Type Offset=164 */

																																																																																															/* Parameter arg_3 */

																																																																																															/* 264 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																															/* 266 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																															/* 268 */	NdrFcShort(0xce),	/* Type Offset=206 */

																																																																																																/* Parameter arg_4 */

																																																																																																/* 270 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																/* 272 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																/* 274 */	0x8,		/* FC_LONG */
																																																																																																			0x0,		/* 0 */

																																																																																																	/* Parameter arg_5 */

																																																																																																	/* 276 */	NdrFcShort(0xa),	/* Flags:  must free, in, */
																																																																																																	/* 278 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																	/* 280 */	NdrFcShort(0xe8),	/* Type Offset=232 */

																																																																																																		/* Parameter arg_6 */

																																																																																																		/* 282 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																		/* 284 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																		/* 286 */	NdrFcShort(0xf8),	/* Type Offset=248 */

																																																																																																			/* Parameter arg_7 */

																																																																																																			/* 288 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																			/* 290 */	NdrFcShort(0x1c),	/* x86 Stack size/offset = 28 */
																																																																																																			/* 292 */	0xb,		/* FC_HYPER */
																																																																																																						0x0,		/* 0 */

																																																																																																				/* Parameter arg_9 */

																																																																																																				/* 294 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																				/* 296 */	NdrFcShort(0x24),	/* x86 Stack size/offset = 36 */
																																																																																																				/* 298 */	0xb,		/* FC_HYPER */
																																																																																																							0x0,		/* 0 */

																																																																																																					/* Parameter arg_11 */

																																																																																																					/* 300 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																					/* 302 */	NdrFcShort(0x2c),	/* x86 Stack size/offset = 44 */
																																																																																																					/* 304 */	0x8,		/* FC_LONG */
																																																																																																								0x0,		/* 0 */

																																																																																																						/* Parameter arg_12 */

																																																																																																						/* 306 */	NdrFcShort(0x4112),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
																																																																																																						/* 308 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																						/* 310 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																							/* Parameter arg_13 */

																																																																																																							/* 312 */	NdrFcShort(0x2112),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
																																																																																																							/* 314 */	NdrFcShort(0x34),	/* x86 Stack size/offset = 52 */
																																																																																																							/* 316 */	NdrFcShort(0x112),	/* Type Offset=274 */

																																																																																																								/* Parameter arg_14 */

																																																																																																								/* 318 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																								/* 320 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																								/* 322 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																									/* Parameter arg_15 */

																																																																																																									/* 324 */	NdrFcShort(0x8113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
																																																																																																									/* 326 */	NdrFcShort(0x3c),	/* x86 Stack size/offset = 60 */
																																																																																																									/* 328 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																										/* Return value */

																																																																																																										/* 330 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																										/* 332 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																										/* 334 */	0x8,		/* FC_LONG */
																																																																																																													0x0,		/* 0 */

																																																																																																											/* Procedure Proc5_SspirFreeCredentialsHandle */

																																																																																																											/* 336 */	0x0,		/* 0 */
																																																																																																														0x48,		/* Old Flags:  */
																																																																																																														/* 338 */	NdrFcLong(0x0),	/* 0 */
																																																																																																														/* 342 */	NdrFcShort(0x5),	/* 5 */
																																																																																																														/* 344 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																														/* 346 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																	0x40,		/* Ctxt flags:  in, */
																																																																																																																	/* 348 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																	/* 350 */	0x0,		/* 0 */
																																																																																																																				0x0,		/* 0 */
																																																																																																																				/* 352 */	NdrFcShort(0x8c),	/* 140 */
																																																																																																																				/* 354 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																				/* 356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																							0x5,		/* 5 */
																																																																																																																							/* 358 */	0x8,		/* 8 */
																																																																																																																										0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
																																																																																																																										/* 360 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																										/* 362 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																										/* 364 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																											/* Parameter arg_0 */

																																																																																																																											/* 366 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																											/* 368 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																											/* 370 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																												/* Parameter arg_1 */

																																																																																																																												/* 372 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																												/* 374 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																												/* 376 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																													/* Parameter arg_2 */

																																																																																																																													/* 378 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																													/* 380 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																													/* 382 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																														/* Parameter arg_3 */

																																																																																																																														/* 384 */	NdrFcShort(0x8113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
																																																																																																																														/* 386 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																														/* 388 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																																															/* Return value */

																																																																																																																															/* 390 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																															/* 392 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																															/* 394 */	0x8,		/* FC_LONG */
																																																																																																																																		0x0,		/* 0 */

																																																																																																																																/* Procedure Proc6_SspirProcessSecurityContext */

																																																																																																																																/* 396 */	0x0,		/* 0 */
																																																																																																																																			0x48,		/* Old Flags:  */
																																																																																																																																			/* 398 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																			/* 402 */	NdrFcShort(0x6),	/* 6 */
																																																																																																																																			/* 404 */	NdrFcShort(0x58),	/* x86 Stack size/offset = 88 */
																																																																																																																																			/* 406 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																						0x40,		/* Ctxt flags:  in, */
																																																																																																																																						/* 408 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																						/* 410 */	0x0,		/* 0 */
																																																																																																																																									0x0,		/* 0 */
																																																																																																																																									/* 412 */	NdrFcShort(0xec),	/* 236 */
																																																																																																																																									/* 414 */	NdrFcShort(0xbc),	/* 188 */
																																																																																																																																									/* 416 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																																												0x16,		/* 22 */
																																																																																																																																												/* 418 */	0x8,		/* 8 */
																																																																																																																																															0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
																																																																																																																																															/* 420 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																															/* 422 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																															/* 424 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																/* Parameter arg_0 */

																																																																																																																																																/* 426 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																/* 428 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																/* 430 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																	/* Parameter arg_1 */

																																																																																																																																																	/* 432 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																	/* 434 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																	/* 436 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																		/* Parameter arg_2 */

																																																																																																																																																		/* 438 */	NdrFcShort(0x158),	/* Flags:  in, out, base type, simple ref, */
																																																																																																																																																		/* 440 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																		/* 442 */	0x8,		/* FC_LONG */
																																																																																																																																																					0x0,		/* 0 */

																																																																																																																																																			/* Parameter arg_3 */

																																																																																																																																																			/* 444 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																			/* 446 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																			/* 448 */	NdrFcShort(0xa4),	/* Type Offset=164 */

																																																																																																																																																				/* Parameter arg_4 */

																																																																																																																																																				/* 450 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																				/* 452 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																				/* 454 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																					/* Parameter arg_5 */

																																																																																																																																																					/* 456 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																					/* 458 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																					/* 460 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																						/* Parameter arg_6 */

																																																																																																																																																						/* 462 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																						/* 464 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																						/* 466 */	0x8,		/* FC_LONG */
																																																																																																																																																									0x0,		/* 0 */

																																																																																																																																																							/* Parameter arg_7 */

																																																																																																																																																							/* 468 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																							/* 470 */	NdrFcShort(0x1c),	/* x86 Stack size/offset = 28 */
																																																																																																																																																							/* 472 */	0x8,		/* FC_LONG */
																																																																																																																																																										0x0,		/* 0 */

																																																																																																																																																								/* Parameter arg_8 */

																																																																																																																																																								/* 474 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																								/* 476 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																								/* 478 */	NdrFcShort(0x120),	/* Type Offset=288 */

																																																																																																																																																									/* Parameter arg_9 */

																																																																																																																																																									/* 480 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																									/* 482 */	NdrFcShort(0x24),	/* x86 Stack size/offset = 36 */
																																																																																																																																																									/* 484 */	NdrFcShort(0x13a),	/* Type Offset=314 */

																																																																																																																																																										/* Parameter arg_10 */

																																																																																																																																																										/* 486 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																										/* 488 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																										/* 490 */	NdrFcShort(0x16e),	/* Type Offset=366 */

																																																																																																																																																											/* Parameter arg_11 */

																																																																																																																																																											/* 492 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																											/* 494 */	NdrFcShort(0x2c),	/* x86 Stack size/offset = 44 */
																																																																																																																																																											/* 496 */	NdrFcShort(0x1a2),	/* Type Offset=418 */

																																																																																																																																																												/* Parameter arg_12 */

																																																																																																																																																												/* 498 */	NdrFcShort(0x4113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
																																																																																																																																																												/* 500 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																												/* 502 */	NdrFcShort(0x16e),	/* Type Offset=366 */

																																																																																																																																																													/* Parameter arg_13 */

																																																																																																																																																													/* 504 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																													/* 506 */	NdrFcShort(0x34),	/* x86 Stack size/offset = 52 */
																																																																																																																																																													/* 508 */	NdrFcShort(0x1bc),	/* Type Offset=444 */

																																																																																																																																																														/* Parameter arg_14 */

																																																																																																																																																														/* 510 */	NdrFcShort(0x4113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
																																																																																																																																																														/* 512 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																														/* 514 */	NdrFcShort(0x70),	/* Type Offset=112 */

																																																																																																																																																															/* Parameter arg_15 */

																																																																																																																																																															/* 516 */	NdrFcShort(0x4112),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
																																																																																																																																																															/* 518 */	NdrFcShort(0x3c),	/* x86 Stack size/offset = 60 */
																																																																																																																																																															/* 520 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																/* Parameter arg_16 */

																																																																																																																																																																/* 522 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																/* 524 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																																																/* 526 */	0x8,		/* FC_LONG */
																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																	/* Parameter arg_17 */

																																																																																																																																																																	/* 528 */	NdrFcShort(0x2112),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																	/* 530 */	NdrFcShort(0x44),	/* x86 Stack size/offset = 68 */
																																																																																																																																																																	/* 532 */	NdrFcShort(0x112),	/* Type Offset=274 */

																																																																																																																																																																		/* Parameter arg_18 */

																																																																																																																																																																		/* 534 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																		/* 536 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
																																																																																																																																																																		/* 538 */	0x8,		/* FC_LONG */
																																																																																																																																																																					0x0,		/* 0 */

																																																																																																																																																																			/* Parameter arg_19 */

																																																																																																																																																																			/* 540 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																			/* 542 */	NdrFcShort(0x4c),	/* x86 Stack size/offset = 76 */
																																																																																																																																																																			/* 544 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																																																																																				/* Parameter arg_20 */

																																																																																																																																																																				/* 546 */	NdrFcShort(0x8113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
																																																																																																																																																																				/* 548 */	NdrFcShort(0x50),	/* x86 Stack size/offset = 80 */
																																																																																																																																																																				/* 550 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																																																																																					/* Return value */

																																																																																																																																																																					/* 552 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																					/* 554 */	NdrFcShort(0x54),	/* x86 Stack size/offset = 84 */
																																																																																																																																																																					/* 556 */	0x8,		/* FC_LONG */
																																																																																																																																																																								0x0,		/* 0 */

																																																																																																																																																																						/* Procedure Proc7_SspirDeleteSecurityContext */

																																																																																																																																																																						/* 558 */	0x0,		/* 0 */
																																																																																																																																																																									0x48,		/* Old Flags:  */
																																																																																																																																																																									/* 560 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																									/* 564 */	NdrFcShort(0x7),	/* 7 */
																																																																																																																																																																									/* 566 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																									/* 568 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																												0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																												/* 570 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																												/* 572 */	0x0,		/* 0 */
																																																																																																																																																																															0x0,		/* 0 */
																																																																																																																																																																															/* 574 */	NdrFcShort(0x8c),	/* 140 */
																																																																																																																																																																															/* 576 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																															/* 578 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																																																																																		0x5,		/* 5 */
																																																																																																																																																																																		/* 580 */	0x8,		/* 8 */
																																																																																																																																																																																					0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
																																																																																																																																																																																					/* 582 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																					/* 584 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																					/* 586 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																						/* Parameter arg_0 */

																																																																																																																																																																																						/* 588 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																						/* 590 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																						/* 592 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																							/* Parameter arg_1 */

																																																																																																																																																																																							/* 594 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																							/* 596 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																							/* 598 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																								/* Parameter arg_2 */

																																																																																																																																																																																								/* 600 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																								/* 602 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																								/* 604 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																									/* Parameter arg_3 */

																																																																																																																																																																																									/* 606 */	NdrFcShort(0x8113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=32 */
																																																																																																																																																																																									/* 608 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																									/* 610 */	NdrFcShort(0x86),	/* Type Offset=134 */

																																																																																																																																																																																										/* Return value */

																																																																																																																																																																																										/* 612 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																										/* 614 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																										/* 616 */	0x8,		/* FC_LONG */
																																																																																																																																																																																													0x0,		/* 0 */

																																																																																																																																																																																											/* Procedure Proc8_SspirSslQueryCredentialsAttributes */

																																																																																																																																																																																											/* 618 */	0x0,		/* 0 */
																																																																																																																																																																																														0x48,		/* Old Flags:  */
																																																																																																																																																																																														/* 620 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																														/* 624 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																														/* 626 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																														/* 628 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																	0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																	/* 630 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																	/* 632 */	0x0,		/* 0 */
																																																																																																																																																																																																				0x0,		/* 0 */
																																																																																																																																																																																																				/* 634 */	NdrFcShort(0x94),	/* 148 */
																																																																																																																																																																																																				/* 636 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																				/* 638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																																																																																																							0x6,		/* 6 */
																																																																																																																																																																																																							/* 640 */	0x8,		/* 8 */
																																																																																																																																																																																																										0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
																																																																																																																																																																																																										/* 642 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																										/* 644 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																										/* 646 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																											/* Parameter arg_0 */

																																																																																																																																																																																																											/* 648 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																											/* 650 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																											/* 652 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																												/* Parameter arg_1 */

																																																																																																																																																																																																												/* 654 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																												/* 656 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																												/* 658 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																													/* Parameter arg_2 */

																																																																																																																																																																																																													/* 660 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																													/* 662 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																													/* 664 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																														/* Parameter arg_3 */

																																																																																																																																																																																																														/* 666 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																														/* 668 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																														/* 670 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																	0x0,		/* 0 */

																																																																																																																																																																																																															/* Parameter arg_4 */

																																																																																																																																																																																																															/* 672 */	NdrFcShort(0x2113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																																																															/* 674 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																															/* 676 */	NdrFcShort(0x1cc),	/* Type Offset=460 */

																																																																																																																																																																																																																/* Return value */

																																																																																																																																																																																																																/* 678 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																/* 680 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																/* 682 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																	/* Procedure Proc9_SspirNegQueryContextAttributes */

																																																																																																																																																																																																																	/* 684 */	0x0,		/* 0 */
																																																																																																																																																																																																																				0x48,		/* Old Flags:  */
																																																																																																																																																																																																																				/* 686 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																				/* 690 */	NdrFcShort(0x9),	/* 9 */
																																																																																																																																																																																																																				/* 692 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																				/* 694 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																							0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																							/* 696 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																							/* 698 */	0x0,		/* 0 */
																																																																																																																																																																																																																										0x0,		/* 0 */
																																																																																																																																																																																																																										/* 700 */	NdrFcShort(0x94),	/* 148 */
																																																																																																																																																																																																																										/* 702 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																										/* 704 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																																																																																																																													0x6,		/* 6 */
																																																																																																																																																																																																																													/* 706 */	0x8,		/* 8 */
																																																																																																																																																																																																																																0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
																																																																																																																																																																																																																																/* 708 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																/* 710 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																/* 712 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																	/* Parameter arg_0 */

																																																																																																																																																																																																																																	/* 714 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																	/* 716 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																	/* 718 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																		/* Parameter arg_1 */

																																																																																																																																																																																																																																		/* 720 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																		/* 722 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																		/* 724 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																			/* Parameter arg_2 */

																																																																																																																																																																																																																																			/* 726 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																			/* 728 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																			/* 730 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																				/* Parameter arg_3 */

																																																																																																																																																																																																																																				/* 732 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																				/* 734 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																				/* 736 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																							0x0,		/* 0 */

																																																																																																																																																																																																																																					/* Parameter arg_4 */

																																																																																																																																																																																																																																					/* 738 */	NdrFcShort(0x2113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																					/* 740 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																					/* 742 */	NdrFcShort(0x23c),	/* Type Offset=572 */

																																																																																																																																																																																																																																						/* Return value */

																																																																																																																																																																																																																																						/* 744 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																						/* 746 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																						/* 748 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																									0x0,		/* 0 */

																																																																																																																																																																																																																																							/* Procedure Proc10_SspirSslSetCredentialsAttributes */

																																																																																																																																																																																																																																							/* 750 */	0x0,		/* 0 */
																																																																																																																																																																																																																																										0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																										/* 752 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																										/* 756 */	NdrFcShort(0xa),	/* 10 */
																																																																																																																																																																																																																																										/* 758 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																										/* 760 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																													0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																													/* 762 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																													/* 764 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																0x0,		/* 0 */
																																																																																																																																																																																																																																																/* 766 */	NdrFcShort(0x8c),	/* 140 */
																																																																																																																																																																																																																																																/* 768 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																			0x5,		/* 5 */
																																																																																																																																																																																																																																																			/* 772 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																						0x41,		/* Ext Flags:  new corr desc, has range on conformance */
																																																																																																																																																																																																																																																						/* 774 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																						/* 776 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																						/* 778 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																							/* Parameter arg_0 */

																																																																																																																																																																																																																																																							/* 780 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																							/* 782 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																							/* 784 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																								/* Parameter arg_1 */

																																																																																																																																																																																																																																																								/* 786 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																								/* 788 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																								/* 790 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																									/* Parameter arg_2 */

																																																																																																																																																																																																																																																									/* 792 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																									/* 794 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																									/* 796 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																										/* Parameter arg_3 */

																																																																																																																																																																																																																																																										/* 798 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																										/* 800 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																										/* 802 */	NdrFcShort(0x2dc),	/* Type Offset=732 */

																																																																																																																																																																																																																																																											/* Return value */

																																																																																																																																																																																																																																																											/* 804 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																											/* 806 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																											/* 808 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																																																																																												/* Procedure Proc11_SspirApplyControlToken */

																																																																																																																																																																																																																																																												/* 810 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																															0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																															/* 812 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																															/* 816 */	NdrFcShort(0xb),	/* 11 */
																																																																																																																																																																																																																																																															/* 818 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																																															/* 820 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																																																		0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																																																		/* 822 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																		/* 824 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																					0x0,		/* 0 */
																																																																																																																																																																																																																																																																					/* 826 */	NdrFcShort(0x8c),	/* 140 */
																																																																																																																																																																																																																																																																					/* 828 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																					/* 830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																								0x5,		/* 5 */
																																																																																																																																																																																																																																																																								/* 832 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																																											0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
																																																																																																																																																																																																																																																																											/* 834 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																											/* 836 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																											/* 838 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																												/* Parameter arg_0 */

																																																																																																																																																																																																																																																																												/* 840 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																																												/* 842 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																												/* 844 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																																													/* Parameter arg_1 */

																																																																																																																																																																																																																																																																													/* 846 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																													/* 848 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																																													/* 850 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																																														/* Parameter arg_2 */

																																																																																																																																																																																																																																																																														/* 852 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																														/* 854 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																														/* 856 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																																															/* Parameter arg_3 */

																																																																																																																																																																																																																																																																															/* 858 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																															/* 860 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																															/* 862 */	NdrFcShort(0x16e),	/* Type Offset=366 */

																																																																																																																																																																																																																																																																																/* Return value */

																																																																																																																																																																																																																																																																																/* 864 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																/* 866 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																/* 868 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																																																																																	/* Procedure Proc12_SspirLogonUser */

																																																																																																																																																																																																																																																																																	/* 870 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																				0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																				/* 872 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																				/* 876 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																																																																																																				/* 878 */	NdrFcShort(0x44),	/* x86 Stack size/offset = 68 */
																																																																																																																																																																																																																																																																																				/* 880 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																																																																							0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																																																																							/* 882 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																							/* 884 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																										0x0,		/* 0 */
																																																																																																																																																																																																																																																																																										/* 886 */	NdrFcShort(0xee),	/* 238 */
																																																																																																																																																																																																																																																																																										/* 888 */	NdrFcShort(0x118),	/* 280 */
																																																																																																																																																																																																																																																																																										/* 890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																													0x11,		/* 17 */
																																																																																																																																																																																																																																																																																													/* 892 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																																																																0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
																																																																																																																																																																																																																																																																																																/* 894 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																/* 896 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																/* 898 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																	/* Parameter arg_0 */

																																																																																																																																																																																																																																																																																																	/* 900 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																																																																	/* 902 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																	/* 904 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																																																																		/* Parameter arg_1 */

																																																																																																																																																																																																																																																																																																		/* 906 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																		/* 908 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																																																																		/* 910 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																																																																			/* Parameter arg_2 */

																																																																																																																																																																																																																																																																																																			/* 912 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																			/* 914 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																			/* 916 */	NdrFcShort(0x32e),	/* Type Offset=814 */

																																																																																																																																																																																																																																																																																																				/* Parameter arg_3 */

																																																																																																																																																																																																																																																																																																				/* 918 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																				/* 920 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																																																				/* 922 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																							0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																					/* Parameter arg_4 */

																																																																																																																																																																																																																																																																																																					/* 924 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																					/* 926 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																					/* 928 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																								0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																						/* Parameter arg_5 */

																																																																																																																																																																																																																																																																																																						/* 930 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																						/* 932 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																																																																																						/* 934 */	NdrFcShort(0xf8),	/* Type Offset=248 */

																																																																																																																																																																																																																																																																																																							/* Parameter arg_6 */

																																																																																																																																																																																																																																																																																																							/* 936 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																							/* 938 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																							/* 940 */	NdrFcShort(0x34e),	/* Type Offset=846 */

																																																																																																																																																																																																																																																																																																								/* Parameter arg_7 */

																																																																																																																																																																																																																																																																																																								/* 942 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																																																																																																																																																								/* 944 */	NdrFcShort(0x1c),	/* x86 Stack size/offset = 28 */
																																																																																																																																																																																																																																																																																																								/* 946 */	NdrFcShort(0x35c),	/* Type Offset=860 */

																																																																																																																																																																																																																																																																																																									/* Parameter arg_8 */

																																																																																																																																																																																																																																																																																																									/* 948 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																									/* 950 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																									/* 952 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																										/* Parameter arg_9 */

																																																																																																																																																																																																																																																																																																										/* 954 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																																																																																																																																																										/* 956 */	NdrFcShort(0x24),	/* x86 Stack size/offset = 36 */
																																																																																																																																																																																																																																																																																																										/* 958 */	NdrFcShort(0x120),	/* Type Offset=288 */

																																																																																																																																																																																																																																																																																																											/* Parameter arg_10 */

																																																																																																																																																																																																																																																																																																											/* 960 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																											/* 962 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																																																																																											/* 964 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																												/* Parameter arg_11 */

																																																																																																																																																																																																																																																																																																												/* 966 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																												/* 968 */	NdrFcShort(0x2c),	/* x86 Stack size/offset = 44 */
																																																																																																																																																																																																																																																																																																												/* 970 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																															0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																													/* Parameter arg_12 */

																																																																																																																																																																																																																																																																																																													/* 972 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																													/* 974 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																																																																																																																																																																													/* 976 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																														/* Parameter arg_13 */

																																																																																																																																																																																																																																																																																																														/* 978 */	NdrFcShort(0x11a),	/* Flags:  must free, in, out, simple ref, */
																																																																																																																																																																																																																																																																																																														/* 980 */	NdrFcShort(0x34),	/* x86 Stack size/offset = 52 */
																																																																																																																																																																																																																																																																																																														/* 982 */	NdrFcShort(0xec),	/* Type Offset=236 */

																																																																																																																																																																																																																																																																																																															/* Parameter arg_14 */

																																																																																																																																																																																																																																																																																																															/* 984 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																															/* 986 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																																																																																																																																																																															/* 988 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																		0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																/* Parameter arg_15 */

																																																																																																																																																																																																																																																																																																																/* 990 */	NdrFcShort(0xc112),	/* Flags:  must free, out, simple ref, srv alloc size=48 */
																																																																																																																																																																																																																																																																																																																/* 992 */	NdrFcShort(0x3c),	/* x86 Stack size/offset = 60 */
																																																																																																																																																																																																																																																																																																																/* 994 */	NdrFcShort(0x3ea),	/* Type Offset=1002 */

																																																																																																																																																																																																																																																																																																																	/* Return value */

																																																																																																																																																																																																																																																																																																																	/* 996 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																	/* 998 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																																																																																																																																																																																																	/* 1000 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																				0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																		/* Procedure Proc13_SspirLookupAccountSid */

																																																																																																																																																																																																																																																																																																																		/* 1002 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																					0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																					/* 1004 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																					/* 1008 */	NdrFcShort(0xd),	/* 13 */
																																																																																																																																																																																																																																																																																																																					/* 1010 */	NdrFcShort(0x1c),	/* x86 Stack size/offset = 28 */
																																																																																																																																																																																																																																																																																																																					/* 1012 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																																																																																																								0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																																																																																																								/* 1014 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																								/* 1016 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																											/* 1018 */	NdrFcShort(0x58),	/* 88 */
																																																																																																																																																																																																																																																																																																																											/* 1020 */	NdrFcShort(0x22),	/* 34 */
																																																																																																																																																																																																																																																																																																																											/* 1022 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																														0x7,		/* 7 */
																																																																																																																																																																																																																																																																																																																														/* 1024 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																																																																																																	0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
																																																																																																																																																																																																																																																																																																																																	/* 1026 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																																																	/* 1028 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																																																	/* 1030 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																		/* Parameter arg_0 */

																																																																																																																																																																																																																																																																																																																																		/* 1032 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																																																																																																		/* 1034 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																		/* 1036 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																																																																																																			/* Parameter arg_1 */

																																																																																																																																																																																																																																																																																																																																			/* 1038 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																			/* 1040 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																																																																																																			/* 1042 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																																																																																																				/* Parameter arg_2 */

																																																																																																																																																																																																																																																																																																																																				/* 1044 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																				/* 1046 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																				/* 1048 */	NdrFcShort(0x386),	/* Type Offset=902 */

																																																																																																																																																																																																																																																																																																																																					/* Parameter arg_3 */

																																																																																																																																																																																																																																																																																																																																					/* 1050 */	NdrFcShort(0x2113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																					/* 1052 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																																																																																					/* 1054 */	NdrFcShort(0xce),	/* Type Offset=206 */

																																																																																																																																																																																																																																																																																																																																						/* Parameter arg_4 */

																																																																																																																																																																																																																																																																																																																																						/* 1056 */	NdrFcShort(0x2113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																						/* 1058 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																																						/* 1060 */	NdrFcShort(0xce),	/* Type Offset=206 */

																																																																																																																																																																																																																																																																																																																																							/* Parameter arg_5 */

																																																																																																																																																																																																																																																																																																																																							/* 1062 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																							/* 1064 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																																																																																																																							/* 1066 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																										0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																								/* Return value */

																																																																																																																																																																																																																																																																																																																																								/* 1068 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																								/* 1070 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																																								/* 1072 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																									/* Procedure Proc14_SspirGetUserName */

																																																																																																																																																																																																																																																																																																																																									/* 1074 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																												0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																																												/* 1076 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																												/* 1080 */	NdrFcShort(0xe),	/* 14 */
																																																																																																																																																																																																																																																																																																																																												/* 1082 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																																												/* 1084 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																																																																																																																															0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																																																																																																																															/* 1086 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																															/* 1088 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																		/* 1090 */	NdrFcShort(0x60),	/* 96 */
																																																																																																																																																																																																																																																																																																																																																		/* 1092 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																																																																																																																																																																																																																		/* 1094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																																																					0x6,		/* 6 */
																																																																																																																																																																																																																																																																																																																																																					/* 1096 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																																																																																																																								0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
																																																																																																																																																																																																																																																																																																																																																								/* 1098 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																																																																								/* 1100 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																								/* 1102 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																																									/* Parameter arg_0 */

																																																																																																																																																																																																																																																																																																																																																									/* 1104 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																																																																																																																									/* 1106 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																																									/* 1108 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																																																																																																																										/* Parameter arg_1 */

																																																																																																																																																																																																																																																																																																																																																										/* 1110 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																																										/* 1112 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																																																																																																																										/* 1114 */	NdrFcShort(0x9c),	/* Type Offset=156 */

																																																																																																																																																																																																																																																																																																																																																											/* Parameter arg_2 */

																																																																																																																																																																																																																																																																																																																																																											/* 1116 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																																																																											/* 1118 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																																											/* 1120 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																												/* Parameter arg_3 */

																																																																																																																																																																																																																																																																																																																																																												/* 1122 */	NdrFcShort(0x2113),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																																												/* 1124 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																																																																																																												/* 1126 */	NdrFcShort(0xce),	/* Type Offset=206 */

																																																																																																																																																																																																																																																																																																																																																													/* Parameter arg_4 */

																																																																																																																																																																																																																																																																																																																																																													/* 1128 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																																													/* 1130 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																																																													/* 1132 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																														/* Return value */

																																																																																																																																																																																																																																																																																																																																																														/* 1134 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																																														/* 1136 */	NdrFcShort(0x14),	/* x86 Stack size/offset = 20 */
																																																																																																																																																																																																																																																																																																																																																														/* 1138 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																	0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																															/* Procedure Proc15_SspirGetInprocDispatchTable */

																																																																																																																																																																																																																																																																																																																																																															/* 1140 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																		0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																																																																		/* 1142 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																		/* 1146 */	NdrFcShort(0xf),	/* 15 */
																																																																																																																																																																																																																																																																																																																																																																		/* 1148 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																																																																																																																		/* 1150 */	0x30,		/* FC_BIND_CONTEXT */
																																																																																																																																																																																																																																																																																																																																																																					0x40,		/* Ctxt flags:  in, */
																																																																																																																																																																																																																																																																																																																																																																					/* 1152 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																																																					/* 1154 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																								0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																								/* 1156 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																																																																																																																																																																																																																																								/* 1158 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																																																																																																																																																																																																																																								/* 1160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
																																																																																																																																																																																																																																																																																																																																																																											0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																											/* 1162 */	0x8,		/* 8 */
																																																																																																																																																																																																																																																																																																																																																																														0x41,		/* Ext Flags:  new corr desc, has range on conformance */
																																																																																																																																																																																																																																																																																																																																																																														/* 1164 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																														/* 1166 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																														/* 1168 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																																																															/* Parameter arg_0 */

																																																																																																																																																																																																																																																																																																																																																																															/* 1170 */	NdrFcShort(0x8),	/* Flags:  in, */
																																																																																																																																																																																																																																																																																																																																																																															/* 1172 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																																																															/* 1174 */	NdrFcShort(0x1a),	/* Type Offset=26 */

																																																																																																																																																																																																																																																																																																																																																																																/* Parameter arg_1 */

																																																																																																																																																																																																																																																																																																																																																																																/* 1176 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																																																																/* 1178 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																																																																																																																																																																																																																																																																																																																																																																																/* 1180 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																																																	/* Return value */

																																																																																																																																																																																																																																																																																																																																																																																	/* 1182 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																																																																	/* 1184 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																																																																	/* 1186 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																				0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																																																				0x0
																																																																																																																																																																																																																																																																																																																																																																																			}
};

static const lsass_MIDL_TYPE_FORMAT_STRING lsass__MIDL_TypeFormatString =
{
	0,
	{
		NdrFcShort(0x0),	/* 0 */
/*  2 */
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/*  6 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
			/*  8 */	0x8,		/* FC_LONG */
						0x5c,		/* FC_PAD */
			/* 10 */
						0x11, 0x4,	/* FC_RP [alloced_on_stack] */
						/* 12 */	NdrFcShort(0x2),	/* Offset= 2 (14) */
						/* 14 */	0x30,		/* FC_BIND_CONTEXT */
									0xa0,		/* Ctxt flags:  via ptr, out, */
									/* 16 */	0x0,		/* 0 */
												0x0,		/* 0 */
									/* 18 */
												0x11, 0x4,	/* FC_RP [alloced_on_stack] */
												/* 20 */	NdrFcShort(0x2),	/* Offset= 2 (22) */
												/* 22 */	0x30,		/* FC_BIND_CONTEXT */
															0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
															/* 24 */	0x0,		/* 0 */
																		0x0,		/* 0 */
																		/* 26 */	0x30,		/* FC_BIND_CONTEXT */
																					0x41,		/* Ctxt flags:  in, can't be null */
																					/* 28 */	0x0,		/* 0 */
																								0x0,		/* 0 */
																					/* 30 */
																								0x11, 0x0,	/* FC_RP */
																								/* 32 */	NdrFcShort(0x2),	/* Offset= 2 (34) */
																								/* 34 */
																											0x1b,		/* FC_CARRAY */
																											0x0,		/* 0 */
																											/* 36 */	NdrFcShort(0x1),	/* 1 */
																											/* 38 */	0x28,		/* Corr desc:  parameter, FC_LONG */
																														0x0,		/*  */
																														/* 40 */	NdrFcShort(0x4),	/* x86 Stack size/offset = 4 */
																														/* 42 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																														/* 44 */	0x0 ,
																																	0x0,		/* 0 */
																																	/* 46 */	NdrFcLong(0x0),	/* 0 */
																																	/* 50 */	NdrFcLong(0x0),	/* 0 */
																																	/* 54 */	0x2,		/* FC_CHAR */
																																				0x5b,		/* FC_END */
																																	/* 56 */
																																				0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																				/* 58 */	NdrFcShort(0x2),	/* Offset= 2 (60) */
																																				/* 60 */
																																							0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																							/* 62 */	NdrFcShort(0x2),	/* Offset= 2 (64) */
																																							/* 64 */
																																										0x1b,		/* FC_CARRAY */
																																										0x0,		/* 0 */
																																										/* 66 */	NdrFcShort(0x1),	/* 1 */
																																										/* 68 */	0x28,		/* Corr desc:  parameter, FC_LONG */
																																													0x54,		/* FC_DEREFERENCE */
																																													/* 70 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																													/* 72 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																													/* 74 */	0x0 ,
																																																0x0,		/* 0 */
																																																/* 76 */	NdrFcLong(0x0),	/* 0 */
																																																/* 80 */	NdrFcLong(0x0),	/* 0 */
																																																/* 84 */	0x2,		/* FC_CHAR */
																																																			0x5b,		/* FC_END */
																																																/* 86 */
																																																			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																			/* 88 */	NdrFcShort(0x2e),	/* Offset= 46 (134) */
																																																			/* 90 */
																																																						0x1b,		/* FC_CARRAY */
																																																						0x0,		/* 0 */
																																																						/* 92 */	NdrFcShort(0x1),	/* 1 */
																																																						/* 94 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
																																																									0x0,		/*  */
																																																									/* 96 */	NdrFcShort(0x0),	/* 0 */
																																																									/* 98 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																									/* 100 */	0x0 ,
																																																												0x0,		/* 0 */
																																																												/* 102 */	NdrFcLong(0x0),	/* 0 */
																																																												/* 106 */	NdrFcLong(0x0),	/* 0 */
																																																												/* 110 */	0x2,		/* FC_CHAR */
																																																															0x5b,		/* FC_END */
																																																												/* 112 */
																																																															0x16,		/* FC_PSTRUCT */
																																																															0x3,		/* 3 */
																																																															/* 114 */	NdrFcShort(0xc),	/* 12 */
																																																															/* 116 */
																																																																		0x4b,		/* FC_PP */
																																																																		0x5c,		/* FC_PAD */
																																																															/* 118 */
																																																																		0x46,		/* FC_NO_REPEAT */
																																																																		0x5c,		/* FC_PAD */
																																																																		/* 120 */	NdrFcShort(0x8),	/* 8 */
																																																																		/* 122 */	NdrFcShort(0x8),	/* 8 */
																																																																		/* 124 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																		/* 126 */	NdrFcShort(0xffdc),	/* Offset= -36 (90) */
																																																																		/* 128 */
																																																																					0x5b,		/* FC_END */

																																																																					0x8,		/* FC_LONG */
																																																																					/* 130 */	0x8,		/* FC_LONG */
																																																																								0x8,		/* FC_LONG */
																																																																								/* 132 */	0x5c,		/* FC_PAD */
																																																																											0x5b,		/* FC_END */
																																																																								/* 134 */
																																																																											0x1a,		/* FC_BOGUS_STRUCT */
																																																																											0x3,		/* 3 */
																																																																											/* 136 */	NdrFcShort(0x1c),	/* 28 */
																																																																											/* 138 */	NdrFcShort(0x0),	/* 0 */
																																																																											/* 140 */	NdrFcShort(0x0),	/* Offset= 0 (140) */
																																																																											/* 142 */	0x8,		/* FC_LONG */
																																																																														0x8,		/* FC_LONG */
																																																																														/* 144 */	0x8,		/* FC_LONG */
																																																																																	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																	/* 146 */	0x0,		/* 0 */
																																																																																				NdrFcShort(0xffdd),	/* Offset= -35 (112) */
																																																																																				0x2,		/* FC_CHAR */
																																																																																				/* 150 */	0x3f,		/* FC_STRUCTPAD3 */
																																																																																							0x5b,		/* FC_END */
																																																																																				/* 152 */
																																																																																							0x11, 0x0,	/* FC_RP */
																																																																																							/* 154 */	NdrFcShort(0x2),	/* Offset= 2 (156) */
																																																																																							/* 156 */
																																																																																										0x15,		/* FC_STRUCT */
																																																																																										0x7,		/* 7 */
																																																																																										/* 158 */	NdrFcShort(0x10),	/* 16 */
																																																																																										/* 160 */	0xb,		/* FC_HYPER */
																																																																																													0xb,		/* FC_HYPER */
																																																																																													/* 162 */	0x5c,		/* FC_PAD */
																																																																																																0x5b,		/* FC_END */
																																																																																													/* 164 */
																																																																																																0x12, 0x0,	/* FC_UP */
																																																																																																/* 166 */	NdrFcShort(0x28),	/* Offset= 40 (206) */
																																																																																																/* 168 */
																																																																																																			0x1c,		/* FC_CVARRAY */
																																																																																																			0x1,		/* 1 */
																																																																																																			/* 170 */	NdrFcShort(0x2),	/* 2 */
																																																																																																			/* 172 */	0x16,		/* Corr desc:  field pointer, FC_SHORT */
																																																																																																						0x55,		/* FC_DIV_2 */
																																																																																																						/* 174 */	NdrFcShort(0x2),	/* 2 */
																																																																																																						/* 176 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																						/* 178 */	0x0 ,
																																																																																																									0x0,		/* 0 */
																																																																																																									/* 180 */	NdrFcLong(0x0),	/* 0 */
																																																																																																									/* 184 */	NdrFcLong(0x0),	/* 0 */
																																																																																																									/* 188 */	0x16,		/* Corr desc:  field pointer, FC_SHORT */
																																																																																																												0x55,		/* FC_DIV_2 */
																																																																																																												/* 190 */	NdrFcShort(0x0),	/* 0 */
																																																																																																												/* 192 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																												/* 194 */	0x0 ,
																																																																																																															0x0,		/* 0 */
																																																																																																															/* 196 */	NdrFcLong(0x0),	/* 0 */
																																																																																																															/* 200 */	NdrFcLong(0x0),	/* 0 */
																																																																																																															/* 204 */	0x6,		/* FC_SHORT */
																																																																																																																		0x5b,		/* FC_END */
																																																																																																															/* 206 */
																																																																																																																		0x16,		/* FC_PSTRUCT */
																																																																																																																		0x3,		/* 3 */
																																																																																																																		/* 208 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																		/* 210 */
																																																																																																																					0x4b,		/* FC_PP */
																																																																																																																					0x5c,		/* FC_PAD */
																																																																																																																		/* 212 */
																																																																																																																					0x46,		/* FC_NO_REPEAT */
																																																																																																																					0x5c,		/* FC_PAD */
																																																																																																																					/* 214 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																					/* 216 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																					/* 218 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																					/* 220 */	NdrFcShort(0xffcc),	/* Offset= -52 (168) */
																																																																																																																					/* 222 */
																																																																																																																								0x5b,		/* FC_END */

																																																																																																																								0x6,		/* FC_SHORT */
																																																																																																																								/* 224 */	0x6,		/* FC_SHORT */
																																																																																																																											0x8,		/* FC_LONG */
																																																																																																																											/* 226 */	0x5c,		/* FC_PAD */
																																																																																																																														0x5b,		/* FC_END */
																																																																																																																											/* 228 */
																																																																																																																														0x11, 0x0,	/* FC_RP */
																																																																																																																														/* 230 */	NdrFcShort(0xffe8),	/* Offset= -24 (206) */
																																																																																																																														/* 232 */
																																																																																																																																	0x12, 0x0,	/* FC_UP */
																																																																																																																																	/* 234 */	NdrFcShort(0x2),	/* Offset= 2 (236) */
																																																																																																																																	/* 236 */
																																																																																																																																				0x15,		/* FC_STRUCT */
																																																																																																																																				0x3,		/* 3 */
																																																																																																																																				/* 238 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																				/* 240 */	0x8,		/* FC_LONG */
																																																																																																																																							0x8,		/* FC_LONG */
																																																																																																																																							/* 242 */	0x5c,		/* FC_PAD */
																																																																																																																																										0x5b,		/* FC_END */
																																																																																																																																							/* 244 */
																																																																																																																																										0x11, 0x0,	/* FC_RP */
																																																																																																																																										/* 246 */	NdrFcShort(0x2),	/* Offset= 2 (248) */
																																																																																																																																										/* 248 */
																																																																																																																																													0x1a,		/* FC_BOGUS_STRUCT */
																																																																																																																																													0x7,		/* 7 */
																																																																																																																																													/* 250 */	NdrFcShort(0x18),	/* 24 */
																																																																																																																																													/* 252 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																													/* 254 */	NdrFcShort(0x8),	/* Offset= 8 (262) */
																																																																																																																																													/* 256 */	0x8,		/* FC_LONG */
																																																																																																																																																0x40,		/* FC_STRUCTPAD4 */
																																																																																																																																																/* 258 */	0xb,		/* FC_HYPER */
																																																																																																																																																			0x36,		/* FC_POINTER */
																																																																																																																																																			/* 260 */	0x40,		/* FC_STRUCTPAD4 */
																																																																																																																																																						0x5b,		/* FC_END */
																																																																																																																																																			/* 262 */
																																																																																																																																																						0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																						/* 264 */	NdrFcShort(0xff52),	/* Offset= -174 (90) */
																																																																																																																																																						/* 266 */
																																																																																																																																																									0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																									/* 268 */	NdrFcShort(0xff90),	/* Offset= -112 (156) */
																																																																																																																																																									/* 270 */
																																																																																																																																																												0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																												/* 272 */	NdrFcShort(0x2),	/* Offset= 2 (274) */
																																																																																																																																																												/* 274 */
																																																																																																																																																															0x15,		/* FC_STRUCT */
																																																																																																																																																															0x7,		/* 7 */
																																																																																																																																																															/* 276 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																															/* 278 */	0xb,		/* FC_HYPER */
																																																																																																																																																																		0x5b,		/* FC_END */
																																																																																																																																																															/* 280 */
																																																																																																																																																																		0x11, 0x0,	/* FC_RP */
																																																																																																																																																																		/* 282 */	NdrFcShort(0xff6c),	/* Offset= -148 (134) */
																																																																																																																																																																		/* 284 */
																																																																																																																																																																					0x11, 0x8,	/* FC_RP [simple_pointer] */
																																																																																																																																																																					/* 286 */	0x8,		/* FC_LONG */
																																																																																																																																																																								0x5c,		/* FC_PAD */
																																																																																																																																																																					/* 288 */
																																																																																																																																																																								0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																																								/* 290 */	NdrFcShort(0x2),	/* Offset= 2 (292) */
																																																																																																																																																																								/* 292 */
																																																																																																																																																																											0x1b,		/* FC_CARRAY */
																																																																																																																																																																											0x0,		/* 0 */
																																																																																																																																																																											/* 294 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																											/* 296 */	0x40,		/* Corr desc:  constant, val=32 */
																																																																																																																																																																														0x0,		/* 0 */
																																																																																																																																																																														/* 298 */	NdrFcShort(0x20),	/* 32 */
																																																																																																																																																																														/* 300 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																														/* 302 */	0x0 ,
																																																																																																																																																																																	0x0,		/* 0 */
																																																																																																																																																																																	/* 304 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																	/* 308 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																	/* 312 */	0x2,		/* FC_CHAR */
																																																																																																																																																																																				0x5b,		/* FC_END */
																																																																																																																																																																																	/* 314 */
																																																																																																																																																																																				0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																																																																																	/* 316 */
																																																																																																																																																																																				0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																	/* 318 */
																																																																																																																																																																																				0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																				/* 320 */	NdrFcShort(0x2e),	/* Offset= 46 (366) */
																																																																																																																																																																																				/* 322 */
																																																																																																																																																																																							0x1b,		/* FC_CARRAY */
																																																																																																																																																																																							0x3,		/* 3 */
																																																																																																																																																																																							/* 324 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																							/* 326 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
																																																																																																																																																																																										0x0,		/*  */
																																																																																																																																																																																										/* 328 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																										/* 330 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																										/* 332 */	0x0 ,
																																																																																																																																																																																													0x0,		/* 0 */
																																																																																																																																																																																													/* 334 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																													/* 338 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																													/* 342 */
																																																																																																																																																																																																0x4b,		/* FC_PP */
																																																																																																																																																																																																0x5c,		/* FC_PAD */
																																																																																																																																																																																													/* 344 */
																																																																																																																																																																																																0x48,		/* FC_VARIABLE_REPEAT */
																																																																																																																																																																																																0x49,		/* FC_FIXED_OFFSET */
																																																																																																																																																																																																/* 346 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																/* 348 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																/* 350 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																/* 352 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																/* 354 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																/* 356 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																																																																/* 358 */	NdrFcShort(0xfef4),	/* Offset= -268 (90) */
																																																																																																																																																																																																/* 360 */
																																																																																																																																																																																																			0x5b,		/* FC_END */

																																																																																																																																																																																																			0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																			/* 362 */	0x0,		/* 0 */
																																																																																																																																																																																																						NdrFcShort(0xff05),	/* Offset= -251 (112) */
																																																																																																																																																																																																						0x5b,		/* FC_END */
																																																																																																																																																																																																			/* 366 */
																																																																																																																																																																																																						0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																						0x3,		/* 3 */
																																																																																																																																																																																																						/* 368 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																						/* 370 */
																																																																																																																																																																																																									0x4b,		/* FC_PP */
																																																																																																																																																																																																									0x5c,		/* FC_PAD */
																																																																																																																																																																																																						/* 372 */
																																																																																																																																																																																																									0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																									0x5c,		/* FC_PAD */
																																																																																																																																																																																																									/* 374 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																									/* 376 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																									/* 378 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																																																																									/* 380 */	NdrFcShort(0xffc6),	/* Offset= -58 (322) */
																																																																																																																																																																																																									/* 382 */
																																																																																																																																																																																																												0x5b,		/* FC_END */

																																																																																																																																																																																																												0x8,		/* FC_LONG */
																																																																																																																																																																																																												/* 384 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																															0x8,		/* FC_LONG */
																																																																																																																																																																																																															/* 386 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																		0x5b,		/* FC_END */
																																																																																																																																																																																																															/* 388 */
																																																																																																																																																																																																																		0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																		/* 390 */	NdrFcShort(0x1c),	/* Offset= 28 (418) */
																																																																																																																																																																																																																		/* 392 */
																																																																																																																																																																																																																					0x1b,		/* FC_CARRAY */
																																																																																																																																																																																																																					0x3,		/* 3 */
																																																																																																																																																																																																																					/* 394 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																					/* 396 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
																																																																																																																																																																																																																								0x0,		/*  */
																																																																																																																																																																																																																								/* 398 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																								/* 400 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																								/* 402 */	0x0 ,
																																																																																																																																																																																																																											0x0,		/* 0 */
																																																																																																																																																																																																																											/* 404 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																											/* 408 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																											/* 412 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																														0x0,		/* 0 */
																																																																																																																																																																																																																														/* 414 */	NdrFcShort(0xff4e),	/* Offset= -178 (236) */
																																																																																																																																																																																																																														/* 416 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																	0x5b,		/* FC_END */
																																																																																																																																																																																																																														/* 418 */
																																																																																																																																																																																																																																	0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																	0x3,		/* 3 */
																																																																																																																																																																																																																																	/* 420 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																																																	/* 422 */
																																																																																																																																																																																																																																				0x4b,		/* FC_PP */
																																																																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																	/* 424 */
																																																																																																																																																																																																																																				0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																				/* 426 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																				/* 428 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																				/* 430 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																																																																																																				/* 432 */	NdrFcShort(0xffd8),	/* Offset= -40 (392) */
																																																																																																																																																																																																																																				/* 434 */
																																																																																																																																																																																																																																							0x5b,		/* FC_END */

																																																																																																																																																																																																																																							0x8,		/* FC_LONG */
																																																																																																																																																																																																																																							/* 436 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																										0x8,		/* FC_LONG */
																																																																																																																																																																																																																																										/* 438 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																													0x5b,		/* FC_END */
																																																																																																																																																																																																																																										/* 440 */
																																																																																																																																																																																																																																													0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																													/* 442 */	NdrFcShort(0xffb4),	/* Offset= -76 (366) */
																																																																																																																																																																																																																																													/* 444 */
																																																																																																																																																																																																																																																0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																																																																																																																																																																																																																																/* 446 */	NdrFcShort(0x2),	/* Offset= 2 (448) */
																																																																																																																																																																																																																																																/* 448 */
																																																																																																																																																																																																																																																			0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																			/* 450 */	NdrFcShort(0xffe0),	/* Offset= -32 (418) */
																																																																																																																																																																																																																																																			/* 452 */
																																																																																																																																																																																																																																																						0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																																						/* 454 */	NdrFcShort(0xfeaa),	/* Offset= -342 (112) */
																																																																																																																																																																																																																																																						/* 456 */
																																																																																																																																																																																																																																																									0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																																									/* 458 */	NdrFcShort(0x2),	/* Offset= 2 (460) */
																																																																																																																																																																																																																																																									/* 460 */
																																																																																																																																																																																																																																																												0x2b,		/* FC_NON_ENCAPSULATED_UNION */
																																																																																																																																																																																																																																																												0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																												/* 462 */	0x28,		/* Corr desc:  parameter, FC_LONG */
																																																																																																																																																																																																																																																															0x0,		/*  */
																																																																																																																																																																																																																																																															/* 464 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																															/* 466 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																															/* 468 */	0x0 ,
																																																																																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																																																																																		/* 470 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																		/* 474 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																		/* 478 */	NdrFcShort(0x2),	/* Offset= 2 (480) */
																																																																																																																																																																																																																																																																		/* 480 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																		/* 482 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																		/* 484 */	NdrFcLong(0x1),	/* 1 */
																																																																																																																																																																																																																																																																		/* 488 */	NdrFcShort(0x16),	/* Offset= 22 (510) */
																																																																																																																																																																																																																																																																		/* 490 */	NdrFcLong(0x56),	/* 86 */
																																																																																																																																																																																																																																																																		/* 494 */	NdrFcShort(0x28),	/* Offset= 40 (534) */
																																																																																																																																																																																																																																																																		/* 496 */	NdrFcLong(0x57),	/* 87 */
																																																																																																																																																																																																																																																																		/* 500 */	NdrFcShort(0xfef4),	/* Offset= -268 (232) */
																																																																																																																																																																																																																																																																		/* 502 */	NdrFcLong(0x58),	/* 88 */
																																																																																																																																																																																																																																																																		/* 506 */	NdrFcShort(0x34),	/* Offset= 52 (558) */
																																																																																																																																																																																																																																																																		/* 508 */	NdrFcShort(0x0),	/* Offset= 0 (508) */
																																																																																																																																																																																																																																																																		/* 510 */
																																																																																																																																																																																																																																																																					0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																					/* 512 */	NdrFcShort(0x2),	/* Offset= 2 (514) */
																																																																																																																																																																																																																																																																					/* 514 */
																																																																																																																																																																																																																																																																								0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																								0x3,		/* 3 */
																																																																																																																																																																																																																																																																								/* 516 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																								/* 518 */
																																																																																																																																																																																																																																																																											0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																											0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																								/* 520 */
																																																																																																																																																																																																																																																																											0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																											0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																											/* 522 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																											/* 524 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																											/* 526 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																																																																																																																																																																											/* 528 */
																																																																																																																																																																																																																																																																														0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																														0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																											/* 530 */
																																																																																																																																																																																																																																																																														0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																														0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																														/* 532 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																	0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																														/* 534 */
																																																																																																																																																																																																																																																																																	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																	/* 536 */	NdrFcShort(0x2),	/* Offset= 2 (538) */
																																																																																																																																																																																																																																																																																	/* 538 */
																																																																																																																																																																																																																																																																																				0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																				0x3,		/* 3 */
																																																																																																																																																																																																																																																																																				/* 540 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																				/* 542 */
																																																																																																																																																																																																																																																																																							0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																							0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																				/* 544 */
																																																																																																																																																																																																																																																																																							0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																							0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																							/* 546 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																							/* 548 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																							/* 550 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																																																																																																																																																																																							/* 552 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																										0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																							/* 554 */
																																																																																																																																																																																																																																																																																										0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																										0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																										/* 556 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																													0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																										/* 558 */
																																																																																																																																																																																																																																																																																													0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																													/* 560 */	NdrFcShort(0x2),	/* Offset= 2 (562) */
																																																																																																																																																																																																																																																																																													/* 562 */
																																																																																																																																																																																																																																																																																																0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																/* 564 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																/* 566 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																			0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																/* 568 */
																																																																																																																																																																																																																																																																																																			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																																																																																			/* 570 */	NdrFcShort(0x2),	/* Offset= 2 (572) */
																																																																																																																																																																																																																																																																																																			/* 572 */
																																																																																																																																																																																																																																																																																																						0x2b,		/* FC_NON_ENCAPSULATED_UNION */
																																																																																																																																																																																																																																																																																																						0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																						/* 574 */	0x28,		/* Corr desc:  parameter, FC_LONG */
																																																																																																																																																																																																																																																																																																									0x0,		/*  */
																																																																																																																																																																																																																																																																																																									/* 576 */	NdrFcShort(0xc),	/* x86 Stack size/offset = 12 */
																																																																																																																																																																																																																																																																																																									/* 578 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																																																																									/* 580 */	0x0 ,
																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																												/* 582 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																												/* 586 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																												/* 590 */	NdrFcShort(0x2),	/* Offset= 2 (592) */
																																																																																																																																																																																																																																																																																																												/* 592 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																												/* 594 */	NdrFcShort(0x2),	/* 2 */
																																																																																																																																																																																																																																																																																																												/* 596 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																												/* 600 */	NdrFcShort(0xa),	/* Offset= 10 (610) */
																																																																																																																																																																																																																																																																																																												/* 602 */	NdrFcLong(0xc),	/* 12 */
																																																																																																																																																																																																																																																																																																												/* 606 */	NdrFcShort(0x12),	/* Offset= 18 (624) */
																																																																																																																																																																																																																																																																																																												/* 608 */	NdrFcShort(0x0),	/* Offset= 0 (608) */
																																																																																																																																																																																																																																																																																																												/* 610 */
																																																																																																																																																																																																																																																																																																															0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																															/* 612 */	NdrFcShort(0x2),	/* Offset= 2 (614) */
																																																																																																																																																																																																																																																																																																															/* 614 */
																																																																																																																																																																																																																																																																																																																		0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																																		0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																		/* 616 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																																		/* 618 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																					0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																					/* 620 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																								0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																								/* 622 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																											0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																								/* 624 */
																																																																																																																																																																																																																																																																																																																											0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																											/* 626 */	NdrFcShort(0x24),	/* Offset= 36 (662) */
																																																																																																																																																																																																																																																																																																																											/* 628 */
																																																																																																																																																																																																																																																																																																																														0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																																																														0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																														/* 630 */	NdrFcShort(0x14),	/* 20 */
																																																																																																																																																																																																																																																																																																																														/* 632 */
																																																																																																																																																																																																																																																																																																																																	0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																														/* 634 */
																																																																																																																																																																																																																																																																																																																																	0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																	/* 636 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																																																																																																																																																	/* 638 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																																																																																																																																																	/* 640 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																																																																																																																																																																																																																																	/* 642 */
																																																																																																																																																																																																																																																																																																																																				0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																	/* 644 */
																																																																																																																																																																																																																																																																																																																																				0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																				/* 646 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																																																				/* 648 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																																																				/* 650 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																																																																																																																																																																																																																																				/* 652 */
																																																																																																																																																																																																																																																																																																																																							0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																							0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																				/* 654 */
																																																																																																																																																																																																																																																																																																																																							0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																							0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																							/* 656 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																										0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																										/* 658 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																													0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																													/* 660 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																													/* 662 */
																																																																																																																																																																																																																																																																																																																																																0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																																																																																0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																/* 664 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																/* 666 */
																																																																																																																																																																																																																																																																																																																																																			0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																																			0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																/* 668 */
																																																																																																																																																																																																																																																																																																																																																			0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																																			0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																			/* 670 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																			/* 672 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																			/* 674 */	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																			/* 676 */	NdrFcShort(0xffd0),	/* Offset= -48 (628) */
																																																																																																																																																																																																																																																																																																																																																			/* 678 */
																																																																																																																																																																																																																																																																																																																																																						0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																																						0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																						/* 680 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																									0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																						/* 682 */
																																																																																																																																																																																																																																																																																																																																																									0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																																																																																																																																																									/* 684 */	NdrFcShort(0x30),	/* Offset= 48 (732) */
																																																																																																																																																																																																																																																																																																																																																									/* 686 */
																																																																																																																																																																																																																																																																																																																																																												0x1d,		/* FC_SMFARRAY */
																																																																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																												/* 688 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																												/* 690 */	0x1,		/* FC_BYTE */
																																																																																																																																																																																																																																																																																																																																																															0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																												/* 692 */
																																																																																																																																																																																																																																																																																																																																																															0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																																																																															0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																															/* 694 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																																																																															/* 696 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																		0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																		/* 698 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																					0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																					/* 700 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																								NdrFcShort(0xfff1),	/* Offset= -15 (686) */
																																																																																																																																																																																																																																																																																																																																																																								0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																								/* 704 */	0xb6,		/* FC_SUPPLEMENT */

																																																																																																																																																																																																																																																																																																																																																																											0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																																																											/* 706 */	NdrFcShort(0xa),	/* Offset= 10 (716) */
																																																																																																																																																																																																																																																																																																																																																																											/* 708 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																											/* 712 */	NdrFcLong(0xffff),	/* 65535 */
																																																																																																																																																																																																																																																																																																																																																																											/* 716 */
																																																																																																																																																																																																																																																																																																																																																																														0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																																																														0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																														/* 718 */	0xb6,		/* FC_SUPPLEMENT */

																																																																																																																																																																																																																																																																																																																																																																																	0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																																																																	/* 720 */	NdrFcShort(0xa),	/* Offset= 10 (730) */
																																																																																																																																																																																																																																																																																																																																																																																	/* 722 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																	/* 726 */	NdrFcLong(0xffff),	/* 65535 */
																																																																																																																																																																																																																																																																																																																																																																																	/* 730 */
																																																																																																																																																																																																																																																																																																																																																																																				0x25,		/* FC_C_WSTRING */
																																																																																																																																																																																																																																																																																																																																																																																				0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																	/* 732 */
																																																																																																																																																																																																																																																																																																																																																																																				0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																																																																																																																				0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																				/* 734 */	NdrFcShort(0x30),	/* 48 */
																																																																																																																																																																																																																																																																																																																																																																																				/* 736 */
																																																																																																																																																																																																																																																																																																																																																																																							0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																																																																							0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																				/* 738 */
																																																																																																																																																																																																																																																																																																																																																																																							0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																																																																							0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																							/* 740 */	NdrFcShort(0x28),	/* 40 */
																																																																																																																																																																																																																																																																																																																																																																																							/* 742 */	NdrFcShort(0x28),	/* 40 */
																																																																																																																																																																																																																																																																																																																																																																																							/* 744 */	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																																																							/* 746 */	NdrFcShort(0xffd6),	/* Offset= -42 (704) */
																																																																																																																																																																																																																																																																																																																																																																																							/* 748 */
																																																																																																																																																																																																																																																																																																																																																																																										0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																																																																										0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																										/* 750 */	NdrFcShort(0x2c),	/* 44 */
																																																																																																																																																																																																																																																																																																																																																																																										/* 752 */	NdrFcShort(0x2c),	/* 44 */
																																																																																																																																																																																																																																																																																																																																																																																										/* 754 */	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																																																										/* 756 */	NdrFcShort(0xffda),	/* Offset= -38 (718) */
																																																																																																																																																																																																																																																																																																																																																																																										/* 758 */
																																																																																																																																																																																																																																																																																																																																																																																													0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																																																																													0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																													/* 760 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																/* 762 */	NdrFcShort(0xffba),	/* Offset= -70 (692) */
																																																																																																																																																																																																																																																																																																																																																																																																/* 764 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																			0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																			/* 766 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																						0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																						/* 768 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																									0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																									/* 770 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																												0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																									/* 772 */
																																																																																																																																																																																																																																																																																																																																																																																																												0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																																																																																																																																																																																																												/* 774 */	NdrFcShort(0x28),	/* Offset= 40 (814) */
																																																																																																																																																																																																																																																																																																																																																																																																												/* 776 */
																																																																																																																																																																																																																																																																																																																																																																																																															0x1c,		/* FC_CVARRAY */
																																																																																																																																																																																																																																																																																																																																																																																																															0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																															/* 778 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																																																																																																																															/* 780 */	0x16,		/* Corr desc:  field pointer, FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																																																																		0x0,		/*  */
																																																																																																																																																																																																																																																																																																																																																																																																																		/* 782 */	NdrFcShort(0x2),	/* 2 */
																																																																																																																																																																																																																																																																																																																																																																																																																		/* 784 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																																																																																																																																																																																		/* 786 */	0x0 ,
																																																																																																																																																																																																																																																																																																																																																																																																																					0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																					/* 788 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																					/* 792 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																					/* 796 */	0x16,		/* Corr desc:  field pointer, FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																																																																								0x0,		/*  */
																																																																																																																																																																																																																																																																																																																																																																																																																								/* 798 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																								/* 800 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																																																																																																																																																																																								/* 802 */	0x0 ,
																																																																																																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																											/* 804 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																											/* 808 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																											/* 812 */	0x2,		/* FC_CHAR */
																																																																																																																																																																																																																																																																																																																																																																																																																														0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																											/* 814 */
																																																																																																																																																																																																																																																																																																																																																																																																																														0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																														0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																														/* 816 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																														/* 818 */
																																																																																																																																																																																																																																																																																																																																																																																																																																	0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																																																																																																																	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																														/* 820 */
																																																																																																																																																																																																																																																																																																																																																																																																																																	0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																																																																																																																	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 822 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 824 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 826 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 828 */	NdrFcShort(0xffcc),	/* Offset= -52 (776) */
																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 830 */
																																																																																																																																																																																																																																																																																																																																																																																																																																				0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																																																																																																																				0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																																																																																				/* 832 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																																																																																							0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 834 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																										0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 836 */
																																																																																																																																																																																																																																																																																																																																																																																																																																										0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 838 */	NdrFcShort(0x8),	/* Offset= 8 (846) */
																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 840 */
																																																																																																																																																																																																																																																																																																																																																																																																																																													0x1d,		/* FC_SMFARRAY */
																																																																																																																																																																																																																																																																																																																																																																																																																																													0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 842 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 844 */	0x2,		/* FC_CHAR */
																																																																																																																																																																																																																																																																																																																																																																																																																																																0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 846 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																/* 848 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																/* 850 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																			0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																			/* 852 */	NdrFcShort(0xfff4),	/* Offset= -12 (840) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																			/* 854 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																						0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 856 */	NdrFcShort(0xfd94),	/* Offset= -620 (236) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 858 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																									0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 860 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																									0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																									/* 862 */	NdrFcShort(0x64),	/* Offset= 100 (962) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																									/* 864 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																												0x1d,		/* FC_SMFARRAY */
																																																																																																																																																																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 866 */	NdrFcShort(0x6),	/* 6 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 868 */	0x2,		/* FC_CHAR */
																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 870 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 872 */	NdrFcShort(0x6),	/* 6 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																		/* 876 */	NdrFcShort(0xfff4),	/* Offset= -12 (864) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																		/* 878 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																					0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																		/* 880 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																					0x1b,		/* FC_CARRAY */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																					0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																					/* 882 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																					/* 884 */	0x4,		/* Corr desc: FC_USMALL */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																								0x0,		/*  */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																								/* 886 */	NdrFcShort(0xfff9),	/* -7 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																								/* 888 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																								/* 890 */	0x0 ,
																																																																																																																																																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 892 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 896 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 900 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 902 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														0x17,		/* FC_CSTRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														/* 904 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														/* 906 */	NdrFcShort(0xffe6),	/* Offset= -26 (880) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																														/* 908 */	0x2,		/* FC_CHAR */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	0x2,		/* FC_CHAR */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 910 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				/* 912 */	NdrFcShort(0xffd6),	/* Offset= -42 (870) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				/* 914 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				/* 916 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							0x16,		/* FC_PSTRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 918 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 920 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 922 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x46,		/* FC_NO_REPEAT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 924 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 926 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 928 */	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 930 */	NdrFcShort(0xffe4),	/* Offset= -28 (902) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 932 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 934 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 936 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																0x1b,		/* FC_CARRAY */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																/* 938 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																/* 940 */	0x8,		/* Corr desc: FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			0x0,		/*  */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			/* 942 */	NdrFcShort(0xfffc),	/* -4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			/* 944 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			/* 946 */	0x0 ,
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 948 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 952 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						/* 956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									/* 958 */	NdrFcShort(0xffd6),	/* Offset= -42 (916) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									/* 960 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									/* 962 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												0x18,		/* FC_CPSTRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 964 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 966 */	NdrFcShort(0xffe2),	/* Offset= -30 (936) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 968 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x4b,		/* FC_PP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																												/* 970 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x48,		/* FC_VARIABLE_REPEAT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															0x49,		/* FC_FIXED_OFFSET */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 972 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 974 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 976 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 978 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 980 */	NdrFcShort(0x4),	/* 4 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 982 */	0x12, 0x0,	/* FC_UP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 984 */	NdrFcShort(0xffae),	/* Offset= -82 (902) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															/* 986 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		0x5b,		/* FC_END */

																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		/* 988 */	0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		/* 990 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					/* 992 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																								0x5c,		/* FC_PAD */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					/* 994 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																								0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																								/* 996 */	NdrFcShort(0xfd08),	/* Offset= -760 (236) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																								/* 998 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																											0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 1000 */	NdrFcShort(0x2),	/* Offset= 2 (1002) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																											/* 1002 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														0x15,		/* FC_STRUCT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														0x7,		/* 7 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														/* 1004 */	NdrFcShort(0x30),	/* 48 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														/* 1006 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	/* 1008 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																				/* 1010 */	0xb,		/* FC_HYPER */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 1012 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										NdrFcShort(0xfd1d),	/* Offset= -739 (274) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x5b,		/* FC_END */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																							/* 1016 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										0x11, 0x0,	/* FC_RP */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 1018 */	NdrFcShort(0xff8c),	/* Offset= -116 (902) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										/* 1020 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 1022 */	NdrFcShort(0xfcd0),	/* Offset= -816 (206) */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													/* 1024 */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																/* 1026 */	0x6,		/* FC_SHORT */
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			0x5c,		/* FC_PAD */

																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																			0x0
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		}
};

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
{
0,
60,
102,
144,
216,
336,
396,
558,
618,
684,
750,
810,
870,
1002,
1074,
1140
};


static const MIDL_STUB_DESC DefaultIfName_StubDesc =
{
(void*)&DefaultIfName___RpcClientInterface,
MIDL_user_allocate,
MIDL_user_free,
&default_IfHandle,//&DefaultIfName__MIDL_AutoBindHandle,
0,
0,
0,
0,
lsass__MIDL_TypeFormatString.Format,
1, /* -error bounds_check flag */
0x60001, /* Ndr library version */
0,
0x8010272, /* MIDL Version 8.1.626 */
0,
0,
0,  /* notify & notify_flag routine table */
0x1, /* MIDL flag */
0, /* cs routines */
0,   /* proxy/server info */
0
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

