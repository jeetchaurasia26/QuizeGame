#include<iostream>
using namespace std;
int main ()
{
 float x,bhra,bda,ahra,ada,bgs,ags;
 cout<<"\t * Gross Salary Calculator * "<<endl;
 cout<<"\n";
 cout<<"Enter your Basic Salary "<<endl;
 cin>>x;
 
 bhra=x*0.10;
 bda=x*0.90;
 ahra=500;
 ada=x*0.98;
 bgs=x+bhra+bda;
 ags=ahra+ada;
 
 if (x<1500)
 {
  cout<<"\n";
  cout<<"Your Gross Salary is ="<<bgs;
 }
 else
 {
  cout<<"\n";
  cout<<"Your Gross Salary is ="<<ags;
 }
}
