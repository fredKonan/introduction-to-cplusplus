#include <iostream>
using namespace std;

void referenceSwap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
void pointerSwap(int *,int *);

int main()
{
    int a = 11, b = 22;

    cout << "At first "<< "(a, b): "<<"("<< a <<", "<<b<<")"<<endl;
    referenceSwap(a, b);
    cout << "After referenceSwap(a, b): ("<<a<<", "<<b<<")"<<endl;
    pointerSwap(&a, &b);
    cout<<"After pointerSwap(a, b): ("<<a<<", "<<b<<")"<<endl;

    return 0;
}
void pointerSwap(int *n1,int *n2)
{
  int temp= *n1;
  *n1= *n2;
  *n2= temp;
}
