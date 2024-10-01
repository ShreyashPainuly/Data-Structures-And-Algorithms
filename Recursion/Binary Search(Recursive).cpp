#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key) {
    //Base Case:
    if(s > e) {
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid] == key) {
        return true;
    }

    if(arr[mid] > key) {
        return binarySearch(arr, s, mid - 1, key);
    }
    else {
        return binarySearch(arr, mid + 1, e, key);
    }

}
int main() {

    int arr[6] ={2,6,8,10,14,18};
    int size = 6;
    int key;
    cout << "Enter the key " << endl;
    cin >> key;

    bool ans = binarySearch(arr, 0, 5, key);
    if(ans) {
        cout << "Element is present" << endl;
    }
    else {
        cout <<"Element is absent" << endl;
    }
    return 0;
}
