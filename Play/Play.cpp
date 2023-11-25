#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>

using namespace std;


int main() {
	int a[16];
	int cnt = 0;
	for (int i = 0; i < 16; i++) {
		++cnt;
		a[i] = cnt;

	}
	for (int i = 0; i < 4; i++) {
		cout << setw(5) << a[i] << setw(5);
	}
	cout << " Loi Ra>>" << endl;
	for (int i = 4; i < 8; i++) {
		cout << setw(5) << a[i] << setw(5);
	}
	cout << endl;
	for (int i = 8; i < 12; i++) {
		cout << a[i] << setw(5);
	}
	cout << endl;
	for (int i = 12; i < 16; i++) {
		cout << a[i] << setw(5);
	}
	cout << endl << "Cong Chua:" << endl;
	cout << "Ban hay tim loi ra cho cong chua biet rang:" << endl << "Loi di can buoc qua 9 chu so va tong cac chu so la 82" << endl << "Cong chua dang o vi tri o so 13 va loi ra la o so 4" << endl;
	cout << "Xin moi nhap dap an:" << endl;
	int traloi[9];
	int i = 0;
	for (int i = 0; i < 9; i++) {
		cin >> traloi[i];
	}
	int dapan[9] = { 13, 14, 15, 11, 10, 6, 7, 3, 4 };
	bool ketqua = equal(begin(traloi), end(traloi), begin(dapan));
	if (ketqua) { cout << "BAn Da Chien Thang" << endl; }
	else cout << "Hay Kiem Tra Lai!";
		return 0;
}
