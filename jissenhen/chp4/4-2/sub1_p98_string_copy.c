#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

void scp1(char *f, char *t)
{
    while (*f != '\0') {
        *t = *f;
        f++; t++;
    }
    *t = '\0';
}//void scp1(char *f, char *t)

void scp2(char *f, char *t)
{
    do {
        *t++ = *f++;
    } while (*f);
    
    //*t = '\0';
}//void scp2(char *f, char *t)

void scp3(char *f, char *t)
{
    do {
        *t++ = *f++;
    } while (*f);
    
    *t = '\0';
}//void scp3(char *f, char *t)

int main( int argc, char *argv[] )
{
    char        astr[7] = "abc";
    char        bstr[7] = "xxxxxx";
    char        cstr[7] = "yyyyyy";
    char        dstr[7] = "zzzzzz";
    
    printf("astr[]=%s\n", astr);
    printf("bstr[]=%s\n", bstr);
    printf("cstr[]=%s\n", cstr);
    printf("dstr[]=%s\n", dstr);
    
    scp1(astr, bstr);
    printf("<scp1(astr, bsr)>\n");
    printf("astr[]=%s\n", astr);
    printf("bstr[]=%s\n", bstr);
    printf("cstr[]=%s\n", cstr);
    printf("dstr[]=%s\n", dstr);
    
    scp2(astr, cstr);
    printf("<scp2(astr, cstr)>\n");
    printf("astr[]=%s\n", astr);
    printf("bstr[]=%s\n", bstr);
    printf("cstr[]=%s\n", cstr);
    printf("dstr[]=%s\n", dstr);
    
    scp3(astr, dstr);
    printf("<scp3(astr, dstr)>\n");
    printf("astr[]=%s\n", astr);
    printf("bstr[]=%s\n", bstr);
    printf("cstr[]=%s\n", cstr);
    printf("dstr[]=%s\n", dstr);
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
