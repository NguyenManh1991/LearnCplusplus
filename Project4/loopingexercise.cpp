#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
//
//int main() {
//	int x, y; cin >> x >> y;
//
//	int sum = 0;
//	for (int i = x; i <= y; i++) {
//		sum = sum + pow(i, 2);
//	}
//	cout << sum << endl;
//	return 0;
//}

//int main() {
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum = sum + 1.0 / (pow(i, 3));
//
//	}
//	cout << fixed << setprecision(5) << sum << endl;
//	return 0;
//
//}

//int main() {
//	while (true) {
//		int n; cin >> n;
//		if (n < 0) { break; }
//	}
//	return 0;
//}
//#include <cstdlib> 
//
//int main()
//{
//    int n, i, j;
//    cout << "Nhap n: ";
//    cin >> n;
//    i = n + 1;
//    j = n + 1;
//
//    for (i = 1; i <= n + 1; i++)
//    {
//        for (j = n - i + 1; j >= 1; --j)
//            cout << "*";
//        cout << "\n";
//    }
//
//    cout << "\n";
//    system("PAUSE");
//    return EXIT_SUCCESS;
//}

//int main() {
//	int n; cin >> n;
//
//	int tich = 1;
//	for (int i = 1; i <= n; i++) {
//		tich = tich * i;
//
//	}
//	cout << tich << endl;
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++) {
//		cout << i << endl;
//	}
//	return 0;
//}
//{
//	for (int i = 10; i >= 1; i--) {
//		cout << i << endl;
//	}
//}
//{
//	for (int i = 1; i <= 100; i++) {
//		cout << setw(10) << i;
//	}
//	cout << endl;
//	return 0;
//}
//{
//	int sum;
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			sum = i * j;
//			cout << setw(5) << sum;
//		}
//	}
//		cout << endl;
//		return 0;
//}
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= 10; i++) {
//		cout << n * i << endl;
//	}
//	return 0;
//}
//{
//	for (int i = 0; i <= 10; i += 2) cout << i << endl;
//}
//{
//	for (int i = 1; i <= 10; i++) {
//		if (i % 2 != 0) { cout << i << endl; }
//	}
//}

//int main() {
//	int FA[10];
//	cout << "Xin moi nhap cac phan tu cua mang FA" << endl;
//	for (int i = 1; i <= 10; i++) {
//		
//		cin >> FA[i];
//	}
//	return 0;
//}

int main() {
	int n; cin >> n;
	int boiso=0;
	for (int i = 1; i <= 15; i++) {
		boiso = n * i; cout << boiso << endl;

	}
	return 0;
}