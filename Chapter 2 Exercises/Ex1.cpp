#include <iostream>
#include <string>
using namespace std;

enum weekdayT {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

weekdayT NextDay(weekdayT);
weekdayT PreviousDay(weekdayT);
weekdayT IncrementDay(weekdayT, int);

string ConvertEnum(weekdayT);

int main(){
    weekdayT day = Monday;
    cout << ConvertEnum(NextDay(day)) << endl;
    cout << ConvertEnum(PreviousDay(day)) << endl;
    cout << ConvertEnum(IncrementDay(day,-3));
}

weekdayT NextDay(weekdayT day){
    return weekdayT((day + 1)%7);
}

weekdayT PreviousDay(weekdayT day){
    return weekdayT(((day-1)+7)%7); 
}

weekdayT IncrementDay(weekdayT day, int delta){
    return weekdayT(((day+delta)+7)%7);
}

string ConvertEnum(weekdayT t){
    switch(t){
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        case Sunday: return "Sunday";
        default: return "undefined";
    }
}