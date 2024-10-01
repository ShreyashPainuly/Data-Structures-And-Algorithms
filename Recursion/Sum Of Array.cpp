#include<iostream>
using namespace std;

int sum(int arr[],int n) {
    // base case
    if(n == 0){
        return 0;
    }
    // recursive relation
    return sum(arr, n - 1) + arr[n - 1];
}
int main() {
    int n; // n -> size of array
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    // input array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // calling sum function
    cout << sum(arr, n) << endl;
    return 0;
}
