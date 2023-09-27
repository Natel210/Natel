#pragma once
#ifndef DECLARE_COMMONLIBRARY_BASE_DEFINE_H
#define DECLARE_COMMONLIBRARY_BASE_DEFINE_H
////////////////////////////////////////////////////////////////////////////////
// Import & Export
#ifdef _CommonLibrary
#define CommonDLL //__declspec(dllexport)
#else
#define CommonDLL //__declspec(dllimport)
#endif // _CommonLibrary
////////////////////////////////////////////////////////////////////////////////

#define CommonSpace namespace common {
#define SpaceEnd }

#endif // !DECLARE_COMMONLIBRARY_BASE_DEFINE_H