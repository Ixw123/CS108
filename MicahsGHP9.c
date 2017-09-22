#include <stdio.h>
#include <string.h>
#define MAX 20
typedef struct {
char surname[15];                                          
char firstname[10];
char middle_init[10];
} Name;
Name list[MAX];
int main (void)
{
int fill(Name[]);
void read(Name[],int);
int num;
num=fill(list);
read(list,num);
return 0;
}
int fill(Name l[MAX])
{
char c,ch;
int n,i,j=0;
printf("Input the number of names you wish to process\n");
scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  c=getchar();
  if(c!=','||' ')
   {
   l[i].surname[j]=c;
   j++;
   }
  while((c=getchar())!=','||' ')
   {
   l[i].surname[j]=c;
   j++;
   }
  l[i].surname[j]='\0';
  j=0; 
  if(c!=','||' ')
   {
   l[i].firstname[j]=c;
   j++;
   }
  while((c=getchar())!=','||' ')
   {
   l[i].firstname[j]=c;
   j++;
   }
  l[i].firstname[j]='\0';
  j=0; 
  if(c!='.')
   {
   l[i].middle_init[j]=c;
   j++;
   }
  while((c=getchar())!='.')
   {
   l[i].middle_init[j]=c;
   j++;
   }
  l[i].middle_init[j]='\0';
 }
return (n);
}
void read(Name person[MAX],int number)
{
int i;
i=0;
printf("The full name of everyone\n");
 while(i<number)
  {
  puts(person[i].surname);
  puts(person[i].firstname);
  puts(person[i].middle_init);
  i++;
  }
}
 
