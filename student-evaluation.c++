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
void getStudentScore(double[],double[],double[],double[],double[], string[],int,int);// Function prototype for the user to inter the student score.
char grade(double score[], char[],int);// Funtion prototype to find the student grade.
double average(double[],int);// Function prototype to calcule the average scrore

int main()
{
  const int size=5;
  const int numScore=4;
  string studentNames[size];
  double studentScore1[numScore];
  double studentScore2[numScore];
  double studentScore3[numScore];
  double studentScore4[numScore];
  double studentScore5[numScore];
 char gradeLetter[]={'A','B','C','D','F'};
  getStudentScore(studentScore1,studentScore2,studentScore3,studentScore4,studentScore5,studentNames,numScore,size);
    cout<<"\n";
    cout<<studentNames[0]<<endl;
    cout<<"\t\t\t"<<"Average test scrore: "<<average(studentScore1,numScore)<<endl;
    cout<<"\t\t\t"<<"Grade Letter :"<<grade(studentScore1,gradeLetter,numScore);
    cout<<"\n";
    
    cout<<studentNames[1]<<endl;
    cout<<"\t\t\t"<<"Average test scrore: "<<average(studentScore2,numScore)<<endl;
    cout<<"\t\t\t"<<"Grade Letter :"<<grade(studentScore2,gradeLetter,numScore);
    cout<<"\n";
    
    cout<<studentNames[2]<<endl;
    cout<<"\t\t\t"<<"Average test scrore: "<<average(studentScore3,numScore)<<endl;
    cout<<"\t\t\t"<<"Grade Letter :"<<grade(studentScore3,gradeLetter,numScore)<<endl;;
    cout<<"\n";
    
    cout<<studentNames[3]<<endl;
    cout<<"\t\t\t"<<"Average test scrore: "<<average(studentScore4,numScore)<<endl;
    cout<<"\t\t\t"<<"Grade Letter :"<<grade(studentScore4,gradeLetter,numScore)<<endl;;
    cout<<"\n";
    
    cout<<studentNames[4]<<endl;
    cout<<"\t\t\t"<<"Average test scrore: "<<average(studentScore5,numScore)<<endl;
    cout<<"\t\t\t"<<"Grade Letter :"<<grade(studentScore5,gradeLetter,numScore)<<endl;
    
    return 0;
}

void getStudentScore(double score1[],double score2[],double score3[],double score4[],double score5[],string name[],int numscore,int numStud)
{
cout<<"Enter the folling student names information.\n\n";
for(int i=0;i<numStud;i++)
{
  cout<<"Enter the name of the student "<<(i+1)<<": ";
  getline(cin,name[i]);
}
cout<<"\nenter the score for each student in the same order your enterred their names\n\n";
for(int i=0;i<numscore;i++)
{
  cout<<"score"<<(i+1)<<" for student 1: ";
  cin>>score1[i];
}
cout<<endl;

for(int i=0;i<numscore;i++)
{
  cout<<"score"<<(i+1)<<" for student 2: ";
  cin>>score2[i];
}
cout<<endl;
for(int i=0;i<numscore;i++)
{
  cout<<"score"<<(i+1)<<" for student 3: ";
  cin>>score3[i];
}
cout<<endl;
for(int i=0;i<numscore;i++)
{
  cout<<"score"<<(i+1)<<" for student 4: ";
  cin>>score4[i];
}
cout<<endl;
for(int i=0;i<numscore;i++)
{
  cout<<"score"<<(i+1)<<" for student 5: ";
  cin>>score5[i];
}

}

double average(double score[],int numscore)
{
  double total=0,average;
  for(int i=0;i<numscore;i++)
  {
    total+=score[i];
  }
  average=total/4;
  return average;
}

char grade(double score[], char grade[],int size)
{
  char gradeLetter;
  if(90<=average(score,size) && average(score,size)<=100)
  {
    gradeLetter=grade[0];
  }
  else if(average(score,size)<90 && average(score,size)>=80)
  {
    gradeLetter=grade[1];
  }
  else if(average(score,size)<80 && average(score,size)>=70)
  { 
    gradeLetter=grade[2];
  }
  else if(average(score,size)<70 && average(score,size)>=60)
  { 
    gradeLetter=grade[3];
  }
 else if(average(score,size)<60 && average(score,size)>=0)
  { 
    gradeLetter=grade[4];
  }
  return gradeLetter;
}
