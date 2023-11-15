#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<iomanip>
#include<sstream>

using namespace std;

// Khai báo vector trong c++: vector<kieudulieu> ten vector(nhu 1 mảng động có thể thêm phần tử>
//HÀm push_back() dùng để thêm phần tử vào vector. push_back sẽ đẩy phần tử cần thêm vào cuối vector
// Hàm size(): hàm cho biết số lượng phần tử, kích thước của vector
// VÌ nó la 1 mảng động ta có thể truy cập các phần tử của vector thông qua chỉ số của nó
// Duyệt bằng for each
// Duyệt bằng iterator: giống như 1 con trỏ thông minh nó trỏ đến phần tử trong vector.
// Có 3 cách khai báo vector chính là:
//+cách 1: vector<int> n; 
//+cách 2: vector<int> n(x); khai báo vector n có x phần tử
//+cách 3: vector<int> n(x,value); khai báo vector n có x phần tư với các phần tử có giá trị là value
// Vector có thể lưu được các giữ liệu khác: long long, folat, double, string,.. kể cả lưu thêm 1 vector khác.
// Trong lí thuyết đồ thị ta sẽ cần 1 vector để lưu các vector khác.

/*int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << v.size() << endl;
	v.push_back(40);
	v.push_back(50);
	cout << v.size() << endl;
	cout << "Phan tu dau tien trong vector v la:" << " " << v[0] << endl;
	cout << "Phan tu cuoi cung trong vector v la:" << " " << v[v.size() - 1] << endl;;
	cout << "co the dung back de in ra phan tu cuoi cung la:" << " " << v.back() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}// Duyệt thông qua chỉ số
	cout << endl;
	for (int x : v) {
		cout << x << " ";
	}// Duyệt bằng for each.
	cout << endl;
	//Dùng iterator:
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//Dùng auto:
	for (auto bt = v.begin(); bt != v.end(); bt++) {
		cout << *bt << " ";
	}
	cout << endl;
	cout << v[2] << " " << *(v.begin() + 2) << endl;// v[2] dùng chỉ số truy xuất giá trị//*(v.begin()+2) dùng con trỏ truy xuất giá trị

	return 0;
}*/

/*int main() {

	//int a; cin >> a;
	//vector<int> h;// không khai báo h có sẵn a phần tử trước
	//for (int i = 0; i < a; i++) {
	//	int x; cin >> x;// Dùng 1 biến tạm rồi nhập giá trị cho biến tạm
	//	h.push_back(x);// Đẩy biến tạm vào vector thông qua push_back

	//	cout << h[i] << " ";
	//}
	//cout << endl;
	// Ta có thể khai báo 1 vector mà ta chỉ định số lượng phần tử và giá trị ban đầu cho tất cả phần tử của vector đó
	int n; cin >> n;
	vector<int> v(n, 100);//Khai báo vector v có n phần tử và tất cả các phần tử có giá trị là 100
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	// Ta có thể nới rộng vector:
	v.push_back(20);
	

	return 0;
}*/

//int main() {
//
//	vector<string> n;
//	n.push_back("MAnh");
//	n.push_back("Hien");
//	n.push_back("Yeu Nhau");
//
//	for (int i = 0; i < n.size(); i++) {
//		cout << n[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

// Bài toán tách các từ trong string và lưu vào trong vector sau đó sử lý sau:

int main() {
	string s = "Chung toi yeu nhau da duoc gan mot nam ";
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >> tmp) {
		v.push_back(tmp);
	}
	for (string x : v) {
		cout << x << " ";
	}

	cout << endl;

	cout << v.size() << " " << sizeof(v) << endl;

	return 0;
	
}