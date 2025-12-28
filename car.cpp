#include <iostream>
#include <math.h>
using namespace std;

class System {
  int volume;
  int band;
  bool Bluetoothon;

public:
  void setvolume(int);
  int getvolume();
  void setband(int);
  int getband();
  void setBluetoothon(bool);
  bool getBluetoothon();
  friend class Car;
  System(int volume, int band, bool bluetoothon) {
      this->volume = volume;
      this->band = band;
    this->Bluetoothon=Bluetoothon;
  }
};
void System ::setvolume(int v)
{
    volume=v;
}
int System::getvolume()
{
 return volume;
}



void System :: setband(int b)
{
    band = b;
}
int System :: getband()
{
    return band;
}
void System :: setBluetoothon(bool t)
{
Bluetoothon=t;
}
bool System :: getBluetoothon()
{
    return Bluetoothon;
}



    class Car {
  string model;
  string company;
  int year;
  int dande;
  bool isOn = false;
  bool isStopped;
  string motor;
  static int count;
  friend void carFixer(Car,string);

public:
  Car(string model, string company, int year, string motor)
      : model(model), company(company) {
    this->year = year;
    this->motor = motor;
    count++;
  }
  Car() { Car("null", "null", -1, "null"); }

  void setDande(int dande) {
    if (dande >= 7 || dande <= 0) {
      cout << "zarrrtt!";
      return;
    }
    if (dande == 6) {
      if (isStopped == true) {
        this->dande = dande;
      } else {
        cout << "mashin bayad stop bashe!!" << endl;
      }
      return;
    } else {
      if (abs(this->dande - dande) == 1) {
        this->dande = dande;
        return;
      } else {
        cout << "nemishe!!" << endl;
        return;
      }
    }
  }
  void start() { isOn = !isOn; }
  bool getIsOn() { return isOn; }
  int getDande() { return dande; }
  int getCount() { return count; }
};

void carFixer (Car car , string motor){
    car.motor = motor;
}

class kasr {
    int soorat;
    int makhraj;
    public:
    kasr (int s, int m)
    {
        soorat=s;
        makhraj=m;
    }

    kasr operator+(kasr x){

        

    }


};

int main() { Car x;
    Car y;
    Car z = x + y;
    kasr a(4,7);
    kasr b(5,8);
    kasr c = a + b + c;

 }