#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

//class GiaDinh {
//private:
//	string name, birth, address;
//	float hight, wight;
//public:
//	GiaDinh() {
//		name = birth = address = "";
//		hight = wight = 0;
//	}
//	void add() {
//		getline(cin, name);
//		cin >> birth;
//		cin.ignore();
//		getline(cin, address);
//		cin >> hight >> wight;
//	};
//	void exit() {
//		cout << name << " " << birth << " " << address << " " << fixed << setprecision(2) << hight << " " << wight << endl;
//	};
//};
//
//int main() {
//	GiaDinh a;
//	a.add();
//	a.exit();
//	return 0;
//}

//class NhanVien {
//private:
//	string ma, ten, gt,ns,dc, mst, hd;
//public:
//	NhanVien();
//	friend ostream& operator <<(ostream&, NhanVien);
//	friend istream& operator>>(istream&, NhanVien&);
//
//};
//
//NhanVien::NhanVien() {
//	ma = ten = gt = ns = dc = mst = hd = "";
//}
//
//ostream& operator<<(ostream& out,NhanVien a) {
//	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
//	return out;
//}
//
//istream& operator>>(istream& in, NhanVien& a) {
//	a.ma = "00001";
//	getline(in, a.ten);
//	in >> a.gt >> a.ns;
//	in.ignore();
//	getline(in, a.dc);
//	in >> a.mst >> a.hd;
//	return in;
//}
//#define a() a 
//int main() {
//	NhanVien a();
//	cin >> a;
//	cout << a;
//	return 0;
//}

class NhanVien {
private:
	string ten, gt, ns, dc, mst, hd;
	int ma;
public:
	static int cnt;
	friend ostream& operator <<(ostream& out, NhanVien a) {
		out << setfill('0') << setw(5) << a.ma << " " << a.ten << " " << a.gt << " " << a.dc << " " << a.mst << " " << a.hd << endl;
		return out;
	}
	friend istream& operator>>(istream& in, NhanVien& a) {
		cnt++;
		a.ma = cnt;
		in.ignore();
		getline(in, a.ten);
		in >> a.gt >>a. ns;
		in.ignore();
		getline(in, a.dc);
		in >> a.mst >> a.hd;
		return in;
	}
	friend bool operator<(NhanVien a, NhanVien b) {
		string s1 = a.ns, s2 = b.ns;
		int t1 = (s1[0] - '0') * 10 + s1[1] - '0', ng1 = (s1[3] - '0') * 10 + s1[4] - '0', n1 = stoi(s1.substr(6));
		int t2 = (s2[0] - '0') * 10 + s2[1] - '0', ng2 = (s2[3] - '0') * 10 + s2[4] - '0', n2 = stoi(s2.substr(6));
		if (n1 != n2) return n1 < n2;
		if (t1 != t2) return t1 < t2;
		return ng1 < ng2;

	}
};

int NhanVien::cnt = 0;

void sapxep(NhanVien a[], int n) {
	sort(a, a + n);
}

int main() {
	NhanVien ds[50];
	int	N, i;
	cin>> N;
	for (int i = 0; i < N; i++) cin >> ds[i];
	sapxep(ds, N);
	for (int i = 0; i < N; i++) cout << ds[i];
	return 0;

}