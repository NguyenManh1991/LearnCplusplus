#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int H;
	H = b * ((a + a % b + 1) / b);
	cout << H << endl;
	return 0;
}