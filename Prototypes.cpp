#include <iostream>
#include <string>

using namespace std;

// Prototypes
int getAge();
string getName();
void func(string name, int age);

int main() {// Use Function
        cout << "Dinar Ibragimov - 07/17/22" <<endl;

        string firstName = getName();
        int age = getAge();

        func(firstName, age);
        return 0;
}

string getName() {
        string name;
        cout << "Enter your first name: ";
        cin >> name;
        return name;
}

int getAge() {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        return age;
}

void func(string name, int age) {
        cout << name << " is " << age << " years old." << endl;
}
