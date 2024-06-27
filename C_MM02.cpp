#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float  width, height, res;
    while(cin >> width >> height) {
        res = width*height/2;
        cout << fixed << std::setprecision(1) << res << endl;
    }
}
