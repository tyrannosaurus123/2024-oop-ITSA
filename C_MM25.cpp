#include <iostream>
using namespace std;

int main() {
    int n, sum;
    while(cin >> n) {
        sum = 0;
        for(int i = n; i > 0; i--) {
            if(i%3 == 0) sum += i;
        }
        cout << sum << endl;
    }
}