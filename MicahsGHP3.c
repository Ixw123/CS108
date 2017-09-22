 /***********************************************************
 * This program domonstrates sharing variables              *
 * between functions as well as having mutiple              *
 * calls to other funtions                                  *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  celsius-A double assigned from function                 *
 *   celsius_at_depth, used as an argument in the           *
 *   fuction convert_farenheit                              *
 *  farenheit-Output from function convert_farenheit        *
 *   for the final output of the program displayed          *
 *   to the user                                            *
 *  Input:                                                  *
 *  Depth-A double assigned a value by the user             *
 *   used for argument in fuction celsius_at_depth          *
 *  Output:                                                 *
 *    Displays the output from function                     *
 *     celsius_at_depth                                     *
 *    Displays the output from fuction                      *
 *     convert_farenheit                                    *
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for depth in kilometers                  *     
 *      saves as depth                                      *
 *    Calls function celsius_at_depth with                  *
 *     depth as argument                                    *
 *    Prints value of celsius upon return                   *
 *    Calls function convert_farenheit                      *
 *     with celsius as argument                             *
 *    Prints value of farenheit upon return                 *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
//This program is made to calculate the tempature in the earth in both 
//celsius and in farenheit
int main (void)
{
//Fuction prototypes
double celsius_at_depth (double);
double convert_farenheit (double);
//Declaration of local variables in main
double depth;
double celsius;
double farenheit;
//Bells and whistles in main for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("This is a program to find the tempature at a certain depth "); 
printf("in the earth\n");
printf("This program is brought to you by Micah Church\n");
printf("***********************************************************************\n\n\n\n\n");
//Prompt for the depth of the earth for which the user is inquiring 
//about
printf("Input the depth of the earth for which you wish to know the "); 
printf("tempature\n");
printf("(In kilometers)");
scanf("%lf", &depth);
//Call to the first function in main to determine the degrees in celsius
celsius=celsius_at_depth (depth);
//Displays the output of the first function in main to the user
printf("The tempature in celsius:%6.2lf\n", celsius);
//Call to the second function to convert the celsius degrees to 
//farenheit
farenheit=convert_farenheit (celsius);
//Displays the output of the second function in main to the user
printf("The tempature in farenheit:%6.2lf\n", farenheit);
//Once again bells and whistles for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("Thank you for using this program :)\n");
printf("***********************************************************************\n");
printf("\n\n\n\n\n");
return 0;
}
 /***********************************************************
 * This fuction takes input from the user from main and     * 
 * uses a formula to find the tempature in terms of celsius *
 * Dictionary of Variables:                                 *
 * Parameters:                                              *
 *  depth-(double)Corresponds to depth in main              *
 *  celsius-(double)Corresponds to celsius in main          *
 * Process:                                                 *
 *  calculates the value of celsius from the value of depth *
 *  returns the value of celsius to main                    *
 * Input:                                                   *
 *  depth parameter corresponding to depth in main          *
 * Output:                                                  *
 *  returns the variable celsius to main                    *
 * Written by Micah Church for CS 108                       *
 * Target: gcc                                              *
 ***********************************************************/
//The first function in main
//This calculates the tempature in celsius
double celsius_at_depth (double depth)
{
//Declaration of the local variables
double celsius;
celsius=10*depth+20;
//Sends the output of this function to main
return (celsius);
}
 /***********************************************************
 * This function calculates the degrees in farenheit        *
 * Dictionary of Variables:                                 *
 * Parameters:                                              *
 *  celsius- double corresponding to celsius in main        *
 *  farenheit-double corresponding to farenheit in main     *
 * Process:                                                 *
 *  calculates value for farenheit using celsius value      *
 *  returns farenheit value to main                         *
 * Input:                                                   *
 *  celsius corresponding to celsius in main                *
 * Output:                                                  *
 *  returns farenheit as a double to main                   *
 * Written by Micah Church for CS 108                       *
 * Target: gcc                                              *
 ***********************************************************/
//The second function of main
//This function converts the degrees in celsius to farenheit
double convert_farenheit (double celsius)
{
//Declaration of the local varibles
double farenheit;
farenheit=1.8*celsius+32;
//Sends the output of this fuction to main
return (farenheit);
}

