#include<iostream>
using namespace std;

void Printfibonnaci(int num) {
    if( num < 1) {
        cout << "Invalid No of terms" << endl;
        return;
    }

    int fib, prev1 = 1, prev2 = 0;

    for(int i = 1; i<= num; i++) {
        if(i > 2) {
        fib = prev1 + prev2;
        prev2 = prev1;
        prev1 = fib;
        cout << fib << " ";
        }

        if(i == 1) {
            cout << prev2 << " ";
        }

        if(i == 2) {
            cout << prev1 << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cin >> num;
    Printfibonnaci(num);
    return 0;
}
