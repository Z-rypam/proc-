#include <iostream> 
using namespace std;

class Date {
    friend ostream &operator << (ostream &, const Date&)
    private:
    int day;
    int month;
    int year;
    static int DaysOfMonth[];
    public :
    Date (int =1 , int=1  , int=1403 );
    void setDate(int , int , int );
    int getday()const;
int getmonth () const;
int getyear()const;
void display()const;
};

class Course {
    private :
    string Title; //عنوان دوره
    string Attendess[20];//اسامی افراد شرکت کننده 
static int Duration;//تعدادجلسات دوره  و ثابته و 10 تاس----استاتیک رو میشه کانست تعریف کرد چون گفته ثابته ؟ 
Date StartDate;//تاریخ شروع دوره

public: 
static void setDuration (int);//ورودی هم نباید استاتیک باشه؟
 static int getDuration();//اینا رو نباید استاتیک اعلان کنم؟
Course (string , Date );
Course ();
void setStartDate (Date);
Date getStartDate();
Date getEndDate();
};
Course :: Course (string _Title, Date _StartDate){
    Title = _Title;
    StartDate = _StartDate;//نباید اینجا یک شی از کلاس ست دیت باشه؟
}
Course :: Course (){
//لازمه سازنده خالی؟
}
void Course::setDuration(int _Duration)
{
    if (_Duration>0)
    {
        Duration=_Duration;
    }
    else 
    {
        Duration=_Duration*-1;
    }
}
int Course :: getDuration()
{
    return Duration;
}

void Course :: setStartDate(Date ){
    this -> StartDate = StartDate.setDate;
}
Date Course :: getStartDate ()
{
    return StartDate;
}
Date Course :: getEndDate()
{
    int month = 
}