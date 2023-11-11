/*Phép toán số học trên con trỏ(pointer arithmetic)
* C++ cho phép bạn thực hiện các phép toán cộng hoặc trừ số nguyên trên con trỏ(+,-,++,--)
* Nếu ptr chỉ đến 1 số nguyên , ptr+1 là địa chỉ của 1 số nguyên tiếp theo trong bộ nhớ sau ptr. Ngược lại ptr-1là địa chỉ của số nguyên trước đó trong bộ nhớ trước ptr.
* CHÚ Ý: ptr+1 không trả về địa chỉ vùng nhớ sau ptr mà ptr+1 trả về địa chỉ vùng nhớ của đối tượng tiếp theo thuộc kiểu mà ptr trỏ tới.
* VÍ DỤ: Nếu ptr trỏ đến 1 số nguyên (4byte hoặc 8bbyte), ptr+5 có nghĩa là cách 5 số nguyên (20 byte hoặc 40 byte) sau ptr. Nếu ptr trỏ đến 1 kí tự char (1byte, ptr+3 có nghĩa là cách 3 ký tự(3byte) sau ptr.
*/
#include<iostream>

using namespace std;


/*int main() {
	int value = 5;
	int* ptr = &value;
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;

	char arr[] = "****";
	char * ptr1 = arr;
	cout << ptr1 << endl;
	cout << ptr1+1 << endl;
	cout << ptr1 + 2 << endl;
	cout << ptr1 + 3 << endl;

	return 0;
}*/
// Mảng tĩnh được lưu trong bộ nhớ như thế nào!
//Mảng 1 chiều trong C++(arrays). có 2 tính chất là:
// +Kích thước được xác định ngay khi khai báo và không bao giờ thay đổi (mảng tĩnh)
// C++ luôn chỉ định một khối nhớ liên tục cho 1 biến kiểu mảng.
// +Trong C++ các phần tử của mảng tĩnh được sắp xếp 1 cách tuần tự trong bộ nhớ, nghĩa là array[0],array[1]....vv được nằm cạnh nhau và theo thứ tự.
// VD:
//
/*int main() {
	int array[] = { 2,3,5,6,1 };
	cout << "Vị trí phần tử 0:" << " " << &array[0] << endl;
	cout<< "Vị trí phần tử 1:" << " " << &array[1] << endl;
	cout << "Vị trí phần tử 2:" << " " << &array[2] << endl;
	cout << "Vị trí phần tử 3:" << " " << &array[3] << endl;
	cout << "Vị trí phần tử 4:" << " " << &array[4] << endl;
	return 0;
}*/

// +_Ứng dụng giữa con trỏ số học, mảng và chỉ mục mảng.
//-Các phần tử của mảng được sắp xếp tuần tự trong bộ nhớ 
// - 1 mảng tĩnh có thể được ngầm định chuyển đổi thành con trỏ trỏ đến phần tử đầu tiên của mảng(phần tử 0) của mảng
// -Cũng trong phần trên cho ta biết khi việc cộng 1 vào con trỏ ptr sẽ trả về địa chỉ vùng nhớ của đối tượng tiếp theo thuộc kiểu mà ptr trỏ tới!
// -Vì vậy, ta có thể nói rằng nếu cộng n vào 1 mảng, kết quả sẽ là 1 con trỏ trỏ đến vị trí thứ n của mảng


//int main() {
//	int array[] = { 2,3,5,6,9 };
//
//	cout << &array[1] << endl;
//	cout << array + 1 << endl;
//	cout << array[1] << endl;
//	cout << *(array + 1) << endl;
//	return 0;
//}

//Trong chương trình trên, array[n] tương đương với *(array+n) với n là 1 số nguyên.
//GHI CHÚ: Dấu ngoặc vuông[] thường được dùng hơn vì tính đơn giản và dễ hiểu.
// Sử dụng con trỏ lặp qua 1 mảng.
//Trong phần trên, ta đã biết được rằng cộng n vào 1 mảng, kết quả sẽ là 1 con trỏ trỏ đến vị trí phần tử thứ n của mảng.
// Tính chất đó có thể được ứng dụng  trong trường hợp duyệt 1 mảng:
//  

#define max 9

int main() {
	int array[max] = { 1,2,3,4,5,6,7,8,9 };
	for (int* ptr = array; ptr < array + max;ptr++) {
		cout << *ptr << endl;

	}

}