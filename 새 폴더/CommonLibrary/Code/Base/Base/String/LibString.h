#pragma once
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Tchar	== TCHAR
// _Tchar() == _T()
// TString
// To_TString
// TCout
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#ifndef DECLARE_COMMONLIBRARY_BASE_STRING_H
#define DECLARE_COMMONLIBRARY_BASE_STRING_H
////////////////////////////////////////////////////////////////////////////////
#include <string>
#ifdef _UNICODE
using TChar = wchar_t;
#define _TChar(text) L##text
#else
using TChar = char;
#define _TChar(text) text
#endif // _UNICODE
using TString = std::basic_string<TChar, std::char_traits<TChar>, std::allocator<TChar>>;
////////////////////////////////////////////////////////////////////////////////
// String related functions.
#include <iostream>
using TOstream = std::basic_istream<TChar, std::char_traits<TChar>>;
using TIstream = std::basic_ostream<TChar, std::char_traits<TChar>>;

#ifdef _UNICODE
#define To_TString(value) std::to_wstring(value)
#define TCout std::wcout
#else
#define TCout std::cout
#define To_TString(value) std::to_string(value)
#endif


////////////////////////////////////////////////////////////////////////////////
#endif // !DECLARE_COMMONLIBRARY_BASE_STRING_H

