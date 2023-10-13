#include<iostream>

using namespace std;

int  main() {
	int a, b;
	cin >> a >> b;
	int nguyen = a / b;
	int du = a % b;
	cout << nguyen << " " << du << endl;
	return 0;
}