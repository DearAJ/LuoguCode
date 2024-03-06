#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double cola;
    int student;
    cin >> cola >> student;
    cout << fixed << setprecision(3) << cola / student
         << endl << student * 2;
    return 0;
}
