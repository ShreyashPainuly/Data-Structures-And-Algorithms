#include<iostream>
using namespace std;

// Optimized Solution:
int power(int a, int b) {
    //base case
    if(b == 0)
        return 1;

    if(b == 1)
        return a;

    //Recurive Call
    int ans = power(a, b/2);

    //is b is even
    if(b%2 == 0) {
        return ans * ans;
    }       
    else {
        // if b is odd
        return a * ans * ans;
    } 

}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}

/* Iterative non-optimized solution:
int power( int i, int a , int b) {
    int ans = 1;
    for(int i=0; i<b;i++) {
        ans = ans * a;
    }
    return ans;
}
int main() {
    int a, b, i;
    cin >> a >> b;
    cout << power(i, a, b);
    return 0;
}*/
