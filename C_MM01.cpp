#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float upper, lower, high, res;
    while(cin >> upper >> lower >> high) {
        res = (upper+lower)*high/2;
        cout << "Trapezoid area:" << fixed << std::setprecision(1) << res << endl;
    }
}
