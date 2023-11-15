#include<iostream>
#include<string>
#include<math.h>



//struct SinhVien
//{
//	
//	std::string name;
//	int age;
//	double hight;
//	
//
//
//};
//struct NgayHoc {
//	int thu;
//	float ThoiGian;
//};
//
//
//
//void ThongTin(const SinhVien& sinhvien, const NgayHoc& ngayhoc) {
//	std::cout << "Ten sv:" << sinhvien.name << std::endl;
//	std::cout << "Tuoi sv:" << sinhvien.age << std::endl;
//	std::cout << "Chieu cao sv:" << sinhvien.hight << std::endl;
//	std::cout << "Ngay di hoc:"<<"Thu" << ngayhoc.thu << std::endl;
//	std::cout << "Gio di hoc:" << ngayhoc.ThoiGian << std::endl;
//}
//
//int main() {
//	SinhVien sinhvien1 = { "manh",24,1.5 };
//	NgayHoc ngayhoc1 = { 2,7.15 };
//	ThongTin(sinhvien1, ngayhoc1);
//
//	return 0;
//}


struct vector2 {
	float x;
	float y;
	vector2 nomarlize() {
		if (x != 0 || y != 0) {
			float a = std::sqrt(x * x + y * y);
			float x1 = x / a;
			float y1 = y / a;
			return vector2{ x1, y1 };
		}
		return vector2{ x,y };
	}
	void print() {
		std::cout << x <<"  " << y << std::endl;
	}
};

int main() {

	vector2 vector = { 2,1 };
	vector2 vector1=vector.nomarlize();

	vector1.print();
	return 0;

}





