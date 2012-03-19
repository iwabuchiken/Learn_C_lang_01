#ifndef INCLUDE_STDIO
#define INCLUDE_STDIO
#include <stdio.h>
#endif
#ifndef INCLUDE_STDLIB
#define INCLUDE_STDLIB
#include <stdlib.h>
#endif
#ifndef INCLUDE_STRING
#define INCLUDE_STRING
#include <string.h>
#endif
#ifndef INCLUDE_TIME
#define INCLUDE_TIME
#include <time.h>
#endif
#ifndef INCLUDE_MATH
#define INCLUDE_MATH
#include <math.h>
#endif

//v=1.0
//created_at=20111215_090623
//project=C:\workspaces\ws_ubuntu_1\G20111215_090623_CExam_class2\main.c

// structure, etc. ======================
typedef struct abc {
    int i;
} ABC;

// prototypes ======================
void func1( void );

// functions ======================

int main( int argc, char *argv[] )
{
    int         i;
    
    //for(i = 6; i < 0; i++) {
    //for(i = 6; i < 6; i++) {
    for(i = 6; i < 7; i++) {
        printf("for: i=%d\n", i);
    }
    printf("i=%d\n", i);
    return 0;
}//int main( int argc, char *argv[] )

/*
#ifdef D
    printf("[%s:%d]", __FILE__, __LINE__);
#endif

    printf("Content-Type: text/html;charset=shift-jis\n\n");
    printf(__FILE__); printf("<br>\n");
    printf(CREATED_AT); printf("<br>\n");
*/
