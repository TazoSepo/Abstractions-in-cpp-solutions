#include <iostream>
using namespace std;

const double pi = 3.14;

void ReadData(double *h, double *r);
double * ComputeResults(double &h,double &r);
void PrintResults(double A[]);

int main(){
    double h,r;
    ReadData(&h,&r);
    PrintResults(ComputeResults(h,r));
}

void ReadData(double *h, double *r){
    cout << "Enter h and r: ";
    cin >> *h >> *r;
}

double * ComputeResults(double &h,double &r){
    double *arr = new double[2];
    arr[0] = 2*pi*h*r;
    arr[1] = pi * h * r * r;
    return arr;
}

void PrintResults(double A[]){
    for(int i = 0; i < 2;i++){
        cout << A[i] << endl;
    }
}