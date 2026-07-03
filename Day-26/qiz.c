#include<stdio.h>
int main()
{
    int ans, score=0;
    printf("capital of india?\n");
    printf("1.Delhi\n2.Mumbai\n3.chennai\n");
    scanf("%d",&ans);
    if(ans==1)
    score++;
    printf("score=%d",score);
    return 0;
}