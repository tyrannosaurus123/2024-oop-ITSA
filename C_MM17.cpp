#include <iostream>
#define  SWAP(X, Y)  (X^=Y, Y^=X, X^=Y)

using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b) {
        if(b > a) SWAP(a,b);
        for(int i = a; i > 0; i--) {
            if(a % i == 0 && b % i == 0) {
                cout << i << endl;
                return 0;
            }
        }
    }
}