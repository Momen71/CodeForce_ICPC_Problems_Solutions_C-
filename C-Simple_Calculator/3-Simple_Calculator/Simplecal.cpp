#include<iostream>
using namespace std;
int main()
{
	long long in1, in2;  //protect from big_result
	cin >> in1 >> in2;
	cout << in1 << " + " << in2 << " = " << in1 + in2 << endl;
	cout << in1 << " * " << in2 << " = " << in1 * in2 << endl;
	cout << in1 << " - " << in2 << " = " << in1 - in2 << endl;
	return 0;

}