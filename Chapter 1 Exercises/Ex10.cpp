#include <iostream>
using namespace std;

double LeibnizPi4(int);

int main(){
    int n = 10000;
    double sum = LeibnizPi4(n);
    cout << "pi = "<< 4*sum << endl;
    cout << "Approximation = " << n << endl;
}

double LeibnizPi4(int approx){
    double sum = 0;
    for(int i=0,nextOdd = 1;i<approx;i++,nextOdd+=4){
        sum += (1.0/nextOdd - 1.0/(nextOdd+2));
    }
    return sum;
}