 /***********************************************************
 * This program demonstrates a selection structure          *
 * as well as a call to a function in main to determine     *
 * how any 50's 20's and 10's a person will reccieve from a *
 * withdraw                                                 *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  cash-An integer in main that is assigned a value from   *
 *   the user that correlates to the amount of money to     *
 *   withdraw                                               *
 *  Input:                                                  *
 *  cash-An integer assigned a value by the user            *
 *   used as an argument in fuction money                   *
 *  Output:                                                 *
 *    Displays the greeting to the user as well as a        *
 *     description of the program                           *
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for amount of cash to withdraw saves as  *     
 *     cash                                                 *
 *    Calls function money with cash as an argument         *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
int main ()
{
void money(int);
int cash;
//A few bells and a lot of whistles
printf("\n\n\n\n\n");
printf("        -This is a program made by Micah Church-       \n");
printf("     **********************************************    \n");
printf("     *    This program determines the number of   *    \n");
printf("     *  50's 20's and 10's a person will recieve  *    \n");
printf("     *   based on the amount of money they would  *    \n");
printf("     *            like to withdraw                *    \n");
printf("     **********************************************    \n");
printf("\n\n\n\n\n");
printf("Please input the amount to withdraw\n");
scanf("%d",&cash);
money(cash);
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
 * uses a selection structure to determine the number of    *
 * bills the user will recieve from the amount desired      *
 * Dictionary of Variables:                                 *
 * Local Variables to money:                                *
 *  a-An integer assigned from the user used as an          *
 *   argument in main                                       *
 *  x-An integer assigned used to determine the number of   *
 *   50's the user will recieve                             *
 *  y-An integer used to determine the number of 20's the   *
 *   user will recieve                                      *
 *  z-An  integer used to determine the number of 10's the  *
 *   user will recieve                                      * 
 * Parameters:                                              *
 *  a-(Integer)Corresponding to cash in main                *
 * Process:                                                 *
 *  Determines the amount of 50' 20's and 10's a person     *            
 *   will recieve                                           *
 *  Uses a selection structure in a while loop to tally the *
 *   amount of 50's 20's and 10's a person will recieve     *
 *  Displays the number of 50's 20's and 10's the user will *
 *   recieve                                                *
 * Input:                                                   *
 *  a- parameter corresponding to cash in main              *        
 * Output:                                                  *
 *  none                                                    *
 * Written by Micah Church for CS-108                       *
 * Target: gcc                                              *
 ***********************************************************/
void money(int a)
{
int x,y,z;
x=0;
y=0;
z=0;
while(a>0)
 if(a>=50)
 {
 a=a-50;
 x=x+1;
 }
 else if(a>=20)
 {
 a=a-20;
 y=y+1;
 }
 else
 {
 a=a-10;
 z=z+1;
 } 
printf("You recieve %d 50's %d 20's %d 10's\n",x,y,z);
}

