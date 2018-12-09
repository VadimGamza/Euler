#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(long p)
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
    long sum=0;
    for (long i = 1; i < 2000000; i++)
    if (is_prime(i))
    sum += i;
    printf("%li\n", sum);

}