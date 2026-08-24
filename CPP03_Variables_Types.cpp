#include <iostream>

using namespace std;

int main(){

    int a=10,b=35; // 4 bytes

    cout<<"Value of a : "<<a<< "Address of a : "<<&a <<endl;
     cout<<"Value of b : "<<a<< "Address of a : "<<&b <<endl;

     short s=20; // 2 bytes

     cout<<"Value of s : "<< s << endl;

     float f1=20.30; // 4 bytes
     double d1=50.26082510; // 8 bytes
     cout<<"Value of f1 : "<< f1 << endl;
     cout<< "Vlue of d1 : "<< d1 << endl;

     char c1='A';
     cout<<c1<<endl;

     string s1= "Hello Abhijeet";
     cout<<s1<<endl;

     string s2="Welcome to CPP !";
     cout<<s2<<endl;

     bool b1=true; // Boolean is true or false. FALSE IS ALWAYS ZERO,EVERY OTHER NUMBER IS TRUE.
     cout<<b1<<endl;
     b1=2608;
     b1=-446;
     cout<<b1<<endl;
     b1=0;
     cout<<b1<<endl;

    //  Positive number or unsigned numbers.Increase the positive range.
    unsigned short int u1=60445;
    cout<<u1<<endl;

    const string Myname="Abhijeet Tiwari";
    cout << Myname << endl;

    
    return 0;
}