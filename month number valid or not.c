#include<stdio.h>
main()
{
	int a;
	printf("Enter month number: ");
	scanf("%d",&a);
	if(a<=12)
	{
		printf("%d is valid month number",a);
	}
	else
	{
		printf("%d is not a valid number ",a);
	}
}
