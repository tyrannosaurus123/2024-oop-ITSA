#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    while(getline(cin, str)) {
        for(int i = 0; i < str.length(); i++) {
            if(islower(str[i])) {
                while(str[i] + 13 > 'z') {
                    str[i] -= 26;
                }
                str[i] = str[i] + 13;
                while(str[i] > 'z') {
                    str[i] -= 26;
                }
            } else if(isupper(str[i])) {
                while(str[i] + 13 > 'Z') {
                    str[i] -= 26;
                }
                str[i] = str[i] + 13;
                while(str[i] > 'Z') {
                    str[i] -= 26;
                }
            }
        }
        cout << str << endl;
    }
}