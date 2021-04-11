#include <iostream>
#include <string>
using namespace std;

void PrimeFactorization(int);

int main(){
    int n;
    cout << "Enter the number to be factorized: ";
    cin >> n;
    PrimeFactorization(n);
}

void PrimeFactorization(int n){
    string fact= "";
    while(n > 1){
        for(int i = 2;i<=n;i++){
            if(n%i==0){
                if(fact.size()>0){
                fact.append(" * ");
                }
                fact.append(to_string(i));
                n = n/i;
                break;
            }
        }
    }

    cout << fact << endl;
}