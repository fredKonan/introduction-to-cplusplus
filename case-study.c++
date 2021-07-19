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

int searchProduct(int [],int,int);// Binary search function.
const int sizet=9;// number of products Title.
int main()
{
  //string array initialization to hold Porduct Title.
  string productsTitle[sizet]={"Six Steps to Leadership",
                               "Six Steps to Leadership",
                               "The Road to Excellence",
                               "Sevent Lessons of Quality",
                               "Team Are Made,Not born",
                               "Leadership for the Future",
                               "Leadership for the Future"};
  //String array initialization to hold Porduct Description.
  string ProductsDesc[sizet]={"Book",
                              "Audio CD",
                              "DVD",
                              "Book",
                              "Audio CD",
                              "DVD",
                              "Book",
                              "Book",
                              "Audio CD"};

// Array initialization to hold product number.
int productsNum[sizet]={914,915,916,917,918,919,920,921,922};

//Array initialization to hold product unit Price
double unitPrice[sizet]={12.95,14.95,18.95,16.95,21.95,31.95,14.95,14.95,16.95};

int result,itemNum;// Variable declaration to hold result of binary search and the product number.
char again;//To hold the user answer whether he want to repeat the program.
do
{
// Prompt the user to enter a products number.
cout<<"Enter the products number: ";
cin>>itemNum;

// Validation of user input.
while(itemNum<productsNum[0] || itemNum> productsNum[sizet-1])
{
  cout<<"You have entered an invalid product number. Try again\n";
  cout<<"Enter the products number: ";
cin>>itemNum;
}
// calling Binary search function.
result=searchProduct(productsNum,sizet,itemNum);

// Condition to dysplay the result of the search.
if(result==-1)
{
  cout<<"This products is not avalaible at the store right now\n";
}
else 
{
  cout<<"\nProduct Title: "<<productsTitle[result]<<endl;
  cout<<"Product Description: "<<ProductsDesc[result]<<endl;
  cout<<"Unit price: $"<<unitPrice[result]<<endl;
}
// statement to repeat the Program.

cout<<"\nWould you like to check for another products? (y/n): ";
cin>>again;
}while(again=='y'||again=='Y');
  return 0;
}

int searchProduct(int number[],int size, int value)// Binary search function definition
{
  int position =-1;
  bool found = false;
  int indexStart=0;
  int indexEnd=(size-1);
  int midlle;
  while(!found && indexStart<=indexEnd)
  {
    midlle=(indexEnd+indexStart)/2;
    if(number[midlle]==value)
    {
      position=midlle;
      found=true;
    }
    else if (number[midlle]>value)
    indexEnd=midlle-1;
    else 
    indexStart=midlle+1;
  }
  return position;
}
