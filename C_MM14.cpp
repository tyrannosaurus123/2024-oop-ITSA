#include <iostream>
using namespace std;

int main() {
    int n, d, h, m, s;
    while(cin >> n) {
        s = n % 60;
        n = (n - s) / 60;

        m = n % 60;
        n = (n - m) / 60;

        h = n % 24;
        n = (n - h) / 24;

        d = n;

        cout << d << " days" << endl;
        cout << h << " hours" << endl;
        cout << m << " minutes" << endl;
        cout << s << " seconds" << endl;
    }
}