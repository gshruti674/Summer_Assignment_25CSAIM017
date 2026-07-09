#include<stdio.h>
int main()
{
    int ch;
    float a,b;
    printf("enter two no.");
    scanf("%f,%f",&a,&b);
    printf("\n1.add\n2.subtract\n3.multiply\n4.divide");
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("%2f",a+b);
        break;
        case 2:
        printf("%2f",a-b);
        break;
        case 3:
        printf("%2f",a*b);
        break;
        case 4:
        if(b!=0)
        printf("%2f",a/b);
        else
        printf("not possible");
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}