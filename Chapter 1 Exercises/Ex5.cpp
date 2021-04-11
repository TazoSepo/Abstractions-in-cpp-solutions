#include<iostream>
using namespace std;

int FindMax();

int main(){
    
    int max = FindMax();
    cout << "Max number in the list: " << max << endl;
}

int FindMax(){
    int number;
    cin >> number;
    int max = number;
    while(true){
        cin >> number;
        if(number == 0){
            break;
        }
        if(number > max){
            max = number;
        }
    }
    return max;
}