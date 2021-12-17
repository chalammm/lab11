#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    int A = 0;
    double mean, dev, sum = 0, lol = 0;
    ifstream source;
    source.open("score.txt");
    string score;
    while(getline(source,score)){
        sum += atof(score.c_str());
        lol += pow(atof(score.c_str()),2);
        A++; 
    }
    mean = sum/A;
    dev = sqrt((lol/A) - pow(mean,2));
    cout << "Number of data = "<< A << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< dev;
}