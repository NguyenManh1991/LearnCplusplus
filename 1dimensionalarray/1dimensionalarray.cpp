#include<iostream>
#include<math.h>
using namespace std;

/*int main() {
	int a[100];// Khai báo mảng a có 100 phần tử có kiểu dữ liệu là int
	long long b[10];
	float c[100];
	double d[18];
	char e[50];
	return 0;
}*/
// Cách khai báo mảng Kiêu_Dữ Liệu tenmang[Số Lượng Phần TỬ của MẢng];

//int a[6]={6,5,4,3,2,1}
// Để truy cập đến các phần tử trong mảng thì ta thông qua chỉ số mang a có n phần tử thì chỉ số sẽ chạy từ 0=>n-1;
// tenmang[index(chỉ số)] chỉ số của mảng bắt đầu từ 0 và chạy tới n-1
//VD
/*int  main() {
	int n;
	cin >> n;
	int a[7];
	for (int i = 0; i < n; i++) {
		cin >> a[i];//Nhập giá trị cho phần tử ở chỉ số i
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}*/

bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;

	}
	return n > 1;
}
int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (nt(a[i]))
			cout << a[i] << "  ";
	}
	return 0;
}
