#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int minVal = A;
    if (B < minVal) minVal = B;
    if (C < minVal) minVal = C;
    int maxVal = A;
    if (B > maxVal) maxVal = B;
    if (C > maxVal) maxVal = C;

    cout << minVal << " " << maxVal ;
    return 0;
}