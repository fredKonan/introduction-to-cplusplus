#include<bits/stdc++.h> 
using namespace std; 
  
int fib(int n) 
{ 
    if (n <= 1) 
     return n;
    return fib(n-1) + fib(n-2);
    
} 
  
int main () 
{ 
  int n ;
  do{

    cout<<"Enter a positive number (else to quit): " ;
    cin>>n;
    if(n>0)
    cout<<"Fibonacci("<<n<<") is "<<fib(n)<<endl;
} while(n>0); 
  cout<<"Bye."<<endl; 
    
    return 0; 
}

