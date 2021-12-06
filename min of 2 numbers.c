#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	if(a<b)
	{
		printf("%d is less than %d",a,b);
	}
	else
	{
		printf("%d is less than %d",b,a);
	}
}
