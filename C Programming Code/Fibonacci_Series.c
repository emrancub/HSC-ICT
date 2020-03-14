/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
    Program Name: Fibonacci Series up to n terms
**/

#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

/**
#include <stdio.h>
int main()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }

  return 0;
}
**/
/**
#include<stdio.h>
int main()
{
 int n1=0,n2=1,n3,i,number;
 printf("Enter the number of elements:");
 scanf("%d",&number);
 printf("\n%d %d",n1,n2);//printing 0 and 1
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  n3=n1+n2;
  printf(" %d",n3);
  n1=n2;
  n2=n3;
 }
  return 0;
 }
**/
/**
#include<stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;

    //Ask user to input number of terms
    printf("Enter the number of terms:\n");
    scanf("%d",&count);

    printf("First %d terms of Fibonacci series:\n",count);
    for ( i = 0 ; i < count ; i++ )
    {
       if ( i <= 1 )
          next_term = i;
       else
       {
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }
       printf("%d\n",next_term);
    }

    return 0;
}
**/
