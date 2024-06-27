#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float dist, speed1 = 100, speed2;
    speed2 = 30 * 2.54;
    cin >> dist;
    dist *= 100;
    cout <<  ceil(dist/(speed1-speed2)) << endl;
}