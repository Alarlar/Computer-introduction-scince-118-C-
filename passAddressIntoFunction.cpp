#include <iostream> // USE the function

using namespace std;

// Function declaration
double calcTheAverage(int arrayA[], int size);

int main() {
    cout << "Dinar Ibragimov - 07/17/22" <<endl;
    
    // An int array with 6 elements called balance
    int balance[6] = {1000, 2, 3, 17, 50, 41};
    cout << &balance; //prints out address of first byte of balance array.
    double theAverage;
    
    // Pass address of first byte of balance array to the arrayA as an argument.
    theAverage = calcTheAverage( balance, 6 ) ;
    
    // Output the returned theAverage value
    cout << "The Average value is: " << theAverage << endl;

    return 0;
}

//Define a Function Passing in an Array.. by a reference/address
double calcTheAverage(int arrayA[], int size)
// arrayA will have same address as array passed into function
{
    int i, sum = 0;
    double theAverage = 0;
    cout << &arrayA <<endl;    // print out address of arrayA
                        // Note it has same address as the balance array
                        // SO THIS MEANS YOU ARE USING THE SAME ARRAY, NOT A COPY
    for (i = 0; i < size; ++i)
    {
        sum += arrayA[i]; // short cut notation
    }
    theAverage = double(sum) / size;
    return theAverage;
}
