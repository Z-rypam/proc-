#include <iostream>
using namespace std;

class Price
{
private:
    int ghaimat;

public:
    Price();
    Price(int ghaimat);
    ~Price();
    void setghaimat(int a);
    int getghaimat();
    void read();
};
Price ::Price()
{
    ghaimat = 0;
}
Price ::Price(int ghaimat)
{
    this->ghaimat = ghaimat;
}
Price ::~Price()
{
   // cout << "none";
}
void Price ::setghaimat(int a)
{
    if (a < 0)
    {
        ghaimat = a * (-1);
    }
    else
    {
        ghaimat = a;
    }
}
void Price ::read()
{
    cout << " enter ghaimat mahsol :\n";
    cin >> ghaimat;
    setghaimat(ghaimat);
}
int Price ::getghaimat()
{
    return ghaimat;
}
class Product
{
private:
    Price price;
    static int counter;

public:
    Product();
    Product(Price p1);
    ~Product();
    int getPrice();
    static int getcounter();
};
int Product ::counter = 0;
Product ::Product()
{
}
Product ::Product(Price p1)
{
    price = p1;
    counter++;
}
Product ::~Product()
{
    //cout << "none";
}
int Product ::getPrice()
{
    return price.getghaimat();
}
int Product ::getcounter()
{
    return counter;
}
class Store
{
private:
    Product items[10];
    int a;

public:
   // Store();
    Store();
    void control(Product);
    void print();
};
Store::Store()
{
    a = 0;
}
void Store::control(Product c)
{
    if (a > 10)
    {
        cout << "Error!" << endl;
    }
    else
    {
        items[a] = c;
        a++;
        cout << "mahsol jadid" << endl;
    }
}
void Store ::print()
{
    for (int i = 0; i < a; i++)
    {
        cout << items[i].getPrice() << endl;
    }
}
int main()
{
    int n;
    Price p1;
    Store p2;
    cout << "enter number of n :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p1.read();
        Product p3(p1);
        p2.control(p3);
    }
    p2.print();
    cout << "Total products created:" << Product ::getcounter() << endl;

    return 0;
}