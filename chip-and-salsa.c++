#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{

string mild,medium,sweet,hot,zesty;
const int typeSalsa_size=5;
int jadSold[typeSalsa_size];
string typeSalsa[typeSalsa_size]={"mild","medium","sweet","hot ","zesty"};
//int mildSold,mediumSold,sweetSold,hotSold,zestySold;
int count;
for(count=0;count<typeSalsa_size;count++)
{
  cout<<"Jars sold last month of "<<typeSalsa[count]<<""<<"\t: ";
  cin>>jadSold[count];

}
cout<<" \n\n     Salsa Sales Report\n\n";
int totalSale=0;
for(count=0;count<typeSalsa_size;count++)
{
totalSale+=jadSold[count];}
int higest=0,lowest=0;
for(count=0;count<typeSalsa_size;count++)
{
if(jadSold[count]>jadSold[higest])
higest=count;
if(jadSold[count]<jadSold[lowest])
lowest=count;}
cout<<"Name                Jars sold\n";
cout<<"---------------------------------\n";
for(count=0;count<typeSalsa_size;count++)
{
  cout<<typeSalsa[count]<<"\t\t\t\t\t\t "<<jadSold[count]<<endl;
}
cout<<"\n";
cout<<"Total Sales:"<<"\t\t\t\t"<<totalSale<<endl;
cout<<"High Seller:"<<"\t\t\t  "<<typeSalsa[higest]<<endl;
cout<<"Low seller :"<<"\t\t\t   "<<typeSalsa[lowest]<<endl;
  return 0;
}
