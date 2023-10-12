#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	double thuong = (float)a / b;
	cout << tong << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl;
	return 0;
}