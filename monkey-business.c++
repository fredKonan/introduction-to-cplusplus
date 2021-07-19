#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
const int monkeyNum=3;
const int dayNum=7;
double numEat[monkeyNum][dayNum];
int monkey,day;
double totalEat;
double average;
for(monkey=0;monkey<monkeyNum;monkey++)
{
  for(day=0;day<dayNum;day++)
  {
    cout<<"Enter the pounds eaten by monkey number "<<(monkey+1)<<" on day "<<(day+1)<<": ";
    cin>>numEat[monkey][day];
    while(numEat[monkey][day]<0)
    {
      cout<<"Enter a non-negative amount: ";
      cin>>numEat[monkey][day];
    }
  }
  
}
cout<<"\n";
for(day=0;day<dayNum;day++)
{
  totalEat=0;
  for(monkey=0;monkey<monkeyNum;monkey++)
  totalEat+=numEat[monkey][day];
  average=totalEat/monkeyNum;
  cout<<fixed<<showpoint<<setprecision(2);
  cout<<"The average eaten on day "<<(day+1)<<" is "<<average<<" pounds."<<endl;
}
  int lowestday=0,largestday=0,lowestmonkey=0,largestmonkey=0;
  for(monkey=0;monkey<monkeyNum;monkey++)
  {
    for(day=0;day<dayNum;day++)
    {
      if(numEat[monkey][day]>numEat[largestmonkey][largestday])
      {
      largestmonkey=monkey;
      largestday=day;}
      if(numEat[monkey][day]<numEat[lowestmonkey][lowestday])
      {lowestday=day;
      lowestmonkey=monkey;}
      
    }
  }
    cout<<"\nMonkey number "<<(lowestmonkey+1)<<" ate the least amount of food, "<<numEat[lowestmonkey][lowestday]<<" pounds, on day "<<(lowestday+1)<<endl;
    cout<<"Monkey number "<<(largestmonkey+1)<<" ate the most amount of food, "<<numEat[largestmonkey][largestday]<<" pounds, on day "<<(largestday+1)<<endl;
  

return 0;

}
