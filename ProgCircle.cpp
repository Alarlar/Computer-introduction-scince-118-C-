#include <iostream>
#include <string>
#include <cmath>

using namespace std;



int getPostInt(string msg)
    {
        int num = 0;
        
        do
        {
            cout << msg << endl;
            cin >> num;
        }while(num <=0);

        return num;
    }
    
    double areaOfCircle(int r)
    {
        return 3.14159 * pow(r, 2);
    }
    double volOfSphere(int r)
{
        return 4/3 * 3.14159 * pow(r,3);
    }

int main () {
    cout <<"Dinar Ibragimov - 07/17/22" <<endl;
    
    int radius = getPostInt("Enter a positive integer for the radius of a circle/sphere");
    
    double aCircle = areaOfCircle(radius);
    
    double vSphere = volOfSphere(radius);
    
    cout << "The area of a circle that has a radius of" <<
    radius << " is " << aCircle << "." << endl;
    
    cout << "The volume of a sphere that has a radius of" <<
    radius << " is " << vSphere << "." << endl;
    
    return 0;
}
