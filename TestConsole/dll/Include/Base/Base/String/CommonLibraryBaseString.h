#pragma once
#ifndef DECLARE_COMMONLIBRARY_BASE_STRING_H
#include <string>
#include <iostream>
#ifdef _UNICODE
using TChar = wchar_t;
#define _TChar(text) L##text
#else
using TChar = char;
#define _TChar(text) text
#endif // _UNICODE
using TString = std::basic_string<TChar, std::char_traits<TChar>, std::allocator<TChar>>;
// String related functions.
#ifdef _UNICODE
#define To_TString(value) std::to_wstring(value)
#define TCout std::wcout
#else
#define To_TString(value) std::to_string(value)
#define TCout std::cout
#endif


#endif // !DECLARE_COMMONLIBRARY_BASE_STRING_H
