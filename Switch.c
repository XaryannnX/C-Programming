#include <stdio.h>

int main()
{
    int a, b;
    printf("Please Enter\n 1 if you want kg to grams\n 2 if you want cm to km \n 3 if you want km to cm \n And 4 if you awant grams to kg \n");
    scanf("%d", &a);
    printf("Enter the value you want to convert");
    scanf("%d", &b);

    switch (a)
    {

    case 1:
        printf("Kg to grams =%dgm", b * 1000);
        break;
    case 2:
        printf("Cm to km=%0.3fkm", (float)b / 1000);
        break;
    case 3:
        printf("Km to cm=%dcm", b * 1000);
        break;
    case 4:
        printf("grams to kg=%0.3fkg", (float)b / 1000);
        break;
    }
    return 0;
}