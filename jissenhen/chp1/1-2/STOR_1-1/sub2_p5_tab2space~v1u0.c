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
    
    //debug
    printf("argv=%d(%%p=%p)\n", argv);
    printf("*argv=%d(%%p=%p)\n", *argv);
    printf("argv - *argv=%d(%%p=%p)\n", argv - *argv);
    printf("sizeof(argv)=%d\n", sizeof(argv));
    //printf("++argv=%d(%%p=%p)\n", ++argv);
    printf("sizeof(argv) / sizeof(argv[0])="
            "%d\n",
            sizeof(argv) / sizeof(argv[0]));
    printf("argc=%d\n", argc);
    printf("**argv=%d(%%c=%c %%p=%p)\n",
                **argv, **argv, argv);
    printf("*argv=%s\n", *argv);
    printf("argv=%s\n", argv);
    printf("argv[0]=%s(%%p=%p &=%p)\n",
            argv[0], argv[0], &argv[0]);
    printf("\n");
    printf("*argv=%s(%%p=%p &=%p &=%d(%%d))\n",
            *argv, *argv, &(*argv), &(*argv));
    printf("\n");
    printf("**argv=%c(%%p=%p &=%p &=%d(%%d))\n",
            **argv, **argv, &(**argv), &(**argv));
    //printf("**(++argv)=%c(%%p=%p &=%p)\n",
    printf("\n");
    printf("*(++argv)=%s(%%p=%p)\n",
            *(++argv), *(++argv));
    printf("\n");
    --argv;
    printf("++*(++argv)=%s(%%p=%p)\n",
            ++*(++argv), ++*(++argv));
    printf("\n");
    --argv;
    printf("**(++argv)=%c(%%p=%p)\n",
            **(++argv), **(++argv));
    printf("\n");
            //**(++argv), **(++argv), &(**(++argv)));
/*
    printf("**(++argv)=%s\n",
                **(++argv));
*/
/*
    printf("++*argv=%s\n",
                ++*argv);
*/
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
