//File��DataSource.h
//Purpose����������Դģ��ӿڵ�ʵ�֡�
#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif


#include "DataSourceInterface.h"

namespace CIES {

	class Cypress_Windows_USB;

	class SimuImage;

	class COLORIMAGEENGINESERVER_API DataSource : public DataSourceInterface
	{
	public:
		DataSource();

		~DataSource();

		int OpenDevice(char *DevicePath); 
		int CloseDevice();
		bool IsDeviceOpen();

		int WriteCmdMsgSync(unsigned char *pCmdMsg, int nCmdMsgLen);
		int ReadDataMsgAsync(unsigned char *pDataMsg, int &nDataMsgLen, int &index); 
		int ReadCmdMsgSync(unsigned char *pCmdMsg, int &nCmdMsgLen);
		int ReadInterruptMsgSync(unsigned char *pInterruptMsg, int &nMsgLen);
		int WriteFeedigDogSync();

		int SetReadDataBufferSize(int nSize);

		int GetUSDeviceInfo(void *usHareWareInfoArray, int &nArrayLen);

		//0�� ���óɹ�
		//-1��û�и��豸
		//-2�� ��usb�豸ʶ��
		int PowerOn(char *DevicePath);

		//0�� ���óɹ�
		//-1��û�и��豸
		//-2�� ��usb�豸ʶ��
		int PowerOff(char *DevicePath);

		int GetPID();

		int GetUSDeviceInfoByDevicePath(void *usHareWareInfo, char *DevicePath);
	};

}
