#include<stdio.h>

int main()
{
    int number_1,number_2;
    int op,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&number_1,&number_2);
    printf("Enter the number of operation you what to perform\n");
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n");
    scanf("%d",&op);
    switch(op)
    {
        case 1 : result = number_1+ number_2;
                break;
        
         case 2 : result = number_1 -  number_2;
                break;

         case 3 : result = number_1 * number_2;
                break;

         case 4 : result = number_1 / number_2;
                break;

        default : printf("Enter a correct number for operation.\n");
    }
    return 0;

}