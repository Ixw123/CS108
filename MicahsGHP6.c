 /***********************************************************
 * This program domonstrates a senwhile to input            *
 * employee information as well as a call to fuction pay    *
 * to determine their paycheck                              *
 *  Dictionary of variables                                 *
 *  Global variables-none                                   *
 *  Local variables to main:                                *
 *  h-A double assigned from the user used as an argument   *
 *   in the function pay                                    *
 *  p-A double assigned from the user used as an argument   *
 *   in the function pay                                    *
 *  netpay-A double assigned from the output of function    *
 *   pay                                                    *
 *  total-A double used to calculate all the employee's pay *
 *  average-A double used as the output from total divided  *
 *   by cnt to find the average payroll                     *
 *  cnt-A double used to count the number of employees      *
 *  id-An integer used to save the current employee's id    *
 *  n-An integer used as the terminating value fot the while*
 *  Input:                                                  *
 *  h-A double assigned a value by the user                 *
 *   used for an argument in fuction pay                    *
 *  p-A double assigned a value by the user used as         *
 *   an argument for the function pay                       *
 *  id-An integer assigned a value by the user              *
 *  Output:                                                 *
 *    Displays the greeting to the user as well as a        *
 *     description of the program                           *
 *    Displays the the employee's id and their pay as well  *                 
 *     as the total payroll and average pay per employee    * 
 *    Displays the signoff with the user                    *
 *     showing the program is done                          *
 *   Process:                                               *
 *    Prompts user for employee's id                        *     
 *     saves as id                                          *
 *    Prompts user for employee's hours worked              *
 *     saves as h                                           *
 *    Prompts user for employee's hourly wage               *
 *     saves as p                                           *
 *    Calls function pay with p and h                       *
 *     as arguments                                         *
 *    Calculates the total payroll as well as the           *
 *     average amount of pay each employee recieves         *
 * Written by Micah Church-CS 108                           *
 * Target: gcc                                              *
 ***********************************************************/
#include <stdio.h>
int main(void)
{
double pay(double, double);
int id,n;
double h,p,netpay,total,average,cnt;
cnt=0;
n=-999;
total=0;
//A few bells and a lot of whistles
printf("\n\n\n\n\n");
printf("        -This is a program made by Micah Church-       \n");
printf("     **********************************************    \n");
printf("     *   This program determines the pay of your  *    \n");
printf("     *    employees as well as the total payroll  *    \n");
printf("     *    it also determines the average payroll  *    \n");
printf("     *              for each employee             *    \n");
printf("     **********************************************    \n");
printf("\n\n\n\n\n");
while(id!=n)
{
 printf("Input an employee's identification number\n");
 scanf("%d",&id);
 printf("Input the number of hours the employee worked\n");
 scanf("%lf",&h);
 printf("Input the amount the employee is paid hourly\n");
 scanf("%lf",&p);
 netpay=pay(h,p);
 printf("The employee %d was paid $%6.2lf\n",id,netpay);
 total=total+netpay;
 cnt+=1;
 printf("Type a -999 to quit\n");
 scanf("%d",&id);
}
average=total/cnt;
printf("Total payroll:$ %10.4lf\n",total);
printf("Average amount:$ %5.2lf\n",average);
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
 * uses a selection structure to determine the amount of    *
 * hours worked as well as calculating the employee's pay   *
 * Dictionary of Variables:                                 *
 * Local Variables to calc:                                 *
 *  hours-A double assigned from the user used as an        *
 *   argument in pay                                        *
 *  pay-A double assigned from the user used as an          *
 *   argument in pay                                        *
 *  eh-A double assigned from the selection structure to    *
 *   augment hours if the proper condition is met           *
 *  income-A double calculated from multipling hours and pay* 
 *  npay-A double assigned from the output of pay           *
 * Parameters:                                              *
 *  hours-(double)Corresponds to h in main                  *
 *  pay-(double)Corresponds to p in main                    *
 * Process:                                                 *
 *  Determines weather or not an employee is paid overtime  *
 *   by way of a selection structure                        *
 *  Calculates the gross pay of the employee then deducts   *
 *   tax and saves as npay                                  *
 *  Returns npay to main which is saved as netpay           *
 * Input:                                                   *
 *  h parameter corresponding to h in main                  *
 *  p parameter corresponding to p in main                  *
 * Output:                                                  *
 *  returns the variable npay to main                       *
 * Written by Micah Church for CS-108                       *
 * Target: gcc                                              *
 ***********************************************************/
double pay(double hours,double pay)
{
double eh,income,npay;
if(hours>40)
{
eh=(hours-40)*1.5;
hours=40;
income=(eh+hours)*pay;
npay=income*.96375;
return (npay);
}
else
{
income=hours*pay;
npay=income*.96375;
return (npay);
}
}
