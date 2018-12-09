#include <stdio.h>

int main(void)
{
int one, two, count, even_valued_sum = 0;
one = 0;
two = 1;
count = 0;
while (count < 4000001)
{
    if (count % 2 == 0)
    {
        even_valued_sum  += count;
    }
    count = one + two;
    one = two;
    two = count;
}

printf("%i\n", even_valued_sum);

}