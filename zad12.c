#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main()
{
  int n;
  int tab[10];
  printf("Podaj Zakres randomowosci tablicy: \n");
  scanf("%d",&n);
  time_t t;
srand((unsigned) time(&t));
for(int i=0;i<10;i++)
{

  int random;
  random = rand() % n+1;
  tab[i]=random;


}
for (int j=0;j<10;j++)
{
  printf("%d\n",tab[j]);
}
return 0;
}
