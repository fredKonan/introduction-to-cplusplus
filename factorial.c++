#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int factorial(int );
int main()
{
cout<<"For n<=4, factorial(n) is: \n";
for(int n=0;n<5;n++) 
cout<<factorial(n)<<endl;
return 0;
}
int factorial(int j)
{
  if(j==0 || j==1)
  return 1;
else 
return j* factorial(j-1);
}
