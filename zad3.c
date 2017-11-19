#include <stdio.h>
#include <stdlib.h>

int main()
{



//TU ROBIE INTEM
int a;
int silnia=1;
int x;
printf("Podaj liczbe do obliczenia silni: ");
scanf("%d",&a);
if(a>0){
for(x=1;x<=a;x++){
  silnia=silnia*x;
}
printf("Twoja silnia wynosi: %d \n",silnia);
}
else {
  printf("Zle dane!!!!!!!! \n");
    }
//TU ROBIE LONG INT
long int b;
long int silnia2=1;
long int x2;
printf("Podaj liczbe do obliczenia silni: ");
scanf("%ld",&b);
if(b>0){
for(x2=1;x2<=b;x2++){
  silnia2=silnia2*x2;
}
printf("Twoja silnia wynosi: %ld \n",silnia2);
}
else {
  printf("Zle dane!!!!!!!! \n");
    }



}
