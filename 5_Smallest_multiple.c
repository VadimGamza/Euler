#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   bool answer = false;
   int multiple = 20, dividers = 20;
   while (answer == false)
   {
      if (multiple % dividers == 0)
      {
         dividers--;
      }
      else
      {
         dividers = 20;
         multiple += 20;
      }
      if (dividers == 1)
      answer = true;
   }
   printf("The smallest multiple is %i\n", multiple);
}