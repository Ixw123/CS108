#define AGE = 19
#include <stdio.h>
int main (void)
{
int G, nage;
printf("If you are not 19, enter the proper age.\n");
scanf("%d",&G);
nage=G-AGE;
printf("The differance between you age %d%d and AGE is: %d\n", G, nage);
return 0;
}
