#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
#include<vector>
#include<array>
#include<stack>
#include<queue>


using namespace std;

struct HocSinh {
	string name, age, address;
	void nhap() {
		cin.ignore();
		getline(cin, name);
		getline(cin, age);
		getline(cin, address);
	}
	void xuat() {
		cout << name << " " << age << " " << address;
	}
};

int main() {
	HocSinh a;
	a.nhap();
	a.xuat();
	return 0;
}
