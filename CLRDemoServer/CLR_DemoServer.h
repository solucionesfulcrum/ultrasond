#pragma once
#include "ColorImageEngineServer.h"
#include "DataSource.h"
#include "CIESParamter.h"
#include "CLRData.h"

//CLR�㣬��C++����ͨ��CLR��װ��C#�㷽������CLR������ݡ�
namespace CLRDemoServer {

	public ref class CLR_DemoServer
	{
	private:
		CLR_DemoServer(void);
		~CLR_DemoServer(void);

		void ReleaseResource();
		void LoadKRProcessClass();

		static CLR_DemoServer^ m_Instance = nullptr;
		NativeInterface^ _nativeInterface;
		CIES::Native* m_pNative;
		CIES::ColorImageEngineServer* m_pImageEngineServer;
		CIES::DataSource* m_pDataSource;
		bool m_bStartSaveVideo;
		CIES::UImagingData* pD_PWArray;
		int m_nD_PWArrayLen;
	public:

		static CLR_DemoServer^ GetInstance();	//��ȡ����

		static void ReleaseInstance();		//ע��

		int GetSDKVersion(array<int >^ SDKversion); //��ȡSDK�汾

		int GetUSDeviceInfos(array<CLRUSDeviceInfo^>^ usDeviceInfoArray, int% getDataNum);
		void SetUSDevicePath(System::String^ DevicePath);

		int SetParamPath(System::String^ paramPath, CLScanMode::CLScanModeEnum scanMode);	//���ò���Ŀ¼

		int StartImageEngine();				//����ͼ������
		int StopImageEngine();				//ֹͣͼ������

		void Freeze();
		void UnFreeze();

		bool IsRuning();

		int GetHardWareInfo(CLRHardWareInfo^ hardWareInfo);

		int GetProberInfo(Probe_Info^ probeInfo, System::String^ paramPath); //��ȡ̽ͷ��Ϣ
		int GetD_PWInfo(D_PWInfo^ pwInfo, System::String^ paramPath);			 //��ȡPW��ʾ��Ϣ
		int SetImageParam_B(B_ImageParam_CLR^ b_ImageParam_CLR); //�����㷨����
		int SetImageParam_C(C_ImageParam_CLR^ c_ImageParam_CLR); //�����㷨����
		int SetImageParam_D_PW(D_PW_ImageParam_CLR^ d_PW_ImageParam_CLR); //�����㷨����
		int SetImageParam_M(M_ImageParam_CLR^ m_ImageParam_CLR); //�����㷨����

		/// ���ý��㣬�˽������÷�Χ�޶��ڻ�ȡ��ȫ�򽹵㷶Χ�ڡ� mm
		/// </summary>
		int SetFocusArea(float fFocusArea);

		int GetCurrentFocusArea(float% startDepth, float% endDepth);//��ȡ��ǰ������Χ  ��B�Ļ���/г���л��� ����л��������޸�ʱ��ȡ
		//��ȡ��ǰ������  ��B�Ļ���/г���л��� ����л�ʱ��ȡ������ֵ����
		//���鳤��8��1~6������0~6��7~8��ȫ�����ʼ����
		int GetCurrentFocusArray(array<float>^ B_FocusArray);
		int GetCurrentFocusArrayByParamPath(System::String^ paramPath, int m_nDepth_level, int m_nHarmonic, array<float>^ B_FocusArray);


		int GetColorMap(array<int>^ B_MapArray, array<int>^ C_MapArray); // ��ȡmap
		int GetColorMap_B(array<int>^ B_MapArray);
		int GetColorMap_C(array<int>^ C_MapArray);
		int GetColorMap_D(array<int>^ D_MapArray);
		int GetColorMap_M(array<int>^ M_MapArray);

		int GetImageDisplayData(ImageData^ imageData);	//��ȡ��ʾ����

		int GetHistoryImageCount();						//��ȡ��ʷͼ��������(¼��������)
		int GetHistoryImageData(ImageData^ imageData, int nIndex); //��ȡ��ʷ����
		int GetImageDisplayData_D_PW(ImageData^ imageData, int dataNumber, bool% resetDisplayData);	//��ȡ��ʾ���� D_PWģʽ��ʹ��
		int GetHistoryImageData_D_PW(ImageData_D_PW^ imageData, int startIndex, int dataNumber);
		int GetHistoryImageData_BM(int OneScreenWidth, int index, ImageData^ imageData, int% StartPixel, int% MIndexPixel, double MIndexAppend, bool getOneScreen, double MPosOnScreen);

		float GetCurrentFrameRate();					//��ȡ��ǰ֡��

		void SetUseImageHistoryCache(bool isUse, int cacheLen);

		void SetDelegateMthod(HardWareMsgHandler^ d);
		void SetDelegateMthod(HardWareMsgSHandler^ d);
		void ClearDelegateMthod();


		bool IsUSBOpen();	//USB�豸�Ƿ���


		int GetImageWidthPixels();		//��ȡͼ���

		int GetImageHeightPixels();		//��ȡͼ���

		int PowerOn(System::String^ DevicePath);
		int PowerOff(System::String^ DevicePath);

	public: //C
		/*
		*����Cȡ���Ų���
		*
		*֡ͼ�����Ͻ�Ϊԭ�� 0,0
		*
		*Param
		*int Depth		//��ǰ��� mm
		*double nFWidthP	//֡ͼ�������أ�SDK��ʵ���ϴ���ֵ
		*double nFHeightP	//֡ͼ��߶����أ�SDK��ʵ���ϴ���ֵ
		*double nIWidthP	//ʵ��ͼ������������ SDK��ʵ���ϴ���ֵ
		*double nIHeightP	//ʵ��ͼ������߶����� SDK��ʵ���ϴ���ֵ
		*double SX			//ȡ�������ϵ�����X�������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SY			//ȡ�������ϵ�����Y�������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SWidhtLenP	//ȡ��������أ��ı��εĿ��������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SHeightLenP//ȡ��������أ��ı��εĸߣ��������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*int LDAngle	//����ƫת�Ƕ�
		*
		*return
		* -2 : ��������ʧ�� ����USB�Ƿ���������
		* -3 : �����ղ�����ȡʧ��
		* 0  : �ɹ�
		*/
		int SetCSamplingFrameParam_Quadrangle(int Depth, double nFWidthP, double nFHeightP, double nIWidthP, double nIHeightP, double SX, double SY, double SWidthLen, double SHeightLen, int LDAngle);


		/*
		*��ȡPRF
		*Param
		*int Depth			//��ǰ��� mm
		*double nIHeightP	//ʵ��ͼ������߶����� SDK��ʵ���ϴ���ֵ��
		*double SY			//ȡ�������ϵ�����Y�������֡ͼ���λ�ã������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SHeightLenP //ȡ��������أ��ı��εĸߣ��������ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*int LDAngle		//����ƫת�Ƕ�
		*array<float>^ fPrfList	//PRF�б�== 8
		*double% fTxFrequency //����Ƶ�ʣ���ǰprf�б��Ӧ��Ƶ��
		*return
		* -1 : fPrfListLen����С��8
		* -2 : û�л�ȡ����ǰģʽ��CPRF����
		* -3 : ���ݵ�ǰ���������ȡ������ȳ���������Χ
		* -4 : ����CPRF������Χ
		* 0  : �ɹ�
		*/
		int Get_C_PRFList_Quadrangle(int Depth, double nIHeightP, double SY, double SHeightLen, int LDAngle, array<double>^ fPrfList, double% fTxFrequency);

		/*
		*����Cȡ���Ų���
		*
		*������ȡ���ǲ����󣬵���Get_C_PRFList_Sector������ȡ�µ�PRF�б�Ȼ������C ��PRFLevel����
		*
		*֡ͼ�����Ͻ�Ϊԭ�� 0,0
		*
		*Param
		*int Depth			//��ǰ��ʾ�������� mm
		*double nFWidthP	//֡ͼ�������أ�SDK��ʵ���ϴ���ֵ
		*double nFHeightP	//֡ͼ��߶����أ�SDK��ʵ���ϴ���ֵ
		*double nIWidthP	//ʵ��ͼ������������ SDK��ʵ���ϴ���ֵ
		*double nIHeightP	//ʵ��ͼ������߶����� SDK��ʵ���ϴ���ֵ
		*double SCToPCCP	//����ȡ��������ĵ㵽̽ͷԲ�ĵĳ��ȣ���λ���� �����ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SHeight		//����ȡ����ĸ߶ȣ����»��Ĳ��λ���� �����ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SectorAngle	//����ȡ����ļн� ��λ��
		*double SectorCenterAngle//����ȡ��������ĵ㵽̽ͷԲ�ĵ�������X��������ļнǣ�˳ʱ�뷽����ֱ ��λ��

		*return
		* -2 : ��������ʧ�� ����USB�Ƿ���������
		* -3 : �����ղ�����ȡʧ��
		* 0  : �ɹ�
		*/
		int SetCSamplingFrameParam_Sector(int Depth, double nFWidthP, double nFHeightP, double nIWidthP, double nIHeightP, double SCToPCCP, double SHeight, double SectorAngle, double SectorCenterAngle);

		/*
		*��ȡPRF
		*Param
		*int Depth			//��ǰ��ʾ�������� mm
		*double nIHeightP	//ʵ��ͼ������߶����� SDK��ʵ���ϴ���ֵ��
		*double SCToPCCP	//����ȡ��������ĵ㵽̽ͷԲ�ĵĳ��ȣ���λ���� �����ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double SHeight		//����ȡ����ĸ߶ȣ����»��Ĳ��λ���� �����ʾ�н��зŴ���С����������ݱ��������ʵ�ʵ�ֵ��
		*double* fPrfList	//PRF�б�
		*int &fPrfListLen   // == 8
		*double% fTxFrequency //����Ƶ�ʣ���ǰprf�б��Ӧ��Ƶ��
		*return
		* -1 : fPrfListLen����С��8
		* -2 : û�л�ȡ����ǰģʽ��CPRF����
		* -3 : ���ݵ�ǰ���������ȡ������ȳ���������Χ
		* -4 : ����CPRF������Χ
		* 0  : �ɹ�
		*/
		int Get_C_PRFList_Sector(int Depth, double nIHeightP, double SCToPCCP, double SHeight, array<double>^ fPrfList, double% fTxFrequency);
	public://D

		/*
		*����D_PW ȡ���Ų���
		*
		*Param
		*float SX ȡ�������ĵ�Yֵ
		*float SY ȡ�������ĵ�Yֵ
		*float depth ��ǰ���mm
		*float fIWidthP ��ǰB��ʾ�������
		*float fIHeightP ��ǰB��ʾ����
		*int launchDeflectionAngle ����ƫת�Ƕ�
		*int samplingVolume ȡ���ſ��
		*
		*return
		* -2 : ��������ʧ�� ����USB�Ƿ���������
		* -3 : �����ղ�����ȡʧ��
		* 0  : �ɹ�
		*/
		int SetD_PWSamplingGateParam_Line(float SX, float SY, float Depth, float fIWidthP, float fIHeightP, int launchDeflectionAngle, int samplingVolume); //����ȡ���Ų���

		/*
		*��ȡPRF
		*Param
		*float SY					ȡ�������ĵ�Yֵ
		*float depth				��ǰ���,mm
		*float fIHeightP			��ǰB��ʾ����
		*int launchDeflectionAngle	����ƫת�Ƕ�
		*double* fPrfList			//PRF�б�
		*double% fTxFrequency //����Ƶ�ʣ���ǰprf�б��Ӧ��Ƶ��
		*return
		* -1 : fPrfListLen����С��8
		* -2 : û�л�ȡ����ǰģʽ��CPRF����
		* -3 : ���ݵ�ǰ���������ȡ������ȳ���������Χ
		* -4 : ����CPRF������Χ
		* 0  : �ɹ�
		*/
		int Get_D_PRFList_Line(float SY, float Depth, float fIHeightP, int launchDeflectionAngle, array<double>^ fPrfList, double% fTxFrequency);

		/*
		*����D_PW ȡ���Ų���
		*
		*Param
		*float SX ȡ�������ĵ�Yֵ
		*float SY ȡ�������ĵ�Yֵ
		*float depth ��ǰ���mm
		*float fIWidthP ��ǰB��ʾ�������
		*float fIHeightP ��ǰB��ʾ����
		*float SectorCenterAngle ����ȡ��������ĵ㵽̽ͷԲ�ĵ�������X��������ļнǣ�˳ʱ�뷽����ֱ ��λ��
		*int samplingVolume ȡ���ſ��
		*
		*return
		* -2 : ��������ʧ�� ����USB�Ƿ���������
		* -3 : �����ղ�����ȡʧ��
		* 0  : �ɹ�
		*/
		int SetD_PWSamplingGateParam_Convex(float SX, float SY, float Depth, float fIWidthP, float fIHeightP, float SectorCenterAngle, int samplingVolume);

		/*
		*��ȡPRF
		*Param
		*float SX					ȡ�������ĵ�Yֵ
		*float SY					ȡ�������ĵ�Yֵ
		*float depth				��ǰ���cm
		*float fIWidthP				��ǰB��ʾ�������
		*float fIHeightP			��ǰB��ʾ����
		*double* fPrfList			//PRF�б�
		*double% fTxFrequency //����Ƶ�ʣ���ǰprf�б��Ӧ��Ƶ��
		*return
		* -1 : fPrfListLen����С��8
		* -2 : û�л�ȡ����ǰģʽ��CPRF����
		* -3 : ���ݵ�ǰ���������ȡ������ȳ���������Χ
		* -4 : ����CPRF������Χ
		* 0  : �ɹ�
		*/
		int Get_D_PRFList_Convex(float SX, float SY, float Depth, float fIWidthP, float fIHeightP, array<double>^ fPrfList, double% fTxFrequency);

		/*
		*����D_PW ȡ���Ų���
		*
		*Param
		*float SX ȡ�������ĵ�Yֵ
		*float SY ȡ�������ĵ�Yֵ
		*float depth ��ǰ���mm
		*float fIWidthP ��ǰB��ʾ�������
		*float fIHeightP ��ǰB��ʾ����
		*float SectorCenterAngle ����ȡ��������ĵ㵽̽ͷԲ�ĵ�������X��������ļнǣ�˳ʱ�뷽����ֱ ��λ��
		*int samplingVolume ȡ���ſ��
		*
		*return
		* -2 : ��������ʧ�� ����USB�Ƿ���������
		* -3 : �����ղ�����ȡʧ��
		* 0  : �ɹ�
		*/
		int SetD_PWSamplingGateParam_PA(float SX, float SY, float Depth, float fIWidthP, float fIHeightP, float SectorCenterAngle, int samplingVolume);

		/*
		*��ȡPRF
		*Param
		*float SX					ȡ�������ĵ�Yֵ
		*float SY					ȡ�������ĵ�Yֵ
		*float depth				��ǰ���cm
		*float fIWidthP				��ǰB��ʾ�������
		*float fIHeightP			��ǰB��ʾ����
		*double* fPrfList			//PRF�б�
		*double% fTxFrequency //����Ƶ�ʣ���ǰprf�б��Ӧ��Ƶ��
		*return
		* -1 : fPrfListLen����С��8
		* -2 : û�л�ȡ����ǰģʽ��CPRF����
		* -3 : ���ݵ�ǰ���������ȡ������ȳ���������Χ
		* -4 : ����CPRF������Χ
		* 0  : �ɹ�
		*/
		int Get_D_PRFList_PA(float SX, float SY, float Depth, float fIWidthP, float fIHeightP, array<double>^ fPrfList, double% fTxFrequency);



	public://M

		int SetSamplingLineParam_Line(float SLX, float depth, float imageWidth, float imageHight);
		int SetSamplingLineParam_Convex(float SectorCenterAngle, float depth, float imageWidth, float imageHight);
		int SetSamplingLineParam_Phased(float SectorCenterAngle, float depth, float imageWidth, float imageHight);

		public:
			/*
			*�Զ��ܾ�����
			*��������
			*int index				��ȡ��ʾ���ݵ��������ȵ���GetImageDisplayCacheDataCount������ȡ�����������Num�������ķ�Χ��0 - (Num-1)��
			*float PointOnBImageX	Bͼ����ѡȡ��һ���X������
			*float PointOnBImageY	Bͼ����ѡȡ��һ���Y������
			*float &CenterOfVascularDiameterX	����Ѫ��Բ�ĵ�X������
			*float &CenterOfVascularDiameterY	����Ѫ��Բ�ĵ�Y������
			*float &VascularRadius				����Ѫ�ܰ뾶
			*
			*����ֵ��-1��ʾ�Զ��ܾ�����ʧ��
			*
			*/
			int AutomaticDiameterMeasurement(int index, float PointOnBImageX, float PointOnBImageY, float% CenterOfVascularDiameterX, float% CenterOfVascularDiameterY, float% VascularRadius); //�Զ��ܾ�����


			/*
			*�Զ�TGC����
			*
			*array<float>^ fTGCList		����TGC �����������鳤�ȹ̶���6
			*
			*����ֵ��-1��ʾ�Զ�TGCʧ��
			*
			*/
			int AutomaticTGC(array<float>^ fTGCList);


			/**
			* ����Cͼ���Զ�����Dģʽȡ����λ��
			*/
			int AutomaticSV(float% svx, float% svy, float% svH, int% svAngleLevel);

			//Dģʽ�Զ�PRF �Զ�Baseline
			int AutoPRF(int% PRF_level, int% Baseline_level);


	private:

		int _setImageParam_B(B_ImageParam_CLR^ b_ImageParam_CLR);
		int _setImageParam_C(C_ImageParam_CLR^ c_ImageParam_CLR);
		int _setImageParam_D_PW(D_PW_ImageParam_CLR^ d_PW_ImageParam_CLR);
		int _setImageParam_M(M_ImageParam_CLR^ m_ImageParam_CLR);

		int _getImageDisplayData(ImageData^ imageData);
		int _getHistoryImageData(ImageData^ imageData, int nIndex);
		int _getImageDisplayData_D_PW(ImageData^ imageData, int dataNumber, bool% resetDisplayData);
		int _getHistoryImageData_D_PW(ImageData_D_PW^ imageData, int startIndex, int dataNumber);
		int _getHistoryImageData_BM(int OneScreenWidth, int index, ImageData^ imageData, int% StartPixel, int% MIndexPixel, double MIndexAppend, bool getOneScreen, double MPosOnScreen);

		int _getUSDeviceInfos(array<CLRUSDeviceInfo^>^ usDeviceInfoArray, int% getDataNum);
		int _getHardWareInfo(CLRHardWareInfo^ hardwareInfo);
		int _getProbeInfo(Probe_Info^ probeInfo, System::String^ paramPath);
		int _getD_PWInfo(D_PWInfo^ pwInfo, System::String^ paramPath);

		int _getCurrentFocusArrayByParamPath(System::String^ paramPath, int m_nDepth_level, int m_nHarmonic, array<float>^ B_FocusArray);

	};
}
