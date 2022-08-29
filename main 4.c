

#include <stdio.h>
int natural_no(int a);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("The first %d natural numbers are:\n",n);
   natural_no(n);
   
  
   return 0;
}

int natural_no(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf(" %d",i);
    }
}
 
