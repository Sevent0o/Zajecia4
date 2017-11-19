#include <stdio.h>
#include <math.h>

int main()
{
  int wiek,dni,godziny,minuty,sekundy;

  printf("Ile masz lat?: \n");
  scanf("%d",&wiek);

  dni=wiek*365;
  godziny=dni*24;
  minuty=godziny*60;
  sekundy=minuty*60;



  printf("Odkad żyjesz mineło: %d godzin.\n",godziny);
  printf("Odkad żyjesz mineło: %d sekund.\n",sekundy);
return 0;
}
