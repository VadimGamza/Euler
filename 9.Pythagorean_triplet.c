
#include <stdio.h>

int is_triplet(int a, int b, int c)
{
if (a*a+b*b==c*c) return 1;
else return 0;
}

int main(void)
{
    int a = 1000, b = 1000, c = 1000;
    while (a+b+c != 1000 || is_triplet(a,b,c) < 1)
    {

        a--;
        if (a < 1)
        {
            b--;
            a = 1000;
            if (b < 1)
            {
                c--;
                a = 1000;
                b = 1000;
            }
        }

    }
    printf("%i\n", a*b*c);

}