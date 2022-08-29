

#include <stdio.h>
int Fact(int a);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("The factorial of %d is %d",n,Fact(n));
   return 0;
}

int Fact(int a)
{   int fact=1;
    for(int i=a;i!=0;i--)
    { 
       fact=fact*i;
    }
    return fact;
}
 
