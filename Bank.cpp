#include <iostream> 
using namespace std;

class Person {
    private:
    string name;
    int nationallD; //کد ملی
    public:
    Person (string _name, int _nationallD);
    string getname () const;
    int getnationallD() const;
    void print () const;
};
Person :: Person (string _name = "" , int _nationallD = 0){
    name = _name;
    nationallD = _nationallD;
}
string Person :: getname() const {
    return name;
}
int Person :: getnationallD() const {
    return nationallD;
}
void Person :: print () const{
    cout << "Name:" << name << endl << "nationllD:" << nationallD << endl;
}

class BankAccount{
    friend ostream &operator << (ostream &out , const BankAccount &);
        private:
        int accountNumber;//شماره حساب 
        Person owner;
        static int totalAccounts;//تعداد کل حساب های ساخته شده
        public:
        float balance; //موجودی حساب
        BankAccount (int _accountNumber , float _balance , Person _owner);
        BankAccount();
        ~BankAccount();
        void deposite (int amount);//برای واریز 
        void withdraw (int amount); //برای برداشت 
        float getblance () const;
        int gettotlAccount () const;

        void setowner (Person);
        Person getowner () const ;

        void setaccountNumber (int);
        int getaccountNumber() const;

        friend void showBalance (const BankAccount &);
        friend class BankInspector;
};

int BankAccount ::gettotlAccount()const {
    return totalAccounts;
}
 
void BankAccount :: setaccountNumber (int a){
     accountNumber=a;
}
int BankAccount :: getaccountNumber () const{
    return accountNumber;
}
void BankAccount :: setowner (Person o){
    owner = o;
}
Person BankAccount :: getowner () const {
    return owner;
}
int BankAccount :: totalAccounts = 0;
BankAccount :: BankAccount (int _accountNumber , float _balance , Person _owner){
    accountNumber = _accountNumber;
    balance = _balance;
    owner = _owner;
    totalAccounts++;
}
BankAccount :: BankAccount (){
    accountNumber=0;
    balance=0.0;
   totalAccounts++;
}
BankAccount :: ~BankAccount (){}
ostream &operator << (ostream &out , const BankAccount &B)
{
    out <<"Account Number:"<< B.accountNumber <<endl<<"Balance:"<< B.balance <<endl <<"Owner:"<< B.getowner().getname();
    return out;
}
 
float BankAccount :: getblance () const{
    return balance;
}
void BankAccount :: deposite (int amount){
    if (amount > 0)
    {
        balance = balance+amount;
    }
}
void BankAccount :: withdraw (int amount){
    if (amount > 0 && amount <= balance){
        balance= balance-amount;
    }
    else 
    { 
        cout << "NaMojodi";
    }
}
BankAccount operator+(BankAccount& a2, BankAccount& a1)
{
BankAccount a3;
a3.balance = a1.balance + a2.balance ;
return a3;
}

   void showBalance(const BankAccount &acc) {
    cout << "Balance:"<< acc.balance;
   }

   class BankInspector{
public:
void mojodibalance (BankAccount& );
   };

   void BankInspector :: mojodibalance (BankAccount& B){
    cout << B.balance;
   }


   int main (){
    Person h1("Ali" , 123456);
    Person h2 ("Sara" , 456789);

    BankAccount s1(1001 , 700, h1);
    BankAccount s2(1002, 700, h2);
    BankAccount s3;
    s3=s1+s2;
    s1.deposite(2500);
    s1.withdraw(500);

    s2.deposite(4750);
    s2.withdraw(50);

cout << s1 <<endl << s2 << endl ;
cout << "Combined Account Balance:"<< s3.getblance() << endl ;
//cout <<  "Total Account Created:"<< S.gettotlAccount() ;
cout <<                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "Total Account Created:"<< BankAccount::gettotlAccount();


   }
