#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    string c1 = string(1, c);
    string c2 = string(3, c);
    string c3 = string(5, c);
    cout << "  " << c1 << endl
         << " " << c2 << endl
         << c3;
    return 0;
}
