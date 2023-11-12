/*+Cấp phát mảng động trong C++
* -Khi khai báo mảng tĩnh, kích thướdec mảng phải được xác định tại thời điểm biên dịch và khôg bao giờ thay đổi.
* -Cấp phát động một mảng cho phép chúng ta xác định kích thước mảng trong thời gian chạy chương trình!
* -Để cấp phát và thu hồi mảng động , C++ cung cấp toán tuw new[] và delete[];
*/

#include<iostream>

using namespace std;

//int main() {
//
//	cout << "Nhap kich thuoc mang:";
//	int lenght;
//	cin >> lenght;
//	int* array = new int[lenght];// kích thước mảng có thể là biến số.
//	delete[] array;// trả lại vùng nhớ mảng cho hệ điều hành
//	return 0;
//
//}
// Lưu ý: Cấp phát bộ nhớ động sử dụng vùng nhớ được hệ điều hành quản lí gọi là vung nhớ heap, vì vậy kích thước của mảng động có thể lớn hơn rất
// nhiều so với mảng tĩnh.
// Số lượng phần tử có thể được cung cấp khi chương trình đang chạy là điểm đặc biệt của kỹ thuật cấp phát mảng động
//-- Xóa mảng động trong C++
//-Khi chúng ta không còn sử dụng một mảng được cấp phát động, chúng ta cần trao quyền quản lý vùng nhớ đó lại cho hệ điều hành. Đối với mảng, điều này được thực hiện qua mảng.
//- Điều này được thực hiện thông qua toán tử. delete[]:
//- int *array=new int[lenght];/ cấp phát mảng động lenght phần tử
//- delete[array];// Trả lại vùng nhớ mảng array cho hệ điều hành

//- Khởi tạo mảng động trong C++
//- Trước phiên bản C++11, để khởi tạo 1 mảng động, ta cần lặp qua các phần tử của mảng và gán giá trị cho chúng:
//- Tuy nhiên từ phiên bản C++11, mảng động có thể được khởi tạo đơn giản hơn:Vd: int *array=new int[4]={1,2,3,4];
// -Lưu ý: Mảng động phải được khai báo độ dài rõ dàng khi khởi tạo:
// 
//

//int main() {
//	int fixedArray[]{ 1,2,3 };// ok
//	int *dynamicArray1=new int[]{1,2,3}// Lỗi
//    int *dynamicArray2=new int[3]{1,2,3}// ok
//}
// Ngoài ra ta có thể khởi tạo 1 mảng động có	n phần tử 0: int *array=new int[10]();// Mảng động có 10 phần tử 0;
//- Thay đổi kích thước mảng động
//- Cấp phát động một mảng động cho phép ta cung cấp độ dài mảng tại thời điểm chương trình đang chạy. Tuy nhiên, C++ không cung cấp sẵn tính năng thay đổi kích thước 1 mảng đã được cấp phát.
//- Để thay đổi kích thước mảng ta cần thực hiện các bươc sau :
//+Bước 1: Cấp phát động 1 mảng mới
//+Bước 2: Sao chép các phần tử từ mảng cũ sang vùng nhớ mới.
//+Bước 3: Xóa mảng cũ

int main() {
	int size = 3;

	int* array = new int[size] {3, 5, 7};// Cấp phát động và khởi tạo mảng 3 phần tử

	int newSize = 6;

	int* reSize = new int[newSize];
	//Sao chép phần tử
	for (int i = 0; i < size; i++) {
		reSize[i] = array[i];
	}
	delete[] array;// Xóa mảng hiện tại
	array = reSize;// trỏ sang mảng đã reSize
	size = newSize;//Kích thước mảng mới
	// sử dụng mảng đã reSize ở đây
	delete[] array; // thu hồi mảng
	system("pause");
	return 0;
		
}

// Các bước này quá phưc tạp và dễ gây lỗi trong trường hợp các phần tử mảng là những kiểu dữ liệu phức tạp.
// Mặt khác, C++ cung cấp 1 loại mảng có thể thay đổi kích thước gọi là std::vector thuộc thư viện chuẩn std.
