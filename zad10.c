#include <stdio.h>


int main()
{
  int a,b,c,x;
  printf("Podaj a: \n");
  scanf("%d",&a);

  printf("Podaj b: \n");
  scanf("%d",&b);

  printf("Podaj c: \n");
  scanf("%d",&c);



  if(a<c)
  {
  x=a;
  a=c;
  c=x;
}
  if (a<b)
  {x=a;
  a=b;
  b=x;}
  if (b<c)
  {x=b;
  b=c;
  c=x;}

  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);



return 0;
}
