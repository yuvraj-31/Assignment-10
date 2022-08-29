

#include <stdio.h>
long int Fact(int a);
int main()
{
   int n,r;
   printf("Enter the number of items\n");
   scanf("%d",&n);
   printf("Enter the number of selection\n");
   scanf("%d",&r);
   long int c=Fact(n)/(Fact(r)*Fact(n-r));
   printf("The number of combinations are %ld",c);
   return 0;
}

 long int Fact(int a)
{   long int fact=1;
    for(int i=a;i!=0;i--)
    { 
       fact=fact*i;
    }
    return fact;
}
 
