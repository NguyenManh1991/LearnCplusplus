// COn trỏ(pointer) là 1 trong những phần khó hiểu nhất trong ngôn ngữ lập trình C++
//Nhắc lại biến: Biến(variable) là tên của 1 vùng trong bộ nhớ ram, được sử dụng để lưu trữ thông tin
// Toán tử địa chỉ (&) address of operator cho phép chúng ta xem địa bộ nhớ nào được gán cho 1 biến
// vd
//
#include<iostream>

using namespace std;

//int main() {
//	int x = 10;
//	cout << x << endl;
//	cout << &x << endl;
//	return 0;
//}
//
// +Toán tử trỏ đến (*):dereference operator: cho phép chúng ta truy cập (get/set) giá trị tại 1 địa chỉ cụ thể.
// VD:
//
//int main() {
//	int x = 15;
//	cout << x << endl;
//	cout << &x << endl;
//	cout << *&x << endl;
//	*&x = 20; cout << x << endl;
//	return 0;
//}
// + Trong ví dụ trên, ta dùng toán tử trỏ(*) để thay đổi giá trị tại địa chỉ của biến x thành 20 (Không trực tiếp thay đổi biến x)
// +CHÚ Ý: Tón tử trỏ(*) tương tự toán tử nhân(*) nhưng toán tử trỏ là toán tử 1 ngôi còn toán tử nhân là toán tử hai ngôi!
// Con trỏ(pointer): LÀ 1 biến chứa địa chỉ bộ nhớ làm giá trị của nó.
// Khai báo con trỏ (Declaring a pointer)
// Biến con trỏ (pointer variable) được khai báo giống như các biến thông thường, nhưng có thêm 1 dấu (*) giữa kiểu dữ liệu và tên biến 
// VD: int *aprt: Con trỏ trỏ đến địa chỉ chứa dữ liệu số nguyên
//     double *bprt: Con trỏ trỏ đến địa chỉ chứa dữ liệu số thực 
// C++ cho phép đặt dấu * cạnh kiểu dữ liệu, cạnh tên biến hoặc ở giữa. Tuy nhiên khai báo nhiều biến con trỏ, dấu sao phải được đặt ở cạnh mỗi biến
//VD: int* prt1, prt2>> prt1 là 1 con trỏ nhưng prt2 chỉ là 1 số nguyên
// +CHÚ Ý: Khi khai báo 1 biến con trỏ, hãy đặt dấu (*) cạnh tên biến.
// Tuy nhiên, khi trả về con trỏ từ 1  hàm, sẽ rõ dàng hơn nếu dấu(*) bên cạnh kiểu trả về:
// VD: int* dosomething();
// Tươg tự như các biến (variable) thông thường, con trỏ không được khởi tạo khi khai báo. Nếu con trỏ không được khởi tạo một giá trị, chúng sẽ chứa giá trị rác.
// Gán giá trị cho con trỏ: (Assigning a  valu to a pointer)
// Vì con trỏ (pointer) là 1 biến chứa 1 địa chỉ bộ nhớ, nên khi gán giá trị cho con trỏ, giá trị đó phải là 1 địa chỉ.
// VD
// 
//int main() {
//	int x = 10;
//	int* prt = &x;
//	cout << &x << endl;
//	cout << prt << endl;
//	return 0;
//}
// +TRong ví dụ trên con trỏ prt đang nắm giữ địa chỉ của biến x, nên ta có thể nói con trỏ prt trỏ đến biến x
// +CHÚ Ý: Kiểu dữ liệu của con trỏ dùng để xác định kiểu dữ liệu của biến mà nó trỏ đến.
// VD:
// int value1; int *prt1=&value1;
// double value2; double *prt2=&value2;
// Trong ví dụ trên ta thấy &value1 là 1 địa chỉ của variable kiểu int, nên nó có thể gán cho con trỏ kiểu int. Để hiểu rõ hơn ta có thể kiếm tra dữ liệu của &value1
// 
//

//int main() {
//	int value = 5;
//	cout << typeid(&value).name() << endl;
//	return 0;
//}
// Truy cập vào vùng nhớ mà con trỏ trỏ đến (Dereferencing pointers)
// Khi biến con trỏ đã được trỏ đến một địa chỉ nào đó, ta có thể truy xuất giá trị tại địa chỉ đó bằng toán tử trỏ (*).
// VD
//

//int main() {
//	int value = 10;
//	cout << value << endl;
//	cout << &value << endl;
//	int* prt = &value;
//	cout << prt << endl;
//	cout << *prt << endl;
//	return 0;
//
//}
// Sau khi được gán, giá trị con trỏ có thể được gán cho 1 giá trị khác : VD
//

int main() {
	int value1 = 10;
	int value2 = 15;
	int* prt;

	prt = &value1;
	cout << prt << " " << *prt << endl;
	prt = &value2;
	cout << prt << " " << *prt << endl;
	return 0;

}