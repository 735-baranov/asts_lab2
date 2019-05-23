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
  
  //stack_params
  //int x = test(1,2,3,4,5,6);
  
  //overflow_stack
  
  //arrays
  //int mas[1344];
  //init(mas);
  
  //rec
  //rec(5);
  
  //two_stack_pointers
  /*asm(
      "MOVS R0, #0x2 \n"
      "MSR CONTROL, R0 \n"
  );
  
  asm(
      "MOVS R0, #0x0 \n"
      "MSR CONTROL, R0 \n"
  );*/
  
  return 0;
}

