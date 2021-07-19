#include<bitset>
#include<iostream>

using namespace std;
void decToBinary(int n)  
{  
int a[10], i;       
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}       
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}
void decToOctal(int n)
{
int octalNum[100];
int i = 0;
while (n != 0) {
octalNum[i] = n % 8;
n = n / 8;
i++;
}
for (int j = i - 1; j >= 0; j--)
cout << octalNum[j];
}
void decToHexa(int n)
{    
    char hexaDeciNum[100]; 
       
    int i = 0; 
    while(n!=0) 
  {    
  int temp  = 0; 
  temp = n % 16; 
  if(temp < 10) 
  { 
  hexaDeciNum[i] = temp + 48; 
  i++; 
  } 
  else
  { 
  hexaDeciNum[i] = temp + 55; 
  i++; 
  } 
          
  n = n/16; 
  } 

for(int j=i-1; j>=0; j--) 
cout << hexaDeciNum[j]; 
} 
int main()
{
  int number;
  cout<<"Enter the decimal number you will like to convert: ";
  cin>>number;
  cout<<"Here is the representation of the number: \n";
  cout<<"Binary: ";
  decToBinary(number);
  cout<<"\n";
  cout<<"Octal: ";
  decToOctal(number);
  cout<<"\n";
  cout<<"Hexadecimal: ";
  decToHexa(number);

  return 0;
  }
