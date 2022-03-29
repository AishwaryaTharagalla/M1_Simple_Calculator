#include <stdio.h>
int addition(int a, int b)
{
    return a+b;
}

int subtraction(int a, int b)
{
    return a-b;
}

int multiplication(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}

int modulus(int a, int b)
{
    return a%b;
}

int main()
{
    int num1,num2,option,res;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n");
    printf("Enter the number of operation you want to perform : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: res= addition(num1,num2); break;
        case 2: res= subtraction(num1,num2); break;
        case 3: res= multiplication(num1,num2); break;
        case 4: res= division(num1,num2); break;
        case 5: res= modulus(num1,num2); break;
    }
    printf("%d\n",res);
    return 0;


}