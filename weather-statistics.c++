#include <iostream>
#include <string>
#include<iomanip>

using namespace std;
struct WeatherStats{
    double rain;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

void getData(WeatherStats &);
double monthlyAvgRain(const WeatherStats [], const int);
double totalRain(const WeatherStats [], const int);
void getHighest(const WeatherStats [], const int);
void getLowest(const WeatherStats [], const int);
double getYearlyAvgTemp(const WeatherStats [], const int);

const int NUM_MONTHS = 12;
string monthNames[NUM_MONTHS] = {"January", "February", "March","April", "May", "June", "July","August", "September", "October","November", "December"};

int main()
{
    WeatherStats data[NUM_MONTHS];
    cout<<"Enter the following information:\n";
    for(int i = 0; i < NUM_MONTHS; i++){
        cout<< monthNames[i]<<":";
        cout << endl;
        getData(data[i]);
        //cout << endl << endl;
    }
  
    cout<<"\n";
    cout << "Total Rainfall: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout << totalRain(data, NUM_MONTHS);
    cout << "\nAverage Monthly Rain: ";
    cout << monthlyAvgRain(data, NUM_MONTHS);
    cout<<"\nAverage Monthly Temperature: ";
    cout << getYearlyAvgTemp(data, NUM_MONTHS);
    getHighest(data,NUM_MONTHS);
    getLowest(data, NUM_MONTHS);
    
    return 0;
}

void getData(WeatherStats &w){
    cout << "         Total rainfall: ";
    cin >> w.rain;

    cout << "         High temperature: ";
    cin >> w.highTemp;

    while(w.highTemp < -100 || w.highTemp > 140){
        cout << "Enter a temperature within the range";
        cout << "[-100 to +140]: ";
        cin >> w.highTemp;
    }

    cout << "         Low temperature: ";
    cin >> w.lowTemp;

    while(w.lowTemp < -100 || w.lowTemp > 140){
        cout << "Enter a temperature within the range";
        cout << "[-100 to +140]: ";
        cin >> w.lowTemp;
    }
    w.avgTemp = (w.lowTemp + w.highTemp) / 2.0;
}
double monthlyAvgRain(const WeatherStats w[], const int numElements){
    double avg;
    cout<<fixed<<showpoint<<setprecision(2);
    avg = totalRain(w, numElements) / numElements;
    return avg;
}
double totalRain(const WeatherStats w[], const int numElements){
    double total = 0;
    for(int i = 0; i < numElements; i++)
        total += w[i].rain;

    return total;
}

void getHighest(const WeatherStats w[], const int numElements){
    int highIndex = 0, high = w[highIndex].highTemp;

    for(int i = 0; i < numElements; i++){
        if(w[i].highTemp > high){
            high = w[i].highTemp;
            highIndex = i;
        }
    }

    cout << "\nHighest Temperature: " << high<<" ("
     << monthNames[highIndex] <<")"<< endl;
}

void getLowest(const WeatherStats w[], const int numElements){
    int lowIndex = 0, low = w[lowIndex].lowTemp;

    for(int i = 0; i < numElements; i++){
        if(w[i].lowTemp < low){
            low = w[i].lowTemp;
            lowIndex = i;
        }
    }

    cout << "Lowest Temperature: " << low<<" ("
     << monthNames[lowIndex]<<")" << endl;
}

double getYearlyAvgTemp(const WeatherStats w[], const int numElements){
    double total = 0, avg;

    for(int i = 0; i < numElements; i++)
        total += w[i].avgTemp;

    avg = (double)total/numElements;

    return avg;
}
