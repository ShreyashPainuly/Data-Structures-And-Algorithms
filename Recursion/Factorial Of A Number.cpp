#include<iostream>
using namespace std;

int Factorial (int n) {
    //Base-Case
    if (n == 0 || n == 1) 
    return 1; 

    //Recursive Relation
    int smallerProblem = Factorial(n-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
    // return n * Factorial(n-1);
}

int main() {
    int n;
    cout <<"Enter the number" << endl;
    cin >> n;
    cout <<"The factorial of " << n << " number is:" << Factorial(n) << endl;
}
