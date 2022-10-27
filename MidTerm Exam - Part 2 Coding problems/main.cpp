#include <iostream>
#include <string>

using namespace std;

int main() {
    cout<<"Dinar Ibragimov - 07/03/2022"<< endl;

    string favoriteFirstName; // Declare variable
    int age = 0;
    char gender = 'x';
    cout << "Enter your favorite first name: "; // cout command to print “message” to monitor
    cin >> favoriteFirstName; //  cin allows you to input a value
    cout << "Enter you age:";
    cin>>age;
    cout << "Enter u Gender F/M: ";
    cin >> gender;
    
                                    // Logical AND operator ((exp1) && (exp2) && (exp3) )...
    if ( ( age > 20 ) && ( gender = 'x') && ( favoriteFirstName == "Dinar" ))
                                    // And coniditions: Takes ALL to be TRUE, so result is TRUE
        { cout << "ALL conditions ARE TRUE" << endl; }
                                    // And conditions: Only takes one FALSE condition, so result is FALSE
           else
        {  cout <<" One or more conditions is FALSE "<<endl;}
              
        
       return 0;
}
    
    
    






