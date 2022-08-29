

#include <stdio.h>
float Area(float a);
int main()
{
   float r;
   printf("Enter the radius\n");
   scanf("%f",&r);
  
   printf("The Area of the circle is %f",Area(r));
   return 0;
}

float Area(float a)
{
    return 3.14*(a*a);
}
 
