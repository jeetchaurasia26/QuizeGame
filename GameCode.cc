//Created by Jeet
#include<iostream>

#include<ctime>
using namespace std;

void PrintIntroduction(int Difficulty)
{
          
         cout<<"You need to procted them by breaking into a level "<< Difficulty;
         cout<<" secure server room...\nEnter the code correctly to countinue... ";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;
    cout<<endl;
    cout<<"\nThere are three number of code you have to find it out"<<endl;
    cout<<"+ The codes add upto " <<CodeSum<<endl;
    cout<<"+ The codes multiplys to give "<<CodeProduct<<endl;

    int Gusse1, Gusse2, Gusse3;
    cin>>Gusse1;
    cin>>Gusse2;
    cin>>Gusse3;
    int GusseSum = Gusse1+Gusse2+Gusse3;
    int GusseProduct = Gusse1*Gusse2*Gusse3;

    if (CodeSum ==GusseSum && CodeProduct ==GusseProduct)
    {
        cout<<"\nOh! Its Done YOU PROCTECTED YOUR SYSTEM"<<endl;
        return true;
    }
    else
    {
        cout<<"NO! YOU DID NOT PROTECT YOUR SYSTEM ";
        return false;
    }
    
}
int main ()
{
    cout<<"\nWelcom to the Mind Game Created By Jeet..."<<endl;
    srand(time(NULL));//set a rendom sequence based on time and date
    int LevelDifficulty = 1;
    int const MaxDifficulty =100;
 while (LevelDifficulty <= MaxDifficulty)
 {
     bool bLevelComplete = PlayGame(LevelDifficulty);
    cin.clear();
    cin.ignore();
    if (bLevelComplete)
    {
        //increase the level of difficulty
      ++LevelDifficulty;
    }
    
 }
    cout<<"Great work agent you got all your file safe.............";
    return 0; 
}