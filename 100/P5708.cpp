#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double a, b, c;
    double p;
    cin >> a >> b >> c;
    p = (1.0f / 2.0f) * (a + b + c);
    cout << fixed << setprecision(1)
         << sqrt(p * (p-a) * (p-b) * (p-c));
    return 0;
}
