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
#define N 10

void show_data(int *d, int n)
{
    int         i;

    printf("     ");
    for (i = 0; i < N; i++)
        printf("%2d", i);
    printf("\n");
    
    printf("data=");
    for(i = 0; i < n; i++) {
        printf("%2d", d[i]);
    }//for(i = 0; i < n; i++) {
    printf("\n");
}//void show_data
//(int *d, int n, int j, int point)void show_data(int *d, int n, int j, int point)

void show_data2(int *d, int n, int j, int point)
{
/*
 * j
 * point
 *      -1      => 
 *      1       => '*'
 *      0       => '-'
 */
    int         i;
    
    printf("data=");
    for(i = 0; i < n; i++) {
        printf("%2d", d[i]);
        if (i == j) {
            if (point == 1)
                printf("*");
            else if (point == 0)
                printf("-");
            else
                printf("?");
        }
        else
            printf(" ");
        //printf("%2d", d[i]);
    }//for(i = 0; i < n; i++) {
    printf("\n");
}//void show_data2
//(int *d, int n, int j, int point)void show_data(int *d, int n, int j, int point)

void ssort(int *d, int n)
{
    int         i, j, h;
    static int  cnt = 1;
    
    for (h = n / 2; h > 0; h /= 2) {
        printf("<pass: %d>\n", cnt);
        for (i = h; i < n; i++) {
            int tmp = d[i];
            printf("<for:j start>\n");
            for (j = i - h; 
                    j >= 0 && d[j] > tmp; j -= h) {
                printf("n=%d h=%d i=%d j=%d "
                        "d[j=%d]=%d tmp(d[i=%d])=%d"
                        " d[j+h=%d]=%d\n",
                        n, h, i, j,
                        j, d[j], i, tmp,
                        (j+h), d[j+h]);
                d[j+h] = d[j];
                show_data(d, N);
            }//for (j = i - h;
            printf("<for:j done>\n");
            d[j+h] = tmp;
        }//for (i = h; i < n; i++) {
        cnt ++;
    }//for (h = n / 2; h > 0; h /= 2) {
    
}//void ssort(int *d, int n)

int main( int argc, char *argv[] )
{
    int         i, j;
    int         d[N];
    
    //srand
    srand((unsigned) time(NULL));
    
    // set data
    for (i = 0; i < N; i++ )
        d[i] = rand() % 10;
    
    // show
/*
    printf("     ");
    for (i = 0; i < N; i++)
        printf("%2d", i);
    printf("\n");
*/
    
    show_data(d, N);
    
    ssort(d, N);

    show_data(d, N);
    
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
