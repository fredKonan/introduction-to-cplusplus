#include<iostream>
#include<iomanip>
#include<string>
using namespace std; 
  
int fib(int n);
int main()
{
int n;
cout<<"Fibonacci(n) for n<=4 is : ";
for(int n=0;n<=4;n++)
cout<<fib(n)<<", ";
cout<<endl;
  return 0;
} 

int fib(int j)
{ 
if (j <= 1) 
     return j;
    return fib(j-1) + fib(j-2); 
} 
