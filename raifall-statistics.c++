#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int numberOfmonth=12;
double raifall_month[numberOfmonth];
int lowest,largest;
int count;
for(count=0;count<numberOfmonth;count++)
{
 cout<<"Enter the raiball for month in (inch) for month #"<<count+1<<": "; 
  cin>>raifall_month[count];
  while(raifall_month[count]<0)
  {
    cout<<"Do not accept negative numbers for monthly rainfall figures.\n";
    cout<<"Try again\n";
    cout<<"Enter the raiball for month in (inch) for month #"<<count+1<<": "; 
  cin>>raifall_month[count];
  }

}

 {double sum=0;
 double average=0;
 for(count=0;count<numberOfmonth;count++)
 {sum+=raifall_month[count];
 average=sum/numberOfmonth;}
 lowest=0;
 largest=0;
 for(count=1;count<numberOfmonth;count++)
{
  if(raifall_month[count]>raifall_month[largest])
  largest=count;
  if(raifall_month[count]<raifall_month[lowest])
  lowest=count;
}
cout<<fixed<<setprecision(2);
cout<<"\nThe total raifall of the year is "<<sum<<" inches."<<endl;
cout<<"The average raifall of the year is "<<average<<" inches."<<endl;
cout<<"The largest amount of raifall was "<<raifall_month[largest]<<" inches in month "<<largest+1<<"."<<endl;
cout<<"The smallest amount of raifall was "<<raifall_month[lowest]<<" inches in month "<<lowest+1<<"."<<endl;}

  return 0;
}

