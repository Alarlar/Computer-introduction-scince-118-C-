#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Dinar Ibragimov - 07/23/22" << endl;

    int numberNames;
    string name;

    cout << "How many times to input first names? : ";
    cin >> numberNames;

    ofstream file;
    file.open("savedNames.txt");

    while (numberNames != 0) {
        cout << "Enter first name: ";
        cin >> name;
        file << name << endl;
        numberNames--;
    }
 
    file.close();
    return 0;
}
