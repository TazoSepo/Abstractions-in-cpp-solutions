#include <iostream>
using namespace std;

int CalculateOddSum(int);

int main(){
    int N;
    cout << "Enter number of odd values ";
    cin >> N;
    int sum = CalculateOddSum(N);

    cout << "Sum of odd numbers = " << sum << endl;
}

int CalculateOddSum(int N){
    int sum = 0;
    for(int i = 0, nextOdd = 1; i < N; i++, nextOdd+=2){
        sum += nextOdd;
    }
    return sum;
}