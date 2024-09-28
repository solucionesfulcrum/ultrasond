#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif

namespace CIES {

	class COLORIMAGEENGINESERVER_API FrameDataListener
	{
	public:
		/**
		* Ӳ����Ϣ�ϴ�
		* @param msgType ��Ϣ���� �� 2��̽ͷID��Ϣ
		* @param nValue ��Ϣֵ ��̽ͷID�� 0x5555��̽ͷ���䣩��0xAAAA(һ�������𻵻��ȡһ������ʧ��)
		*/
		virtual void HardWareMsgUpdated(int msgType, int nValue) = 0;
		virtual void HardWareMsgSUpdated(int msgType, int* nValue, int nValueLen) = 0;


	};
}