#include<iostream>

using namespace std;
 
int area (int side){
    int area = side * side;
    return area;
}

// Program starts running here:
int main(){
cout << "Dinar Ibragimov - 07/17/22" <<endl;
 
    int side;
    cout << "Enter the side of Square:";
    cin >> side;
    cout <<"Area of Square is: " << area(side) << endl;
    
    return 0;
}
 


