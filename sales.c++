#include<iostream>
#include<iomanip>
#include<fstream>
#include<ctime>
#include<cctype>
#include<string>
#include<cstdlib>
#include<bitset>
#include<vector>
#include<cmath>

using namespace std;
void calcSales(int[],double[],double[],int);//Function prototype to calculate sales
double totalSales(double[],int);// Function to calculate the whole sales
void shortingSales(int[],double[],int);// function to Short by ascendent sales 
void display(int[],double[],int[],double,int);// Fucntion to display the report
const int numProducts=9;// number of products categories
int main()
{
  // Array initialization to hold product number.
int productIds[numProducts]={914,915,916,917,918,919,920,921,922};

//Array initialization to hold product unit Price
double unitPrice[numProducts]={12.95,14.95,18.95,16.95,21.95,31.95,14.95,14.95,16.95};

//Array initialization to hold unit sold
int unitSold[numProducts]={842,416,127,514,437,269,97,492,212};

// Array initializationto hold the sales of each products
 double productSales[numProducts];
 
 double total;// Variable declaration to hold the total sales
 
 //Call of functions
 calcSales(unitSold,unitPrice,productSales,numProducts);
 total=totalSales(productSales,numProducts);
 shortingSales(productIds,productSales,numProducts);
 display(productIds,productSales,unitSold,total,numProducts);

return 0;
}
// Function defintion

void calcSales(int unit[],double price[],double sales[],int size)
{
  int index=0;
  for(index=0;index<size;index++)
  {
    sales[index]=unit[index]*price[index];
  }
}

double totalSales(double sales[],int size)
{
  double result =0;
  for(int i=0;i<size;i++)
  {
    result+=sales[i];
  }
  return result;
}

void shortingSales(int ids[],double sales[],int size)
{
  double maxValue;
  int startScan,maxIndex,tempId;
  for(startScan=0;startScan<(size-1);startScan++)
  {
    maxIndex=startScan;
    maxValue=sales[startScan];
    tempId=ids[startScan];
    for(int index =(startScan+1);index<size;index++)
    {
      if(sales[index]>maxValue)
      {
        maxValue=sales[index];
        tempId=ids[index];
        maxIndex=index;
      }
    }
    sales[maxIndex]=sales[startScan];
    ids[maxIndex]=ids[startScan];
    sales[startScan]=maxValue;
    ids[startScan]=tempId;
  }
}

void display(int ids[],double sales[],int unitNum[],double total,int size)
{
  int totalUnit=0;
  cout<<setprecision(2)<<fixed<<showpoint;
  cout<<" Product Number\t\t\t\t\tSales\n";
  cout<<"----------------------------------------\n";
  for(int i=0;i<size;i++)
  {
    cout<<ids[i]<<"\t\t\t\t\t\t\t\t$"<<sales[i]<<endl;
  }
  cout<<"Total units Sols:";
  for(int i=0;i<size;i++)
  {
    totalUnit+=unitNum[i];
  }
  cout<<"\t\t\t\t"<<totalUnit<<endl;
  cout<<"Total Sales:\t\t\t\t\t$";
  cout<<total<<endl;
  
}
