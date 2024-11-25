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
    int n;
    cout << "Enter an integer number:" ;
    cin >> n;

    if(isPalindrome(n)){
        cout << n << " is a palindrome" << endl;
    } else {
        cout << n << " is not a palindrome "<< endl;
    }

    return 0;
}