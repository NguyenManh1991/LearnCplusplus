/*Biến cục bộ (Local variables)
* Biến được định nghĩa bên trong khối lệnh (block) được gọi là biến cục bộ (local variables)
* +Các biến cục bộ có thời gian tự động, có nghĩa là chúng được tạo tại thời điểm định nghĩa và bị hủy khi ra khỏi khối lệnh mà biến đó được định nghĩa
* +Các biến cục bộ có phạm vi bên trong khối lệnh (còn được gọi là phạm vi cục bộ), nghĩa là sẽ không truy cập được biến khi ở bên ngoài khối lệnh
*/
#include<iostream>

using namespace std;

//int main() {
//	int a(6);
//	double b(6.5);
//	cout << "Nap vao gia tri cua a:" << endl;
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}
// Ở chương trình trên 2 biến a và b được định nghĩa bên trong hàm main(), và 2 biến này đều bị hủy khi hàm main() kết thúc

//+Vấn đề 1: Biến được định nghĩa bên trong khối lệnh lồng nhau bị hủy ngay sau khi các khối lệnh bên trong kết thúc.

//int main() {
//	int n(6);
//	{
//		double m(6.5);
//	}// Biến d ra ngoài phạm vi khối lệnh nên bị hủy
//	return 0;
//}
//
//+ Vấn đề 2: Khối lệnh lồng nhau được coi là 1 phần của khối lệnh bên ngoài, nơi biến được định nghĩa. Do đó, các biến được định nghĩa trong khối lệnh bên ngoài có thể được nhìn thấy bên trong 1 khối lệnh lồng nhau.
//VD

//int main() {
//	int x(6);
//	{
//		int y(9);
//		cout << x << "+" << y << "=" << x + y << endl;
//	}
//	return 0;
//}

//+ Vấn đề 3: Biến được định nghĩa bên trong một khối lệnh chỉ có thể được nhìn thấy trong khối lệnh đó
// Vì mỗi hàm (function) có 1 khối lệnh riêng, các biến trong 1 hàm (function) không thể được nhìn thấy từ 1 hàm (function) khác.
// Ví Dụ

//void sumfunction() {
//	int value(4);
//} // Tại đây biến value đã bị hủy
//int main() {
//	//Biến value không còn sử dụng được trong hàm này
//	sumfunction();//Trong hàm này biến value cũng không còn sử dụng được
//	return 0;
//}
//+Vấn đề 4: Hàm(function) có thể có các biến (variables) hoặc các tham số(parameters) với tên giống như các hàm(function) khác. Nghĩa là ta không cầnlo lắng việc đặt tên xung đột giữa 2 hàm độc lập.
// vd

//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int x = 6;
//	int y = 9;
//	cout << add(x, y) << endl;
//	return 0;
//}

//+ Vấn đề 5: Một biến bên trong 1 khối lệnh lồng nhau có thể có cùng tên với 1 biến ở khối lệnh bên ngoài. Trong trường hợp này, biến ở khối lệnh lồng sẽ ẩn biến bên ngoài. Nó được gọi tên ẩn(hiding) hoặc shadowing.
//VD:

//int main() {
//	int apples(6);
//	if (apples >= 6) {
//		int apples;
//		apples = 9;
//		cout << apples << endl;
//	}
//	cout << apples << endl;
//	return 0;
//}

//CHÚ Ý: Tránh định nghĩa các biến lồng nhau có cùng tên với các biến ở bên ngoài khối lệnh.
// Vấn đề 6: Nếu 1 biến chỉ được sủ dụng trong 1 khối lệnh lồng nhau, nó phải được định nghĩa bên trong khối lệnh lồng nhau.
//VD

int main() {
	int y(6);
	{
		int x;
		cin >> x;
		if (x == 9) y = 9;
	}
	cout << y << endl;
}