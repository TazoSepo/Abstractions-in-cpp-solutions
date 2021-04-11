#include<iostream>
using namespace std;

int CalculateSum(int,int);

int main(){
    int a,b;
    cout << "Enter two numbers two add number from and to: ";
    cin >> a >> b;
    int sum = CalculateSum(a,b);
    cout << "Sum = " << sum << endl;
} 
  
int CalculateSum(int a,int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        sum += i;
    }
    return sum;
}