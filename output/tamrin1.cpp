#include <iostream>
using namespace std;

class student
{
private:
string name;
string status;
float average;
int id;
public :
student (string name,string status , float average , int id)
{
    this->name= name;
    this->status=status; 
    this->average=average;
    this->id=id;
}
~student ()
{
    cout << "kharab";
}
void setaverage(float a)
{
    if (a>0 &&  a<=20)
average=a;
else 
cout << "erorr";
}
float getaverage ()
{
return average;
}
void setname (string s)
{
name = s;
}
string  getname()
{
    return name ;
}
void setid(int i)
{
   id=i;
}
int getid()
{
    return id;
}

void print ()const 
{
    cout << "the average is :"<< average << endl;
    cout << "the name is"<< name<< endl;
    cout<<"the id is:"<<id<<endl;
}
};
int main()
{
student z1("saba","pass",20,1);
z1.print();
}
