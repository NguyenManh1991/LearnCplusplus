// Lập trình hướng đối tượng là 1 phương pháp lập trình các tính chất và cách sử dụng sẽ giống nhau trên các ngôn ngữ lập trình khác nhau
// Lập trình xoay quanh các đối tượng và dữ liệu thay vì xoay quanh các hàm và các thủ tục.
// NGười ta sẽ cố gắng mô phỏng các đối tượng trong thực tế sang ngôn ngữ lập trình thông qua các trường dữ liệu(thuộc tính) và các hành động
// Nó phù hợp với các chương trình lớn, phức tạp và cần active, update và bảo trì...vv
// Nó có điểm mạnh là khả năng tái sử dụng lại code và khả năng mở rộng hiệu quả

// +Class: lớp vd string, vector vv... Nó có 2 phần
// 1: Thuộc tính(attribute) : Truong du lieu cua lop
// 2: Phương thức(medthod hoặc behavior): cac hanh dong cua lop
// object: la doi tuong la 1 thuc the cua class
// Tinh chat 1:Encapsulution : Dong goi ta chi co the thao tac voi cac thuoc tinh ngay trong class ra ngoai k the thao tac duoc
// Tinh chat 2:Access modifier: co 3 thang
// + Private>> De thuoc tinh
// + public>> De phuong thuc
// + protected
// ***: constructor : HAm khoi tao la 1 ham se duoc khoi tao moi khi ta khai bao 1 SinhVien moi ; Ham nay se co cung ten voi class va khong co kieu tra ve
// ***: destructor : Ham huy no dung de huy di 1 doi tuong no khong the ghi de duoc va no cung khong co kieu tra ve no cung co ten trung voi ten class 
//nhung no co them 1 dau nga o dang truoc (~)
#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/*class SinhVien
{
private:
	string id, ten, tuoi, ns;
	double gpa;
public:
	SinhVien();// Constructor khoi ta0
	
	SinhVien(string, string, string, double); // Day cung la 1 constructor nhung no có tham số

	void xinchao();// co the xay dung ham ben trong nay luon cung duoc

	void dihoc();

	~SinhVien();// Day chinh la ham huy: Ham huy nay se duoc goi khi doi tuong cua class ket thuc(Khi chay het chuong trinh) hoac la co 1 ham nao day
	// khi ma ta ...vvv

};

// Xay dung phuong thuc o ben ngoai:
SinhVien::SinhVien(string ma, string name, string birth, double diem) {
	cout << "Ham Khoi Tao Co Tham so duoc goi!" << endl;
	id = ma;
	ten = name;
	tuoi = birth;
	gpa = diem;
}
SinhVien::SinhVien() {
	cout << "Ham KHoi Tao duoc goi!" << endl;
}

void SinhVien::xinchao() {
	cout << "hello! " << endl;
}

void SinhVien::dihoc() {
	cout << "Learning! " << endl;
}
SinhVien::~SinhVien() {
	cout << "Doi tuong duoc huy tai day! " << endl;
}

// De khai bao SinhVien Ta khai bao nhu 1 bien thong thuong

int main() {
	SinhVien x;// Khai bao 1 bien SinhVien co ten la x;// Tai day ham khoi tao se duoc goi

	// Ta co the truy cap vao cac phuong thuc va cac thuoc tinh ma public cua SinhVien x nay thong qua toan tu .
	// Nhung ta khong the truy cap duoc vao cac thuoc tinh cua SinhVien x vi khi ra ngoai pham vi class ta se khong the truy cap vao private duoc
	x.dihoc();
	x.xinchao();
	SinhVien y( "256","Nguyen Thi Hien","23/03/2000",9.9 );
	SinhVien z("128", "Nguyen VAn Duc", "12/2/1988", 7.5);
	return 0;
}*/


/*class SinhVien {
private:
	string id;
	string ten;
	string ns;
	double gpa;
public:
	SinhVien() ;
	SinhVien(string, string, string , double);
	void nhap();
	void in();
	double getGpa();
	string setId(string);
	friend void inthongtin(SinhVien a);// Khai bao ham ban( friend function)
	//~SinhVien();
};

string SinhVien::setId(string id) {

	this->id = id;
}

double SinhVien::getGpa() {
	return this->gpa;// or return gpa;
}

bool cmp(SinhVien a, SinhVien b) {
	return a.getGpa() > b.getGpa();
}

SinhVien::SinhVien() {
	this->id; this->ten; this->ns; this->gpa;
}

SinhVien::SinhVien(string id, string ten, string ns, double gpa) {
	this->id = id;
	this->ten = ten;
	this->ns = ns;
	this->gpa = gpa;// Su  dung con tro this khi danh sach tham so cua doi tuong trung voi cac thuoc tinh cua class
}

void SinhVien::nhap() {
	cout << "Id: " << " "; cin >>this-> id;
	cout << "Ten: " << " "; cin.ignore(); getline(cin,this->ten);
	cout << "Ngay Sinh: " << " "; getline(cin,this-> ns);
	cout << "Diem So:" << " "; cin >>this-> gpa;
}
void SinhVien::in() {
	cout <<this-> id << " " <<this-> ten << " " <<this-> ns << " "<<fixed<<setprecision(2) <<this-> gpa << endl;
}
/*SinhVien::~SinhVien() {
	cout << "Doi Tuong duoc huy tai day:" << endl;
}*/

/*int main() {
	/*SinhVien x;
	x.nhap();
	x.in();
	SinhVien x;
	x.setId("213");
	return 0;
}*/
// KHi ta muon thay doi hoac su dung cac thuoc tinh trong private thi ta phai xay dung 1 ham
// de lay ve cac thuoc tinh ta dung ham get con de gan gia tri khac cho thuoc tinh ta dung ham set
// Ta co the gan 2  doi tuong cho nhau bang toan tu =
// Bien static ta khong the khoi tao bien static no dung chung cho toan class
// Ham ban friend funciton hoac friend class la nhung ham khong thuoc lop SinhVien nhung van co the truy cap duoc vao cac thuoc tinh cua lop SinhVien
//+ Ta khai bao ham Friend funciton trong public voi tu khoa friend dang truoc
//+ Lop Ban la 1 lop ma cac ham trong lop nay co ther truy cap dc vao cac thuoc tinhs cuar lop ban bang cu phap friend class ten class ban.

/*long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long bcd(long long a, long long b) {
	return a / gcd(a, b) * b;
}


class PhanSo {
private:
	long long tu, mau;
public:
	PhanSo(long long tu, long long mau);
	friend ostream& operator<<(ostream&, PhanSo);
	friend istream& operator>>(istream&, PhanSo&);
	friend PhanSo operator +(PhanSo, PhanSo);
	void rutgon();
};

PhanSo::PhanSo(long long tu, long long mau) {
	this->tu = tu;
	this->mau = mau;
}
ostream& operator << (ostream& out, PhanSo a) {
	out << a.tu << "/" << a.mau << endl;
	return out;
}
istream& operator >> (istream& in, PhanSo &a) {
	in >> a.tu >> a.mau;
	return in;
}


void PhanSo::rutgon() {
	long long g = gcd(tu, mau);
	tu /= g;
	mau /= g;
}
PhanSo operator +(PhanSo a, PhanSo b) {
	PhanSo tong(1, 1);
	long long mc = bcd(a.mau, b.mau);
	tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
	tong.mau = mc;
	long long g = gcd(tong.tu, tong.mau);
	tong.tu /= g; tong.mau /= g;
	return tong;

}
int main() {
	//PhanSo p(1, 1);
	//cin >> p;
	//p.rutgon();
	//cout << p;
	PhanSo a(1, 1), b(1, 1);
	cin >> a >> b;
	cout << a + b;
	return 0;
}*/

/*class SinhVien {
private:
	string ma, ten,lop, ns;
	double gpa;
public:
	SinhVien() {
		ma = ten =lop= ns = " ";
		gpa = 0;
	}
	;
	SinhVien(string ma, string ten,string lop, string ns, double gpa) {
		this->ma = ma;
		this->ten = ten;
		this->lop = lop;
		this->ns = ns;
		this->gpa = gpa;
	}
	friend void nhap(SinhVien&);
	friend void in(SinhVien);
};

void nhap(SinhVien& a) {
	a.ma = "B20DCCN001";
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.ns;
	cin >> a.gpa;
	if (a.ns[2] != '/') a.ns = "0" + a.ns;
	if (a.ns[5] != '/')a.ns.insert(3, "0");
	
}
void in(SinhVien a) {
	cout << a.ma << " " << a.ten << " "<<a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
}
#define a() a
int main() {
	SinhVien a();
	nhap(a);
	in(a);
	return 0;
}*/

class SinhVien {
private:
	string ma, ten, lop, email;
public:
	SinhVien() {
		ma = ten = lop = email = " ";
	}
	friend ostream& operator <<(ostream&, SinhVien);
	friend istream& operator>>(istream&, SinhVien&);
	string getLop() {
		return this->lop;
	}

};

ostream& operator<<(ostream& out, SinhVien a) {
	out << a.ma << " "<<a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

istream& operator>>(istream& in, SinhVien& a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop;
	in >> a.email;
	return in;
}

bool cmp(SinhVien a, SinhVien b) {
	return a.getLop() < b.getLop();
}

int main() {
	int n; cin >> n;
	SinhVien a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, cmp);
	for (SinhVien x : a) { cout << x; }
	return 0;
}