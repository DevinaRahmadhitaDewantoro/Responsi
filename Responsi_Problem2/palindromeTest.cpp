#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str1 = "kasurusak";
    string str2 = "kakak";
    string a1 = str1;
    string a2 = str2;

    int n1 = str1.length();

    for(int i = 0; i < n1/2; i++){
        char temp = str1[i];
        str1[i] = str1[n1-i-1];
        str1[n1-i-1] = temp;
    }

    int n2 = str2.length();

    for(int i = 0; i < n2/2; i++){
        char temp = str2[i];
        str2[i] = str2[n2-i-1];
        str2[n2-i-1] = temp;
    }
     
    bool result = (str1 == a1 && str2 == a2);
    bool expected = true;
    
    if(result == expected){
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;

}
