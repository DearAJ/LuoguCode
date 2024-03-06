#include <iostream>

using namespace std;

int main() {
    int inter;
    char temp;
    int frac;
    cin >> inter >> temp >> frac;
    while(frac != 0) {
        cout << frac % 10;
        frac /= 10;
    }
    cout << temp;
    while(inter != 0) {
        cout << inter % 10;
        inter /= 10;
    }
}
