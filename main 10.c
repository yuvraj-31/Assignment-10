

#include <stdio.h>
 int prime_factor(int a);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("All the prime factors of %d are:\n",n);
   prime_factor(n);
   
   return 0;
}

 int prime_factor(int a)
{   
    for(int i=2;a!=1;)
    {
        if(a%i==0)
        {
            printf("%d ",i);
            a=a/i;
        }
        else
        {
        i++;
        }
    }
}
 
