#include <iostream>
#include <string>
using namespace std;

void PrintArray(double arr[], int n);
bool isSorted(double arr[], int n);

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    double * arr = new double [n];
    double number;
    cout << "\nEnter array elements.\n";
    for(int i = 0;i<n;i++){
        cout << i+1 << " entry: ";
        cin >> number;
        arr[i] = number;
    }
    PrintArray(arr,n);
    cout << isSorted(arr,n) << endl;
    delete [] arr;
}

void PrintArray(double arr[], int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}

bool isSorted(double arr[], int n){
    double temp = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i+1] > temp){
            return true;
        }
        temp = arr[i+1];
    }
    return false;
}