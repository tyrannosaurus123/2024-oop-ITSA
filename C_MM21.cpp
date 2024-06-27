#include <iostream>
using namespace std;

long long F[20];

long long fac(int n)
{
    if(n == 0|| n == 1) {
        return 1;
    } else {
        if(F[n - 1] == -1) F[n - 1] = fac(n - 1);
        return (F[n - 1] * n);
    }
}

int main() {
    long long n;
    for(int i = 0; i < 20; i++) {
        F[i] = -1;
    }

    while(cin >> n) {
        cout << fac(n) << endl;
    }
}