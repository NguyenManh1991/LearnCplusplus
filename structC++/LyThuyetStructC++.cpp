// Khi mình muốn gộp những kiểu dữ liệu thông thường vào để tạo thành 1 kiểu dữ liệu mới mà nó có thể lưu thông tin mà nó tổng hợp hơn thì mình sử dụng cấu trúc struct trong C++
// VD: Khi mình lưu thông tin của 1 sinh viên nếu ta dùng những biến đơn cho các thông tin như tên, điểm, địa chỉ.. vv thì khi đó việc quản lí biến sẽ rất khó khăn.
// Sinh viên có : Tên(name), điểm(gpa),địa chỉ(adress),mã sinh vien(msv);
//+Ta sẽ gom 4 thông tin trên vào thành 1 struct là SinhVien.
// constructor: HÀm khởi tạo không cần kiểu trả về và có tên trùng với tên struct

#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

//Cách khai báo struct trong C++: 
// + struct ten_struct{ các thành phần của struct(member) các member có thể là các biến, có thể là các hàm.};
// +ta có thể định nghĩa 1 hàm ngay trong cấu trúc struct.

struct SinhVien {
	string msv;
	string ten;
	double gpa;
	string dc;
	// Hàm Khởi tạo constructor không có tham số nó có thể không có nội dung gì hoặc ta có thể gán các tham số từ struct SinhVien cho nó
	SinhVien() {
		msv = "Abcd";
		ten = "Nguyen Thi Hien";
		gpa = 4.0;
		dc = "Hai Duong";

	}
	// Ta cũng có thể khai báo 1 constructor khác 
	SinhVien(string ma, string name, double diem, string diachi) {
		msv = ma;
		ten = name;
		gpa = diem;
		dc = diachi;// gán từng thành phần của constructor SinhVien cho các thành phần của struct.
	}
	//CHÚ Ý: Nếu ta xây dựng constructor có tham số mà không xây dựng constructor không có tham số mà trong hàm main() ta khai báo biến không tham số sẽ xảy ra lỗi
	//Vì nó sẽ không tìm thấy constructor mặc định không có tham số.

	void in() {
		cout << msv <<" "<< ten<<" " <<fixed<<setprecision(2)<< gpa<<" " << dc << endl; 
	}
	void nhap() {
		cin >> msv;
		cin.ignore();
		getline(cin, ten);
		cin >> gpa;
		cin.ignore();
		getline(cin, dc);

	}
};

//int main() {
//	//SinhVien x;// Khai báo 1 biến x có kiểu dữ liệu là SinhVien; giống như khai báo 1 biến thông thường:
//	//// x đã chứa cả 4 thông tin của struct SinhVien ta có thể truy cập vào từng thành phần của nó hoặc nhập dữ liệu cho từng member của x;
//	//cin >> x.msv;// Khi truy cập vào từng thành phần của nó ta dùng toán tử (.).
//	//cin.ignore();
//	//getline(cin, x.ten);
//	//cin >> x.gpa;
//	//cin.ignore();// Xóa phím enter
//	//getline(cin, x.dc);
//	// Ta cũng có thể khởi tạo trực tiếp giá trị cho sinh viên x;
//	SinhVien x = { "abdc","Nguyen Van Manh",4.00,"Hai Duong" };// Chương trình sẽ gán lần lượt các giá trị của sinh viên x trong{} cho từng member trong struct từ trên xuống dưới
//	cout << x.msv << " " << x.ten << " "<<fixed<<setprecision(2) << x.gpa << " " << x.dc << endl;// In ra thông tin của sinh viên x!
//	cout << sizeof(SinhVien);
//	return 0;
//}

//int main() {
//	SinhVien x = { "abcd","Nguyen Thi Hien",4.00,"Kinh Mon" };
//	x.in();
//	SinhVien y;
//	y.nhap();
//	y.in();
//	SinhVien z = x;// Gán x cho z; chương trình sẽ copy thôn tin từ x và gán vào cho z!
//	z.in();
//	return 0;
//}

int main() {
	SinhVien x;// Khi ta tạo constructor và khởi tạo x không có tham số nó sẽ lấy thông tin mặc định trong constructor và gán cho x.
	x.in();
	SinhVien y;// THông tin của y sẽ giống hệt x vì nó sẽ mặc định chạy vào hàm constructor ko có tham số đã khởi tạo trong struct SinhVien
	y.in();
	SinhVien z = { "zxc","Nguyen Van Hong",9.0,"Hai Duong" };// Khi này ta khởi tạo 1 struct có tham số nó sẽ tự động phân biệt và chạy vào constructor có tham số đã khởi tạo trong struct SinhVien
	z.in();
	return 0;
}