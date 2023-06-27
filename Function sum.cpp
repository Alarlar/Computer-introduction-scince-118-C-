#include <iostream>

using namespace std;

int sum(int num);

int main() {
    cout << "Dinar Ibragimov - 07/23/22" << endl;

    cout << "sum(10) = " << sum(10) << endl;
}

int sum(int num) {
    int total = 0;
    while (num > 0) {
        total += num;
        num--;
    }
    return total;
}
