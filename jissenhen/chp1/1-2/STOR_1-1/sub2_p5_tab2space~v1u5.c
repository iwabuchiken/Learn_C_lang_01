#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "max.h"

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void detab( FILE *src, FILE *dst, int width )
{
    
}//void invisible_error( void )

int main( int argc, char *argv[] )
{
    int         width = 8;
    FILE        *fp;
    int         i;
    
    //debug        
    //1
    printf("[%s:%d]\n", __FILE__, __LINE__);
    printf("<1>\n");
    printf("*argv=%s(%%p=%p &=%p)\n",
            *argv, *argv, &(*argv));
            //*argv, *argv, &(*argv), &(*argv));
    ++*argv;
    printf("++*argv: %%p=%p\n", *argv);
    printf("*argv=%s\n", *argv);
    printf("**argv=%c\n", **argv);
    //printf("*argv=%s\n", *argv);
    --*argv;
    printf("*++(*argv)=%c\n", *++(*argv));
    printf("\n");
    
    exit(0);
    
    if (argc < 2)
        detab(stdin, stdout, width);
    else {
        while (--argc > 0) {
            if (**(++argv) == '-') {
                if (**(++argv) == 't')
                    width = atoi(++*argv);
                else {
                    fputs("パラメータが不正です。\n",
                                stderr);
                    return (1);
                }//if (**(++argv) == '-') {
            } else if 
                ((fp = fopen(*argv, "r")) == NULL){
                fprintf(stderr, "ファイル%sがオープンできません。\n", *argv);
            }//if (**(++argv) == '-') {
        }
    }//if (argc < 2)
    
    //detab();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
