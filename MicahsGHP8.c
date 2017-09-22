 /***********************************************************
 * This program domonstrates using a call to a fuction      *
 * as well as a recursive  call within the do while loop    *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  n-An integer used in the do while loop to determine when*
 *    to terminate the loop                                 *
 *  number-An integer used as an argument in recfun         *
 *  answer-An integer returned from the fuction recfun      *
 *  Input:                                                  *
 *  number-An integer assigned a value by the user          *
 *   used for an argument in fuction recfun                 *
 *  Output:                                                 *
 *    Displays the greeting to the user as well as the      *                   
 *     purpose of the program                               *
 *    Queries the user for the number to evaluate           *
 *    Displays the answer from recfun                       * 
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for a number to evaluate saves as number *              
 *    Calls function recfun with number as an argument      *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
int main(void)
{
int recfun(int);
int answer,number,n;
n=-999;
//Bells and whistles in main for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("This is a program to calculate the positive multiples of four\n"); 
printf("using a recursive function\n");
printf("This program is brought to you by Micah Church\n");
printf("***********************************************************************\n\n\n\n\n");
do
{
printf("Please input a possitive number you wish to evaluate\n");
printf("Or a -999 to quit\n");
scanf("%d",&number);
answer=recfun(number);
printf("The answer is %d\n",answer);
}
while (number!=n);
//Once again bells and whistles for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("Thank you for using this program :)\n");
printf("***********************************************************************\n");
printf("\n\n\n\n\n");
return (0);
}
 /***********************************************************
 * This fuction takes input from the user from main and     * 
 * uses a recursive call to determine the answer for the    *     
 * number queried                                           *
 * Dictionary of Variables:                                 *
 * Parameters:                                              *
 *  num-(Integer)Corresponds to number in main              *
 *  ans-(Integer)Corresponds to answer in main              *
 * Process:                                                 *
 *  Uses recursion to determing the answer of the number    *
 *   inputed by the user                                    *                
 * Input:                                                   *
 *  None                                                    *
 * Output:                                                  *
 *  returns the answer to main                              *
 * Written by Micah Church for CS 108                       *
 * Target: gcc                                              *
 ***********************************************************/
int recfun(int num)
{
int ans;
{
 if (num<=0)
  ans=0;
 else 
  ans=recfun(num-1)+4;
}
return (ans);
}

