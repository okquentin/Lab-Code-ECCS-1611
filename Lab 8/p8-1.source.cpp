#include <iostream>
#include <string>
using namespace std;

// *** Function Prototypes ***
int dayOfWeek(int month, int day, int year);
string date(int month, int day, int year);

int main(){

// Variable Declarations
int month;
int day;
int year;

// User Prompt
cout << "Enter a date or Q to quit: ";
    cin >> month >> day >> year;

// Calling functions and storing returns
int weekDay = dayOfWeek(month, day, year);
string dateString = date(month, day, year);

// Outputting date
switch(weekDay){
case 0:
    cout << "Saturday, " << dateString;
    break;
case 1:
    cout << "Sunday, " << dateString;
    break;
case 2:
    cout << "Monday, " << dateString;
    break;
case 3:
    cout << "Tuesday, " << dateString;
    break;
case 4:
    cout << "Wednesday, " << dateString;
    break;
case 5:
    cout << "Thursday, " << dateString;
    break;
case 6:
    cout << "Friday, " << dateString;
    break;
}

// END OF MAIN
return 0; 
}

// *** Function Definitions ***
int dayOfWeek(int month, int day, int year){

    if(month == 1){
        month = 13;
        year--;
    } else if(month == 2){
        month = 14;
        year--;
    }

    int weekDay;
    weekDay = day + (13*(month+1))/5 + year + (year/4) + 6*(year/100) + (year/400);
    weekDay %= 7;
    cout << weekDay << endl;

return weekDay;
}
string date(int month, int day, int year){

    string monthDate;
    string dayDate = to_string(day);
    string comma = ",";
    string yearDate =to_string(year);

    switch(month){
    case 1:
        monthDate = "January ";
        break;
    case 2:
        monthDate = "Feburary ";
        break;
    case 3:
        monthDate = "March ";
        break;
    case 4:
        monthDate = "April ";
        break;
    case 5: 
        monthDate = "May ";
        break;
    case 6:
        monthDate = "June ";
        break;
    case 7:
        monthDate = "July ";
        break;
    case 8:
        monthDate = "August ";
        break;
    case 9:
        monthDate = "September ";
        break;
    case 10:
        monthDate = "October ";
        break;
    case 11:
        monthDate = "November ";
        break;
    case 12:
        monthDate = "December ";
        break;
   } 
    string date = monthDate + dayDate + ", " + yearDate;
    return date;
}

