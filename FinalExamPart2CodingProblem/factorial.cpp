#include <iostream>             // fixed line '<iostream>'
#include <string>               // fixed line '<string>'
using namespace std;            // fixed line 'std'
long myFactorial(long integer);   // fixed line 'long', ';'
int main() {
    cout <<"Dinar Ibragimov - 07/23/22" << endl;
    
    int j = 10;                 //fixed line '='
    string myName = "NoName";
    cout << "Output sentence" << endl;
    cout << 120 << endl;
    cout << j << endl;           // prints out the value of j // fixed line 'comment'
    
    if (( j == 0 ) || ( myName == "NoName" )) // fixed line '==', '||'
    {
        cout << "J equals 0  OR  myName equals NoName" << endl;
    }
    else{
        cout << "None are true" << endl;
    }
    
    for ( int i = 0; i < 5; i++){
        cout << "Please enter an integer value: ";
        cin >> j;
        cout << "The value you entered is " << j;
        cout << " and its double is " << j*2 << ".\n";   // print out double value Changed "i" to "j"
    }
    cout << "Enter your first and last name: ";
    cin.ignore(); // Change: clear buffer
    getline(cin, myName); // Changed from "cin >> myName;"
    cout << "My first and last name is " << myName << endl;
    
    cout << "The factorial of 14 is " << myFactorial(14)<< endl;
    
    return 0;
}
long myFactorial(long integer) // Changed "intt" to "long"
{
if( integer == 1) // // Removed ";"
     return 1;
else
     {
       return (integer * (myFactorial(integer-1)));
     }
}
    
    
