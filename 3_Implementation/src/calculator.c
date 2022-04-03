/* 
Reference : Bharat Gopal
Link : https://github.com/Bharathgopal/M1_March_2022/tree/main/3_Implementation/version2
*/

#include "calculator.h"

operation_status addition(int a,int b,int* c){
    long int sum = a+b;
     
    if(sum > INT_MAX)
        return OVERFLOW;

    if (sum < INT_MIN)
        return UNDERFLOW;
    
    *c = sum;
    return SUCCESS;
    
}

operation_status subtraction(int a,int b,int* c){
    long int sub = a-b;
     
    if(sub > INT_MAX)
        return OVERFLOW;

    if (sub < INT_MIN)
        return UNDERFLOW;
    
    *c = sub;
    return SUCCESS;
    
}

operation_status multiplication(int a,int b,int* c){
    long int product = a*b;
     
    if(product > INT_MAX)
        return OVERFLOW;

    if (product < INT_MIN)
        return UNDERFLOW;
    
    *c = product;
    return SUCCESS;
    
}

operation_status division(int a,int b,int* c){
    long int div = a/b;
     
    if(div > INT_MAX)
        return OVERFLOW;

    if (div < INT_MIN)
        return UNDERFLOW;
    
    *c = div;
    return SUCCESS;
    
}

operation_status modulus(int a,int b,int* c){
    long int mod = a+b;
     
    if(mod > INT_MAX)
        return OVERFLOW;

    if (mod < INT_MIN)
        return UNDERFLOW;
    
    *c = mod;
    return SUCCESS;
    
}