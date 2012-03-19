/************************************`
 * sub4_list_17-5.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1.
 * Tips:
 * 	1. gcc compile options
 * 	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\Hayashi_senior\Chp_17>gcc
--input-charset=cp932 --exec-charset=cp932 sub4_list_17-5.c -o sub4_list_17-5_gc
c.exe
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h> /* wctomb() */
#include <string.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h> /* setlocale(), LC_ALL */

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	wchar_t			wdch = L'ˆŸ';
	wchar_t			wdch_wk;
	unsigned char	mbch[MB_LEN_MAX];
	int				length, n, i;
	char			ch[] = "ˆŸ";
	char			ch2[] = "‚±‚ñ‚É‚¿‚Í";
	//unsigned char	ss[] = "‚`‚a‚b‚cŠ¿Žš";
	//wchar_t			wdss[] = L"‚`‚a‚b‚cŠ¿Žš";
	unsigned char	ss[] = "ABCDŠ¿Žš";
	wchar_t			wdss[] = L"ABCDŠ¿Žš";
	unsigned char	mbss[80];
	wchar_t			wdss_wk[80];

	//01 set locale
	setlocale(LC_ALL, "jpn");

	//02
	printf("wdch = L'ˆŸ' => %04X\n\n", wdch);

	//03
	printf("<wctomb(mbch, wdch)>\n");
	length = wctomb(mbch, wdch);
	printf("mbch[0]=%02X mbch[1]=%02X \n\n",
				mbch[0], mbch[1]);
	printf("length=%d\n", length);

	//04 mb -> wc
	printf("\n<mbtowc(&wdch_wk, mbch, 2)>\n");
	mbtowc(&wdch_wk, mbch, 2);
	printf("wdch_wk=%04X\n\n", wdch_wk);
	//printf("mbch=%s\n\n", mbch);
	putchar(mbch[0]); putchar(mbch[1]);
	printf("\n");
	printf("ch=%s\n", ch);
	printf("ch2=%s\n", ch2);
	printf("mbch=%s\n", mbch);
	printf("wdch_wk=%c\n", wdch_wk);

	//05 length of an mb char
	printf("\n<wctomb(mbch, L'Š¿')>\n");
	wctomb(mbch, L'Š¿');
	n = mblen(mbch, MB_CUR_MAX);
	printf("mb 'Š¿': len=%d\n", n);
	wctomb(mbch, L'‚`');
	n = mblen(mbch, MB_CUR_MAX);
	printf("mb '‚`': len=%d\n", n);

	//06
	printf("\n<06: ss[i] >\n");
	printf("ss=%s\n", ss);
	for (i=0; ss[i]; i++)
		printf("%02X ", ss[i]);
	printf("\n\n");

	//07
	printf("\n<07: wdss[i] >\n");
	//printf("wdss=%s\n", wdss);
	for (i=0; wdss[i]; i++)
		printf("%04X ", wdss[i]);
	printf("\n\n");

	//08
	printf("\n<08: wcstombs(mbss, wdss, 80) >\n");
	n = wcstombs(mbss, wdss, 80);
	printf("n=%d\n", n);
	for (i=0; ss[i]; i++)
		printf("%02X ", ss[i]);
	printf("\n\n");

	//09
	printf("\n<09: mbstowcs(wdss_wk, mbss, 80)"
						" >\n");
	n = mbstowcs(wdss_wk, mbss, 80);
	printf("n=%u\n", n);
	for (i=0; wdss_wk[i]; i++)
		printf("%04X ", wdss_wk[i]);
	printf("\n\n");

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
