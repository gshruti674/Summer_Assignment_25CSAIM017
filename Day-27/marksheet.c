#include<stdio.h>
int main()
{
    float m1,m2,m3,total,per;
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    per=total/3;
    printf("\n Total=%2f\n",total);
    printf("percentage=%2f\n",per);
    if(per>=40)
    {
        printf("result=pass");
    }
        else
        {
        printf("result=fail");
        }
    
    return 0;
}