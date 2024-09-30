#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j) {
    //Base Case
    if(i > j)
    return true;
    
    if(str[i] != str[j]) {
        return false;
    }
    else {
        //Recurive Call
        return isPalindrome(str, i+1,j-1);
    }
}


int main () {
    string str = "abccba";
    bool CheckPalindrome = isPalindrome(str, 0, str.length()-1);

    if (CheckPalindrome) {
        cout << "It is a Palindrome" << endl;
    }
    else {
        cout << "It is not a Palindrome" << endl;
    }
    return 0;
}
