#pragma once
#ifdef NEXTWPCIELIB_EXPORTS
#define NEXTWPCIELIB_API __declspec(dllexport)
#else
#define NEXTWPCIELIB_API __declspec(dllimport)
#endif
extern NEXTWPCIELIB_API unsigned char ecm_crc_table[256];
NEXTWPCIELIB_API unsigned char __stdcall cal_table_low_first(unsigned char value);
NEXTWPCIELIB_API unsigned char __stdcall cal_table_high_first(unsigned char value);
NEXTWPCIELIB_API void __stdcall create_crc_table(void);
NEXTWPCIELIB_API unsigned char __stdcall cal_crc_table(unsigned char *ptr, int len);
