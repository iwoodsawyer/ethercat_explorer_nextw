#ifndef DEV_IOCTL_H
#define DEV_IOCTL_H

#include <Winioctl.h>
#include <atlbase.h>

typedef enum {COM, LPT} PortMode;

#define IDS_SER_DEVICEMAP "Hardware\\DeviceMap\\Serialcomm"
#define IDS_PAR_DEVICEMAP "Hardware\\DeviceMap\\PARALLEL PORTS"

#define IOCTL_INDEX 0x0800

#define PatternModeFlashNumber 6

#define Bar0RegNumber 19
#define Bar1RegNumber 15

//BAR 0
#define SPICMR		0x00
#define SPICSS		0x01
#define SPIBRR		0x04
#define SPIDS		0X05
#define SPIDT		0x06
#define SDAOF		0x07
#define STOF0		0x08
#define STOF1		0x09
#define STOF2		0x0A
#define STOF3		0x0B
#define STOF4		0x0C
#define STOF5		0x0D
#define STOF6		0x0E
#define STOF7		0x0F
#define SDFL0		0x10
#define SDFL1		0x11
#define SPISSOL		0x12
#define SDCR		0x13
#define SPIMISR		0x14

#define RESET		0x238
//SPICMR
#define SSP			0x01
#define CPHA		0x02
#define CPOL		0x04
#define LSB			0x08
#define SPIMEN		0x10
#define ASS			0x20
#define SWE			0x40
#define SSOE		0x80

//SPICSS
#define SPICSSbit	0x03
#define DIVEN		0x04

//SDCR

//SPICMR
#define ETDMA		0x01
#define ERDMA		0x02
#define OPCFE		0x04
#define DMA_GO		0x08
#define FBT			0x10
#define CSS			0x20
#define STCIE		0x40
#define STERRIE		0x80

//SPISSOL
#define SS			0x07
#define EDE			0x08	

// IOCTL to Write into the serial port Register
#define IOCTL_SPI_SET_REGISTER		\
			  CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 10,\
			  METHOD_BUFFERED, FILE_ANY_ACCESS)

// IOCTL to Read from the serial port Register
#define IOCTL_SPI_GET_REGISTER		\
			  CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 11,\
			  METHOD_BUFFERED, FILE_ANY_ACCESS)


// IOCTL to Write into the memory mapped Register
#define IOCTL_SPI_SET_MMAP_REG                                                                             \
                          CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 15, \
                          METHOD_BUFFERED, FILE_ANY_ACCESS)

// IOCTL to Read from the memory mapped Register
#define IOCTL_SPI_GET_MMAP_REG                                                                            \
                          CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 16,   \
                          METHOD_BUFFERED,FILE_ANY_ACCESS)


#define IOCTL_SPI_TXDMA_WRITE                                   \
				CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 21,   \
				METHOD_BUFFERED,FILE_ANY_ACCESS)	

#define IOCTL_SPI_RXDMA_READ                                   \
				CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 22,   \
				METHOD_BUFFERED,FILE_ANY_ACCESS)				

#define IOCTL_GET_SPI_DMA_INFO                                   \
				CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 23,   \
				METHOD_BUFFERED,FILE_ANY_ACCESS)		

#define IOCTL_SPI_SET_TXDMA_REG	                                   \
				CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 26,   \
				METHOD_BUFFERED,FILE_ANY_ACCESS)             

#define IOCTL_SPI_SET_RXDMA_REG                                  	\
				CTL_CODE(FILE_DEVICE_UNKNOWN, IOCTL_INDEX + 27,   \
				METHOD_BUFFERED,FILE_ANY_ACCESS)





#define		FILE_DEVICE_COMM_DRIVER		 0x00008810


#define		IO_REFERENCE_EVENT		    (ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x800+28, METHOD_NEITHER, FILE_ANY_ACCESS)
#define		IO_DEREFERENCE_EVENT	    (ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x800+29, METHOD_NEITHER, FILE_ANY_ACCESS)

//#define		IO_SET_EVENT				(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x800+28, METHOD_NEITHER, FILE_ANY_ACCESS)
#define		IO_CLEAR_EVENT				(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x800+30, METHOD_NEITHER, FILE_ANY_ACCESS)
//#define		IO_QUERY_EVENT_STATE		(ULONG) CTL_CODE(FILE_DEVICE_COMM_DRIVER, 0x800+30, METHOD_NEITHER, FILE_ANY_ACCESS)


typedef enum _MMAP_BAR
{
   BAR1,
   BAR2,
   BAR5
} MMAP_BAR;

typedef struct _MMAP_SPI_REG
{
	MMAP_BAR Bar;
    ULONG Offset;
    ULONG Data;
} MMAP_SPI_REG, *PMMAP_SPI_REG;



typedef struct _SPI_REG 
{
	UCHAR Offset;
	UCHAR Data;
} SPI_REG, *PSPI_REG;

typedef struct _SPI_ADDRESS 
{
	UCHAR Modify;
	UCHAR Value;
} SPI_ADDRESS, *PSPI_ADDRESS;

typedef struct _SPI_DMA_INFO
{
	LARGE_INTEGER TxDmaPa;
	LARGE_INTEGER RxDmaPa;
} SPI_DMA_INFO, *PSPI_DMA_INFO;

typedef struct _SPI_TXDMA
{
	ULONG Len;
	UCHAR Data[128*1024];
} SPI_TXDMA, *PSPI_TXDMA;

typedef struct _SPI_RXDMA
{
	ULONG Len;
	UCHAR Data[128*1024];
} SPI_RXDMA, *PSPI_RXDMA;

typedef struct _SPI_DATA
{
	ULONG Len;
	UCHAR Data[128*1024];
} SPI_DATA, *PSPI_DATA;

BOOL isPortAlive (TCHAR*, PortMode);
HANDLE OpenPort (TCHAR*);
void ClosePort (HANDLE);

BOOL ReadSpiPortMMAPReg (HANDLE, MMAP_BAR, ULONG, ULONG*);
BOOL WriteSpiPortMMAPReg (HANDLE, MMAP_BAR, ULONG, ULONG);
BOOL ReadSpiPortReg (HANDLE, UCHAR, UCHAR*);
BOOL WriteSpiPortReg (HANDLE, UCHAR, UCHAR);
BOOL WriteTxAddress (HANDLE , UCHAR, UCHAR);
BOOL WriteRxAddress (HANDLE , UCHAR, UCHAR);


BOOL GetSpiRxDmaData(HANDLE, ULONG , SPI_RXDMA*);
BOOL SetSpiTxDmaData (HANDLE, SPI_TXDMA*);

BOOL SetSpiTxDmaReg(HANDLE handle, ULONG DataLength);
BOOL SetSpiRxDmaReg(HANDLE handle, ULONG DataLength);

BOOL ReffrenceEvent(HANDLE handle, HANDLE hCommEvent);
void DeRefferenceEvent(HANDLE handle, HANDLE hCommEvent);
void ClearEvent(HANDLE handle);
#endif
