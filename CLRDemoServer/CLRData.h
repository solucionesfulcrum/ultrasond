#pragma once
#include "Native.h"
namespace CLRDemoServer {

#define IMAGE_DATA_NUM 2048*2048

	public ref class ImageDataInfo_CLR
	{
	public:
		ImageDataInfo_CLR(void);
		~ImageDataInfo_CLR(void);
		float m_fFrameRate;			//֡��
		int m_nFrameWidthPixels;	//֡����ֱ���
		int m_nFrameHeightPixels;	//֡����ֱ���
		int m_nImageWidthPixels;	//ͼ�����ֱ���
		int m_nImageHeightPixels;	//ͼ������ֱ���
		float m_fResolution;		//�ֱ��� ��λ ����/���ס�
		int m_nHour; //ʱ
		int m_nMinute; //��
		int m_nSecond; //��
		int m_nMillisecond; //����
		int m_nDepth;//��ǰ���
		int m_nFrameNumber;//֡���
	};
	public ref class EnvelopeInfo_CLR
	{
	public:
		EnvelopeInfo_CLR();
		bool    m_bHadData;//�Ƿ�������
		short	m_nEnvelopeMax;//������
		short	m_nEnvelopeMean;//ƽ������
	};

	public ref class D_PWDataInfo_CLR
	{
	public:
		D_PWDataInfo_CLR(void);
		~D_PWDataInfo_CLR(void);

		EnvelopeInfo_CLR^ envelopeInfo;

		int m_nDateNum;						//���ݱ��
		float m_AutoMeasureAngle;//Ĭ��ֵ��-999����Ч��ֵ �Զ������Ƕ� -90 ~ 90 
		float m_BloodRadius_T;//Ĭ��ֵ��-999����Ч��ֵ ����
		float m_BloodRadius_B;//Ĭ��ֵ��-999����Ч��ֵ ����
		int m_nD_PWDataLen;	//pw һ�߳�
	};

	public ref class MDataInfo_CLR
	{
	public:
		MDataInfo_CLR(void);
		~MDataInfo_CLR(void);

		int m_nDateNum;						//���ݱ��
		int m_nMDataLen;	//һ�߳�

		int m_nFrameNumber;			//֡��
		int m_nImageHeightPixels;	//ͼ������ֱ���
		int m_nMLineNum;			//M��������
		bool m_bClearScreen;		//����
	};
	public ref class ImageData
	{
	public:
		ImageData(void);
		~ImageData(void);
		array<int>^	m_B_Imagedata;
		array<int>^	m_C_Imagedata;
		array<int>^ m_D_PW_Imagedata;
		array<int>^ m_M_Imagedata;

		ImageDataInfo_CLR^ m_B_ImageInfo;
		ImageDataInfo_CLR^ m_C_ImageInfo;
		array<D_PWDataInfo_CLR^>^ m_D_PW_ImageInfos;
		MDataInfo_CLR^ m_M_ImageInfo;

		int m_nBImageDataLen;
		int m_nCImageDataLen;
		int m_nD_PWImageDataLen;
		int m_nMImageDataLen;

		bool m_bBHadData;
		bool m_bCHadData;
		bool m_bD_PWHadData;
		bool m_bMHadData;

		int m_nD_PWDataNum; // pw��������
		const int m_nD_PWImageDataMaxLen;//PW��󻺴�

		int m_nMDataNum; // pw��������
		const int m_nMImageDataMaxLen;//PW��󻺴�
	};

	public ref class ImageData_D_PW
	{
	public:
		ImageData_D_PW(void);
		~ImageData_D_PW(void);
		array<int>^ m_D_PW_Imagedata;
		array<D_PWDataInfo_CLR^>^ m_D_PW_ImageInfos;
		int m_nD_PWImageDataLen;
		bool m_bD_PWHadData;

		int m_nD_PWDataNum; // pw��������
	};

	public ref class ImageData_M
	{
	public:
		ImageData_M(void);
		~ImageData_M(void);
		array<int>^ m_M_ImageData;
		array<MDataInfo_CLR^>^ m_M_ImageInfos;
		int m_nMImageDataLen;
		bool m_bMHadData;

		int m_nMDataNum; //M��������
	};


	public ref class B_ImageParam_CLR
	{
	public:
		B_ImageParam_CLR();
		~B_ImageParam_CLR();

		enum class B_ImageParamType
		{
			All_Param = 0x1FFF,
			Width_Param = 0x0001,				//DSC�����أ�
			Height_Param = 0x0002,				//DSC�ߣ����أ�
			Depth_level_Param = 0x0004,			//��ȵ�λ
			Gain_Param = 0x0008,				//����
			DR_Param = 0x0010,					//��̬��Χ
			SRI_level_Param = 0x0020,			//ͼ����ǿ��λ
			Correlation_level_Param = 0x0040,	//֡��ص�λ
			TGC_Param = 0x0080,					//����TGC
			GrayColorMap_level_Param = 0x0100,	//�Ҷ�ӳ��Map��λ
			PseudoColorMap_level_Param = 0x0200,//α��ӳ��Map��λ
			Harmonic_level_Param = 0x0400,		//0:������1��г��
			Frequency_level_Param = 0x0800,		//0����Ƶ;1��������2����Ƶ��
			FocusArea_level_Param = 0x1000,		//0������1;1������2��2������3��3������4��4������5��5������6��6��ȫ��
			NE_Param = 0x2000,					//����ǿ 0:��;1:��;
			NE_Theta_Param = 0x4000,			//����ǿ�Ƕ�: -30��- 30��;
		};

		int m_B_ImageParamType;

		
		int m_nWidth;				//DSC�����أ� Max 2048
		int m_nHeight;				//DSC�ߣ����أ�  Max 2048
		int m_nDepth_level;			//��ȵ�λ
		float m_fGain;				//���淶Χ 1- 100
		float m_fDR;				//��̬��Χ	0 - 100
		int m_SRI_Level;			//ͼ����ǿ��λ 1 - 8
		int m_nCorrelation_Level;	//֡���ϵ�� 1 - 8
		int m_nGrayColorMap_level;	//�Ҷ�ӳ��Map��λ 1 - 8
		int m_nPseudoColorMap_level;//α��ӳ��Map��λ��0ΪĬ�� 0 - 8
		array<float>^ m_fTGC;
		int m_nHarmonic;			//0:������1��г��
		int m_nFrequency;			//0����Ƶ;1��������2����Ƶ��
		int m_nFocusArea;			//0������1;1������2��2������3��3������4��4������5��5������6��6��ȫ��
		int m_nNE;					//����ǿ 0:��;1:��;
		int m_nNE_Theta;			//����ǿ�Ƕ�: -30��- 30��;
	};

	public ref class C_ImageParam_CLR
	{
	public:
		C_ImageParam_CLR();
		~C_ImageParam_CLR();

		enum class C_ImageParamType
		{
			All_Param = 0x07FF,
			Gain_Param = 0x0001,				//����
			WallFilter_level_Param = 0x0002,	//���˲���λ
			ColorPriority_level_Param = 0x0004,	//��ɫ���ȶȵ�λ
			FrameCorrelation_level_Param = 0x0008,	//��ɫ֡��ص�λ
			Color_Mode_Param = 0x0010,		//�ٶȣ�0��	������1��	���ԣ�2��
			ColorMap_level_Param = 0x0020,		//ӳ��Map��λ
			ColorMap_Inversion_Param = 0x0040,	//ӳ��Map��λ 0 - 11
			PRF_Level_Param = 0x0080,			//PRF��λ
			Theta_Param = 0x0100,				//����ƫת�Ƕȡ�
			B_BC_Mode_Param = 0x0200,			//ʹ�� B & BCģʽ
			Speed_Param = 0x0400,				//�ٶ� 0�����٣�1������
		};

		int m_C_ImageParamType;

		float m_fGain;				//����
		int m_nWallFilter_level;	//���˲���λ
		int m_nColorPriority_level;	//��ɫ���ȶȵ�λ��0~4��
		int m_nFrameCorrelation_level;//��ɫ֡��ص�λ��0~4)
		int m_nColorMap_mode;		//�ٶȣ�0��	������1��	���ԣ�2��
		int m_nColorMap_level;		//ӳ��Map��λ 0-11��
		int m_nColorMap_inversion;	//ͼ��ת ������0��	��ת��1	
		int m_nPRF_Level;			//PRF��λ  0-7 
		float m_fTheta;				//����ƫת�Ƕ�/��
		bool m_bUse_B_BC_Mode;		//ʹ�� B & BCģʽ
		int m_nSpeed;				//�ٶ� 0�����٣�1������
	};

	public ref class D_PW_ImageParam_CLR
	{
	public:
		D_PW_ImageParam_CLR();
		~D_PW_ImageParam_CLR();

		enum class D_PW_ImageParamType
		{
			All_Param = 0x3FFF,
			Width_Param = 0x0001,
			Height_Param = 0x0002,
			PRF_Rate_Param = 0x0004,
			Gain_Param = 0x0008,
			DR_Param = 0x0010,
			Frequency_Param = 0x0020,
			Time_Param = 0x0040,
			BaseLine_Level_Param = 0x0080,
			Wall_Level_Param = 0x0100,
			Sampling_Volume_Param = 0x0200,
			Inversion_Param = 0x0400,
			Speed_Param = 0x0800,
			GrayColorMap_level_Param = 0x1000,
			PseudoColorMap_level_Param = 0x2000
		};

		int m_D_PW_ImageParamType; //��������

		int m_nWidth;//��ʾ���ؿ�� 
		int m_nHeight;//��ʾ���ظ߶�
		int m_prf_rate;//PRF rate
		float m_fGain;//���淶Χ -20- 20 Ĭ��0
		float m_fDR;//��̬��Χ	20 - 60 Ĭ��40
		float m_fFrequency;//Ƶ��
		float m_fTime;//��ʾʱ��
		int m_nBaseLineLevel;//����level -3 - 3
		int m_nWall_level;//���˲�Level 0 - 2
		int m_nSamplingVolume;//ȡ���ſ��
		int m_nInversion;	//ͼ��ת ������0��	��ת��1
		int m_nSpeed;				//�ٶ� 0�����٣�1������
		int m_nGrayColorMap_level;   //�Ҷ�ӳ��Map��λ 1 - 8
		int m_nPseudoColorMap_level; //α��ӳ��Map��λ��0ΪĬ�� 0 - 8
	};

	public ref class M_ImageParam_CLR
	{
	public:
		M_ImageParam_CLR();
		~M_ImageParam_CLR();

		enum class M_ImageParamType
		{
			All_Param = 0x003F,
			Gain_Param = 0x0001,
			Time_Param = 0x0002,
			Width_Param = 0x0004,
			Height_Param = 0x0008,
			GrayColorMap_level_Param = 0x0010,
			PseudoColorMap_level_Param = 0x0020
		};

		int m_M_ImageParamType;	//��������

		float m_fGain;//���淶Χ 0-100
		float m_fTime;//��ʾʱ��
		int m_nWidth;                //M�����أ� Max 2048
		int m_nHeight;                //M�ߣ����أ�  Max 2048
		int m_nGrayColorMap_level;    //�Ҷ�ӳ��Map��λ 1 - 8
		int m_nPseudoColorMap_level;  //α��ӳ��Map��λ��0ΪĬ�� 0 - 8
	};

	public ref class Probe_Info
	{
	public:
		Probe_Info();
		~Probe_Info();

		float m_fPith;				//̽ͷPith
		float m_fRadiusCurvature;	//̽ͷ���ʰ뾶
		int m_nFocusNum;			//̽ͷ��Դ����
		int Probe_type;				//̽ͷ����  ̽ͷ���� 1������ 2��͹�� 3�������
		float m_fImageAngle;		//������Ž�
		int m_nShowDepthLevel;		//��ʾ��ȵ�λ
		array<int>^	m_pDepthList;	//����б� ��λmm ��ʾ��Ҫ*10	
		
	
		bool m_bC_Tx_deflectionflag;	//C�Ƿ��з���ƫת
		array<int>^ m_pC_Tx_angle;			//C����ƫת�Ƕ�

		bool m_bD_Tx_deflectionflag;	//D�Ƿ��з���ƫת
		array<int>^ m_pD_Tx_angle;			//D����ƫת�Ƕ�

		bool m_bB_NE_deflectionflag;	//B�Ƿ�������ǿ
		array<int>^ m_pB_NE_Theta_angle;//B����ǿ�Ƕ�

		array<float>^ m_fB_fund_Tx_freq;//Ƶ�ʣ���������Ƶ������Ϊ���ߣ��У��ͣ���λMHz
		array<float>^ m_fB_harm_Tx_freq;//Ƶ�ʣ�г������Ƶ������Ϊ���ߣ��У��ͣ���λMHz
		array<float>^ m_fC_Tx_freq;//������ʾƵ�� ����Ϊ��Ƶ�����٣�����Ƶ�����٣�
		array<float>^ m_fD_Tx_freq;//������ʾƵ�� ����Ϊ��Ƶ�����٣�����Ƶ�����٣�
	};

	public ref class D_PWInfo
	{
	public:
		D_PWInfo();
		~D_PWInfo();

		float m_nFrequency;		//Ƶ�ʷ�
		array<float>^ m_fPRF;		// ��Ӧ��ȵ�λ
		bool m_bUseLaunchDeflection;//̽ͷ�Ƿ�֧�ַ���ƫת ͹��֧�ַ���ƫת
		float m_nLaunchDeflectionAngle;//����ƫת�Ƕȣ��㣩 ��λ��
	};

	public delegate void EventDelegate_HWMH(int msgType, int value);
	public delegate void HardWareMsgHandler(int msgType, int value);

	public delegate void EventDelegate_HWMHS(int msgType, int* value, int valueLen);
	public delegate void HardWareMsgSHandler(int msgType, array<int>^ value);

	public ref class NativeInterface
	{
	public:
		NativeInterface();

		~NativeInterface();

		void SetNative(CIES::Native* native);

		void SetDelegateMthod(HardWareMsgHandler^ d);
		void SetDelegateMthod(HardWareMsgSHandler^ d);

		void ClearDelegateMthod();
		void Callback_HWMH(int msgType, int value);
		void Callback_HWMHS(int msgType, int* value, int valueLen);
	private:
	
		System::Runtime::InteropServices::GCHandle delegateHandle_HWMH;
		EventDelegate_HWMH^ nativeCallback_HWMH;
		HardWareMsgHandler^ hardWareMsgHandler;

		System::Runtime::InteropServices::GCHandle delegateHandle_HWMHS;
		EventDelegate_HWMHS^ nativeCallback_HWMHS;
		HardWareMsgSHandler^ hardWareMsgSHandler;

	};


	public ref class CLScanMode
	{
	public:

		enum class CLScanModeEnum //ɨ��ģʽ
		{
			B = 0x01,			//B ģʽ
			C = 0x02,			//C ģʽ
			D_PW = 0x04,		//D_PW ģʽ
			D = 0x10,			//D ģʽ
			BC = B | C,			//B&C ģʽ
			M = 0x20,			//M ģʽ
			BM = B | M			//B&M ģʽ
		};

		static bool ContainBScanMode(CLScanModeEnum scan_mode)	//����Bɨ��ģʽ
		{
			return ((scan_mode & CLScanModeEnum::B) == CLScanModeEnum::B);
		}

		static bool ContainCScanMode(CLScanModeEnum scan_mode)	//����Cɨ��ģʽ
		{
			return ((scan_mode & CLScanModeEnum::C) == CLScanModeEnum::C);
		}

		static bool ContainBCScanMode(CLScanModeEnum scan_mode)	//����B&Cɨ��ģʽ
		{
			return ((scan_mode & (CLScanModeEnum::BC)) == CLScanModeEnum::BC);
		}

		static bool ContainDPWScanMode(CLScanModeEnum scan_mode)	//����D_PWɨ��ģʽ
		{
			return ((scan_mode & (CLScanModeEnum::D_PW)) == CLScanModeEnum::D_PW);
		}

		static bool ContainMScanMode(CLScanModeEnum scan_mode)	//����Mɨ��ģʽ
		{
			return ((scan_mode & (CLScanModeEnum::M)) == CLScanModeEnum::M);
		}

		static bool ContainBMScanMode(CLScanModeEnum scan_mode)	//����B&Mɨ��ģʽ
		{
			return ((scan_mode & (CLScanModeEnum::BM)) == CLScanModeEnum::BM);
		}

	};
	public ref class CLRUSDeviceInfo
	{
	public:
		CLRUSDeviceInfo();
		bool isPowerOff;						//�Ƿ��ڵ͹���
		int PID;								//USB VID
		int VID;								//USB PID
		System::String^ DevicePath;				//�豸Ψһʶ��·��
		int fwVersion_major;					//usb�̼�������
		int fwVersion_minor;					//usb�̼����ӱ�	
		int nLogicVersion_Major;				//�߼��汾�� ���汾
		int nLogicVersion_Minor;				//�߼��汾�� �ΰ汾
		int nHWVersion_Major;					//Ӳ���汾�� ���汾
		int nHWVersion_Minor;					//Ӳ���汾�� �ΰ汾
		unsigned int unLogicCompileVersion; 	//�߼������
		unsigned short DNA1;					//FPGA_DNA 0-15λ
		unsigned short DNA2;					//FPGA_DNA 16-31λ
		unsigned short DNA3;					//FPGA_DNA 32-47λ
		unsigned short DNA4;					//FPGA_DNA 48-56λ
		float fUSBSupplyVoltage;				//USB�����ѹ	��λV
		float fTotalCurrent;					//�ܵ���		��λA
		float fTemperature;						//�¶�			��λ ��
		float fEmissionVoltage;					//�����ѹ		��λV
		bool ProbeCanreplaced;					//̽ͷ�ɸ���
		int IsMultiProbe;						 //0 ���Ƕ�̽ͷ�汾 1 ����̽ͷ�汾
		int probeID;							//̽ͷID /̽ͷ���� A ID
		int probeAppendInfo;					//̽ͷ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool probeConnect;						//̽ͷID/̽ͷ���� A 0 ����λ 1 ��λ
		int probeID_B;							//̽ͷ���� B ID
		int probeAppendInfo_B;					//̽ͷ����B ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool probeConnect_B;					 //̽ͷ���� B 0 ����λ 1 ��λ
		System::String^ productInfo;			//��Ʒ��Ϣ
		System::String^ serialNumber;			//���к�
		bool isExportFlag;						//���ڱ�ʶ
		bool isOEMFlag;							//OEM��ʶ
		int usHardWareIndex;					//�����豸������  ��γ����豸�γ��Ͳ��룬�����»�ȡ��

		char PCB_Major;                 //PCB Major ���汾
		char PCB_Minor;                 //PCB Minor �Ӱ汾
		char PCBA_Major;                //PCBA Major ���汾
		char PCBA_Minor;                //PCBA Minor �Ӱ汾
	};

	public ref class CLRHardWareInfo
	{
	public:
		CLRHardWareInfo();

		int nLogicVersion_Major;				//�߼��汾�� ���汾
		int nLogicVersion_Minor;				//�߼��汾�� �ΰ汾
		int nHWVersion_Major;					//Ӳ���汾�� ���汾
		int nHWVersion_Minor;					//Ӳ���汾�� �ΰ汾
		unsigned int unLogicCompileVersion; 	//�߼������
		unsigned short DNA1;					//FPGA_DNA 0-15λ
		unsigned short DNA2;					//FPGA_DNA 16-31λ
		unsigned short DNA3;					//FPGA_DNA 32-47λ
		unsigned short DNA4;					//FPGA_DNA 48-56λ
		float fUSBSupplyVoltage;				//USB�����ѹ	��λV
		float fTotalCurrent;					//�ܵ���		��λA
		float fTemperature;						//�¶�			��λ ��
		float fEmissionVoltage;					//�����ѹ		��λV
		int OtherMsg1;							//������Ϣ
		bool ProbeCanreplaced;					//̽ͷ�ɸ���
		int IsMultiProbe;						  //0 ���Ƕ�̽ͷ�汾 1 ����̽ͷ�汾
		int unProbeID;                            //̽ͷID/̽ͷ���� A ID  ʹ�ñ�ʶ 0x5555̽ͷ�Ͽ�
		int unProbeAppendInfo;					  //̽ͷ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool unProbeConnect;					  //̽ͷID/̽ͷ���� A 0 ����λ 1 ��λ
		int unProbeID_B;						  //̽ͷ����B ID ʹ�ñ�ʶ 0x5555̽ͷ�Ͽ�
		int unProbeAppendInfo_B;				  //̽ͷ����B ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool unProbeConnect_B;					  //̽ͷ���� B 0 ����λ 1 ��λ
	};
}