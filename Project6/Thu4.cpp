#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<array>

using namespace std;


//int main() {
//	vector<int> Depzai = { 6,3,4,5,2,6,1,6,7 };
//
//	cout << Depzai.size() << endl;// Dung hamf size de kiem tra so luong pha tu cua mang!
//
//	return 0;
//
//}

//Thay doi kic thuoc mang kieu std::vector. Thay doi kic thuoc mang dong rat phuc tap. Tuy nhien dieu nay don gian doi voi std::vector thong qua ham resize():
//
//int main() {
//	vector<int> arr = { 2,5,8,3,1 };// mang 5 phan tu
//	arr.resize(10); //thay doi do dai cua mang thanh 10 phan tu.
//	cout << "do dai phan tu cua mang moi:" << arr.size() << endl;
//	for (auto const& item : arr) cout << item << ' ';
//	system("pause");
//	return 0;
//	 }

// Cat bo phan tu mang voi cau lenh resize()

//int main() {
//	vector<int> arr{ 2, 3, 4 ,5 ,7,9 };
//	arr.resize(3); 
//	cout << arr.size()<< endl;
//	return 0;
//	 }
// Cac thao tac  tren mang ki tu 
 
//int main() {
//	char arr[10] = { 3,4,5,6,7 };
//
//	cout << strlen(arr) << endl;
//
//}
//int main() {
//	array<int, 5> arr = { 2,5,8,3,1 };
//	cout << arr.size() << endl;
//}
// cấp phat động trên c++:
/*
* C++ hỗ trợ 3 loại cấp phát bộ nhớ 
* Cấp phát bộ nhớ động xảy ra trên các tham số hàm và biến cục bộ vùng nhớ của loại biến này được cấp phát khi vào khối lệnh
* và được giải phóng khi khối lệnh thoát kíc thước của mảng và biến này phải được biêt khi biên dịch chương trình
* vd: khi ta muốn có 1 chuỗi để lưu tên của người dùng nhưng chúng ta không biết nó dài bao nhiêu cho đến khi họ nhập tên ...vv
* 
*/
int main() {
	int sum = 0;
	for(int i=1;i<=1004;i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;
	return 0;
}