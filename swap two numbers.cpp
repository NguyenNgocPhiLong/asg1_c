#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "nhap 2 so:\n"; 
    cin >> a >> b;
    int *x, *y, temp;
    x = &a; 
    y = &b; 
    temp = *x; 
    *x = *y;
    *y = temp;
    cout << "sau khi swap:"; 
    cout << "\nfirst number=" << a;
    cout << "\nsecond number=" << b;
    return 0;
}
