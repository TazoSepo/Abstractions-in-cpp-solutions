#include <iostream>
using namespace std;

bool isPerfect(int);

int main(){
    for(int i = 1; i<=9999;i++){
        if(isPerfect(i)){
            cout << i << " ";
        }
    }
}

bool isPerfect(int n){
    int sum = 0;
    int i = n-1;
    while(i > 0){
        if(n%i==0){
            sum+=i;
        }
        i--;
    }
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}