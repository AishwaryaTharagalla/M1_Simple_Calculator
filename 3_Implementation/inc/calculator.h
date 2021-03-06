/* 
Reference : Bharat Gopal
Link : https://github.com/Bharathgopal/M1_March_2022/tree/main/3_Implementation/version2
*/


#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include<stdio.h>
#include<limits.h>

typedef enum operation_status
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}operation_status;

operation_status addition(int a,int b,int* c);
operation_status subtraction(int a,int b,int* c);
operation_status multiplication(int a,int b,int* c);
operation_status division(int a,int b,int* c);
operation_status modulus(int a,int b,int* c);

#endif 
