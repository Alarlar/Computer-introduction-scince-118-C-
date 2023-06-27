#include <iostream>

using namespace std;

int myFactorial(int integer);

int main(){
   
        cout << "Dinar Ibragimov - 07/23/22" << endl;
    
        int integer = 0;
        int total = 1;
        while (integer > 0){
            total *= integer;
            integer--;
        }
    return 0;
}
int myFactorial(int integer) {
    int total = 1;
    while (integer > 0){
        total *= integer;
        integer--;
    }
    return total;
}
