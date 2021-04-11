#include<iostream>
using namespace std;

double MeterToInch(double);
double InchToFoot(double);

int main(){
    double meters;
    cout << "Enter meters to convert: ";
    cin >> meters;

    double inches = MeterToInch(meters);
    double foot = InchToFoot(inches);

    cout << meters << " meters = " << inches << " inches = " << foot << " foot" << endl;
}

double MeterToInch(double m){
    return m/0.0254;
}
double InchToFoot(double i){
    return i/12;
}
