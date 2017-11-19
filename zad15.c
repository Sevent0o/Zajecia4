#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main()
{
  int n;
  int tab[10];

for(int i=0;i<10;i++)
{
printf("Podaj %d element tablicy: \n",i+1);
scanf("%d",&tab[i]);
}
int min=1;
int max=-1;

for (int j=0;j<10;j++)
{
if(tab[j]>max)
{
  max=tab[j];

}
if (tab[j]<min)
{
  min=tab[j];
}
}
for(int x=0;x<10;x++)
{
  printf("%d element tablicy to: %d \n",x+1,tab[x]);
}


printf("Max = %d\n",max);
printf("MIN = %d\n",min);
return 0;
}
