#include<stdio.h>
void main()
{

int a,b,p=1,x=1;
 printf("Enter a number: ");
 scanf("%d",&a);
 printf("Enter the power of a number: ");
 scanf("%d",&b);
  while (x<=b)
 {
    x++;
    p=p*a;
 }

   printf("Answer = %d",p);
}
