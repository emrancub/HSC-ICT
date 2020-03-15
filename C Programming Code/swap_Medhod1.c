/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
    Program Name: How to swap two numbers without using a temporary variable
**/


#include<stdio.h>

int main()
{
    int number1, number2;
    printf("Number1 = ");
    scanf("%d",&number1);
    printf("Number2 = ");
    scanf("%d",&number2);

    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;

    printf("Number1 = %d , Number2 = %d",number1,number2);

}
