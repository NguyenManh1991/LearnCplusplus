#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#include<vector>

//struct SinhVien {
//	std::string name;
//	int number;
//	float gpa;
//	std::string address;
//	void nhapDuLieu() {
//		std::getline(std::cin, name);
//		std::cin >> number >> gpa;
//		std::cin.ignore();
//		std::getline(std::cin, address);
//	};
//	void xuatDuLieu() {
//		std::cout << name << " " << number << " " << gpa << " " << address;
//	};
//};
//
//struct QuanLiSinhVien{
//	std::vector<SinhVien> DanhSachSv;
//
//
//	void themSv() {
//		SinhVien a;
//		a.nhapDuLieu();
//		DanhSachSv.push_back(a);
//	}
//
//};
//
//int main() {
//	QuanLiSinhVien x;
//	x.themSv();
//}


int main() {
	int n;
	std::cin >> n;
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			std::cout << "*" ;
		}
		std::cout << std::endl;
	}*/

	/*for (int i = n; i >0; i--) {
		for (int j = i; j <= n; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}*/
	/*for (int i = 1; i <= n; i++) {
		for (int j = i; j<=n; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
		
	}*/

	//for (int i = 1; i <= n; i++) {
	//	for (int j = 1; j <= n; j++) {
	//		if (i==j||j-i==1||j-i==i) {
	//			std::cout << "*";
	//		}
	//		else std::cout << " ";	
	//	}
	//	std::cout << std::endl;
	//}
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j || i < j) {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}*/

	int count = 0;

	for (int i = 0; i < n; i++) {
		if (i > 2) {
			++count;
		}
	}
	std::cout << count;
}