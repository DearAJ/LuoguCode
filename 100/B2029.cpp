#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double h, r, v;
    const float pi = 3.14;
    cin >> h >> r;
    v = pi * pow(r, 2) * h;
    cout << int(20001/v + 1);
    return 0;
}