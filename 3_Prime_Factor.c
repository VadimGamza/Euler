#include <stdio.h>
#include <cs50.h>
#include <math.h>


int prime ( int N ) //работает криво, вариант получше - в задаче №7
{
for ( int i = 2; i*i <= N; i ++ )
if ( N % i == 0 ) return 1;
return 0;
}

int main(void)

{

 long pri_p, pri;
 double N = 600851475143;
 long Cycle, pri_i;
 double pri_f = 8;
        pri_p = 8;

 Cycle = 1000;
 while (prime(pri_p))
 {
 Cycle ++;
 pri_f = N / Cycle;
 pri_i = pri_f;
            if (pri_f - pri_i == 0)
 pri_p = pri_i;

 }
 printf("%ld\n", pri_p);
}