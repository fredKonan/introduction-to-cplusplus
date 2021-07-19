#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
 float time_1,time_2,time_3;
 string name_1, name_2,name_3;
 cout<<"Enter the names of the tree runners and their finishing time.\n";
 cout<<"I will tell you who came in first, second, and third.\n\n";
 cout<<"Name of the Runner 1: ";
 getline(cin,name_1);
 cout<<"Runner 1's finishing time: ";
 cin>>time_1;
 cin.ignore();
 cout<<"\nName of the Runner 2: ";
 getline(cin,name_2);
 cout<<"Runner 2's finishing time: ";
 cin>>time_2;
 cin.ignore();
 cout<<"\nName of the Runner 3: ";
 getline(cin,name_3);
 cout<<"Runner 3's finishing time: ";
 cin>>time_3;
 cout<<"\n";
 if(time_1>0 && time_2>0 && time_3>0)
  {   
     if(time_1<time_2 && time_2<time_3)
     {
      cout<<name_1<<" came in 1st place.\n";
      cout<<name_2<<" came in 2nd place.\n";
      cout<<name_3<<" came in 3rd place.\n";
     }
     else if(time_1<time_3 && time_2>time_3)
     {
         cout<<name_1<<" came in 1st place.\n";
         cout<<name_3<<" came in 2nd place.\n";
         cout<<name_2<<" came in 3rd place.\n";
     }
     else if(time_2<time_1 && time_1<time_3)
     {
        cout<<name_2<<" came in 1st place.\n";
        cout<<name_1<<" came in 2nd place.\n";
        cout<<name_3<<" came in 3rd place.\n";
     }
     else if(time_2<time_3 && time_3<time_1)
     {
         cout<<name_2<<" came in 1st place.\n";
         cout<<name_3<<" came in 2nd place.\n";
         cout<<name_1<<" came in 3rd place.\n";
     }
     else if(time_3<time_2 && time_2<time_1)
     {
         cout<<name_3<<" came in 1st place.\n";
         cout<<name_2<<" came in 2nd place.\n";
         cout<<name_1<<" came in 3rd place.\n";
     }
     else if(time_3<time_1 && time_1<time_2)
     {
         cout<<name_3<<" came in 1st place.\n";
         cout<<name_1<<" came in 2nd place.\n";
         cout<<name_2<<" came in 3rd place.\n";
     }
  }
 else
  {
      cout<<"Wrong time input.\n";
      cout<<"Remember time can only hold a positive value. Try again.\n";
  }
    return 0;
}

