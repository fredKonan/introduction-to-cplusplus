#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

 using namespace std;

int main()

{
unsigned seed=time(0);
  srand(seed);
  int choice;
  double number_1, number_2;
  double result,input;
  const int Min_Value=1;
  const int Max_value=499;
  number_1=(rand() % (Max_value - Min_Value +1))+Max_value ;
  number_2=(rand() % (Max_value - Min_Value +1))+ Max_value;
  char a,s,m,d,ch;
  a='+'; s='-'; m='*';d='/';
  do 
   {
        cout<<"        "<<"Math Tutor Menu\n";
        cout<<"-------------------------------\n";
        cout<<"1. Addition problem\n";
        cout<<"2. subtraction problem\n";
        cout<<"3. Multiplication problem\n";
        cout<<"4. divison problem\n";
        cout<<"5. quit this program\n";
        cout<<"-------------------------------\n";
        cout<<"Enter your choice (1-5): ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"\n";
            cout<<" "<<number_1<<"\n";
            cout<<a<<number_2<<"\n";
            cout<<"----\n";
            cout<<"";
            cin>>input;
            result=number_1+number_2;
            if(result==input)
            {
                cout<<"\n";
                cout<<"\n";
                
                cout<<"Congratulation!\n";
                cout<<"The answer is "<<result<<endl; 
            }
            else
            {
            cout<<"\n";
            cout<<"sorry, the correct answer is "<<result<<".\n\n";
            }
            
            
        }
        else if(choice==2)
        {
         cout<<"\n";
            cout<<" "<<number_1<<"\n";
            cout<<s<<number_2<<"\n";
            cout<<"----\n";
            cout<<"";
            cin>>input;
            result=number_1-number_2;
            if(result==input)
            {
                cout<<"\n";
                cout<<"\n";
                
                cout<<"Congratulation!\n";
                cout<<"The answer is "<<result<<endl; 
            }
            else
            {
            cout<<"\n";
            cout<<"sorry, the correct answer is "<<result<<".\n\n";
            }
        }
        else if(choice==3)
        {
             cout<<"\n";
            cout<<" "<<number_1<<"\n";
            cout<<m<<number_2<<"\n";
            cout<<"----\n";
            cout<<"";
            cin>>input;
            result=number_1*number_2;
            if(result==input)
            {
                cout<<"\n";
                cout<<"\n";
                
                cout<<"Congratulation!\n";
                cout<<"The answer is "<<result<<endl; 
            }
            else
            {
            cout<<"\n";
            cout<<"sorry, the correct answer is "<<result<<".\n\n";
            }
        }
        else if(choice==4)
        {
             cout<<"\n";
            cout<<" "<<number_1<<"\n";
            cout<<d<<number_2<<"\n";
            cout<<"----\n";
            cout<<"";
            cin>>input;
            result=number_1/number_2;
            if(result==input)
            {
                cout<<"\n";
                cout<<"\n";
                
                cout<<"Congratulation!\n";
                cout<<"The answer is "<<result<<endl; 
            }
            else
            {
            cout<<"\n";
            cout<<"sorry, the correct answer is "<<result<<".\n\n";
            }
        }
        
        else if(choice==5)
        {
            cout<<"Thank you for using Math Tutor.\n";
            break;
        }
        
    }
    while(choice=5);

    
    return 0;
}
