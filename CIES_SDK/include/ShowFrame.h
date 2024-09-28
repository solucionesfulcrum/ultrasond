//File��ShowFrame.h
//Purpose���������ݴ洢�ӿڡ�
#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif


namespace CIES {

	/**
	* B/C ͼ����Ϣ
	*/
	struct COLORIMAGEENGINESERVER_API ImageDataInfo
	{
		ImageDataInfo() {
			m_nFrameNumber = 0;
			m_nDepth = 0;


			m_nFrameWidthPixels = 0;
			m_nFrameHeightPixels = 0;
			m_nImageWidthPixels = 0;
			m_nImageHeightPixels = 0;

			m_nHour = 0;
			m_nMinute = 0;
			m_nSecond = 0;
			m_nMillisecond = 0;

			m_fFrameRate = 0;
			m_fResolution = 0;
			C_EmitStartLineNo = 0;
			C_EmitStopLineNo = 0;
		}

		int m_nFrameNumber;				//֡��
		int m_nDepth;					//��ǰ���

		int m_nFrameWidthPixels;		//֡����ֱ���
		int m_nFrameHeightPixels;		//֡����ֱ���
		int m_nImageWidthPixels;		//ͼ�����ֱ���
		int m_nImageHeightPixels;		//ͼ������ֱ���

		int m_nHour;					//ʱ
		int m_nMinute;					//��
		int m_nSecond;					//��
		int m_nMillisecond;             //����

		float m_fFrameRate;				//֡��
		float m_fResolution;			//�ֱ��� ��λ ����/���ס�

		int C_EmitStartLineNo;			//Cģʽ ������ʼ�� 
		int C_EmitStopLineNo;			//Cģʽ ���������

	};


	struct COLORIMAGEENGINESERVER_API EnvelopeInfo
	{
		EnvelopeInfo() {
			bHadData = false;
			nEnvelopeMax = 0;
			nEnvelopeMean = 0;

		}

		bool bHadData;//�Ƿ�������
		short nEnvelopeMax; //������
		short nEnvelopeMean;//ƽ������
	};

	struct COLORIMAGEENGINESERVER_API D_PWDataInfo

	{
		D_PWDataInfo() {
			m_nDateNum = 0;
			m_AutoMeasureAngle = -999;
			m_BloodRadius_T = -999;
			m_BloodRadius_B = -999;

		}

		EnvelopeInfo envelopeInfo;

		int m_nDateNum;                        //���ݱ��

		float m_AutoMeasureAngle;				//Ĭ��ֵ��-999����Ч��ֵ �Զ������Ƕ� -90 ~ 90
		float m_BloodRadius_T;					//Ĭ��ֵ��-999����Ч��ֵ ����
		float m_BloodRadius_B;					//Ĭ��ֵ��-999����Ч��ֵ ����
	};

	struct COLORIMAGEENGINESERVER_API MDataInfo
	{
		MDataInfo() {
			m_nFrameNumber = 0;
			m_nImageHeightPixels = 0;
			m_nMLineNum = 0;
			m_bClearScreen = false;
		}

		int m_nFrameNumber;            //֡��
		int m_nImageHeightPixels;    //ͼ������ֱ���
		int m_nMLineNum;            //M��������
		bool m_bClearScreen;        //����

	};


	class Cache_Ptr;

	/*
	* ��ʾ֡
	*/
	class COLORIMAGEENGINESERVER_API ShowFrame
	{
	public:
		ShowFrame();

		ShowFrame(const ShowFrame& s);
		~ShowFrame();

		ShowFrame& operator=(const ShowFrame& s);

		void SetFrameData(unsigned char* frameData, int frameDataLen);

		const unsigned char* GetFrameData(int& frameDataLen);

		int SetImageDataInfo(ImageDataInfo* imageDataInfo);

		ImageDataInfo* GetImageDataInfo();

		int SetD_PWDataInfo(D_PWDataInfo* d_PWDataInfo);

		D_PWDataInfo* GetD_PWDataInfo();

		int SetMDataInfo(MDataInfo* mDataInfo);

		MDataInfo* GetMDataInfo();
	private:
		Cache_Ptr* rp;

	};

	/*
	* ����ͼ������
	*/
	class COLORIMAGEENGINESERVER_API UImagingData
	{
	public:
		UImagingData();

		~UImagingData();

		UImagingData& operator=(const UImagingData& s);

		ShowFrame m_B_Data; //B ����
		ShowFrame m_C_Data; //C ���� ����B��C����ʾ����

		ShowFrame m_D_PW_Data; //D PW ���� ����D_pw����
		ShowFrame m_M_Data;        //M ����

		bool m_bBHadData; //����B����
		bool m_bCHadData; //����C����
		bool m_bDPWHadData; //����DPW����
		bool m_bMHadData; //����M����
	};
}