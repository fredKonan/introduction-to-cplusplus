#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

void coinToss(int);

int main()
{
  int numberOfTosses;
    cout << "How many tosses should I make? ";
    cin >> numberOfTosses;
    cout<<" \n";

    for(int counter = 1; counter <= numberOfTosses; counter++)
      coinToss(counter);

    return 0;
}

void coinToss(int value){
    //unsigned seed=time(0);
    //srand(seed);
    int outCome = (rand() % 2) + 1;
    if(outCome == 1)
        cout <<value<<":  " <<"Heads\n";
    else
        cout <<value<< ":  "<<"Tails\n";
}
