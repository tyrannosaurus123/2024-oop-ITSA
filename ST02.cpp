#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int res = 0;
    while(cin >> input) {
        for(int j = 0; j < input.length(); j++) {
            res = res * 26 + (input[j] - 'A') + 1;
        }
        cout << res << endl;
        res = 0;
    }
}