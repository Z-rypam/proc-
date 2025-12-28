#include <iostream>
using namespace std;

class Date{
    int day; 
    int month;
    int year;

    public:
    Date(int , int , int);
    void setDate(int , int , int );
    int getday();
    int getmonth();
    int getyear();
    void display();
    bool operator > (const Date&);
};

Date::Date(int _day, int _month, int _year){
    day=_day;
    month=_month;
    year=_year;
}

void Date :: setDate (int d, int m, int y){
    day=d;
    month=m;
    year=y;
}
int Date :: getday (){
    return day;
}

int Date :: getmonth(){
    return month;
}

int Date :: getyear (){
    return year;
}

void Date :: display(){
    cout << day << "/" << month << "/" << year ;
}

bool Date :: operator> (const Date& D){
    if (deadline > D)
return false;
}


class Task {
    friend class Date;
protected:
    string title;
    string description;
    bool done;
    Date ijad;
    Date deadline;
    string olaviat;

public:
};