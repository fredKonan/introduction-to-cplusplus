#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
fstream dataFile;
string line,fileName;
int lineNumber;
cout<<"Enter the name fo the file: ";
cin>>fileName;
dataFile.open(fileName,ios::in);
if(!dataFile)
{
  cout<<" Error opening file\n";
  return 0;
}
else{
  while(getline(dataFile,line))
lineNumber++;
if(lineNumber<=10)
{
    for(int count=0;count<<lineNumber;count++)
    {
        getline(dataFile,line);
        cout<<line<<endl;
    }
    cout<<"\nThe entire file has been displayed.\n";
}
else
{
    for(int count=lineNumber-10;count<<lineNumber;count ++)
    {
    getline(dataFile,line);
    cout<<line<<endl;
     }
    
}
}
dataFile.close();
return 0;
}
