#include <iostream>
using namespace std;
int main() {
  
    cout << "Hello I am Erich!! Welcome to my first C++ application\n";
    string name;
    cout << "Hey! What is your name?"<<endl;
    cin >> name;
    cout << "Good day "<<name<< "! It's nice to meet you!\n";
    cout<< " "<<endl;
    
    cout<<"What is your birthday ?\n";
    
    int Month;
    cout<<"Month:\n";
    cin>> Month;
    int Date;
    cout<< "Date:\n";
    cin>> Date;
    int Year;
    cout<< "Year:\n";
    cin>> Year;
   
    int leapyear = Year % 4;
    cout<< "leapyear\n";
    if ((Year<0)&&(Year=0)) {
        cout<< " it is a leapyear"<< endl;
    }else if ((Year<0)&&(Year=0)) {
        cout<<"it is not a eapyear"<<endl;
    }

    return 0;
}