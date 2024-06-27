#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, n;
    vector<int> table;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> n;
        table.push_back(n);
    }
    sort(table.rbegin(), table.rend());
    for(int i = 1; i < num+1; i++) {
        cout << i << " " << table[i-1] << endl;
    }
}