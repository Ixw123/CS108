 /***********************************************************
 * This program domonstrates using if statements            *
 * to determine the BMI of the user as well as              *
 * a call to a fuciton to calculate the BMI of the user     *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  weight-A double assigned from the user used as          *
 *   an argument in the function calc                       *
 *  height-A double assigned from the user used as          *
 *   an argument in the function calc                       *
 *  bmi-A double assigned from the output of function       *
 *   calc                                                   *
 *  Input:                                                  *
 *  weight-A double assigned a value by the user            *
 *   used for an argument in fuction calc                   *
 *  height-A double assigned a value by the user used as    *
 *   an argument for the function calc                      *
 *  Output:                                                 *
 *    Displays the output from function calc along with     *                 
 *     weather or not the user is underweight, a normal     *
 *     weight, overweight, or obese                         * 
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for weight in pounds                     *     
 *     saves as weight                                      *
 *    Prompts user for height in inches                     *
 *     saves as height                                      *
 *    Calls function calc with weight and height            *
 *     as arguments                                         *
 *    Processes the if and else if statements               *
 *     and prints the results to the user                   *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
#include <math.h>
 int main (void)
{
//Function prototypes
 double calc (double,double);
//Declaration of local variables in main 
 double height, weight, bmi;
//A few bells and a lot of whistles
 printf("\n\n\n\n\n");
 printf("        -This is a program made by Micah Church-       \n");
 printf("     **********************************************    \n");
 printf("     *   This program determines weather you are  *    \n");
 printf("     *     either underweight, a normal weight,   *    \n");
 printf("     *    overweight or obese based on your BMI.  *    \n");
 printf("     **********************************************    \n");
 printf("\n\n\n\n\n");
//Prompt for weight of the user in pounds
 printf("Please input your weight in pounds\n");
 scanf("%lf", &weight);
//Prompt for height of the user in inches
 printf("\nPlease input your height in inches\n");
 scanf("%lf", &height);
//Call to the function calc and saving the output as bmi
 bmi=calc (weight, height);
//Determining if the user is underweight, of a normal weight, overweight 
//or obese 
 if (bmi<18.5)
{ 
  printf("Your BMI is %6.1lf\n",bmi);
  printf("\nYour BMI is considered to be underweight\n");
}
 else if (bmi<25.0)
{ 
  printf("Your BMI is %6.1lf\n",bmi);
  printf("\nYour BMI is considered to be normal\n");
}
 else if (bmi<30.0)
{ 
  printf("Your BMI is %6.1lf\n",bmi);
  printf("\nYour BMI is considered to be overweight\n");
}
 else 
{
  printf("Your BMI is %6.1lf\n",bmi);
  printf("\nYour BMI is considered to be obese\n");
}
//Sign off with the user
 printf("\n\n\n\n\n");
 printf("     **********************************************    \n");
 printf("     *    This program is now finished with its   *    \n");
 printf("     *                    task                    *    \n");
 printf("     *       Thank you for using this program     *    \n");
 printf("     **********************************************    \n");
 printf("\n\n\n\n\n");
return 0;
}
 /***********************************************************
 * This fuction takes input from the user from main and     * 
 * uses a formula to find the BMI of the user               *
 * Dictionary of Variables:                                 *
 * Local Variables to calc:                                 *
 *  weight-A double assigned from the user used as an       *
 *   argument in calc                                       *
 *  height-A double assigned from the user used as an       *
 *   argument in calc                                       *
 *  bmi-A double assigned from the output of calc           *
 * Parameters:                                              *
 *  weight-(double)Corresponds to weight in main            *
 *  height-(double)Corresponds to height in main            *
 * Process:                                                 *
 *  calculates the value of bmi from the values of weight   *
 *   and height                                             *
 *  returns the value of bmi to main                        *
 * Input:                                                   *
 *  weight parameter corresponding to weight in main        *
 *  height parameter corresponding to height in main        *
 * Output:                                                  *
 *  returns the variable bmi to main                        *
 * Written by Micah Church for CS-108                       *
 * Target: gcc                                              *
 ***********************************************************/
double calc (double weight, double height)
{
double bmi;
bmi = 703*weight/pow (height, 2);
return (bmi);
}
