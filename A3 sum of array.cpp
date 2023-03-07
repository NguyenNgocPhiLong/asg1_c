#include <iostream>
using namespace std;
 
int main() {
 
   int arr[5], i, sum = 0;
    int *ptr;
 
    cout << "nhap 5 so trong mang:\n";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }
 
    ptr = arr;
    for (i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }
 
    cout << "\ntong cua mang la:" << sum;
 
    return 0;
 
}
