#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

//struct SinhVien {
//	string name;
//	int msv;
//	void Nhap() {
//		cin.ignore();
//		getline(cin, name);
//		cin >> msv;
//	}
//	void Xuat() {
//		cout << name << " " << msv << endl;
//	}
//};


//int main() {
//	
//	int n;
//	cout << " Nhap vao so luong sinh vien: ";
//	cin >> n;
//	vector<SinhVien> danhSachSinhVien;
//	
//	for (int i = 0; i < n; i++) {
//		SinhVien a;
//		a.Nhap();
//		danhSachSinhVien.push_back(a);
//	}
//	
//	
//	for (int i = 0; i<n-1; i++) {
//		for (int j = i+1; j < n; j++) {
//			if (danhSachSinhVien[j].msv < danhSachSinhVien[i].msv) {
//				SinhVien temp=danhSachSinhVien[i];	
//				danhSachSinhVien[i] = danhSachSinhVien[j];
//				danhSachSinhVien[j] = temp;
//			}
//		}
//	}
//	for (auto x : danhSachSinhVien) {
//		x.Xuat();
//	}
//	return 0;
//}


//int main() {
//	vector<int> arr;
//	int n;
//	cin >> n;
//	int max=0;
//	int sum=0;
//	for (int i = 0; i <n; i++) {
//		int a;
//		cin >> a;
//		arr.push_back(a);
//	}
//	/*for (int x : arr) {
//		cout << x << " ";
//	}*/
//
//	for (int i = 0; i < n; i++) {
//		sum = arr[i];
//		for (int j = i + 1; j < n; j++) {
//			sum +=  arr[j];
//		if (sum > max) {
//				max = sum;
//			}
//		    }
//			}
//	cout << max << endl;
//}

//int main() {
//	string s;
//	cout << "xin moi nhap vao chuoi:  ";
//	//cin.ignore();
//	getline(cin, s);
//	bool a = true;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] != s[s.size() - i - 1]) {
//			a = false;	
//		}
//		
//	}
//	if (a) {
//		cout << " day la chuoi doi xung";
//	}
//	else cout << " chuoi khong doi xung";
//}


//int main() {
//	vector<int> am;
//	cout << "nhap vao so luong phan tu mang";
//	int n;
//	cin >> n;
//	 
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		am.push_back(a);
//	}
//	int x;
//	cout << "nhap vao so can tim: ";
//	cin >> x;
//	bool kt = false;
//	int viTri;
//	for (int i = 0; i < n; i++) {
//		if (am[i] == x) {
//			viTri = i;
//			kt = true;
//		}
//	}
//	if (kt) {
//		cout << "tim thay x trong mang x nam o chi so: " << viTri << endl;;
//	}
//	else cout << " khong tim thay x trong mang";
//}

int main() {
	vector<string> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "(" || a == ")" || a == "{" || a == "}" || a == "[" || a == "]") {
			s[i] = a;
			s.push_back(a);
		}
		else cout << "ban nhap sai roi xin moi nhap lai";
		break;
	}
	for (auto x:s) {
		cout << x;
	}
}