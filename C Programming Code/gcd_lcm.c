/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
**/

#include<stdio.h>

int main()
{
    int number1,number2,temp1,temp2,reminder,gcd,lcm;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&number1,&number2);

    temp1=number1;
    temp2=number2;

    while(number2!=0)
    {
        reminder=number1%number2;
        number1=number2;
        number2=reminder;
    }
    gcd=number1;
    lcm=(temp1*temp2)/gcd;

    printf("GCD = %d, LCM = %d",gcd,lcm);

    return 0;
}
