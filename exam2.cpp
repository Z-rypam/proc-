#include<iostream>
#include<ctime>
using namespace std;

class Date{
    friend ostream &operator<< (ostream &, const Date &); 
    friend istream &operator>> (istream &, Date &);
    public:
    Date (int = 20, int = 2, int = 1404);
    void setDate(int , int , int );//اینجا میخوایم هر سه مقدار رو تو یه تابع ست کنیم واسه همین یه جا میگیریمشون و اینکه جدا هم میشه گرفتشون
int getday()const;
int getmonth()const;
int getyear() const;
void Print ()const;

//?

    private:
    int day;
    int month;
    int year;
    static int DaysofMonth[];
};

class FoodItem {
 friend istream &operator>> (istream &, FoodItem &);
 friend ostream &operator<<(ostream & ,const  FoodItem &);
    private:
string Name;
float Price;
Date PDate;
int Slife;
public :
FoodItem (string , float, Date, int);
FoodItem ();

void setPrice (float);
float getPrice () const;
Date getExpDate() const;

};
FoodItem :: FoodItem (string _Name , float _Price, Date _PDate, int _Slife){
    Name = _Name;
    Price = _Price;
    PDate = PDate;
    Slife = Slife;
}
FoodItem :: FoodItem(){
Name="food";
Price=0;
PDate.setDate(20 , 2 , 1404 );//تو سازنده ما میایم مقدار دهی پیش فرض رو انجام میدیم برای همین باید حتما مقدار بدی اینجا و چون بالا اینا رو int اعلان کردی صرفا عدد پیش فرضتو میذاری
Slife=0;
}
void FoodItem :: setPrice (float p){
    if (p>0)
    { Price=p;}
    else 
    {Price *= -1;} //  چون سوال گفته مقدار باید مثبت باشه توی else  هم شرظی میذاریم که در نهایت عددمون رو مثبت کنه  
}

float FoodItem :: getPrice () const 
{
    return Price;
}

Date FoodItem :: getExpDate () const 
{

    int month = Slife + PDate.getmonth();//
    int year = PDate.getyear() ;

if (month > 12) 
{
    year++;
    month -= 12;
    
}
Date d(PDate.getday(), month, year);
return d;

}

istream &operator>> (istream &in , FoodItem &f){ 
     // توی اپراتور  in  نباید کانست باشه توی out  باید کانست باشه و اینجا یه شی f  از کلاس فودایتم تعرریف میکنیم تا روش کارامون رو اعمال کنیم و این شی موقع تعریف تابع حتما باید باشه 

in>> f.Name>> f.Price>>f.PDate>>f.Slife;
return in;
    }
    ostream &operator<<(ostream &out ,const FoodItem &f)//علت اینکه اینجا کانست گذاشتیم؟
{
    out << f.Name << f.Price<< "Production Date:" << f.PDate<< 
}

int main(){
 FoodItem array [100];
 
 time_t nowtime = time(0);
 tm *t = localtime(&nowtime);
int day = t->tm_mday;
int month = t->tm_mon;
int year = t->tm_year;
Date now(day, month, year);

for ( int i=0; i<100; i++)
{
    cin>> array[i];
}
for ( int j=0; j<100;j++)
{
    if (array[j].getExpDate() < now)
}
return 0;
}