#include <windows.h>
#include "DevIoctl.h"

#ifdef NEXTWPCIELIB_EXPORTS
#define NEXTWPCIELIB_API __declspec(dllexport)
#else
#define NEXTWPCIELIB_API __declspec(dllimport)
#endif
NEXTWPCIELIB_API int __stdcall OpenECMPCIe();
NEXTWPCIELIB_API void __stdcall CloseECMPCIe();
NEXTWPCIELIB_API int __stdcall ECMPCIeWriteRead(unsigned char *txData, unsigned char *rxData);
