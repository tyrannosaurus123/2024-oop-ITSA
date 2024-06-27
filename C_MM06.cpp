#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int mile;
    double km;
    while(cin >> mile) {
        km = mile*1.6;
        cout << fixed << setprecision(1) << round(km*10)/10 << endl;
    }
}