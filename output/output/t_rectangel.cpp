#include <iostream>
using namespace std;

class rectangle
{
    private:
    int width;
    int height;
    public:
    rectangle(int width=0 , int height=0)
{
    this->width=width;
    this->height=height;
}
    ~rectangle()
    {
        cout << "!!!";
    }
    void setwidth(int t)
    {
width=t;
    }
    int getwidth()
    {
        return width;
    }
    void setheight(int a)
    {
        height=a;
    }
    int getheight ()
    {
        return height;
    }
    void print () const 
    {
        cout << " the area is:"<<height*width <<endl;
        cout << " the primeter is:"<< (height+width)*2 <<endl;
    }
};
int main()
{
    rectangle s1,s2;
    s1.setheight(2);
    s1.getheight();
    s1.setwidth(4);
    s1.getheight();
    s1.print ();

    s2.setheight(5);
    s2.getheight();
    s2.setwidth(2);
    s2.getheight();
    s2.print();
}