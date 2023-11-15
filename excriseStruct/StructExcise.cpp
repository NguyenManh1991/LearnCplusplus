#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;


/*struct NhanVien {
	string name;
	string BirthDay;
	double salary;
	bool sex;
	void nhap() {
		cin.ignore();
		cout << "name: ";
		getline(cin, name);
		cout << "birthday: ";
		getline(cin, BirthDay);

		cout << "salary: ";
		cin >> salary;

		cout << "sex: ";
		cin >> sex;
	}
	
	void HienThi() {
		cout << name << " " << BirthDay << " " << salary << " " << sex << endl;
	}
};

int main() {
	int n;
	cout << "xin moi nhap so luong nhan vien:" << " ";
	cin >> n;
	vector<NhanVien> DanhSach(n);
	for (int i = 0; i < n; i++) {
		NhanVien x;
		x.nhap();
		DanhSach[i] = x;
	}

	for (int i = 0; i < n; i++) {
		DanhSach[i].HienThi();
	}
	return 0;
}*/

struct HocSinh {
	string name;
	float Toan;
	float Van;
	float TB;
	void ThongTinSv() {
		cin.ignore();
		cout << " Ten:" << " ";
		getline(cin, name);
		cout << "Diem Toan:" << " ";
		cin >> Toan;
		cout << "Diem Van" << " ";
		cin >> Van;
	}
	void Inra() {
		cout << "Ten HS:" << name << " " << "Diem Toan:" << Toan << " " << "Diem Van:" << Van << " " << "Diem TB:" << (Toan + Van) / 2 << endl;
	}
};

int main() {
	int n; cout << "So Luong HS La: ";
	cin >> n; 
	vector<HocSinh> DanhSach(n);
	for (int i = 0; i < n; i++) {
		HocSinh  x;
		x.ThongTinSv();
		DanhSach[i] = x;
	}
	for (int i = 0; i < n; i++) {
		DanhSach[i].Inra();
	}
	cout << DanhSach.size() << endl;
	return 0;
}