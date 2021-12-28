#include<stdio.h>
main()
{
 int n,i=1,f,a;
 printf("Enter the number: ");
 scanf("%d",&n);
 
 while(i<n)
 {
 	f=f*(n-i);
 	i++;
 	a=f*n;
 }
 printf("%d",a);
}
