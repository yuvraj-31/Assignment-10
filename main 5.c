

#include <stdio.h>
int oddnatural_no(int a);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("The first %d odd natural numbers are:\n",n);
   oddnatural_no(n);
   
  
   return 0;
}

int oddnatural_no(int a)
{
    for(int i=1;i<=a*2;i++)
    { 
        if(i%2!=0)
        {
        printf(" %d",i);
        }
    }
}
 
