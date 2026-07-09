#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
        printf("%d\n",sum);
        printf("%2f",(float)sum/n);
        
    return 0;
}