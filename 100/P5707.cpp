#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int s, v, t;
    int hour, minutes;
    cin >> s >> v;
    t = (s-1) / v + 1 + 10;

    if(t%60 == 0) {
        hour = 8 - t/60;
    } else {
        hour = 7 - t/60;
    }
    if(hour < 0) {
        hour = 24 + hour;
    }

    if(t%60 == 0) {
        minutes = 0;
    } else {
        minutes = 60 - (t%60);
    }

    cout << setw(2) << setfill('0') << hour
         << ":" << setw(2) << setfill('0') << minutes;
}