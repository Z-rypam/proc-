#include<iostream>
using namespace std ;
class Price{
    private:
int price;
public:
Price ()
{
    price=0;
}
Price (int p)
{
price=p;
}
void setprice(int);
int getprice();
};
void Price :: setprice(int p)
{
    price=p;
}
int Price :: getprice()
{
    return price;
}

class Product{
    private:
    Price p;
    static int counter;
    public:
    Product ()
    {
        p.setprice(0);
    }
    Product(int x)
    {
      p.setprice (x);
      counter++;
    }
   Product(const Product & n)
   {
    p = n.p;
   }
   int getp() {
    return p.getprice();
   }
  static int getcounter() 
  {
    return counter;
  }
  Product(Product && n) 
{
p=n.p;
n.p.setprice(0);
} 
};
int Product :: counter =0;

class Store {
    private:
    Product items [10];
    int z;  
public:
Store ()
{
    z=0;
}
void add (Product p1) {
    if (z<10)
    {
        z++;
    }
    else  
    {
        cout << "error!";
    }
}
void display ()
{
    for (int i=0 ; i<z; i++)
    {
        cout << items[i].getp()<<endl;
    }
}
};

int main () {
    int s;
    cin>> s; 
    Store e;
    for (int i =0 ; i<s; i++)
    {
        int f ;
        cin>> f; 
        e.add(f);
    }
    e.display();
    cout << "Total product created:"<< Product::getcounter()<< endl;
    return 0; 
    
    

    
}


class Point{
    int x;
    int y;
    public :
    Point (int _x,int _y)
    {
        x = _x;
     y= _y;
    }
    Point ()
    {
        x=0;
        y=0;
    }
    void set (int x, int y)
    {
        this -> x=x;
this -> y=y;
    }
    int getx ()
    {
        return x;
    }
    int gety()
{
    return y;
}
friend  ostream &operator<< (ostream &out,const Point&d ) ;// برای out  کانست میذاریم ولی برای in  نباید کانست بذاریم قانونه
friend istream &operator>> (istream &in, Point &s);
};


 ostream &operator<< (ostream &out, const Point &d) 
{
    out << "("<< d.x<< ","<< d.y<<")";
}
istream &operator>> (istream &in, Point &s)
{
    in>> s.x>>s.y;
}