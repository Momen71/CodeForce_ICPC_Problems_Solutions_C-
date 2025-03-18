#include <iostream>
using namespace std;

int main() {

    float round;
    int A, B;
    cin >> A >> B;
    round = (float)A / B;
    cout << "floor " << A << " / " << B << " = " << A / B << endl;
    if (A == B)cout << "ceil " << A << " / " << B << " = " << (A / B) << endl;
    else
        cout << "ceil " << A << " / " << B << " = " << (A / B) + 1 << endl;
    if (round > ((A / B) + 0.5) || round == (A / B + 0.5))
        cout << "round " << A << " / " << B << " = " << (A / B) + 1 << endl;
    else
        cout << "round " << A << " / " << B << " = " << A / B << endl;
    return 0;
}