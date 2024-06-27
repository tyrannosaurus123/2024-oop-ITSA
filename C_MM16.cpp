#include <iostream>
using namespace std;

int main() {
    int x, y;
    while(cin >> x >> y) {
        if((x*x) + (y*y) <= 40000) cout << "inside" << endl;
        else cout << "outside" << endl;
    }
}