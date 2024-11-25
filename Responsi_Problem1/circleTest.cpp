#include <iostream>
using namespace std;

int main(){

    double PI = 3.14;
    double radius1 = 25;
    double radius2 = 26;

    double area1 = PI * radius1 * radius1;
    double area2 = PI * radius2 * radius2;
    
    double expected1 =  1962.5;
    double expected2 = 2122.64;

    if (area1 == expected1 && area2 == expected2){
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
 
}