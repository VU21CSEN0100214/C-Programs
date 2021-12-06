#include<stdio.h>
main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);

		if(a>0)
	printf("%d is positive integer",a);
	 else if (a<0)
	printf("%d is negitive integer",a);
	  else
    printf("Zero");
}
