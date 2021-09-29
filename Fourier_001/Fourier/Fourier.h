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

#define FFT_ERROR_NONE									0	/* 問題なし */
#define FFT_ERROR_FATAL									-1	/* ありえないエラー */
#define FFT_ERROR_SERVICEID_NOTFIND						-2	/* サービスIDが見つからない */
#define FFT_ERROR_NUMOFARGUMENT							-3	/* 引数の数が不正 */
#define FFT_ERROR_SERVICEIDLENGTH						-4	/* サービスIDのバイト数不正 */
#define FFT_ERROR_PATHNOTFIND							-5	/* パスがみつからない */
#define FFT_ERROR_FILENOTFIND							-6	/* ファイルがみつからない */
#define FFT_ERROR_NOMEMORY								-7	/* メモリが確保できない */
#define FFT_ERROR_TIMEOUT								-8	/* タイムアウト */
#define FFT_ERROR_UNKNOWN								-9	/* 原因不明 */
#define FFT_ERROR_UNSUPPORTEDFORMAT						-10	/* 未サポートの形式 */
#define FFT_ERROR_SYSTEMPATHNOTFIND						-11	/* システムパスがみつからない */
#define FFT_ERROR_FILENOTFIND_AUTHENTICATEDPROVIDERS	-12	/* 登録者管理ファイルがみつからない */
#define FFT_ERROR_INIFILENOTFIND						-13	/* .iniファイルがみつからない */
#define FFT_ERROR_MYSERVICEID_NOTFIND					-14	/* 自分に属するサービスIDが見つからない */
#define FFT_ERROR_FILESIZE								-15	/* ファイルサイズが不正 */
#define FFT_ERROR_IO									-16	/* ファイルIOエラー */
#define FFT_ERROR_ILLEGALARGUMENT						-17	/* 引数不正 */
#define FFT_ERROR_MUTEX									-18	/* MUTEX異常 */
#define FFT_ERROR_ACCESSDENIED							-19	/* アクセスが許可されていない */

#define IS_2_POW_N(X)   (((X)&(X-1)) == 0)

/* データ数 */
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
