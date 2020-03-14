/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
**/

#include <stdio.h>

int main() {
   int year;
   printf("Enter a Year: ");
   scanf("%d",&year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);

   return 0;
}
