extern "C" {
	__declspec(dllimport) bool __stdcall OpenECMUSB();
	__declspec(dllimport) void __stdcall CloseECMUSB();
	__declspec(dllimport) bool __stdcall ECMUSBWrite(unsigned char * data, unsigned long dwlength);
	__declspec(dllimport) bool __stdcall ECMUSBRead(unsigned char * data, unsigned long dwlength);
}
#pragma region Define
#define DEF_MA_MAX 42
#define NIC_INIT  0
#define STATE_INIT 1
#define STATE_PRE_OP 2
#define STATE_SAFE_OP 4
#define STATE_OPERATIONAL 8

#define GET_STATUS 0x00
#define SET_STATE 0x01
#define SET_AXIS 0x02
#define SET_DC 0x03
#define SET_EX 0x04
#define SET_FIFO 0x05
#define DRIVE_MODE 0x06
#define SDO_RD 0x07
#define SDO_WR 0x08

#define ALM_CLR 0x10
#define SV_ON 0x11
#define SV_OFF 0x12
#define IO_RD 0x13
#define IO_WR 0x14
#define CSP 0x15
#define CSV 0x16
#define CST 0x17
#define GO_HOME 0x18
#define ABORT_HOME 0x19
#define LIO_RD 0x21
#define LIO_WR 0x22
#define SW_RESET 0xBB

#define HOMING_MODE 6
#define CSP_MODE 8
#define CSV_MODE 9
#define CST_MODE 10

#define FREERUN 0x00
#define DCSYNC 0x01

#define DRIVE 0x0
#define IO 0x1
#define HSP 0x2
#define STEP 0x3
#define None 0xF
#pragma endregion

typedef struct {
	unsigned short CMD;
	unsigned short Parm;
	unsigned int Data1;
	unsigned int Data2;
}transData;