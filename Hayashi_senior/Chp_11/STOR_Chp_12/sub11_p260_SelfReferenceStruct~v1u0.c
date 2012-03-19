/************************************`
 * sub11_p260_SelfReferenceStruct.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Self-referencing struct
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

typedef struct person {
	char	name[30];
	int		age;
	struct person	*next;
} Person;

int main( int argc, char* argv[] )
{
	Person		dmy = {"", 0, NULL};
	Person		*start = &dmy;
	Person		*wkdtp;
	Person		*ip;
	char		name[30], age_ss[10];

	while (1) {

		printf("Name="); gets(name);
		if ( strcmp(name, "") == 0) break;
		printf("Age="); gets(age_ss);

		wkdtp = (Person *)malloc(sizeof(Person));
		if (wkdtp == NULL) {
			printf("Can't alloc memory\n");
			exit(1);
		}//if (wkdtp == NULL) {

		strcpy(wkdtp->name, name);
		wkdtp->age = atoi(age_ss);

		for (ip=start;
				ip->next != NULL; ip = ip->next) {
			if (wkdtp->age < ip->next->age) {
				wkdtp->next = ip->next;
				ip->next = wkdtp;
				break;
			}
		}//for (ip=start;
		if (ip->next == NULL) {
			ip->next = wkdtp;
			wkdtp->next = NULL;
		}
	}//while (1) {

	for (ip = start->next; ip != NULL; ip = ip->next) {
		printf("%s %d\n", ip->name, ip->age);
	}

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
