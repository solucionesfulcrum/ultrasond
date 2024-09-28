#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif

#include "FrameDataListener.h"

namespace CIES {
	typedef void(__stdcall* EventCallback_HW)(int, int);
	typedef void(__stdcall* EventCallback_HWS)(int msgType, int* nValues, int nValueLen);
	class COLORIMAGEENGINESERVER_API Native : public FrameDataListener
	{
	public:

		Native();

		/**
		* ע��ص�����
		*/
		void RegisterCallback(EventCallback_HW callback);

		/**
		* ����ע��Ļص�����  
		*/
		void Invoke_HW(int type, int value);
		/**
		* Ӳ����Ϣ�ϴ�
		* @param msgType ��Ϣ���� �� 2��̽ͷID��Ϣ 
		* @param nValue ��Ϣֵ ��̽ͷID�� 0x5555��̽ͷ���䣩��0xAAAA(һ�������𻵻��ȡһ������ʧ��)
		*/
		void HardWareMsgUpdated(int msgType, int nValue);

		/// ע��ص�����  
		void RegisterCallback(EventCallback_HWS callback);

		/// ����ע��Ļص�����  
		void Invoke_HWS(int type, int* value, int valueLen);

		void HardWareMsgSUpdated(int msgType, int* nValue, int nValueLen);
	private:
		EventCallback_HW ms_callback_HW;
		EventCallback_HWS ms_callback_HWS;
	};


}