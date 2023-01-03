#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    double sum = 0 , x = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        x += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = "<< count <<'\n';
    cout << setprecision(3);
    cout << "Mean = "<< sum/count <<'\n';
    cout << "Standard deviation = "<<sqrt(((1.0/count)*x)-(pow(sum/count,2))) ;
}

