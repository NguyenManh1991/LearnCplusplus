#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>

using namespace std;


//int main() {
//	for (int i = 1; i <= 1000; i++) {
//		cout << i << endl;
//
//	}
//	return 0;
//}
//int main() {
//	for (int i = 1000; i >0; i--) {
//		cout << i << endl;
//	}
//	return 0;
//}

//int main() {
//	int boardA[200];
//	for (int i = 0; i < 200; i++) {
//		boardA[i] = i + 1;
//		cout<< boardA[i]<<endl;
//	}
//	return 0;
//}

//int main() {
//	int n; cin >> n;
//	int tich = 0;
//	for (int i = 1; i <= 20; i++) {
//		tich = n * i;
//		cout << n <<" * "<<i<<"=" << tich << endl;
//	}
//	return 0;
//
//}

//int main() {
//	int i, j, count;
//	cout << "In Bang Cuu Chuong Rut Gon" << endl;
//	for (i = 1; i <= 100; i++) {
//		count = i;
//		for (j = 1; j <= 10; j++) {
//			cout << setw(5) << count * j ;
//		}
//		cout << endl;
//	}
//	return 0;
//}
//int main() {
//    int i, j, count;
//    int start, end;
//
//    start = 1, end = 100;
//
//    cout << "In bang cuu chuong rut gon:" << endl;
//    for (i = start; i <= end; i++) {
//        count = i;
//
//        for (j = 1; j <= 10; j++) {
//            cout << setw(5) << count * j;
//        }
//
//        cout << endl;
//    }
//
//    return 0;
//}

//int main() {
//	int n; cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 != 0) {
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//int main() {
	/*int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= i / 2; j++) {
			if (i % j != 0) { cout << i << endl; }
		}
	}
	return 0;


}*/

//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		i += i++; cout << i << endl;
//	}
//	return 0;
//}

//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for ( int i = 1; i <= n; i++) {
//		sum =sum+ i * (i + 1);
//		
//	}
//	cout << sum << endl;
//	return 0;
//}

//int main() {
//	int a, b; cin >> a >> b;
//
//	int le = 0;
//	int chan = 0;
//	for (int i = a; i <= b; i++) {
//		if (i % 2 == 0) {
//			chan = chan + i;
//		}
//		else le = le + i;
//	}
//	cout << chan << " " << le << endl;
//	return 0;
//}

//
//bool nt(int);
//bool nt(int x) {
//	if (x < 2) {
//		return false;
//	}
//	else {
//		int i;
//		for (i = 2; i <= sqrt(x); i++) {
//			if (x % i == 0) {
//				return false;
//				break;
//			}
//
//		}
//		if (i > sqrt(x)) return true;
//
//	}
//}
//int main() {
//	int n;
//	cout << "nhap n:";
//	cin >> n;
//	bool x = nt(n);
//	if (x == true) {
//		cout << "So" << n << "la so nguyen to" << endl;
//	}
//	else
//		cout << n << "Khong phai la so nguyen to" << endl;
//	return 0;
//}
int main() {
	int n; cin >> n;
	if (n == -1) {
		cout << "xin moi nhap lại" << endl;
		cin >> n;
	}
	for (int i = n; i >=-100 ; i--) {
		cout << setw(5) << i;
	}
	cout << endl;
	return 0;
 }