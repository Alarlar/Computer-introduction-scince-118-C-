#include <iostream>
#include <iomanip>                           // library with manipulation function

using namespace std;


int main() {
    cout <<"Dinar Ibragimov - 07/10/22"<< endl;
    // program with nested ‘for’ loops print out the values of a Multiplicaction Table 12 By 12
    for (int i = 1; i <= 12; i++) { // declare variable = initial value //criteria checking value //change value
        cout << setw(4);      // indicates the minimum number of symbol positions that the variable will occupy.
        cout << i ;           // print out value of i each time loop executed

        for (int j = 2; j <13; j++) { // Nested ‘for’ loop
            cout << setw(4);
            cout << i * j ;            // Multiplicacte values
        }

        cout << endl;
    }


    return 0;
}
