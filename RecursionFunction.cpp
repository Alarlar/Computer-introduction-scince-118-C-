#include <iostream>

using namespace std;

int sum(int num);

int main() {
    cout << "Dinar Ibragimov - 07/23/22" << endl;

    cout << "sum(10) = " << sum(10) << endl;
}

int sum(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num + sum(num - 1);
    }
}
