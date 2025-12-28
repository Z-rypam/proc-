#include <iostream>
using namespace std;

 class Book 
 {
    private:
    string title;
    string author;
    float price;

    public:
    Book(){}
    Book (string title, string author, float price)
{
    this->title=title;
    this->author=author;
    this->price=price;
}
~Book()
{
    cout << "error";
}
void settitle (string t)
{
title = t;
}
string gettitle()const
{
return title;
}
void setauthor(string author)
{
author=author;
}
string getauthor() const 
{
return author;
}
void setprice(float price)
{
price=price;
}
float getprice()const
{
return price;
}
void printInfo()const
{
cout << "Title:"<<title << endl;
cout <<"Author:" << author << endl;
cout << "Price:"<< price << endl;
}
 };

 class library{
    private :
    string name; 
    int phone;
    Book book;
    public:
    void setname (string)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
    void setphone (int)
    {phone=p;}
    int getphone ()
    {return phone;}
   void setbook(Book) 
   {book=b;}
Book getbook()
{return book;} 
};

 int main()
 {
    Book* k = new Book("Clean Code" , "Robert C. Martin" , 42.5);
 k->printInfo();
 delete k;
        Book* k1 = new Book("The Pragmatic  Programmer" , "Andrew Hunt" , 35.75);
k1->printInfo();
delete k1;
 }