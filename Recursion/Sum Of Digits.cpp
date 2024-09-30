#include<iostream>
using namespace std;

int SumOfDigit(int num) {
    int sum = 0, lastdigit;
    while (num > 0) {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;
    cout << SumOfDigit(num) << endl;
    return 0;
}
