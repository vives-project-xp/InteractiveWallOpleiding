#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct String_t;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C const RuntimeType* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t42F165DEA2597BD5AB2C914FCF80349ECF878162 
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B  : public RuntimeObject
{
};
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	int32_t ___value__;
};
struct UriKind_t6597BD6BF48C695D63244DF8541B5EA48FF7F9E7 
{
	int32_t ___value__;
};
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	uint64_t ___value__;
};
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout;
	String_t* ___pattern;
	int32_t ___roptions;
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist;
	int32_t ___capsize;
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref;
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref;
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code;
	bool ____refsInitialized;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	String_t* ___m_String;
	String_t* ___m_originalUnicodeString;
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax;
	String_t* ___m_DnsSafeHost;
	uint64_t ___m_Flags;
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info;
	bool ___m_iriParsing;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal;
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ucHexChars;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lcHexChars;
	uint8_t ___urlEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlForbidden;
	uint8_t ___qpEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpForbidden;
};
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___domainRegex;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	int32_t ___s_cacheSize;
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache;
	int32_t ___s_cacheCount;
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst;
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	String_t* ___UriSchemeFile;
	String_t* ___UriSchemeFtp;
	String_t* ___UriSchemeGopher;
	String_t* ___UriSchemeHttp;
	String_t* ___UriSchemeHttps;
	String_t* ___UriSchemeWs;
	String_t* ___UriSchemeWss;
	String_t* ___UriSchemeMailto;
	String_t* ___UriSchemeNews;
	String_t* ___UriSchemeNntp;
	String_t* ___UriSchemeNetTcp;
	String_t* ___UriSchemeNetPipe;
	String_t* ___SchemeDelimiter;
	bool ___s_ConfigInitialized;
	bool ___s_ConfigInitializing;
	int32_t ___s_IdnScope;
	bool ___s_IriParsing;
	bool ___useDotNetRelativeOrAbsolute;
	bool ___IsWindowsFileSystem;
	RuntimeObject* ___s_initLock;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, int32_t ___1_uriKind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_baseUri, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_relativeUri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Decode_mC6D44C210514FA70566D4FA99DFB5BC5C68EF93B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB8743EA810807A762C09F76B0077DBBB4CD034A7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_comperand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m54AA532B2F56D4EEBF2FE72966F7CA3AC3585C88 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m7164BC27C48FD57AB777128DD271E56B9EF25DC4 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLDecode_m8A1C62B69B7B77C9FD63A97F730F87239112C704 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m63855E63B6B6EAFD4BCE65395BB744AAF5BD6AB4 (String_t* ___0_baseUri, String_t* ___1_redirectUri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___1_redirectUri;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, 0, NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___1_redirectUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_4, L_3, 2, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___1_redirectUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_6, L_5, 0, NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF(L_7, NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_10, NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___0_baseUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_13, L_12, 1, NULL);
		V_1 = L_13;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F(L_16, L_14, L_15, NULL);
		V_2 = L_16;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_17, NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m31ADEB75E00368144C8F223647D81A3B5ADD3D69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, NULL);
		((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__cctor_m272C4A10B85A1DEC11809F9EEADD0B2DE9166B5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf), (void*)L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_4, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_6, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote), (void*)L_9);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_10, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_12, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand), (void*)L_13);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_14, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal), (void*)L_15);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m54AA532B2F56D4EEBF2FE72966F7CA3AC3585C88 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_offset, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___1_offset;
		V_1 = L_0;
		goto IL_0082;
	}

IL_0007:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)16))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_b;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)48)));
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)75)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B9_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B9_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)55)));
		goto IL_0065;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_2;
		G_B14_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 0;
	}

IL_005a:
	{
		V_5 = (bool)G_B14_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)87)));
	}

IL_0065:
	{
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		V_7 = (uint8_t)((int32_t)63);
		goto IL_0096;
	}

IL_0077:
	{
		uint8_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, ((int32_t)(uint8_t)L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0082:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___1_offset;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_add(L_24, 2))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0007;
		}
	}
	{
		uint8_t L_26 = V_0;
		V_7 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		uint8_t L_27 = V_7;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLDecode_m8A1C62B69B7B77C9FD63A97F730F87239112C704 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_toEncode;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = WWWTranscoder_Decode_mC6D44C210514FA70566D4FA99DFB5BC5C68EF93B(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mB8743EA810807A762C09F76B0077DBBB4CD034A7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_comperand, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		NullCheck(L_0);
		int32_t L_1 = ___1_index;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_comperand;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		int32_t L_5 = ___1_index;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_comperand;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_002c:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0030:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_comperand;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Decode_mC6D44C210514FA70566D4FA99DFB5BC5C68EF93B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		NullCheck(L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0091;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0091:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_1 = 0;
				goto IL_0071_1;
			}

IL_000f_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
				int32_t L_5 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_space;
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = WWWTranscoder_ByteSubArrayEquals_mB8743EA810807A762C09F76B0077DBBB4CD034A7(L_4, L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0031_1;
				}
			}
			{
				int32_t L_9 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_space;
				NullCheck(L_10);
				V_1 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1))));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				NullCheck(L_11);
				VirtualActionInvoker1< uint8_t >::Invoke(36, L_11, (uint8_t)((int32_t)32));
				goto IL_006c_1;
			}

IL_0031_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
				int32_t L_13 = V_1;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				uint8_t L_16 = ___1_escapeChar;
				if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
				{
					goto IL_0041_1;
				}
			}
			{
				int32_t L_17 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_input;
				NullCheck(L_18);
				G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, 2))) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
				goto IL_0042_1;
			}

IL_0041_1:
			{
				G_B7_0 = 0;
			}

IL_0042_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_19 = V_3;
				if (!L_19)
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_20 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_input;
				int32_t L_23 = V_1;
				int32_t L_24 = L_23;
				V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				uint8_t L_25;
				L_25 = WWWTranscoder_Hex2Byte_m54AA532B2F56D4EEBF2FE72966F7CA3AC3585C88(L_22, L_24, NULL);
				NullCheck(L_21);
				VirtualActionInvoker1< uint8_t >::Invoke(36, L_21, L_25);
				goto IL_006c_1;
			}

IL_0060_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_input;
				int32_t L_28 = V_1;
				NullCheck(L_27);
				int32_t L_29 = L_28;
				uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
				NullCheck(L_26);
				VirtualActionInvoker1< uint8_t >::Invoke(36, L_26, L_30);
			}

IL_006c_1:
			{
				int32_t L_31 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_0071_1:
			{
				int32_t L_32 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_input;
				NullCheck(L_33);
				V_4 = (bool)((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))? 1 : 0);
				bool L_34 = V_4;
				if (L_34)
				{
					goto IL_000f_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_0;
				NullCheck(L_35);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
				L_36 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40, L_35);
				V_5 = L_36;
				goto IL_0092;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_5;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m105AD5C901F1A72DCDD5956E3FDDE83B65AB0152 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars), (void*)L_3);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar = (uint8_t)((int32_t)37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden), (void*)L_9);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar = (uint8_t)((int32_t)61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden), (void*)L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m81E194684391CA512FFC7C3A9172B56D6A1E2752 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_certificateData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m73467B32D9B40F6897951F71F80CDDA92F5FD785 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_certificateData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_certificateData;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DownloadHandler_ReceiveData_mF892EB77524A60DF1F82A2DA00F17BECB480CD93 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_dataLength, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLengthHeader_m545073C4FB5AB9BB6640D24FC2F32070E5FE3F17 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, uint64_t ___0_contentLength, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_contentLength;
		VirtualActionInvoker1< int32_t >::Invoke(6, __this, ((int32_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLength_m058DE0B56C3EBE8ECE3F9570852024EE2A84DE4F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, int32_t ___0_contentLength, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_CompleteContent_m0FFC337906FF9BF8BDD546906D48DA57F52F81CA (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DownloadHandler_GetProgress_mB440AC38C72F2E14DD53259E1D0C9D7612F0791F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		float L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
}






IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_UriException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F____m_Uri_FieldInfo_var, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_UriException, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB (String_t* ___0_s, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_s;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2;
		L_2 = UnityWebRequest_UnEscapeURL_m7164BC27C48FD57AB777128DD271E56B9EF25DC4(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m7164BC27C48FD57AB777128DD271E56B9EF25DC4 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = ___0_s;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = (String_t*)NULL;
		goto IL_0049;
	}

IL_000d:
	{
		String_t* L_2 = ___0_s;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)37), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___0_s;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)43), NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_4 = (bool)G_B5_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = ___0_s;
		V_3 = L_7;
		goto IL_0049;
	}

IL_0030:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8 = ___1_e;
		String_t* L_9 = ___0_s;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_8, L_9);
		V_0 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = WWWTranscoder_URLDecode_m8A1C62B69B7B77C9FD63A97F730F87239112C704(L_11, NULL);
		V_1 = L_12;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13 = ___1_e;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34, L_13, L_14);
		V_3 = L_15;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_16 = V_3;
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
