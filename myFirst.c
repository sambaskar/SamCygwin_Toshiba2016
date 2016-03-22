// My first c program 
// works well
#include <stdio.h>

void swapMe(int *x, int * y)
{
   int temp;
   temp = (int) *x;
   *x = *y;
   *y = temp;
   

}




void main()
{
   int a = 5;
   int b = 10;

   printf ("Hi\n");
   printf("Before Change: `a is %d b is %d\n", a, b);

   swapMe(&a, &b);

   printf("a is %d b is %d\n", a, b);


}
