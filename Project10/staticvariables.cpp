/*Tổng quan về biến tĩnh(static variables)
+Biến được định nghĩa bên trong 1 khối lệnh (block) được gọi là biến cục bộ(local variables)
+Biến cục bộ có thời gian tự động, nghĩa là chúng được tạo tại thời điểm định nghĩa, và bị hủy khi ra khỏi khối lệnh mà biến đó được định nghĩa
-KHi sủ dụng từ khóa static với các biến cục bộ, nó sẽ trở thành biến tĩnh(static variables)
-Biến tĩnh là biến được tạo duy nhất 1 lần khi gọi hàm lần đầu tiên và nó sẽ tồn tại suốt vòng đời của chương trình. Đây là sự khác biệt của biến tĩnh và biến cục bộ
-Biến tĩnh(static variables) là 1 biến lưỡng tính, vừa có tính chất của 1 biến toàn cục (global variables) vừa mang tính chất của 1 biến cục bộ(local variables)
+Tính chất của biến toàn cục là biến không mất đi khi khối lệnh định nghĩa nó kết thúc, nó vẫn nằm trong vùng nhớ của chương trình và được tự động cập nhật khi khối lệnh đó được gọi lại.
+Tính chất của biến cục bộ: Biến chỉ được sử dụng trong khối lệnh mà nó được khai báo
*VD về sử dụng biến cục bộ
*/
#include<iostream>

using namespace std;

//void dosomething() {
//	int x(0);
//	++x;
//	cout << x << endl;
//
//}
//int main() {
//	dosomething();
//	dosomething();
//	dosomething();
//	return 0;
//}
// Trong chương trình trên, bên trong hàm dosomething() sử dụng biến cục bộ (local variables) có thời gian tự động. Nên 3 lần gọi hàm  dosomething() là 3 lần khởi tạo và tăng giá trị cho biến x. NÊn kết quả của 3 lần gọi hàm là như nhau
// VD sủ dụng biến tĩnh(static variables)

//void n() {
//	static int a;
//	++a;
//	cout << a << endl;
//
//}
//int main() {
//	n();
//	n();
//	n();
//	return 0;
//}
//Trong chương trình trên a là 1 biến tĩnh (static variables) nó sẽ được khởi tạo 1 lần duy nhất khi hàm n() được gọi lần đầu. Nó không bị hủy khi kết thúc hàm, nên mỗi lần gọi hàm sau đó sẽ sử dụng giá trị của a ở thời điểm hiện tại
// Theo quy ươc nên đặt tiền tố s_ trước các biến tĩnh(static variables) để dễ dàng phân biệt với những biến khácư
// BIến tĩnh có 2 dang là liên kết ngoài(external linkage) và liên kết nội bộ(internal linkage)
// +Liên kết ngoài (external linkage): Khai báo ở ngoài mọi hàm(Biến toàn cục)
// +Liên kết nội bộ (internal linkage)
// -Khai báo trong hàm với từ khóa static
// -Khai báo ngoài hàm với từ khóa static (biến toàn cục)
// -Sử dụng biến tĩnh khi có nhu cầu giữ giá trị của biến trong chương trình
// VD:

#include<cstring>

int age() {
	static int id;
	++id;
	return id;
}
int main() {
	int age1 = age();
	string name1("Manh");
	int age2 = age();
	string name2("Hien");
	int age3 = age();
	string name3("ManhYeuHien");
	cout << age1 << ":" << name1 << endl;
	cout << age2 << ":" << name2 << endl;
	cout << age3 << ":" << name3 << endl;
	return 0;
}