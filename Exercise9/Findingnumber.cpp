#include<iostream>


using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int H = a - (a % b);
	cout << H << endl;
}