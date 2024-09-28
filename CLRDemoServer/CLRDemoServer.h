// CLRDemoServer.h

#pragma once

#include "ColorImageEngineServer.h"
#include "DataSource.h"
#include "IESParamter.h"
#include "Native.h"
namespace CLRDemoServer {

	public ref class Probe_Info
	{
	public:
		Probe_Info();
		~Probe_Info();

		float m_fPith;				//̽ͷPith
		float m_fRadiusCurvature;	//̽ͷ���ʰ뾶
		int m_nFocusNum;			//̽ͷ��Դ����
		int m_nType;				//̽ͷ1����������2��������,3��������
		int m_nPA;					//�Ƿ�������� 1:�ǣ�0����
		int m_nShowDepthLevel;		//��ʾ��ȵ�λ
		array<int>^	m_pDepthList;	//����б� ��λmm ��ʾ��Ҫ*10	
	};

	public ref class SignalParam
	{
	public:
		SignalParam();
		~SignalParam();

		enum class SignalParamType
		{
			All_Signal_Param = 0x00FF,
			Width_Param = 0x0001,
			High_Param = 0x0002,
			Depth_Param = 0x0004,
			Gain_Param = 0x0008,
			DR_Param = 0x0010,
			ImageEnhancementLevel_Param = 0x0020,
			Correlation_Param = 0x0040,
			TGC_Param = 0x0080
		};

		int m_SignalParamType;


		int m_nWidth;//��ʾ���ؿ��
		int m_nHigh;//��ʾ���ظ߶�
		int m_nDepth;//��ȵ�λ
		float m_fGain;//���淶Χ 0 - 100
		float m_fDR;//��̬��Χ 0 - 100
		unsigned char m_ucImageEnhancementLevel;//ͼ����ǿ��λ 1 - 8
		unsigned char m_ucCorrelation;//֡���ϵ�� 1 - 8
		array<float>^ m_fTGC;
	};

	public ref class ImageData
	{
	public:
		ImageData(void);
		~ImageData(void);
		array<unsigned char>^	m_data;

		float m_fFrameRate;			//֡��
		int m_nFrameWidthPixels;	//֡����ֱ���
		int m_nFrameHeightPixels;	//֡����ֱ���
		int m_nImageWidthPixels;	//ͼ�����ֱ���
		int m_nImageHeightPixels;	//ͼ������ֱ���
		float m_fAspectRatio;//���ݱ� ��ͼ������򣬷�����ͼ
		int m_nHour; //ʱ
		int m_nMinute; //��
		int m_nSecond; //��
		int m_nMillisecond; //����
		int m_nDepth;//��ǰ���
		int m_nFrameNumber;//֡���
	};

	public ref class EnvelopeInfoCLR
	{
	public:
		EnvelopeInfoCLR();
		bool    bHadData;//�Ƿ�������
		short	m_nEnvelope;
	};


	public ref class DopplerDataCLR
	{
	public:
		DopplerDataCLR();
		~DopplerDataCLR();

		array<unsigned char>^	m_uSpectralLine;	//����
		EnvelopeInfoCLR^ m_envelopeInfo;		//����

		int nDateNum;						//���ݱ��

	};

	public ref class DopplerParamCLR
	{
	public:
		DopplerParamCLR();
		~DopplerParamCLR();

		enum class DopplerParamCLRType
		{
			All_Doppler_Param = 0x03FF,
			Width_Param = 0x0001,
			High_Param = 0x0002,
			PRF_Rate_Param = 0x0004,
			Gain_Param = 0x0008,
			DR_Param = 0x0010,
			Frequency_Param = 0x0020,
			Time_Param = 0x0040,
			BaseLine_Level_Param = 0x0080,
			Wall_Level_Param = 0x0100,
			Sampling_Volume_Param = 0x0200,
		};

		int m_dopplerParamType; //��������

		int m_nWidth;//��ʾ���ؿ�� 
		int m_nHeight;//��ʾ���ظ߶�
		int m_prf_rate;//PRF rate
		float m_fGain;//���淶Χ -20- 20 Ĭ��0
		float m_fDR;//��̬��Χ	20 - 60 Ĭ��40
		float m_fFrequency;//Ƶ��  PW_Info �л�ȡ
		float m_fTime;//��ʾʱ�� 4 6 8
		int m_nBaseLineLevel;//����level -3 - 3
		int m_nWall_level;//���˲�Level 0 - 2
		int m_nSamplingVolume;//ȡ���ſ�� 32 64 128 256
	};

	public ref class PW_Info
	{
	public:
		PW_Info();
		~PW_Info();

		float m_nFrequency;		//Ƶ�ʷ�
		array<float>^ m_fPRF;		// ��Ӧ��ȵ�λ
	};

	public delegate void EventDelegate(int i);
	public delegate void FrameDataUpdated(int nFrameDataNumber);
	public delegate void EventDelegate_HWMH(int msgType, int value);
	public delegate void HardWareMsgHandler(int msgType, int value);

	public ref class NativeInterface
	{
	public:
		NativeInterface();

		~NativeInterface();

		void SetNative(IES::Native* native);

		void SetDelegateMthod(FrameDataUpdated^ d);
		void SetDelegateMthod(HardWareMsgHandler^ d);

		void Callback(int i);
		void Callback_HWMH(int msgType, int value);
	private:
		System::Runtime::InteropServices::GCHandle delegateHandle;
		EventDelegate^ nativeCallback;
		FrameDataUpdated^ frameDataUpdated;
		System::Runtime::InteropServices::GCHandle delegateHandle_HWMH;
		EventDelegate_HWMH^ nativeCallback_HWMH;
		HardWareMsgHandler^ hardWareMsgHandler;
	};

	public ref class CLR_DemoServer
	{
	private:
		CLR_DemoServer(void);
		~CLR_DemoServer(void);
		void ReleaseResource();
		void LoadKRProcessClass();

		static CLR_DemoServer^ m_Instance = nullptr;

		IES::ImageEngineServer* m_pDemoServer;
		IES::DataSource* m_pDataSource;

		IES::DopplerData* pDopplerData;
		IES::DopplerData* pDopplerDataArray;
		int m_nDopplerDataArrayLen;

		NativeInterface^ _nativeInterface;
		IES::Native* m_pNative;
	public:

		static CLR_DemoServer^ GetInstance();	//��ȡ����

		static void ReleaseInstance();		//ע��

		int SetCheckModeParamPath(System::String^ paramPath);	//���ò���Ŀ¼

		int ResetFW();	//����Ӳ���̼�
		int DownLoadFW(System::String^ fwFilePath);	//����USB�̼�

		int StartImageEngine();				//����ͼ������
		int StopImageEngine();				//ֹͣͼ������

		void Freeze();
		void UnFreeze();

		bool IsRuning();

		int GetProberInfo(Probe_Info^ probeInfo, System::String^ paramPath); //��ȡ̽ͷ��Ϣ
		int SetSignalParam(SignalParam^ signalParam); //�����㷨����

		int GetImageWidthPixels();
		int GetImageHeightPixels();

		int GetImageDisplayData(ImageData^ imageData);	//��ȡ��ʾ����
		int GetHistoryImageCount();						//��ȡ��ʷͼ��������(¼��������)
		int GetHistoryImageData(ImageData^ imageData, int nIndex); //��ȡ��ʷ����
		float GetCurrentFrameRate();					//��ȡ��ǰ֡��

		bool IsUSBOpen();	//USB�豸�Ƿ���

		int GetHardWareVersion(array<int >^	HWversion); //��ȡӲ���汾

		int GetSDKVersion(array<int >^	SDKversion); //��ȡSDK�汾

		void SetDelegateMthod(FrameDataUpdated^ d);
		void SetDelegateMthod(HardWareMsgHandler^ d);

	public:
		int GetPWInfo(PW_Info^ pwInfo, System::String^ paramPath);			 //��ȡPW��ʾ��Ϣ
		
		int SetDopplerParam(DopplerParamCLR^ dopplerParamClr);	//���ö����ղ���

		int StartDoppler();	//����������
		int StopDoppler();	//�رն�����

		int SetD_PWSamplingGateParam_Line(float SX, float SY, float depth, float fIWidthP, float fIHeightP, int launchDeflectionAngle, int samplingVolume);
		int SetD_PWSamplingGateParam_Convex(float SX, float SY, float depth, float fIWidthP, float fIHeightP, float SectorCenterAngle, int samplingVolume);

		int GetDopplerDisplayData(array<DopplerDataCLR^>^ dopplerDataClrArray, int dataNumber); // ��ȡ����������

		int GetHistoryDopplerData(array<DopplerDataCLR^>^ dopplerDataClrArray, int startIndex, int dataNumber);//��ȡ����Ķ���������
		int GetHistoryDopplerDataCount();//��ȡ�����������������

	


	};
}
