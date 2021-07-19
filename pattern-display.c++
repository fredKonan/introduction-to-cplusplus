#include<iostream>
using namespace std;

int main()
{
 cout<<"Pattern A\n";
 for(int i=1;i<=10; i++)
 {
     for(int j=1;j<=i;j++)
     {
         cout<<"+";
     }
  cout<<endl;
 }
 cout<<"\nPattern B\n";
 for(int e=1; e<=10;e++)
 {
     for(int f=10;f>=e; f--)
     {
         cout<<"+";
     }
     cout<<endl;
 }
    
    return 0;
    
}
