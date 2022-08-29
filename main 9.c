

#include <stdio.h>
 int digit(int a,int b);
int main()
{
   int n,d;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("Enter a digit\n");
   scanf("%d",&d);
   digit(n,d)?printf("yes, number contains this digit"):printf("no, number doesn't contains this digit");
   return 0;
}

 int digit(int a,int b)
{   
    for(int i=1;a!=0;i++)
    { 
       if(a%10==b)
       {
           return 1;
       }
       a=a/10;
    }
    if(a==0)
    {
    return 0;
    }
}
 
