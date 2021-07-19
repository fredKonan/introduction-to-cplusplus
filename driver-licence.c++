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
int correctAnswers(char[],const char[],int);// Function to find the number of correct answers.
bool passExam(int );// Function to determine if the student pass or fail.
void getStudAnsw(char[],int);
int main()
{
  const int size =20;
  // Initializing the correct answers into an array call answer
  const char answer[]={'A','D','B','B','C',
                      'B','A','B','C','D',
                      'A','C','D','B','D',
                      'C','C','A','D','B'};
  char studentAsw[size];// Array to hold student input.
  getStudAnsw(studentAsw,size);// Calling function getStudAnsw.
  
  // admissibily implimentation using boolean function passExam.
  if(passExam(correctAnswers(studentAsw,answer,size)))
  {
    cout<<"Congratulation! You pass the exam\n";
    cout<<"You have answered "<<correctAnswers(studentAsw,answer,size)<<" correct answers and "<<(size-correctAnswers(studentAsw,answer,size))<<" incorrect answers\n";
    cout<<"Here is the correct answer for the test: \n";
    for(int i=0;i<size;i++)
    {
      cout<<(i+1)<<". "<<answer[i]<<endl;
      if((i+1)%5==0)// Display formating (volontary or by request)
      {cout<<"\r\r\r\r\r\t";
      cout<<endl;}

    }
  }
  else 
  {
    cout<<"Sorry but you did not pass the Exam.Try again later\n";
    cout<<"You have answered "<<correctAnswers(studentAsw,answer,size)<<" correct answers\n";
     cout<<"Here is the correct answer for the test: \n";
    for(int i=0;i<size;i++)
    {
      cout<<(i+1)<<". "<<answer[i]<<endl;
      if((i+1)%5==0)
      {cout<<"\r\r\r\r\r\t";
      cout<<endl;}

    }
  }
  return 0;
}

void getStudAnsw(char input[],int size)// getStudAnsw function definition.
{
  cout<<"Enter your answer for each question: \n";
  for(int i=0;i<size;i++)
  {
    cout<<"Question "<<(i+1)<<": ";
    cin>>input[i];
    if(!isalpha(input[i]))// Validation( shouldn't use isalpha in this chapter execpt if it a general program)
    {
      cout<<"You must enter letter (A,B,C OR D)\n";
      exit(0);
    }
  }
}

int correctAnswers(char input[],const char value[],int size)// Function correctAnswers definition
{
  int total=0;
  for(int i=0;i<size;i++)
  {
    if(input[i]==value[i])
    total++;
  }
  return total;
}

bool passExam(int number)// Boolean Function. return true or false if the condition is met.
{
  if(number>=15)
  return true;
  else return false;
}
