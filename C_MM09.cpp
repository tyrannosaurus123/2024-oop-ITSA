#include <iostream>
using namespace std;

int main() {
    int power;
    while(cin >> power) {
        if(power > 31) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        cout << (2<<power-1) << endl;
    }
}