#include <stdio.h>
#include <string.h>
#define MAX 80
typedef struct {
char surname[15];
char firstname[10];
char middle_init[10];
} Name;
Name list[MAX];
int main (void) 
{ 
int i,j,n,a,k;
k=-999;
i=0;
j=0;
char c; 
printf("Please input the names to be process\n");
c=getchar(); 
while(c!='\0')
{ 
  if(c!=',')
  {
   for(j=0;j<15;j++)
    list[i].surname[j]=c;
  }
  else if(c!=' ')
  {
   j=2;
   for(j=0;j<10;j++)
   list[i].firstname[j]=c;
  }  
  else if(c!='.')
  {
    j=1;
    for(j=0;j<10;j++)
    list[i].middle_init[j];  
  }
  else if(c=='\n')
  i++;  
  else
  a=0;
}
i=n;
i=0;
j=0;
while(i<n)
{
printf("%s %c",list[i].surname);
printf("%s %c",list[i].firstname);
printf("%s %c",list[i].middle_init);
i++;
}
return 0;
}

