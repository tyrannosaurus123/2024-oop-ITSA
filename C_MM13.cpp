#include <iostream>

using namespace std;

int main() {
    int h1, m1, h2, m2, duration, res = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    duration = (h2*60 + m2) - (h1*60 + m1);

    if(duration >= 30 && duration <= 120) {
        res = (duration/30)*30;
    } else if(duration > 120 && duration <= 240) {
        res = 120 + ((duration-120)/30) * 40;
    } else if(duration > 240) {
        res = 120 + 160 + ((duration-240)/30) * 60;
    }

    cout << res << endl;
}