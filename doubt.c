#include<stdio.h>
int main()

   {
   int a ;

    printf("ENTER YOUR MARKS \n");

    scanf ("%d",&a) ;

    switch (a)
    {
    case 10:
       printf("your grade is O \n");

       break;

        case 9:
       printf("your grade is A+ \n");

       break;

        case 8:
       printf("your grade is A  \n");

        break ;


        case 7:
       printf("your grade is B \n");

       break;

        case 6:
       printf("your grade is C \n");

       break;

        case 5:
       printf("your grade is D \n");

       break;

        default :

          printf("FAILED \n");

    }
    return 0;
}
