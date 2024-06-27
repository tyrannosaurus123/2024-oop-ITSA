#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t, s;
    double income;
    while(cin >> t >> s) {
        if(t <= 60) income = t * s;
        if(t > 60 && t <= 120) income =(60*s) + (t-60)*s*1.33;
        else if(t >= 121) income =(60*s) + (60*s)*1.33 + (t-120)*s*1.66;
        cout << fixed << setprecision(1) << income << endl;
    }
}