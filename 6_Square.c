#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int sum_squares = 0, square_sum = 0, result = 0;

for (int i = 0; i <= 100; i++)
   {
      sum_squares = sum_squares + i*i;
      square_sum = square_sum + i;
   }
square_sum = square_sum * square_sum;

result = square_sum - sum_squares;

printf("Sum square difference is  %i, %i, %i\n", sum_squares, square_sum, result);
}