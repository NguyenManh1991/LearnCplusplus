#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<math.h>
#include<array>
#include<algorithm>
#include<sstream>

using namespace std;

//string chuan(string name) {
//	stringstream ss(name);
//	string res = " ";
//	string token;
//	while (ss >> token) {
//		res += toupper(token[0]);
//		for (int i = 1; i < token.length(); i++) res += tolower(token[i]);
//		res += "";
//	}
//	res.erase(res.length() - 1);
//	return res;
//
//}
//
//
//class SinhVien {
//private:
//	string ma, ten, lop, ns;
//	double gpa;
//	
//public:
//	static int cnt;
//	SinhVien() {
//		ma = ten = lop = ns = "";
//		gpa = 0;
//	}
//	friend bool operator<(SinhVien a, SinhVien b) {
//		return a.gpa < b.gpa;
//
//	}
//	friend ostream& operator<<(ostream& out, SinhVien a) {
//		out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
//		return out;
//	}
//	friend istream& operator>>(istream& in, SinhVien& a) {
//		++cnt;
//		string tmp = to_string(cnt);
//		tmp = string(3 - tmp.size(), '0') + tmp;
//		a.ma = "B20DCCN" + tmp;
//		scanf_s("\n");
//		getline(in, a.ten);
//		a.ten = chuan(a.ten);
//		getline(in, a.lop);
//		getline(in, a.ns);
//		in >> a.gpa;
//		if (a.ns[2] != '/') a.ns = '0' + a.ns;
//		if (a.ns[5] != '/')a.ns.insert(3, "0");
//		return in;
//	}
//};
//
//int SinhVien::cnt = 0;
//
//void sapxep(SinhVien a[], int n) {
//	sort(a, a + n);
//	reverse(a, a + n);
//}
//
//int main() {
//	SinhVien ds[50];
//	int N, i;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> ds[i];
//	}
//	for (int i = 0; i < N; i++) {
//		cout << ds[i];
//	}
//	return 0;
//}

class DanhBa {
private:
	string name, phone, email;
public:
	DanhBa() {
		name = phone = email = "";
	}
	DanhBa(string name, string phone, string email) {
		this->name = name;
		this->phone = phone;
		this->email = email;
	}
	friend ostream& operator<<(ostream& out, DanhBa a) {
		out << a.name << " " << a.phone << " " << a.email << endl;
		return out;

	}
	friend istream& operator>>(istream& in, DanhBa& a) {
		in.ignore();
		getline(in, a.name);
		in >> a.phone >> a.email;
		return in;
	}
	string getName() {
		return name;
	}
	string getPhone() {
		return phone;
	}
	string getEmail() {
		return email;
	}
	void setName(string name) {
		this->name = name;
	}
	void setPhone(string phone) {
		this->phone = phone;
	}
	void setEmail(string email) {
		this->email = email;
	}
};

int main() {
	DanhBa a("Nguyen Van Manh","0367963457","nguyenmanh@gmail.com");
	cout << a.getName() << endl;
	a.setName("Nguyen Van Hong");
	cout << a.getName() << endl;

	/*int N, i;
	cout << "Nhap vao so danh ba:" << endl;
	cin >> N;

	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N; i++) cout << arr[i];*/

	return 0;
	
}