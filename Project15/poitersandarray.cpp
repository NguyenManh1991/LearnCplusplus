//Sự tương đồng giữa con trỏ và mảng trong C++
//VD

#include<iostream>

using namespace std;

//int main() {
//	int arr[4] = { 1,2,3,4 };
//
//	cout << "Gia tri cua mang arr la:" << arr << endl;
//
//	cout << "Dia chi trong bo nho ram cua mang arr la:" << &arr << endl;
//
//	cout << "Dia chi cua phan tu dau tien trong mang arr la:" << &arr[0] << endl;
//
//	return 0;
//}
// Trong chương trình trên ta thấy giá trị và địa chỉ của biến arr tương đương với địa chỉ của phần tử arr[0]. Nó giống như cách hoạt động của 1 con trỏ.
//CHÚ Ý: BẢn thân mảng chứa địa chỉ của phần tử đầu tiên của mảng, mảng có thể được thao tác giống như 1 con trỏ(Nhưng mảng và con trỏ không hoàn toàn như nhau)

//int main() {
//	int array[4] = { 1,2,3,4 };
//	cout << &array << endl;
//	int* ptr = array;
//	cout << typeid(ptr).name()<<" "<<sizeof(ptr) << " " << ptr << endl;
//	char charname[] = "YEUHIEN";
//	cout << *charname << endl;
//	return 0;
//}
//Trong ví dụ trên, ta sử dụng toán tử trỏ(*) để lấy giá trị phần tử đầu tiên của mảng, hoặc sử dụng con trỏ ptr trỏ vào mảng array và thao tác với mảng array bằng con trỏ ptr.
// Sự khác nhau giữa con trỏ và mảng trong C++
//CHÚ Ý: Một sai lầm phổ biến trong C++ là tin rằng mảng và con trỏ đến mảng là giống hệt nhau. Mặc dù chúng cùng chỉ đến phần tử đầu tiên của mảng, nhưng chúng là 2 kiểu khác nhau.

/*int main() {
	int array[5] = { 1,2,3,4,5 };

	cout << sizeof(array) << " "<<typeid(array).name() << endl;

	int* ptr = array;

	cout << sizeof(ptr) << " "<<typeid(ptr).name() << endl;

	return 0;
}*/
// Trong chương trình trên, mảng là kiểu int[5] kích thước là 20 byte, trong khi 1 con trỏ tới mảng sẽ thuộc kiểu "int*" kích thước 8byte.
// Vì vậy sử dụng mảng 1 chiều có thể biết được chính xác số lượng phần tử của mảng, trong khi con trỏ không làm được điều này
//Xem lại việc truyền array và function(passing arrays to functions)
// Trog mảng 1 chiều việc sao chép 1 số lượng lớn các phần tử sẽ gây tốn rất nhiều vùng nhớ và giảm hiệu suất.
//Vì vậy khi truyền 1 mảng cho 1 hàm, mảng sẽ được chuyển đổi ngầm định thành 1 con trỏ đến mảng, và con trỏ được truyền vào hàm:

/*void printSize(int* array) {
	cout << sizeof(array) << endl;// Đây là in ra kích thước con trỏ  int* chứ k phải kích thước mảng
}

int main() {
	int array[4] = { 1,2,3,4 };
	cout << sizeof(array) << endl;// kich thước mảng array
	printSize(array);// đối số được chuyển thành con trỏ *int tại đây

}*/

//LƯU Ý: Điều này xảy ra ngay cả khi tham số hàm là 1 mảng cố định VD: void doSomthing(int a[100])
//CHÚ Ý: Để tránh nhầm lẫn về việc đang thao tác với mảng hay con trỏ, ưu tiên sử dụng cú pháp con trỏ(*) cho tham số hàm là mảng.
/*void doSomething(int a[100]) {
	cout << a << endl;
}
int main() {
	int array[] = { 1,2,3,4,5 };
	doSomething(array);
	return 0;
}*/

//- Cơ bản về Truyền địa chỉ cho hàm (pass by address)
// Mảng được chuyển đổi ngầm định  thành con trỏ khi được truyền đến 1 hàm. Đó là lí do tại sao thay đổi mảng trong hàm sẽ thay đổi mảng thực tế được truyền vào.

void changeArray(int* ptr) {
	*ptr = 1;
	ptr[1] = 3;
}
int main() {
	int array[5] = { 6,2,3,4,5 };
	cout << "Truoc khi truyen mang vao ham:" << endl;
	cout << array[0] << endl;
	cout << array[1] << endl;
	changeArray(array);
	cout << "Sau khi truyen vao ham:" << endl;
	cout << array[0] << endl;
	cout << array[1] << endl;
	return 0;
}
// KHi hàm changeArray() được gọi, mảng chuyển đổi ngầm thành 1 con trỏ, và giá trị của con trỏ đó(Địa chỉ phần tử đầu tiên của mảng) được sao chép vào tham số ptr của hàm changeArray()
//Mặc dù giá trị trong ptr là 1 bản sao địa chỉ của mảng, nhưng ptr vẫn trỏ vào mảng thực tế(KHông phải là bản sao). Do đó mọi thao tác trên vùng nhớ mà con trỏ trỏ đến, sẽ làm thay đổi mảng bên ngoài.
