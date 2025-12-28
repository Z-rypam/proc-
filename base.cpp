#include <iostream>
using namespace std;


/*class Person {
private : 
string name;
int age;

public:
void showinfo ();
void setage (int);
int getage ();
void setname (string);
string getname();
Person (string ,int);
};

 Person :: Person (string _name, int _age){
    name =_name;
    age = _age;
}

void Person :: setname (string N){
    name =N;
}

string Person :: getname (){
    return name;
}

void Person :: showinfo (){
    cout << "age:"<< age << "name :"<< name;
}

void Person :: setage (int A){
age=A;
}

int Person :: getage (){
    return age;
}

class student : public Person{
    private:
     int studentId;
     public:
     void setstudentId (int);
     int getstudentId ();
     student (int );
};

student :: student (int _s){
    student =_s;
}

void student :: setstudentId (int e){
studentId =e;
}

int student:: getstudentId (){
    return studentId ;
}
class Graduuatestudent: public student {
};*/
class shape{
    public:
    virtual int area(int a, int b) {
        cout << a*b ;
    }
    };

class square : public shape {
    public:
    int area () ;
};

class Rectangle : public shape {
    int area () ;
};

int main (){
shape *a = new square;
a-> area(2,5) ;
}
