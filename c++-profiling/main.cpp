
#include <iostream>

int close_form (int n)
{
    return n * (n + 1) / 2;
}

int iterative (int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
       result += i;
    return result;
}

int main ()
{

   int series_c = 0;
   int series_i = 0;
   
   for  (int i = 0; i < 1'000'000; i++)
   {
      series_c = close_form (1000);
      series_i = iterative  (1000);
   }
   std::cout << series_c << std::endl;   
   std::cout << series_i << std::endl;   
   
   
   return 0;	
} 


