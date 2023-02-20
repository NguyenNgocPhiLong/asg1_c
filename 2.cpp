#include <bits/stdc++.h>
using namespace std;
 
void findRoots(int a, int b, int c)
{

    if (a == 0) {
        cout << "khong hop le";
        return;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        cout << "co 2 nghiem phan biet \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "co nghiem kep \n";
        cout << -(double)b / (2 * a);
    }
    else
    {
        cout << "vo nghiem \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}
 
int main()
{
    int a, b, c;
 cout << "nhap a: ";
 cin >> a;
 cout << "nhap b: ";
  cin >> b;
 cout << "nhap c: ";
  cin >> c;
    findRoots(a, b, c);
    return 0;
}
