#include <stdio.h>
#include <math.h>

int main()
{
char a;
int wzrost;

printf("Podaj swoj wzrost: \n");
scanf("%d %c",&wzrost,&a);
int wzrost_i=wzrost*0.40;
int wzrost_c=wzrost*2.54;
if(a=='c')
{
  printf("Twoj wzrost to: %d cali\n",wzrost_i);
}
else if(a=='i')
{
  printf("Twoj wzrost to: %d centymetrow\n",wzrost_c);
}
return 0;
}
