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
    int         ch;
    int         pos = 1;
    
    while ((ch = fgetc(src)) != EOF) {
        int     num;
        switch (ch) {
            case '\t':
                num = width - (pos - 1) % width;
                for ( ; num > 0; num--) {
                    fputc(' ', dst);
                    pos++;
                }//for ( ; num > 0; num--) {
                break;
            case '\n':
                fputc(ch, dst); pos = 1; break;
            default:
                fputc(ch, dst); pos++; break;
        }//switch (ch) {
    }//while ((ch = fgetc(src)) != EOF) {
}//void invisible_error( void )

int main( int argc, char *argv[] )
{
    int         width = 8;
    FILE        *fp;
    int         i;
   
    if (argc < 2)
        detab(stdin, stdout, width);
    else {
        while (--argc > 0) {
            if (**(++argv) == '-') {
                if (*++(*argv) == 't')
                    width = atoi(++*argv);
                else {
                    fputs("パラメータが不正です。\n",
                                stderr);
                    return (1);
                }//if (**(++argv) == '-') {
            } else if 
                ((fp = fopen(*argv, "r")) == NULL){
                fprintf(stderr,
                    "ファイル%sがオープンできません。\n", *argv);
                return (1);
            } else {
                detab(fp, stdout, width);
                fclose(fp);
            }//if (**(++argv) == '-') {
        }//while (--argc > 0) {
    }//if (argc < 2)
    
    //detab();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
