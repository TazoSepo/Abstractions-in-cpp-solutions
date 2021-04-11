#include<iostream>
using namespace std;

double Farenheit(double);

int main(){
    double C;
    cout << "Enter the temperature: ";
    cin >> C;
    double F = Farenheit(C);
    cout << C << " Degrees = " << F << " Farenheit" << endl;
}

double Farenheit(double C){
    return (double(9)/5)*C + 32;
}