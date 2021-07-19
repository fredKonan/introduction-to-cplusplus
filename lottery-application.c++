#include <iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<vector>
#include<cmath>
#include<ctime>
#include<cctype>
#include<fstream>
#include<bitset>

using namespace std;
void generateNumbers(int[],int);
int machingDigit(int[],int[],int);
void userInput(int[],int);

int main()
{
  const int size=5;
  int lotteryArray[size];
  int userArray[size];
  generateNumbers(lotteryArray,size);
  userInput(userArray,size);
  cout<<"\n";
  cout<<"Loterry array: \n";
  for(int i=0;i<size;i++)
  {
    cout<<lotteryArray[i]<<" ";
  }
  cout<<endl;
  cout<<"\nUser array: \n";
  for(int i=0;i<size;i++)
  {
    cout<<userArray[i]<<" ";
  }
  cout<<endl;
  if(machingDigit(lotteryArray,userArray,size)==size)
  {
    cout<<"\nCongratulation! You are the winner of the grand prize\n";
  }
  else 
  {
    if(machingDigit(lotteryArray,userArray,size)==0)
    cout<<"\nThere is no maching digits.\n";
    else 
    cout<<"\nThere is only "<<machingDigit(lotteryArray,userArray,size)<<" matching digits.\n";
  }
  return 0;
}

void generateNumbers(int numbers[],int size)
{
  const int max =9,min=0;
  unsigned seed=time(0);
  srand(seed);
  for(int i=0;i<size;i++)
  {
    numbers[i]=((rand()%(max- min+1))+min);
  }
}

void userInput(int numbers[],int size)
{
  cout<<"Enter five digit:\n";
  for (int i=0;i<size;i++)
  {
  cout<<"Digit "<<(i+1)<<": ";
  cin>>numbers[i];
  }
}

int machingDigit(int value1[],int value2[],int size)
{
  int total=0;
  for(int i=0;i<size;i++)
  {
    if(value1[i]==value2[i])
    total++;
  }
  return total;
}

