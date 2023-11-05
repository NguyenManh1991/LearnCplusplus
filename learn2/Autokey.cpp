//Từ phiên bản c++11 trở về sau từ khóa auto được dùng để tự động nhận dạng kiểu dữ liệu của giá trị khởi tạo ra nó vd:
// auto a='K' auto b=1;  c=1.0F; d=1.0
// Có thể xem kiểu dữ liệu của biến thông qua hàm typeid().name()

#include<iostream>
#include<cstring>
using namespace std;

//int main() {
//	auto a = 'zkm';
//	cout << "kieu du lieu cua a la:" << typeid(a).name() << endl;
//	auto b = 1.0f;
//	auto c = 2.0;
//	cout << "kieu du lieu cua b va c la:" << typeid(b).name() << typeid(c).name() << endl;
//	return 0;
//}

//int main() {
//	char hm[40];
//	char dm [80];
//	cout << "Xin moi nhap vao du lieu:" << endl;
//	cin.getline(hm,40);
//	strcpy_s(dm, 80, hm);
//	cout << dm << endl;
//	_strupr_s(hm); cout << "doi sang hoa" << " " << hm << endl;
//	_strlwr_s(dm); cout << "doi sang thuong" << " " << dm << endl;
//
//}
// Mảng 1 chiều là mảng tĩnh và nó có 1 số khuyết điểm :
//+ Mảng trở thành con trỏ và bị khuyết chiều dài khi truyền vào hàm và không có nhiều hàm hỗ trợ sãn
//Để giải quyết những vấn đề về quản lí và sử dụng mảng tĩnh, thư viện c++ đã cung cấp lớp std::array được khai báo trong thư viện <array> thuộc namespace std:
//Để sử dụng std::array ta cần khai báo namespace:
//#include<array>
//using namespace std;
//+Khai báo và khởi tạo mảng kiểu std::array
//Khi khai báo 1 biến kiểu std::array, ta cần xác định kiểu dữ liệu và số phần tử của mảng:
// array<int,5> arr(mảng arr có 5 phần tử kiểu int)
// array<string,2>arr1(mảng arr1 có 2 phần tử kiểu dữ liệu string)
// Chú ý khi chưa khởi tạo, các phần tử của mảng sẽ mang giá trị rác!
//+Khởi tạo cho giá trị của mảng kiểu std::array
// array<int,5> arr={1,2,3,4,5} array<int,5> arr1{1,2,3,4,5} (Khởi tạo đồng nhất
// array<int,5> arr2;
// arr2={1,2,3,4,5} (Khởi tạo đầy đủ các phần tử 
//arr2={1,2,3}; (KHởi tạo 3 phần tử đầu còn lại là không
// Không khởi tạo nhiều giá trị hơn so với số phần tử khai báo
//Không giống như mảng 1 chiều tĩnh ta không thể bỏ qua số lượng phần tử mảng khi khai báo
// array<int,> arr (Lỗi biên dịch)
//Truy cập phần tử trong mảng kiểu std::array
//Để truy cập phần tử mảng kiểu std::array , ta sử dụng toán tử [] tương tự như mảng 1 chiều tĩnh 
// array<int,5> arr={1,2,3,4,5}
// arr[1]= 2 // gán 2 cho phần tử thứ 2
// cout <<arr[4]; truy xuất giá trị phần tử thứ 5
//Tương tự như trên mảng 1 chiều tĩnh, toán tử [] không thực hiện kiểm tra phạm vi của mảng. Truy cập 1 phần tử với chỉ số không hợp lệ sẽ cho kết quả không như mong muốn( có thể gây chết chương trình)
//lớp std::array cung cấp hàm at() để truy cập vào phần tử mảng, nó bao gồm phạm vi kiểm tra của mảng:
// array <int,5> arr={1,2,3,4,5};
// arr.at(1)=3// Gán 3 cho phần tử thứ 2
//cout<<arr.at(6);// Ngoài phạm vi mảng ném ra 1 lỗi và kết thúc chương trình
//Nếu chắc chắn rằng chỉ số nằm trong phạm vi mảng mà không cần kiểm tra trong thời gian chạy ta có thể dùng toán tử[]. Nếu không sử dụng hàm at(), hoặc thêm kiểm tra trươc khi truy cập phần tử mảng
//* Chú ý: Vì toán tử [] không kiểm tra phạm vi mảng , nên hàm at() sẽ chậm hơn nhưng an toàn hơn so với toán tử[]
// + Một số thao tác với mảng kiểu std::array 
//- Để xem kích thước mảng gồm bao nhiêu phần tử ta dùng hàm size():
// array<int,5> arr={1,2,3,4,5}; cout<<arr.size()<<endl;
//-TRuyền mảng kiểu std::array vào hàm 
// Không giống như mảng 1 chiều tĩnh, mảng kiểu std::array không chuyển thành con trỏ khi truyền vào hàm. Vì vậy, hàm size() và for-each loops vẫn hoạt động bên trong hàm khác:


#include<iostream>
#include<array>

using namespace std;

//#define max 5
//void printArray(const array<int, max> &arr)// TRuyền tham chiếu hằng vì hiệu suất 
//{
//	cout << "So phan tu mang:" << arr.size() << endl;// Có thể biết số phần tử ở mọi hàm
//	for (const auto& item : arr)// có thể sử dụng for -each loop ở mọi hàm	
//	{
//		cout << item << ' ';
//	}
//	cout << endl;
//  }
//int main() {
//	array<int, max> arr = { 1,2,3,4,5 };
//	printArray(arr);
//	return 0;
//}

//Sắp xếp mảng kiểu std::array
//+ Mảng kiểu std::array có thể được sắp xếp bằng cách sử dụng hàm std::sort được khai báo trong thư viên <algorithm>:

#include<algorithm>
#define max 5

void printArray(const array<int, max>& arr)
{
	for(const auto&item:arr)
	{
		cout << item << ' ';
	}
	cout << endl;
}
int main() {
	array<int, max>arr = { 1,2,3,4,5 };
	cout << "sắp xếp tầng \n";
	sort(arr.begin(), arr.end());// sắp xếp tăng
	printArray(arr);
	cout << "sắp xếp giảm:\n";
	sort(arr.rbegin(), arr.rend());
	printArray(arr);
	return 0;
}