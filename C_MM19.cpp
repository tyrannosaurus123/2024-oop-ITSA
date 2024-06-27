#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    double fee;
    while(cin >> t) {
        fee = t * 0.9;
        if(t > 800 && t < 1500) {
            fee *= 0.9;
        } else if(t >= 1500) {
            fee *= 0.79;
        }
        cout << fixed << setprecision(1) << fee << endl;
    }
}