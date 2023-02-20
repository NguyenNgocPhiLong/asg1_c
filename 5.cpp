#include <iostream>
#include <cmath>

using namespace std;

void quadraticEquation(double a, double b, double c) {
    double denta = b*b - 4*a*c;
    double sqrt_denta = sqrt(abs(denta));
    
    if (denta > 0) {
        double x1 = (-b + sqrt_denta) / (2*a);
        double x2 = (-b - sqrt_denta) / (2*a);
        cout << "Phuong trinh co 2 nghiem phan biet" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (denta == 0) {
        double x = -b / (2*a);
        cout << "phuong trinh co nghiem kep." << endl;
        cout << "x1 = x2 = " << x << endl;
    } else {
        
        cout << "Phuong trinh vo nghiem." << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    quadraticEquation(a, b, c);
    return 0;
}

