#include <iostream>

using namespace std;

void passByRefExample (int &Y){ // Address of single variable X is now also Address of Y)
    cout << Y << endl;  // Print out value of Y
    cout << &Y << endl; // Print out address of Y
    Y = 42; // change value of X and Y... both have SAME address
}

int main() {// Use Function
    cout << "Dinar Ibragimov - 07/17/22" <<endl;
    
    int A = 42;
    cout << A << endl;      // Prints out value of variable A....42
    cout << &A << endl;     // Prints out address of variable A
    passByRefExample(A);    // Use Function
    cout << A << endl;      // Print out value of A after function call
    cout << &A << endl;     // Print out address of A after function call
    
    
    return 0;
}
    

