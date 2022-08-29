

#include <stdio.h>
int even_odd(int a);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   even_odd(n)?printf("number is even"):printf("number is odd");
   
  
   return 0;
}

int even_odd(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    return 0;
}
 
