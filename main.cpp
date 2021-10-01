#include <stdio.h> 
#define p printf(
#define f )
#define s scanf(
#define printf("\n") m

int main() 

{
   int x, y; 
   p "Enter Value of x " f;
   s "%d", &x f; 
   p "\nEnter Value of y " f; 
   s "%d", &y f;


    int temp = x; 
     x = y;
     y = temp; 
     p "After Swapping: x = %d, y = %d", x, y f;
   m;
   return 0;

  }
