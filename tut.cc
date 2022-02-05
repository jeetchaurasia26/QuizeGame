#include<stdio.h>
int main()
{
    int num,ans,fact;
    printf("Enter any number");
    scanf("%d",&num);
    ans=fact(num);
    printf("The factorial id %d",ans);
    return 0;
}
int fact (int n)
{
    int f;
    if (n==1)
    return (1);
    else 
    f=n*fact(n-1);
    return f;
}