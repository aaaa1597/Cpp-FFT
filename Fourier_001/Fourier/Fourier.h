#pragma once

#if defined(__cplusplus) || defined(_USRDLL)
#define DLLEXTRA extern "C" __declspec(dllexport)
#elif defined(__cplusplus)
#define DLLEXTRA extern "C" __declspec(dllimport)
#elif defined(_USRDLL)
#define DLLEXTRA __declspec(dllexport)
#else
#define DLLEXTRA __declspec(dllimport)
#endif

#define FFT_ERROR_NONE									0	/* ���Ȃ� */
#define FFT_ERROR_FATAL									-1	/* ���肦�Ȃ��G���[ */
#define FFT_ERROR_SERVICEID_NOTFIND						-2	/* �T�[�r�XID��������Ȃ� */
#define FFT_ERROR_NUMOFARGUMENT							-3	/* �����̐����s�� */
#define FFT_ERROR_SERVICEIDLENGTH						-4	/* �T�[�r�XID�̃o�C�g���s�� */
#define FFT_ERROR_PATHNOTFIND							-5	/* �p�X���݂���Ȃ� */
#define FFT_ERROR_FILENOTFIND							-6	/* �t�@�C�����݂���Ȃ� */
#define FFT_ERROR_NOMEMORY								-7	/* ���������m�ۂł��Ȃ� */
#define FFT_ERROR_TIMEOUT								-8	/* �^�C���A�E�g */
#define FFT_ERROR_UNKNOWN								-9	/* �����s�� */
#define FFT_ERROR_UNSUPPORTEDFORMAT						-10	/* ���T�|�[�g�̌`�� */
#define FFT_ERROR_SYSTEMPATHNOTFIND						-11	/* �V�X�e���p�X���݂���Ȃ� */
#define FFT_ERROR_FILENOTFIND_AUTHENTICATEDPROVIDERS	-12	/* �o�^�ҊǗ��t�@�C�����݂���Ȃ� */
#define FFT_ERROR_INIFILENOTFIND						-13	/* .ini�t�@�C�����݂���Ȃ� */
#define FFT_ERROR_MYSERVICEID_NOTFIND					-14	/* �����ɑ�����T�[�r�XID��������Ȃ� */
#define FFT_ERROR_FILESIZE								-15	/* �t�@�C���T�C�Y���s�� */
#define FFT_ERROR_IO									-16	/* �t�@�C��IO�G���[ */
#define FFT_ERROR_ILLEGALARGUMENT						-17	/* �����s�� */
#define FFT_ERROR_MUTEX									-18	/* MUTEX�ُ� */
#define FFT_ERROR_ACCESSDENIED							-19	/* �A�N�Z�X��������Ă��Ȃ� */

#define IS_2_POW_N(X)   (((X)&(X-1)) == 0)

/* �f�[�^�� */
#define FFT_N_32		32
#define FFT_N_128		128
#define FFT_N_256		256
#define FFT_N_512		512
#define FFT_N_1024		1024
#define FFT_N_2048		2048
#define FFT_N_4096		4096
#define FFT_N_16384		16384
#define FFT_N_65536		65536
#define FFT_N_131072	131072
#define FFT_N_262144	262144
#include <string>

DLLEXTRA int HigashiWindow(double ConvergenceValue, double ar[], int aN);
DLLEXTRA int setFilter(double smooth, int aN, double filterary[]);
DLLEXTRA int execFilter(double ar[], double ai[], int aN, double filterary[]);
DLLEXTRA int FFT(double data[], int aN, double retr[], double reti[]);
DLLEXTRA int iFFT(double ar[], double ai[], int aN, double retr[]);
DLLEXTRA void print(double *ar, double *ai, int n);
DLLEXTRA void printd(double *ar, int n);
DLLEXTRA void logi(std::string logstr);
