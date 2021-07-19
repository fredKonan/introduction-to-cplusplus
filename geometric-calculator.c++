#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int choice;
 const double PI=3.14159;
 double area_cir, area_rect, area_tri;
 float length, width, base, height, radius;
 do
    {
         cout<<"1. Calculate the area of a Circle\n";
         cout<<"2. Calculate the area of Rectangle\n";
         cout<<"3. Calcule the area of a Triangle\n";
         cout<<"4. Quit\n";
         cout<<"\nEnter your choice (1-4): ";
         cin>>choice;
         cout<<"\n";
         if(choice==1)
            {
            cout<<"Enter the circle's radius: ";
            cin>>radius;
            if(radius>0)
                {
                area_cir= pow(radius,2) *PI;
                cout<<"\nThe area is "<<area_cir<<"\n";
                cout<<"Geometry Calculor\n\n";
                }
            else
                {
                cout<<"Invalid input. the radius must be postive\n\n";
                }
            }          
         else if(choice==2)
            {
                cout<<"Enter the rectangle's length: ";
                cin>>length;
                cout<<"Enter the rectangle's width: ";
                cin>>width;
                if(length>0 && width>0)
                {
                    area_rect=length*width;
                    cout<<"\nThe area is "<<area_rect<<"\n";
                    cout<<"Geometry Calculator\n\n";
                }
               
                else
                {
                cout<<"Wrong input. length and width must be positive number\n\n";
                }
            }    
         else if(choice==3)
                {
                cout<<"Enter the length of the base: ";
                cin>>base;
                cout<<"Enter the triangle's height: ";
                cin>>height;
                if(height>0 && base>0)
                    {
                    area_tri=(base*height)/2;
                    cout<<"\nThe area is "<<area_tri<<"\n";
                    cout<<"Geometry Calculator\n\n";
                    }
                else
                    
                    cout<<"Wrong input. Base and height must all be positive number\n\n";
                } 
         else if(choice=4)
                {
                    cout<<"Program end\n\n";
                    break;
                }
    }
    while(choice=4);
    
  

 return 0;
  
}
