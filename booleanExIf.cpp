#include<iostream>      //Name of prewritten code <file> you want to use
                        //Good programmers REUSE existing code
                        //#includes names files/libraries of existing code you want to reuse
using namespace std;    //Command to avoid typing std:: in front of cout and endl commands

int main(){             //All programs start at 'main' - simple version of main, others possible
    cout<<"Dinar Ibragimov - 06/22/22"<<endl;
    
    int firstNum = 0, secondNum = 0; // Declare and initialize variables
    
    cout<< "Enter first Number (example 69): "<<endl;   //Print prompt for first num
    cin>> firstNum;     //stop and wait for user to enter first number
    
    cout<< "Enter second number (example42): " << endl; //Print prompt for second num
    cin>> secondNum;    //stop and wait for user to enter second number
    
    if (firstNum < secondNum)
        { cout << "First number is less than second number" <<endl;  }
    // Print to monitor message when first num less than second num
    else
        {cout << "First number is greater than or equal to second number" <<endl;}
    // Print to monitor message when First num is greater than or equal to second num
    return 0; // End program
}
    
