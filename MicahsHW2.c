#include <stdio.h> 
int main(void)
{
//The Pythagorean Theorem Triples
printf("\n\n\n\n\n");
printf("***************************************************\n");
printf("This is a program to find the triples of a triangle\n");
printf("This program is brought to you by Micah Church\n");
printf("***************************************************\n\n\n\n\n");
double m,n;
double side1,side2,hypotenuse;
printf("Input the longest leg of the triangle.\n");
scanf("%lf",&m);
printf("Now the other leg of the triangle.\n");
scanf("%lf",&n);
side1=(m*m)-(n*n);
side2=2*(m*n);
hypotenuse=(m*m)+(n*n);
printf("The first legs triple is \n");
printf("%lf\n",side1);
printf("The second legs triple is \n");
printf("%lf\n",side2);
printf("The Hypotenuse's triple is \n");
printf("%lf\n",hypotenuse);
printf("***************************************************\n");
printf("Thank you for using this program :)\n");
printf("***************************************************\n");
return 0;
}
