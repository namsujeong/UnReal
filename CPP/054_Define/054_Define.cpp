// 054_Define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// iostream standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog;
__PURE_APPDOMAIN_GLOBAL extern istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wclog;
#else // _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT istream cin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream clog;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wclog;

class _CRTIMP2_PURE_IMPORT _Winit {
public:
    __thiscall _Winit();
    __thiscall ~_Winit() noexcept;

private:
    __PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
};
#endif // _M_CEE_PURE
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // _STL_COMPILER_PREPROCESSOR
#endif // _IOSTREAM_

// 맨앞에 #을 사용하는 것은 전부다 전처리문입니다.
// 컴파일(빌드) 과정에서 
// 전처리기 => 컴파일러 => 어셈블러 => 링커
//             아래쪽은  알아서 처리되고 우리가 이해하기가 어렵다
// 전처리기는 우리가 일반적으로 이해하기 쉽습니다.
// 전처리기가 하는 일은
// 심플하게 삭제와 치환밖에 없기 때문입니다.

// 삭제 => 주석을 삭제한다.
// 치환 => 뭔가를 바꾼다.
//      ex) #include 파일 복붙

//      이름   코드
#define MYTEST 1000

#define PRINTS printf_s("그냥 치환합니다.");

int main()
{
    

    bool A = 0b00000001;
    // 0b0000000000000001
    // 내가 원하는 만큼

    __int64 aaaa = 0b0000000000000000000000000000000000000000000000000000000000000000;
    __int64 aaaa1 = 0b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001;

    aaaa1 = 0xffffffff;
    aaaa1 = 0xffffffffffffffff;
    // 내가 원하는대로 넣얼수 있습니다.
    aaaa1 = 0xffffffffffffffff;

    int Result = MYTEST;
    // 완전 치환입니다.
    // int Result = 1000;

    PRINTS
    //printf_s("그냥 치환합니다.");
    
}
