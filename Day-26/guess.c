#include<stdio.h>
int main()
{
    int secret=7,guess;
    printf("guess the no.(1-10)");
    scanf("%d",&guess);
    if(guess==secret)
    printf("correct");
    else
    printf("%d",secret);
    return 0;
}