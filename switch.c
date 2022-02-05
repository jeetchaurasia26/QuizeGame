#include<stdio.h>
int main ()
{
    int num1,num2,result;
    int choice;
    printf("Enter your choice on num1 and num2");
    scanf("%d%d",&num1,&num2);
    printf("\nEnter your choice :\n1.Add\n2.Sub\n3.Mul\n4.Div");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    result=num1+num2;
    printf("The result is =%d",result);

            break;
     case 2:
    result=num1-num2;
    printf("The result is =%d",result);
    
            break;
     case 3:
    result=num1*num2;
    printf("The result is =%d",result);
    
            break;
    
    case 4:
    result=num1/num2;
    printf("The result is =%d",result);
    
            break;
    default:
       printf("You have enterd wrong choice");
        break;
       
    }
    return 0;

}