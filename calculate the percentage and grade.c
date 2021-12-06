#include <stdio.h>
main()
{
    int a,b,c,d,e,per;
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);



    per = (a + b + c + d + e) /5;

    printf("Percentage = %d\n", per);

    if(per > 90)
    {
        printf("Grade A");
    }
    else if(per > 80)
    {
        printf("Grade B");
    }
    else if(per > 70)
    {
        printf("Grade C");
    }
    else if(per > 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade E");
    }

}
