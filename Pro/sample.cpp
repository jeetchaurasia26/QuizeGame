#include<iostream>
using namespace std;
int main ()
{
    cout<<"Welcome to Mind Game:"<<endl;
     int add,multiply,gusse1,gusse2,gusse3,result1,result2;
    const int num1{4};
    const int num2{6};
    const int num3{8};
    add = num1+num2+num3;
    multiply = num1*num2*num3;
    cout<<"The number which we adde "<<add<<endl;;
    cout<<"The number which we multiply "<<multiply<<endl;
    cout<<"You need to put three number only:"<<endl;
    cin>>gusse1>>gusse2>>gusse3;
result1=gusse1+gusse2+gusse3;
result2=gusse1*gusse2*gusse3;
    if (add==result1 && multiply==result2)
    {
        cout<<"wonderfull you pass the level";
        return true;
    }
    else
    {
        cout<<"You Lose";
        return false;
    }
    
    
    return 0;
}