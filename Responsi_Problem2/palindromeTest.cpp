#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int real = n;
    int reverse = 0;
    while(n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n/= 10;
    }
    return real == reverse;
}

int main(){
    int n = 1221;
    bool result = isPalindrome(n);
    bool expected = true;

    if (result == expected){
        cout << "Test passed" << endl;
     } else {
        cout << "Test failed" << endl;
     }
    return 0;
}