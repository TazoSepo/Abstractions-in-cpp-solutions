#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

const double pi = M_PI;

double RectangleApprox(int, double);

int main(){
    int n = 100;
    double r = 2;
    double sum = RectangleApprox(n,r);
    cout << "pi ~= "<< sum << endl;
    cout << "Approximation = " << n << endl;
}

double RectangleApprox(int n, double r){
    double area = 0;
    double x;
    double h;
    for(int i = 1; i <= 100;i++){
        x = (r/n) * (i - 0.5);
        h = sqrt(r*r - x*x);
        area += (r/n) * h;
    } 
    return area;
}