//File��IESParamter.h
//Purpose������������������ӿڡ�
#pragma once

#ifdef COLORIMAGEENGINESERVER_EXPORTS
#define COLORIMAGEENGINESERVER_API __declspec(dllexport)
#else
#define COLORIMAGEENGINESERVER_API __declspec(dllimport)
#endif

namespace CIES {


	class Version {
	public:
		int Major;		//���汾
		int Minor;		//�ΰ汾
		int Revision;	//�޶���
	};


	class COLORIMAGEENGINESERVER_API B_ImageParam
	{
	public:
		B_ImageParam();

		~B_ImageParam();

		B_ImageParam &operator=(const B_ImageParam &s);


		enum B_ImageParamType {
			All_Param = 0x7FFF,						//���в���
			Width_Param = 0x0001,					//DSC�����أ� ���ͼ��Ŀ�
			Height_Param = 0x0002,					//DSC�ߣ����أ�	���ͼ��ĸ�
			Depth_level_Param = 0x0004,				//��ȵ�λ
			Gain_Param = 0x0008,					//����
			DR_Param = 0x0010,						//��̬��Χ
			SRI_level_Param = 0x0020,				//ͼ����ǿ��λ
			Correlation_level_Param = 0x0040,		//֡��ص�λ
			TGC_Param = 0x0080,						//����TGC
			GrayColorMap_level_Param = 0x0100,		//�Ҷ�ӳ��Map��λ
			PseudoColorMap_level_Param = 0x0200,	//α��ӳ��Map��λ
			Harmonic_level_Param = 0x0400,			//г��
			Frequency_level_Param = 0x0800,			//Ƶ��
			FocusArea_level_Param = 0x1000,			//����
			NE_Param = 0x2000,                      //����ǿ
			NE_Theta_Param = 0x4000,                //����ǿ�Ƕ�
		};

		int m_B_ImageParamType;			//�������� B_ImageParamType �����ļ���

		int m_nWidth;					//DSC�����أ����ͼ��Ŀ� ��0~2048��
		int m_nHeight;					//DSC�ߣ����أ����ͼ��ĸ�  ��0~2048��
		int m_nDepth_level;				//��ȵ�λ ��0~n��nһ��Ϊ6����
		float m_fGain;					//���淶Χ ��1~100��
		float m_fDR;					//��̬��Χ	1~100��
		int m_SRI_Level;				//ͼ����ǿ��λ ��1~8��
		int m_nCorrelation_Level;		//֡���ϵ�� ��1~4��
		float m_fTGC[6];				//����TGC ��-15~15��
		int m_nGrayColorMap_level;		//�Ҷ�ӳ��Map��λ ��1~9��9Ϊ�Զ��嵵λ��
		int m_nPseudoColorMap_level;	//α��ӳ��Map��λ ��0~8��0Ϊ�أ�
		int m_nHarmonic;				//г��	��0:������1��г����
		int m_nFrequency;				//Ƶ��	��0����Ƶ;1����Ƶ��2����Ƶ����
		int m_nFocusArea;            	//0������1;1������2��2������3��3������4��4������5��5������6��6��ȫ��
		int m_nNE;                    	//����ǿ 0:��;1:��;
		int m_nNE_Theta;           		//����ǿ�Ƕ�: -30��- 30��;���Ƕ�ֵ��ProbeInfo.m_pB_NE_Theta_angle�����л�ȡ��
	};


	class COLORIMAGEENGINESERVER_API C_ImageParam
	{
	public:
		C_ImageParam();

		~C_ImageParam();

		C_ImageParam &operator=(const C_ImageParam &s);

		enum C_ImageParamType {
			All_Param = 0x07FF,						//���в���
			Gain_Param = 0x0001,					//����
			WallFilter_level_Param = 0x0002,		//���˲���λ
			ColorPriority_level_Param = 0x0004,		//��ɫ���ȶȵ�λ
			FrameCorrelation_level_Param = 0x0008,  //��ɫ֡��ص�λ
			Color_Mode_Param = 0x0010,				//ģʽ
			ColorMap_level_Param = 0x0020,			//ӳ��Map��λ
			ColorMap_Inversion_Param = 0x0040,		//ͼ��ת
			PRF_Level_Param = 0x0080,				//PRF��λ
			Theta_Param = 0x0100,					//����ƫת�Ƕ�
			B_BC_Mode_Param = 0x0200,				//ʹ�� B & BCģʽ
			Speed_Param = 0x0400,					//�ٶ�
		};

		int m_C_ImageParamType;			//�������� C_ImageParamType �����ļ���

		float m_fGain;					//���� (0~100)
		int m_nWallFilter_level;		//���˲���λ (0~4)
		int m_nColorPriority_level;		//��ɫ���ȶȵ�λ��0~4��
		int m_nFrameCorrelation_level;	//��ɫ֡��ص�λ��0~4)
		int m_nColor_mode;				//ģʽ��0���ٶ�ģʽ��1������ģʽ����
		int m_nColorMap_level;			//ӳ��Map��λ ��0~11)
		int m_nColorMap_inversion;		//ͼ��ת ��0��������1����ת��
		int m_nPRF_Level;				//PRF��λ  ��0~7)
		float m_fTheta;					//����ƫת�Ƕ� ���Ƕ�ֵ��ProbeInfo.m_pC_Tx_angle�����л�ȡ��
		bool m_bUse_B_BC_Mode;			//ʹ�� B & BCģʽ
		int m_nSpeed;					//�ٶ� ��0�����٣�1�����٣�
	};


	class COLORIMAGEENGINESERVER_API D_PW_ImageParam
	{
	public:
		D_PW_ImageParam();

		~D_PW_ImageParam();

		D_PW_ImageParam &operator=(const D_PW_ImageParam &s);

		enum D_PW_ImageParamType {
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

		int m_D_PW_ImageParamType;    //��������

		int m_nWidth;				//��ʾ���ؿ��  ���ֵ2048 ��Ҫ��32��������
		int m_nHeight;				//��ʾ���ظ߶� ���ֵ2048 ��Ҫ��32��������
		int m_prf_rate;				//PRF rate
		float m_fGain;				//���淶Χ -20- 20 Ĭ��0
		float m_fDR;				//��̬��Χ	20 - 60 Ĭ��40
		float m_fFrequency;			//Ƶ��
		float m_fTime;				//��ʾʱ��
		int m_nBaseLineLevel;		//����level -3 - 3
		int m_nWall_level;			//���˲�Level 0 - 2
		int m_nSamplingVolume;		//ȡ���ſ�� 1- 10mm
		int m_nInversion;    		//ͼ��ת ������0��	��ת��1
		int m_nSpeed;               //�ٶ� 0�����٣�1������
		int m_nGrayColorMap_level;  //�Ҷ�ӳ��Map��λ 1 - 8
		int m_nPseudoColorMap_level;//α��ӳ��Map��λ��0ΪĬ�� 0 - 8
	};


	class COLORIMAGEENGINESERVER_API M_ImageParam
	{
	public:
		M_ImageParam();

		~M_ImageParam();

		M_ImageParam &operator=(const M_ImageParam &s);

		enum M_ImageParamType {
			All_Param = 0x003F,
			Gain_Param = 0x0001,
			Time_Param = 0x0002,
			Width_Param = 0x0004,
			Height_Param = 0x0008,
			GrayColorMap_level_Param = 0x0010,
			PseudoColorMap_level_Param = 0x0020
		};

		int m_M_ImageParamType;    //��������

		float m_fGain;//���淶Χ 0-100
		float m_fTime;//��ʾʱ��
		int m_nWidth;                //M�����أ� Max 2048
		int m_nHeight;                //M�ߣ����أ�  Max 2048
		int m_nGrayColorMap_level;    //�Ҷ�ӳ��Map��λ 1 - 8
		int m_nPseudoColorMap_level;  //α��ӳ��Map��λ��0ΪĬ�� 0 - 8
	};


	class COLORIMAGEENGINESERVER_API ProbeInfo
	{
	public:
		ProbeInfo();

		~ProbeInfo();

		ProbeInfo &operator=(const ProbeInfo &s);

		float m_fProbe_pitch;			//��Ԫ��� mm
		float m_fProbe_r;				//���ʰ뾶 mm
		float m_fProbe_lens;			//��͸����� mm
		int m_nProbe_element;			//��Ԫ����
		int m_nProbe_type;				//̽ͷ���� ��0������1��͹��2������󣻣�
		int m_nAD_downsample;			//AD�������� ��1��1����������Լ40MHz����2: 2����������Լ20MHz����
		float m_fClock_frequency;		//ʱ��Ƶ�� ��Ĭ��156.25MHz��
		int m_nCH_physical_RX;			//����ͨ���� ��32��16��8
		int m_nADC_type;				//ADCоƬ�ͺ�
		int m_nRate_control;			//�����¼�rate
		float m_fImageAngle;			//������Ž�
		float m_fSound_velocity[4];		//���� ��λm/s������Ϊ���桢Һ�塢֬���������еĳ��������ٶ�
		int m_nHV_SW;					//��ѹ���ؿ��ơ�
		int m_nCH_physical_TX;          //����ͨ���� ��64��32��16
		bool m_bNE_On_Off;            	//����ǿ���� 0���أ�1����
		
		bool m_bB_Tx_deflectionflag;    //B�Ƿ��з���ƫת   δʹ��
		int m_pB_Tx_angle[5];           //B����ƫת�Ƕ�   δʹ��

		bool m_bC_Tx_deflectionflag;    //C�Ƿ��з���ƫת
		int m_pC_Tx_angle[5];           //C����ƫת�Ƕ�

		bool m_bD_Tx_deflectionflag;    //D�Ƿ��з���ƫת
		int m_pD_Tx_angle[5];           //D����ƫת�Ƕ�

		bool m_bB_NE_deflectionflag;    //B�Ƿ�������ǿ
		int m_pB_NE_Theta_angle[4];     //B����ǿ�Ƕ�

		float m_fB_fund_Tx_freq[3];		//Ƶ�ʣ���������Ƶ������Ϊ���ߣ��У��ͣ���λMHz
		float m_fB_harm_Tx_freq[3];		//Ƶ�ʣ�г������Ƶ������Ϊ���ߣ��У��ͣ���λMHz
		float m_fC_Tx_freq[2];			//������ʾƵ�� ����Ϊ��Ƶ�����٣�����Ƶ�����٣�
		float m_fD_Tx_freq[2];			//������ʾƵ�� ����Ϊ��Ƶ�����٣�����Ƶ�����٣�
		int m_nShowDepthLevel;			//��ʾ��ȵ�λ
		int *m_pDepthList;				//����б� ��λmm ��ʾ��Ҫ*10
		void Clear();
	};


	class COLORIMAGEENGINESERVER_API D_PWInfo
	{
	public:
		D_PWInfo();

		~D_PWInfo();

		D_PWInfo &operator=(const D_PWInfo &s);

		float m_nFrequency;        //Ƶ��
		float m_fPRF[8];            // ��Ӧ��ȵ�λ
		bool m_bUseLaunchDeflection;//̽ͷ�Ƿ�֧�ַ���ƫת ͹��֧�ַ���ƫת
		float m_nLaunchDeflectionAngle;//����ƫת�Ƕȣ��㣩 ��λ��
	};


	class COLORIMAGEENGINESERVER_API ScanMode
	{
	public:
		ScanMode::ScanMode()
		{
		}

		enum ScanModeEnum        //ɨ��ģʽ
		{
			B = 0x01,            //B ģʽ
			C = 0x02,            //C ģʽ

			D_PW = 0x04,        //D_PW ģʽ
			D = 0x10,            //D ģʽ

			BC = B | C,            //B&C ģʽ

			M = 0x20,            //M ģʽ
			BM = B | M            //B&M ģʽ

		};

		static bool ContainBScanMode(ScanModeEnum scan_mode)    //����Bɨ��ģʽ
		{
			return ((scan_mode & B) == B);
		}

		static bool ContainCScanMode(ScanModeEnum scan_mode)    //����Cɨ��ģʽ
		{
			return ((scan_mode & C) == C);
		}

		static bool ContainBCScanMode(ScanModeEnum scan_mode)    //����B&Cɨ��ģʽ
		{
			return ((scan_mode & (BC)) == BC);
		}


		static bool ContainDPWScanMode(ScanModeEnum scan_mode)    //����D_PWɨ��ģʽ
		{
			return ((scan_mode & (D_PW)) == D_PW);
		}

		static bool ContainDScanMode(ScanModeEnum scan_mode)    //����Dɨ��ģʽ
		{
			return ((scan_mode & (D)) == D);
		}

		static bool ContainMScanMode(ScanModeEnum scan_mode)    //����Mɨ��ģʽ
		{
			return ((scan_mode & (M)) == M);
		}

		static bool ContainBMScanMode(ScanModeEnum scan_mode)    //����B&Mɨ��ģʽ
		{
			return ((scan_mode & (BM)) == BM);
		}

	};


	class COLORIMAGEENGINESERVER_API HWInfo
	{
	public:
		HWInfo();

		~HWInfo();

		int ParsingMSG(unsigned char msg[512]); //����������
		void Clear();

		HWInfo &operator=(const HWInfo &s);

		int nLogicVersion[2];                   //�߼��汾�� ;m_unLogicVersion[0].m_unLogicVersion[1]
		int nHWVersion[2];                      //Ӳ���汾�� ;m_unHWVersion[0].m_unHWVersion[1]
		unsigned int unLogicCompileVersion;		//�߼������
		unsigned short DNA1;                    //FPGA_DNA 0-15λ
		unsigned short DNA2;                    //FPGA_DNA 16-31λ
		unsigned short DNA3;                    //FPGA_DNA 32-47λ
		unsigned short DNA4;                    //FPGA_DNA 48-56λ
		float fUSBSupplyVoltage;                //USB�����ѹ		��λV
		float fTotalCurrent;                    //�ܵ���			��λA
		float fTemperature;                     //�¶�				��λ ��
		float fEmissionVoltage;                 //�����ѹ			��λV
		bool getInfoFlag;                       //��ȡ����Ϣ��ʶ
		int OtherMsg1;
		bool ProbeCanreplaced;                   //̽ͷ�ɸ���
		int IsMultiProbe;						  //0 ���Ƕ�̽ͷ�汾 1 ����̽ͷ�汾
		int unProbeID;                            //̽ͷID/̽ͷ���� A ID  ʹ�ñ�ʶ 0x5555̽ͷ�Ͽ�
		int unProbeAppendInfo;					  //̽ͷ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool unProbeConnect;					  //̽ͷID/̽ͷ���� A 0 ����λ 1 ��λ
		int unProbeID_B;						  //̽ͷ����B ID ʹ�ñ�ʶ 0x5555̽ͷ�Ͽ�
		int unProbeAppendInfo_B;				  //̽ͷ����B ������Ϣ  ��16λ��Ч��0λ���Ƿ��ǿɲ��̽ͷ��1λ���Ƿ�֧�ְ���
		bool unProbeConnect_B;					  //̽ͷ���� B 0 ����λ 1 ��λ
	};


	class COLORIMAGEENGINESERVER_API ProductInfo
	{
	public:
		ProductInfo();

		~ProductInfo();

		void ParsingMSG(unsigned char msg[32]); //����������
		void Clear();

		ProductInfo &operator=(const ProductInfo &s);

		char productCategory[2];		//��Ʒ���
		short productVersion;			//��Ʒ�汾
		short probeID;					//̽ͷID //���USB ̽ͷ��Ч
		char describe[25];				//������Ϣ
		bool getInfoFlag;				//��ȡ����Ϣ��ʶ
	};

	class COLORIMAGEENGINESERVER_API SNInfo
	{
	public:
		SNInfo();

		~SNInfo();

		void ParsingMSG(unsigned char msg[32]); //����SN
		void Clear();

		SNInfo &operator=(const SNInfo &s);

		char serialNumber[32];                    //���к�
		bool getInfoFlag;                        //��ȡ����Ϣ��ʶ
	};

	class COLORIMAGEENGINESERVER_API OtherInfo
	{
	public:
		OtherInfo();

		~OtherInfo();

		void ParsingMSG(unsigned char msg[8]); //����OtherInfo
		void Clear();

		OtherInfo &operator=(const OtherInfo &s);

		bool isExportFlag;					//���ڱ�ʶ
		bool isOEMFlag;						//OEM��ʶ
		unsigned short oEMCustomerID;		//OEM customer ID
		char unProbePos;					//̽ͷλ�á�δ����
		char unReserve[4];					//û��ʹ��
		bool getInfoFlag;					//��ȡ����Ϣ��ʶ
	};

	class COLORIMAGEENGINESERVER_API PCB_PCBA_Info
	{
	public:
		PCB_PCBA_Info();

		~PCB_PCBA_Info();

		void ParsingMSG(unsigned char msg[4]); //����PCB_PCBA_Info
		void Clear();

		PCB_PCBA_Info &operator=(const PCB_PCBA_Info &s);

		char PCB_Major;                 //PCB Major ���汾
		char PCB_Minor;                 //PCB Minor �Ӱ汾 2λ��ʾ����1��ʾ��01
		char PCBA_Major;                //PCBA Major ���汾
		char PCBA_Minor;                //PCBA Minor �Ӱ汾 2λ��ʾ����1��ʾ��01

	};


	//����Ӳ����Ϣ
	class COLORIMAGEENGINESERVER_API USDeviceInfo
	{
	public:
		USDeviceInfo();

		~USDeviceInfo();

		void Clear();

		USDeviceInfo &operator=(const USDeviceInfo &s);

		bool isPowerOff;			//�Ƿ��ڵ͹���
		int VID;					//USB VID
		int PID;					//USB PID
		char DevicPath[256];		//�豸Ψһʶ��·��
		int fwVersion_major;		//usb�̼�������
		int fwVersion_minor;		//usb�̼����ӱ�
		HWInfo hwInfo;				//Ӳ����Ϣ
		ProductInfo productInfo;    //��Ʒ��Ϣ
		SNInfo snInfo;              //SN��Ϣ
		OtherInfo otherInfo;        //������Ϣ
		PCB_PCBA_Info pcb_PCBA_Info;//PCB PCBA ��Ϣ
		int usHardWareIndex;    //�����豸������  ��γ����豸�γ��Ͳ��룬�����»�ȡ��
	};
}