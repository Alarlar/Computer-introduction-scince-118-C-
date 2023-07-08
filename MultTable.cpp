#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout <<" Dinar Ibragimov - 07/17/22" <<endl;
    
    int tab[12][12]; // two dimensional array
    
    for (int i = 0; i < 12; i++) // loop to count the rows
    {
        for (int j = 0; j < 12; j++) // nested loop to count the columns
        {
            tab[i][j] = i * j; // formula to calculate the table
            cout << setw(4) << tab[i][j] <<" "; // align output
        }
            cout << endl;
    }
    return 0;
}
