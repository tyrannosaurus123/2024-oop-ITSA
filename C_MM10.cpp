#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float c;
    while(cin >> c) {
        c = c * 9 / 5;
        c += 32;
        cout << fixed << setprecision(1) << round(c*10)/10 << endl;
    }
}