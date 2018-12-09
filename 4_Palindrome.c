#include <stdio.h>
#include <cs50.h>

int IsPalindrome ( int N)
{
int temp, reverse = 0;
   temp = N;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( N == reverse )
      return 1;
   else
      return 0;
}

int main(void)
{
   //int array [];
   int Largest, one = 999, two = 999, Product;

   while (one > 99)
   {
   Product = one * two;
   if (IsPalindrome(Product))
   if (Product > Largest) Largest = Product;
   two--;
   if (two == 100)
      {
         one--;
         two = 999;
      }
   }
   printf("The largest palindrome made from the product of two 3-digit numbers is %i \n", Largest);
}


