#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ans[8];
    int n, power = 0;
    bool flag = 0;
    while(cin >> n) {
        for(int i = 0; i < 8; i++) {
                ans[i] = 0;
        }
        power = 0;
        if(n == 1) ans[0] = 1;
        else if(n >= 0) {
            while(n > 1) {
                ans[power] = n%2;
                n/=2;
                power++;
                if(n == 1) ans[power] = 1;
                else ans[power] = 0;
            }
        } else {
            ans[7] = 1;
            n *= -1;
            while(n > 1) {
                ans[power] = n%2;
                n/=2;
                power++;
                if(n == 1) ans[power] = 1;
                else ans[power] = 0;
            }
            for(int i = 0; i < 7; i++) {
                if(flag == 0) {
                    if(ans[i] == 1) flag = 1;
                    continue;
                } else {
                    if(ans[i] == 1) ans[i] = 0;
                    else ans[i] = 1;
                }
            }
        }
        for(int i = 7; i >= 0; i--)
            cout << ans[i];
        cout << endl;
    }
}