/************************************`
 * sub4_p184_pointer_pointer_list_10-7.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120113_105442			*
 * Aim:								*
 * 	1. pointer to a pointer
 *									*
 ************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void show_data(int n1[], int size)
{
	int		i;

	printf("\nn1=");
	for(i = 0; i < size; i++) {
		printf("%d", n1[i]);
		if(i < size - 1)
			printf(",");
	}
	printf("\n");
}//

void pointer_pointer( void )
{
	char	*a[2];
	char	**p;
	int		n = 0;

	a[0] = "abc"; a[1] = "defghij";
	*(a + 2) = NULL;

	//01
	printf("[LINE:%d]\n", __LINE__);
	for(; *(a+n); n++)
		printf("*(a+%d)=%s(&=%p)\n",
				n, *(a+n), &(*(a+n)));
	p = a;
	printf("*p=%s\n", *p);
	printf("*(p+1)=%s\n", *(p+1));

	printf("**p=%c *(p+1)=%s *p+1=%s\n",
				**p, *(p+1), *p+1);
	printf("*(p+1)=%s *(p+1)+1=%s"
			" *(p+1)+2=%s\n",
			*(p+1), *(p+1)+1, *(p+1)+2);
	printf("*(p+1)+2=%s *(*(p+1)+2)=%c\n",
			*(p+1)+2, *(*(p+1)+2));

}//void pointer_pointer( void )

int main( int argc, char **argv )
//int main( int argc, char argv[][] )
{
	pointer_pointer();
/*
	char	*a[2];
	char	**p;
	int		n = 0;

	a[0] = "abc"; a[1] = "defghij";
	*(a + 2) = NULL;

	// show a
	printf("*a=%s\n", *a);
	// show a using for statement
	for( ; n < 3; n++)
		printf("*(a+%d)=%s(&=%p)\n",
					n, *(a+n), &(*(a+n)));
	n = 0;
	for( ; *(a+n) != NULL; n++)
		printf("*(a+%d)=%s(&=%p)\n",
					n, *(a+n), &(*(a+n)));
*/
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
