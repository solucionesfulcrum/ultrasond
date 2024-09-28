//File��DataSourceInterface.h
//Purpose����������Դ�ӿ�
#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif

namespace CIES {

	class COLORIMAGEENGINESERVER_API DataSourceInterface
	{
	public:


		/**
		 * ��Ӳ���豸
		 * @param DevicePath  ����·���� ͨ�� USDeviceInfo.DevicPath ��ȡ��
		 * @return
		 */
		virtual int OpenDevice(char* DevicePath) = 0;

		/**
		* �ر�Ӳ���豸
		* @return  : ;
		*/
		virtual int CloseDevice() = 0;
		/**
		* ��ȡ�豸״̬.
		* @return : 
		*/
		virtual bool IsDeviceOpen() = 0;

		/**
		* ��Ӳ��д��������Ϣ.
		* @param pCmdMsg : 
		* @param nCmdMsgLen : 
		* @return :
		*/
		virtual int WriteCmdMsgSync(unsigned char* pCmdMsg, int nCmdMsgLen) = 0;

		/**
		* ��Ӳ����ȡ��Ϣ
		* @param pDataMsg : 
		* @param nDataMsgLen : 
		* @return : 
		*/
		virtual int ReadDataMsgAsync(unsigned char* pDataMsg, int& nDataMsgLen, int& index) = 0;


		/**
		 * ��ȡӲ��������Ϣ
		 * @param pCmdMsg :
		 * @param nCmdMsgLen : 
		 * @return  : 
		 */
		virtual int ReadCmdMsgSync(unsigned char* pCmdMsg, int& nCmdMsgLen) = 0;

		/**
		 * ��ȡӲ���ж���Ϣ
		 * @param pInterruptMsg :
		 * @param nMsgLen : 
		 *
		 * @return :
		 */
		virtual int ReadInterruptMsgSync(unsigned char* pInterruptMsg, int& nMsgLen) = 0;

		/**
		 * дι����Ϣ
		 * @return : 
		 */
		virtual int WriteFeedigDogSync() = 0;


		/**
		* ���ö�ȡ�����С
		* @param nSize : 
		* @return : 
		*/
		virtual int SetReadDataBufferSize(int nSize) = 0;


		/**
		 * ��ȡ�����豸��Ϣ ����ȡ5���豸��Ϣ
		 * @param usHareWareInfoArray
		 * @param nArrayLen
		 * @return.
		 */
		virtual int GetUSDeviceInfo(void* usHareWareInfoArray, int& nArrayLen) = 0;
		
		/**
		 * Ӳ���˳��͹��ģ�����������ӳ�500ms����Ҫ���µ��ú�̨�ӿ����ò�����
		 * @param DevicePath 
		 * @return : 
		 */
		virtual int PowerOn(char* DevicePath) = 0;
		/**
		 * Ӳ������͹���
		 * @param DevicePath 
		 * @return  : 
		 */
		virtual int PowerOff(char* DevicePath) = 0;
		/**
		 * ��ȡ��ǰ�����豸��PID
		 * @return
		 */
		virtual int GetPID() = 0;
		/**
		 * ��ȡ�����豸��Ϣ��ͨ��DevicePath��
		 * @param usHareWareInfo
		 * @param DevicePath
		 * @return
		 */
		virtual int GetUSDeviceInfoByDevicePath(void* usHareWareInfo, char* DevicePath) = 0;


	public:
		const unsigned short USB_VID = 0x04B4;					//USB VID 
		const unsigned short USB_PID1 = 0x00F0;					//USB PID  ƽ�峬��PID
		const unsigned short USB_PID2 = 0x4611;					//USB PID   USB̽ͷ����PID
		const char* CYUSB_GUID = "AE18AA60-7F6A-11d4-97DD-00010229B959"; //USB GUID


	};
}