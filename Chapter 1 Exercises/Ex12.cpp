#include <iostream>
#include <string>
using namespace std;

void PrintDigits(string);

int main(){
    int money = 0;
    cout << "Enter balance numbers, enter negative vaue to stop"<< endl;
    while(money >= 0){
        cout << "Number: ";
        cin >> money;
        cout << endl;
        PrintDigits(to_string(money));
    }
 }
 
void PrintDigits(string k){
while(k.size()>0){
    switch(k[0]){
        case 0: cout << "zero"; break;
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
    }
    k.erase(k.begin());
    
}
}