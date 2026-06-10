#include<stdio.h>
int main()
{
    int min,max,i,temp,r,sum;
    printf("enter two no.");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum+=r*r*r;
            temp=temp/10;


        }
        if(sum==i)
        printf("%d",i);
    }
    return 0;
}