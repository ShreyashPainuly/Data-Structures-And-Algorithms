#include<iostream>
using namespace std;

void TOH(int n, int source, int auxiliary, int destination) {
    //Base case
    if(n == 0) {
        return;
    }
  
    //Recursive Relation
    TOH(n-1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    TOH(n-1, auxiliary, source, destination);
}
int main() {
    int n;
    cout << "Enter the number of discs: ";
    cin >> n;
    TOH(n, 1, 2, 3);
    return 0;
}
