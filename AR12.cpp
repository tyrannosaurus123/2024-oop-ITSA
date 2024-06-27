#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int>table;
    int n;
    while(cin >> n && n != -999) {
        if(table.find(n)!=table.end()) {
            table[n]++;
        } else {
            table[n] = 1;
        }
    }
    for(auto itr = table.rbegin(); itr != table.rend(); ++itr){
		cout << itr->first << " " << itr->second << endl;
	}
}