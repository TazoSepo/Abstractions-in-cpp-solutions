#include <iostream>
using namespace std;

int Round(double);

int main(){
    double x;
    cout << "Enter floating number to be rounded: ";
    cin>> x;
    int rounded = Round(x);
    cout << "Rounded numeber : " << rounded;
}

int Round(double x){
    int rounded;
    double midpoint = int(x) + 0.5;
    if(x > 0){
        if(x > midpoint){
            rounded = int(x + 0.5);
        }
        else{
            rounded = int(x);
        }
    }
    else{
        if(x > midpoint){
            rounded = int(x);
        }
        else{
            rounded = int(x - 0.5);
        }
    }
    return rounded;
}