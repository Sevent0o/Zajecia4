#include <stdio.h>
#include <math.h>

int main()
{

  double a = 1.0 / 81;
  double b = 0;
  for (int i = 0; i < 729; ++ i)

  b += a;


  printf("%.15g\n",b);

return 0;
}




//float - liczby zmiennoprzecinkowe pojedynczej precyzji Pojedyncza precyzja - 7-8 cyfr znaczących
//double - liczby zmiennoprzecinkowe podwójnej precyzji Podwójna precyzja - 16-16 cyfr znaczących
