#include <iostream>

using namespace std;

int main(){

    // AND - &&
    // True only when both expressions are true

    cout << (7>5 && 5!=10) <<endl;

    // OR - ||
    // True when both expression are true or only one of them is true.

    cout << (2>5 || 5!=10) <<endl;
    cout << (2>5 || 5!=10) <<endl;

    // NOT - !
    // Return true if result is flase and vice versa.
    cout << !(7>5 && 5!=5) <<endl;

    return 0;
}