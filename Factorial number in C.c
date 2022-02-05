#include<stdio.h>
int main(){
    int i,b=1,num;
    printf("Enter a number :");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    b=b*i;
    printf("\nThe Factorial number %d",b);
    return 0;
}