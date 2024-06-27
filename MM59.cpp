#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, count = 0, maxCnt = 0, majority;
    std::map<int, int> stat;
    while(cin >> n) {
        count++;
        if(stat.find(n) != stat.end()) {
            stat[n]++;
        } else {
            stat[n] = 1;
        }
    }
    for(auto itr: stat) {
        if(itr.second > maxCnt) {
            maxCnt = itr.second;
            majority = itr.first;
        } else  continue; 
    }
    if(maxCnt > count / 2) 
        cout << "Majority is " << majority << endl;
    else
        cout << "No Majority" << endl;
}