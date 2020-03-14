/** Md. Emran Hasan
    E-mail: writetoemran@gamil.com
    Cell: 01914159009
          01614159009
**/
#include <stdio.h>
int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d",&year);

    if(year % 4 == 0)
    {
    	//Nested if else
        if( year % 100 == 0)
        {
            if ( year % 400 == 0)
                printf("%d is a Leap Year", year);
            else
                printf("%d is not a Leap Year", year);
        }
        else
            printf("%d is a Leap Year", year);
    }
    else
        printf("%d is not a Leap Year", year);

    return 0;
}
