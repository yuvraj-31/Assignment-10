

#include <stdio.h>
float Simple_interest(float amnt,float rate, float t);
int main()
{
   float amnt,rate,t;
   printf("Enter the principal or initial loan amount\n");
   scanf("%f",&amnt);
   printf("Enter the rate of interest(per annum)\n");
   scanf("%f",&rate);
   printf("Enter the time period in years\n");
   scanf("%f",&t);
   printf("The simple interest is %0.2f",Simple_interest(amnt,rate,t));
  
   return 0;
}

float Simple_interest(float amnt,float rate, float t)
{
    return (amnt*rate*t)/100;
}
 
