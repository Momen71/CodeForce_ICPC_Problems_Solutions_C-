#include <iostream>
using namespace std;

int main() {
    long long num1, num2;
    int last_digit1, last_digit2;
    cin >> num1 >> num2;
    last_digit1 = num1 - (num1 / 10) * 10;
    last_digit2 = num2 - (num2 / 10) * 10;
    cout << last_digit1 + last_digit2 << endl;

}