#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d < b) {
        cout << c-a-1 << " " << d-b+60;
    } else {
        cout << c-a << " " << d-b;
    }
    return 0;
}
