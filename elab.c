#include <stdio.h>
int main()
{
char ID;
scanf("%s",&ID);
if (ID=='B'||ID=='b')
printf("Battleship\n");
else if (ID=='C'||ID=='c')
printf("Cruiser\n");
else if(ID=='D'||ID=='d')
printf("Destroyer\n");
else if (ID=='F'||ID=='f')
printf("Frigate");
return 0;
}