#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // cin - console input
    int a;

    cout << "Enter the value of a : ";
    cin >> a;

    
    cout << "Variabler name a = " << a << endl;

    string name,surname;

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your surname : ";
    cin >> surname;

    cout << "Welcome "<<name<<" "<<surname<<endl;


    return 0;
}