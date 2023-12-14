#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
#include<vector>
#include<array>
#include<stack>


using namespace std;
// phep chia phan nguyen phan du
//int main() {
//	int a, b, x, y;
//	cin >> a >> b;
//	x = a % b;// Phep chia lay phan du
//	y = a / b;// Phep chia lay phan nguyen
//}
// Tinh gia trij bieu thuc A(X)=x^3+3x^2+x+1

//int main() {
//	int x, value;
//	cin >> x;
//	value = x * x * x + 3 * x * x + x + 1;
//}

// Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ so)

//int main() {
//	int a, b, sum, hieu, tich;
//	double thuong;
//	cin >> a, b;
//	sum = a + b;
//	hieu = a - b;
//	tich = a * b;
//	thuong = 1.0*a / b;
//	cout << sum << " " << hieu << " " << tich << " " << fixed << setprecision(2) << thuong << endl;
//	return 0;
//}

// Tinh chu vi va dien tich hinh tron
#define Pi 3.14
//int main() {
//	int r;
//	double c, s;
//	c = 2 * Pi * r;
//	s = Pi * r * r;
//	cout << " Chu vi hinh tron laf C=" << c << endl << "Dien tich hinh trong la S=" << s << endl;
//	return 0;
//}

// tinh khoang cach eculid

//int main() {
//	int x1, y1, x2, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//	double kc;
//	kc = 1.0 * sqrt(pow(x1 - x2, 2) + (y1 - y2, 2));
//	cout << fixed << setprecision(2) << kc << endl;
//	return 0;
//}

// Tinh tong s= 1+2+3+...+n;

//int main() {
//	int n;
//	cin >> n;
//	int sum;
//	sum = n * (n + 1)/2;
//	cout << sum << endl;
//	return 0;
//}

// Tim so chia het cho b lon nhat khong vuot qua a

//int main() {
//	int a, b, x;
//	cin >> a >> b;
//	x = a - a % b;
//	cout << x << endl;
//	return 0;
//}

// Kie tr so chia het cho 3 va cho 5

//int main() {
//	int n;
//	cin >> n;
//	if (n % 3 == 0 && n % 5 == 0) {
//		cout << "N chia het cho ca 3 va 5" << endl;
//	}
//	else cout << "n khong chia het cho 3 va 5" << endl;
//	return 0;
//}
// Kiem tra nam nhuan

//int main() {
//	int n;
//	cout << " Nhap vao nam can kiem tra:";
//    cin >> n;
//	if (n <= 0) { cout << "invalid" << endl; }
//	else if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0)) { cout << "yes" << endl; }
//	else cout << "no" << endl;
//	return 0;
//
//}

// dung vong llap tinh tong tu 1 toi n

//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for(int i=1;i<=n;i++){
//		sum += i;
//	}
//	
//	cout << sum;
//	return 0;
//}

//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum += (i * i);
//	}
//	cout << sum << endl;
//}

//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 0; i <= n; i++) {
//		if (i % 3 == 0) {
//			sum += i;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}

//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum +=(1 / i);
//	}
//	cout << fixed << setprecision(2) << sum << endl;
//	return 0;
//}

//int main() {
//	int m, n;
//	cin >> m >> n;
//	long long h=0;
//	for (int i = 1; i <= m; i++) {
//		h += m * m;
//	}
//	cout << h << endl;
//	return 0;
//}

//int main() {
//	int n; cin >> n;
//	int cnt = 0;
//	while (true)
//	{
//
//	}
//	return 0;
//}

int main() {
	int n; cin >> n;
	int x;
	int cnt = 0;
	for (int i = n; i != 0; i--) {
		x = n % 10;
		n = n / 10;
		++cnt;
	}
	cout << cnt << endl;
	return 0;
}

