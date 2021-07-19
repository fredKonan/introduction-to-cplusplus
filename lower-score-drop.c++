#include <iostream>
#include <iomanip> 
using namespace std;

void getScore(int &score);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main(){
    int input1, input2, input3, input4, input5;
    getScore(input1);
    getScore(input2);
    getScore(input3);
    getScore(input4);
    getScore(input5);
    calcAverage(input1,input2,input3,input4,input5);
    return 0;
}

void getScore(int &test){
    cout << "Enter a test score : ";
    cin >> test;
    while(test < 0 || test > 100){
        cout << "Please enter a score between 0 and 100\n";
        cin >> test;
    }
}
void calcAverage(int score1, int score2, int score3, int score4, int score5){
    cout << "After dropping the lowest ,the test average is  ";
    cout <<fixed<<setprecision(2)<<showpoint <<((score1+score2+score3+score4+score5)-findLowest(score1, score2, score3, score4, score5))/4.0 << ".\n";
}

int findLowest(int score1, int score2, int score3, int score4, int score5){
    if(score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
        return score1;
    else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
        return 2;
    else if(score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
        return score3;
    else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
        return score4;
    else if(score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4)
        return score5;
}

