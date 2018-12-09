#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)

{

    int the_answer, integer1, integer2, tr, pt;
    tr = 3;
    pt = 5;
    the_answer = 0;
    float float1, float2, tr2, pt2;
    tr2 = 3.0;
    pt2 = 5.0;
    printf("What is max value (integer, please)?\n");
    int Count_to = get_int();
    while (Count_to > 0)
    {

        float1 = (Count_to / tr2);
        float2 = (Count_to / pt2);
        integer1 = (Count_to / tr);
        integer2 = (Count_to / pt);

         if (float1 == integer1 || float2 == integer2)
        the_answer = the_answer + Count_to;
        Count_to--;
    }
printf("%i\n", the_answer);
printf("%i, %i, %f, %f, %i\n", integer1, integer2, float1, float1, Count_to);


/*
int i = 2;
float f = 2.2;
if (i==f) printf("DA\n");
else printf("NET\n");
*/

//float fl, flo = 1;
//int pip = 3;
//fl = flo / pip;
//printf("%f\n", fl);

}