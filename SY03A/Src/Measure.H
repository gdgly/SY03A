/************************************************************************
* ��Ȩ���� (C)2016, �����������ܿƼ��ɷ����޹�˾��
*
* �ļ����ƣ� // Measure.H
* �ļ���ʶ�� // �����ۼ��ļ�ͷ
* ����ժҪ�� // 
* ����˵���� //
* ��ǰ�汾�� // V01.00
* �� �ߣ� // yangxing
* ������ڣ� // 2016��08��06��
*
* �޸ļ�¼1��//
* �޸����ڣ�
* �� �� �ţ�
* �� �� �ˣ�
* �޸����ݣ�
************************************************************************/

#ifdef	Measure_H
#define	Measure_EXT
#else
#define	Measure_EXT extern
#endif


Measure_EXT signed short  g_PerKwh;//0.01Kwh
Measure_EXT signed short  g_Per1Kwh;//0.1Kwh
Measure_EXT unsigned char FramGrpWriteFlag;
Measure_EXT unsigned char E2PGrpWriteFlag;
Measure_EXT unsigned char FramWriteFlag;
Measure_EXT unsigned char E2PWriteFlag;

//��������
extern void MonthEngry_Resume(void);
extern void CycleEngry_Resume(void);
extern void EC_ActGroup(void);
extern void EC_RactGroup(unsigned char MeasureSta, unsigned char Mode);
extern void APulseCnt(void);
extern void RPulseCnt( unsigned short* CntAdd, unsigned char Num );
extern void PulseCount(void);
extern void ECMeasure(void);
extern void PowerMeasure(void);
Measure_EXT void Y_M_C_CycleEngry(unsigned char Mode, unsigned char *ReturnBuf);