#include <iostream>
using namespace std;

int main(){

    double PI = 3.14;
    double radius;
    cout << "Enter the radius: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "The area of radius " << radius << " is " << area << endl;

    return 0;
 
}