/*******************************************************************************
 *
 * Copyright (C) 2019 TUSUR, FB, Baranov Dmitriy
 *
 * File              : main.c
 * Compiler          : IAR for ARM
 * Version           : 1.0001
 * Created File      : 3.03.2019
 * Last modified     : 14.05.2019
 *
 * Support mail      : baranov19972015@gmail.com
 * Target MCU        : MCU: Milandr 1986BE9x
 *
 * Description       : Work with stack
 *
********************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define OPERATION_MODE 1
/*
	1 - trans parameters with stack
	2 - overflow stack with array
	3 - overflow stack with recursion
	4 - two stack pointer using 
*/ 

void init(int j[]){
  for(int i=0; i<1344; ++i){
    j[i] = 1;
  }
}

int rec(int n){
  return rec(n)+rec(n);
}

int test(int a,int b,int c,int d,int e, int x){
  return(a+b+c+d+e+x);
}

int main() {

	if(OPERATION_MODE==1){
		//stack_params
  		int x = test(1,2,3,4,5,6);
	}

	if(OPERATION_MODE==2){
		//arrays
	  	int mas[1344];
	  	init(mas);
	}

	if(OPERATION_MODE==3){
		//rec
  		rec(5);
	}

	if(OPERATION_MODE==4){
		//two_stack_pointers
		asm(
		    "MOVS R0, #0x2 \n"
		    "MSR CONTROL, R0 \n"
		);
		  
		asm(
		    "MOVS R0, #0x0 \n"
		    "MSR CONTROL, R0 \n"
		);
	}
  
  return 0;
}

