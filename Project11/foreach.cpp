#include<iostream>
#include<array>
#include<cstring>
#include<math.h>

using namespace std;

#define MAX 5

//int main() {
//	int g[MAX] = { 1,2,3,4,5 };
//	for (int i = 0; i <= 4; i++) {
//		cout << g[i] << endl;
//
//	}
//	return 0;
//
//}
// VÒng lặp for each
// Trong mảng 1 chiều ta dùng vòng lăpj for để truy cập vào từng phần tử của mảng như ví dụ trên
// Từ phiên bản c++ 11 trở lên cung cấp 1 vòng lặp mới có cú pháp đơn giản dễ sử dụng hơn là for each loop
// For each loop được sử dụng để lặp qua các phần tử trên 1 mảng( hoặc cấu trúc danh sách khác như vectors, linked list, strees, và map)
// Cú pháp vọng lặp for each (element_declaration :array) statement;
// Trong đó_element_declaration là khai báo biến hoặc tham chiếu có kiểu trùng với kiểu của các phần tử trong array Thường sử dụng từ khóa auto
// -array: Là mảng cần lặp 
// -statement: là câu lệnh đơn hoặc khối lệnh
// 
//VD: sử dụng for each loop để truy cập vào từng phần tử của mảng

//int main() {
//	array<int, MAX> arr = { 1,2,3,4,5 };
//
//	for (auto item : arr) {
//		cout << item << endl;
//
//	}
//	return 0;
//}
//Trong chương trình trên, vòng lặp for each sẽ lặp qua từng phần tử trong mảng arr, gán giá trị hiện tại vào biến item. Biến item nên có cùng kiểu dữ liệu với phần tử trong mảng arr
//CHÚ Ý: BIến element-declaration đại diện cho phần tử của array ở vòng lặp hiện tại, không phải là chỉ số của array.
//- Vì biến element-declaration có cùng kiểu dữ liệu với phần tử mảng nên cách tốt nhất là sử dụng từ khóa auto. Compiler sẽ tự động xác định kiểu cho biến.

//-Vòng lặp for each và tham chiếu 
//-Trong các vd trên vòng lặp for each sử dụng các biến giá trị cho mỗi lần lặp: với phương pháp này các biến sẽ được sao chép giá trị của phần tử hiện tại trong mảng sau mỗi lần lặp. điều này gây giảm hiệu suất và tốn vùng nhớ khi sao chép. Để khắc phục trường hợp này ta dùng biến tham chiếu.
//- Sử dụng biến tham chiếu cho vòng lặp for-each giúp cpu truy cập trực tiếp vào phần tử của mảng, không mất thời gian và vùng nhớ để khởi tạo bản sao cho biến. Tuy nhiên tham chiếu có thể làm thay đổi giá trị của phần tử trong mảng
//VD

//int main() {
//	array<char, MAX> arr = { 'a','b','c','d','e' };
//	for (auto item : arr) {
//		cout << item << " ";
//	}
//	return 0;
//}

// Trường hợp không muốn thay đổi giá trị trong mảng, ta sử dụng tham chiếu hằng(const reference).VD

//int main() {
//	array<int, MAX> arr = { 23,34,12,412,523 };
//	for (const auto item : arr) {
//		cout << item << " ";
//	}
//	return 0;
//}
//Chú Ý: Sử dụng tham chiếu(reference) hoặc tham chiếu hằng( const reference) cho biến khai báo trong vòng lặp for-each vì lí do hiệu suất
//-Vòng lặp for-each không làm việc với con trỏ mảng
// -Để lặp qua 1 mảng vòng lặp for-each phải biết được kích thước mảng đó, nên vòng lặp for-each không làm việc.

//void printArray(int arr[]) {
//	for(const auto &item:arr)// Lỗi biên dịch vì arr chỉ là 1 con trỏ
//}
	
// Vòng lặp for-each không cung cấp trực tiếp nào để xem được chỉ số phần tử hiện tại. Với những yêu cầu liên quan đến chỉ số phần tử mảng, Ta sử dụng vòng lặp for để làm điều này

int home(int &a, int &b) {
	return a + b;
}

int main() {
	int a = 4, b = 6;
	int sum=0;
	array<int, MAX> arr = { 21,23,43,21,34 };
	for (const auto item : arr) {
	
		sum += item;
		cout << sum << endl;
	}
	int sum1 = sum + home(a,b);
	cout << sum1 << endl;
	cout << a << " " << b << endl;
	return 0;

	
}