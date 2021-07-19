#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

int main()
{
    ifstream dataFile;
    int count = 0;
    string fileName,line,string_search; 
    cout << "Enter file name: ";
    cin >> fileName;
    dataFile.open(fileName);
    if(!dataFile){
        cout << "Error opening file\n!";
        cout << "Try again!\n";
        return 0;
    }
    cout << "Enter the string to search for: ";
    cin >> string_search;
    cin.ignore();
    cout<<""<<endl;
    while(getline(dataFile, line)){
        if(line.find(string_search, 0) < line.length()){
            count++;
            cout<<line << endl;
            }
} 
    cout << "\n\n"<<char(34)<<string_search<<char(34)<<" was found "<< count;
    cout <<" time.\n";

    dataFile.close();

    return 0;
}
