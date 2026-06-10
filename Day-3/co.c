#include<stdio.h>
int main()
{
    int min,max,i,j,org;
    printf("enter two no.");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        if(i<2)
            continue;
        org=1;
        for(j=2;j<=i/2;j++)
       {
         if(i%j==0)
        { 
            org=0;
            break;
        }
        }
        if(org)
            printf("%d ",i );
        
    }
    return 0;
    
}
