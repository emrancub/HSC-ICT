/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
    Program Name: Factorial in C using a for loop
**/

#include <stdio.h>

int main()
{
  int c, n, f = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;

  printf("Factorial of %d = %d\n", n, f);

  return 0;
}
/**
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
**/
/**
#include<stdio.h>
int main(){
  int i,f=1,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("Factorial of %d is: %d",num,f);
  return 0;
}
**/


/*C program to find factorial of a number.*/
/**
#include <stdio.h>

int main()
{
    int num,i;
    long int fact;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    //product of numbers from num to 1
    fact=1;
    for(i=num; i>=1; i--)
        fact=fact*i;

    printf("\nFactorial of %d is = %ld",num,fact);

    return 0;
}
**/
