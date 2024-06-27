#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    while(cin >> num1 >> num2) {
        cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
        cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
        cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
        int r = num1%num2;
        if(r < 0)
            cout << num1 << "/" << num2 << "=" << (num1/num2)-1 << "..." << r + num2 <<endl;
        else
            cout << num1 << "/" << num2 << "=" << (num1/num2) << "..." << r <<endl;
    }
}