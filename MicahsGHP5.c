 /***********************************************************
 * This program domonstrates using a repition stucture      *
 * as well as a selection structure call within the loop    *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  i-An integer used in the while loop to determine when   *
 *    to terminate also used as in argument the fuction     *
 *    sfun                                                  *
 *  n-An interger used as the constant -999 to terminate    *
 *    the while loop                                        * 
 *  sum-An interger used to calculate the sum of the        *
 *    temperatures used to find the average of the          *
 *    temperatures                                          *
 *  hot-An integer used to count the number of hot          *
 *      temperatures                                        *
 *  pleasant-An integer used to count the number of pleasant*
 *      temperatures                                        *
 *  cold-An interger used to count the numbet of cold       *
 *      temperatures                                        *
 *  *h-The pointer that is assgined to the address of hot in*
 *      main used as an argument in function sfun           *
 *  *p-The pointer that is assgined to the address of       *
 *      pleasant in main used as an argument in function    *
 *      sfun                                                *   
 *  *c-The pointer that is assgined to the address of cold  *
 *      in main used as an argument in function sfun        *
 *  Input:                                                  *
 *  i-An integer assigned a value by the user               *
 *   used for an argument in fuction sfun                   *
 *  Output:                                                 *
 *    Displays the output from function                     *
 *     sfun                                                 *
 *    Displays the number of hot, pleasant and cold         * 
 *     temperatures                                         *
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for a tempature saves as i               *
 *    Calls function sfun with i as an argument             *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
int main(void)
{
void sfun(int, int*, int*, int*);
int *h, *p, *c;
int i, n, sum, hot, cold, pleasant;
i=0;
hot=0;
n=-999;
cold=-1;
pleasant=0;
sum=0;
double average;
//Bells and whistles in main for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("This is a program to calculate the average of temperature as "); 
printf("well as the number of hot pleasant and cold temperatures\n");
printf("This program is brought to you by Micah Church\n");
printf("***********************************************************************\n\n\n\n\n");
while(i!=n)
  {
  printf("Please enter a temperature to be evaluated\n");
  printf("Or -999 to quit the program\n");
  scanf("%d",&i);
  sum=sum+i;
  sfun(i,&hot,&pleasant,&cold);
  }
printf("The number of hot temperatures is %d\n",hot);
printf("The number of pleasant temperatures is %d\n",pleasant);
printf("The number of cold temperatures is %d\n",cold);
average=((sum+999)/26);               
printf("The average temperature over all is %4.2lf\n",average);
//Once again bells and whistles for my own personal touch
printf("\n\n\n\n\n");
printf("***********************************************************************\n");
printf("Thank you for using this program :)\n");
printf("***********************************************************************\n");
printf("\n\n\n\n\n");
return 0;
}
/************************************************************
 * This fuction takes input from the user from main and     * 
 * uses a selection sturcture to determine if it was a hot  *
 * pleasant or cold temperature as well as count the        *
 * number of each                                           *
 * Dictionary of Variables:                                 *
 * Parameters:                                              *
 *  x-(Integer)Corresponds to i in main                     *
 *  *h-(Integer pointer)Corresponds to hot in main          *
 *  *p-(Integer pointer)Corresponds to pleasant in main     *                                                       
 *  *c-(Interger pointer)Corresponds to cold in main        *
 * Process:                                                 *
 *  determines weather the temperature is hot, pleasant or  *
 *  cold as well as counting the temperatures in those      *
 *  categories                                              *
 *  returns the value hot,pleasant and cold to main         *                
 * Input:                                                   *
 *  None                                                    *
 * Output:                                                  *
 *  None                                                    *
 * Written by Micah Church for CS 108                       *
 * Target: gcc                                              *
 ***********************************************************/
void sfun(int x,int *h,int *p,int *c)
{
if(x>=85)
{
*h=*h+1;
printf("The tempature %d is a hot temperature\n",x);
}
else if(x>=60)
{
*p=*p+1;
printf("The tempature %d is a pleasant temperature\n",x);
}
else
{
*c=*c+1;
printf("The tempature %d is a cold temperature\n",x);
}
}
