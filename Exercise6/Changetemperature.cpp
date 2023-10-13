#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int c;
	cin >> c;
	float f = (1.0 * c * 9 / 5) + 32;
	cout << fixed << setprecision(2) << f << endl;
	return 0;

}