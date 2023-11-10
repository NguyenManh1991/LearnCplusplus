// COn trỏ NULL(NULL Pointer) :
	// -Giá trị null và con trỏ null (null Pointer)
	// Tương tự như các biến thông thường, con trỏ không được khởi tạo khi khai báo. Nếu con trỏ không khởi tạo 1 giá trị chúng sẽ chứa giá trị rác.
	// Nogài địa chỉ vùng nhớ, có 1 giá trị mà con trỏ có thể giữ được, đó là giá trị null.Null là 1 giá trị đặc biệt, điều đó có nghĩa là con trỏ đó chưa trỏ đến địa chỉ nào cả.
	// Con trỏ đag giữ giá trị null là con trỏ null(null pointer)
	// float *prt{0}; // prt là 1 con trỏ null
	// float *prt1; prt1 là 1 con trỏ rác
	// prt1=0// prt1 trở thành con trỏ null
	// Ta có thể sử dụng 1 điều kiện để kiểm tra xem một con trỏ có null hay không:
	// double *prt{0};
	// Con trỏ sẽ chuyển thành true nếu nó null và false nếu nó k null 
	// if(ptr)
	//     cout<<"con trỏ trỏ đến địa chỉ .";
	// else 
	//     cout<<"con trỏ null";
	// CHÚ Ý: Nên khởi tạo con trỏ là null nếu nó chưa trỏ đến 1 địa chỉ cụ thể nào khác.
	// - Truy cập con trỏ null Nếu ta truy cập 1 con trỏ rác sẽ dẫn đến kết quả không xác định. Nếu truy xuất giá trị con trỏ null, chương trình có thể bị đóng bởi hệ điều hành.
	// -Macro Null 
	// +Ngôn ngữ C định nghĩa một macro tiền xử lý đặc biệt được gọi là null, nó có giá trị 0;
	// #define NULL 0
	// Mặc dù đây không phải là 1 phần của kĩ thuật C++, nhưng nó hoạt động phổ biến trong mọi trình biên dịch C++:
	// double *ptr=NULL; // ptr là 1 con trỏ NULL
	// Tuy nhiên, về mặt kỹ thuật, macro null không phải là kĩ thuật trong C++, vì vậy cần tránh sử dụng nó trong C++.
	// nullptr trong C++ 11
	// -LƯU Ý: Giá trị của 0 không phải là một kiểu con trỏ, do đó  gán 0 cho 1 con trỏ để biểu thị rằng con trỏ là 1 con trỏ null là không nhất quán.
	// Để giải quyết vấn đề này, C++11 giới thiệu 1 từ khóa mới có tên nullptr. nullptr là 1 hằng số rvalue, giống như các từ khóa boolean true, false.
	// VD: int *ptr=nullprt; // ptr là 1 con trỏ null
	//     doSomething(nullptr)// truyền con trỏ null vào hàm.
	//  Ngoài ra C++ còn định nghĩa	một kiểu dữ liệu nullptr_t, nullptr_t chỉ lưu trữ giá trị nullptr. NHưng nó thường chỉ được sử dụng trong những trường hợp hiếm hoi.
	//
#include<iostream>

using namespace std;

int main() {
	int x = 10;
	int* prt = nullptr;// prt là 1 con trỏ null.
	prt = &x;
	cout << prt << " " << *prt << endl;
	return 0;
}