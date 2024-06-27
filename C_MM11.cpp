#include <iostream>
using namespace std;

int main() {
    int n, r;
    cin >> n;
    cout << "NT10=" << n/10 << endl;
    r = n%10;
    cout << "NT5=" << r/5 << endl;
    r = r%5;
    cout << "NT1=" << r << endl;
}