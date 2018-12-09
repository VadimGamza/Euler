#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(unsigned p)
   {
    if ( p < 2 ) return false;
    if ( p == 2 ) return true;
    if ( p%2 == 0 ) return false;
    double limit = sqrt(p);
    for (unsigned i=3; i<=limit; i+=2) {
        if ( (p % i) == 0 ) return false;
    }
    return true;
}


int main(void)
{
   int counter = 1, quantity;
   for (quantity = 0; quantity < 10001; counter++)
      {
       if (is_prime(counter))
         {
            quantity++;
         }
      }
   printf("The 10 001st prime number is  %i\n", counter - 1);
}
