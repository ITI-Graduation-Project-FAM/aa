/*
 * main.c
 *
 *  Created on: Mar 15, 2023
 *      Author: a-m-m
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f1(){ printf("abdalla"); return 1;}
int f2(){ printf("%x",~0);   return 1;}
const int c=3;
void printG(int var);
int main(int argc, char **argv) {
	 int a=30;
	 int b=2;
	 int c=5;
	 auto auto_A=10;
	 a<5? (b=2):(b=3);
	 5;

	printf("value of c global variable is is:%i \n",auto_A);

	scanf("%i",&a);
	int temp_add_res=0;
	for(b=0;b<=a;b++){

		temp_add_res+=b;
	}
	printf("%i \n",temp_add_res);
	//asm(nop);
	return 0;
}


