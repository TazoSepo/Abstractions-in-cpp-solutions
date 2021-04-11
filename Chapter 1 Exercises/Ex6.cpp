#include<iostream>
using namespace std;

long long reverseDigits(long long);

int main(){
    long long n;
    cout << "Enter number to reverse: ";
    cin >> n;
    long long reversed = reverseDigits(n);
    cout << "Reversed Number: " << reversed << endl;
}

long long reverseDigits(long long n){
    long long newNum = 0;
    while(n!=0){
        long long digit = n%10;
        newNum = newNum * 10 + digit;
        n /= 10;
    }
    return newNum;
}