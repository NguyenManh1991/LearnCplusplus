// Tham số và đối số của hàm (function parameters and arguments)
// Để truyền thông tin vào 1 hàm để tính toán, ta cần biết đến khái niệm tham số  và đối số của hàm( function parameters and arguments):
//-Tham số(parameters): là các biến được sủ dụng trong 1 hàm mà giá trị của biến đó được cung cấp bởi lời gọi hàm, các tham số được đặt bên trong dấu ngoặc đơn, cú pháp giống khai báo biến, cách nhau bằng dấu ',
//-Đối số (arguments):là các giá trị truyền vào hàm qua lời gọi hàm, cách nhau bởi dấu ','. Số lượng đối số tương ứng với số lượng tham số của hàm.
//VD về 3 hàm có tham số và đối số khác nhau.
#include<iostream>

using namespace std;

//void sayhello()
//{
//	cout << "hello world" << endl;
//}
//void printValue(int x) {
//	cout << x << endl;
//}
//int add(int x, int y) {
//	return x + y;
//}

//int main() {
//	sayhello();
//	printValue(69);
//	cout << add(6, 9) << endl;
//	return 0;
//}

// Trong C++ có 3 cách truyền đối số(arguments) khác nhau cho 1 hàm:
//-Truyền giá trị (call by value)
//-Truyền tham chiếu (call by reference)(Chỉ có trong C++) 
//-Truyền địa chỉ(call by address):
//+Truyền giá trị cho hàm (passing arguments by value)
//-Trong C++ mặc định đối số được truyền cho hàm ở dạng giá trị.
//-Khi truyền đối số cho hàm ở dạng giá trị, giá trị của đối số được sao chép vào tham số của hàm và đối số sẽ không bị thay đổi sau lời gọi hàm
//VD

//void callByValue(int &y)
//{
//	cout << "y=" << y << endl;
//	y = 69;
//	cout << "y=" << y << endl;	
//}
//
//int main() {
//	int x(1);
//	cout << "x=" << x << endl;
//	callByValue(x);
//	cout << "x=" << x << endl;
//	return 0;
//
//}


// TRUYỀN THAM CHIẾU CHO HÀM
// Mặc dù truyền giá trị cho hàm (passing arguments by value) được sử dụng nhiều nhất vì tính linh hoạt và an toàn nhưng vẫn còn 2 hạn chế 
//+ Gây giảm hiệu suất trong trường hợp đối số là kiểu cấu trúc( structs) hoặc các lớp(classes), đặc biệt là nếu hàm đó được gọi nhiều lần. Vì mỗi lần gọi hàm đều phải sao chép giá trị của đối số vào tham số của hàm.
//+ Hàm chỉ có thể trả về 1 giá trị duy nhất với câu lệnh return. Trong nhiều trường hợp hàm cần trả về nhiều thông tin hơn cách này không áp dụng được
//Phương pháp truyền tham chiếu(passing arguments by reference) ra đời để khắc phục 2 mhược điểm  này
// TRước tiên ta cần biết cơ bản về biến tham chiếu
//+Trong C++: Tham chiếu(reference) là 1 biến hoạt động như 1 bí danh của biến khác.
//+ KHai báo bằng cách sử dụng kí hiệu '&' giữa kiểu dữ liệu và tên biến .
//+ Mọi thay đổi trên biến tham chiếu cũng chính là thay đổi trên biến được tham chiếu
// Để truyền tham chiếu cho hàm (passing arguments by reference), ta chỉ cần khai báo các tham số(parameters) của hàm dưới dạng tham chiếu(reference):
// VD:

//void callByReference(int& y)
//{
//	cout << "y=" << y << endl;
//	y = 69;
//	cout << "y=" << y << endl;
//}
//int main() {
//	int x(1);
//	cout << "x=" << x << endl;
//	callByReference(x);
//	cout << "x=" << x << endl;
//	return 0;
// }
// Trong chương trình hàm này, khi hàm callByReference(int &y) được gọi, y sẽ trở thành 1 tham chiếu đến đối số x. Mọi thay đổi của biến y bên trong hàm callByReference (int&y) cũng chính là thay đổi trên biến x'
//* CHÚ Ý: Khi truyền tham chiếu cho hàm, đối số chỉ có thể là biến (variables)
// + Trả về nhiều giá trị thông qua tham số đầu ra (returning multiple values via out parameters)
//- Đôi khi ta cần 1 hàm trả về nhiều giá trị. Tuy nhiên hàm chỉ có 1 giá trị trả về. Một trong những cách để hàm trả về nhiều giá trị là sử dụng tham sos tham chiều: 
// VD:

//void calculator(int x, int y, int& addOut, int& subOut)
//{
//	addOut = x + y;
//	subOut = x - y;
//}
//
//int main() {
//	int a(6), b(9);
//	int add, sub;
//	calculator(a, b, add, sub);
//	cout << "a+b=" << add << endl;
//	cout << "a-b=" << sub << endl;
//	return 0;
//}

// Trong chương trình trên add và sub được truyền vào hàm dưới dạng tham chiếu nên giá trị của add và sub đã được thay đổi sau lời gọi hàm
//* CHÚ Ý: Trong 1 hàm các tham số có thể được truyền theo nhiều cách

//-TRuyền tham chiếu hằng (Pass by const reference)
//+ Truyền tham chiếu cho hàm đã giải quyết vấn đề hiệu suất của phương pháp truyền giá trị (pass by value). Nhưng truyền tham chiếu cho phép hàm thay đổi giá trị của các đối số(arguments), Điều này sẽ là nguy cơ tiềm ẩn nếu ta chỉ muốn đọc các đối số đó (read only).
//+Nếu ta biết rằng một hàm sẽ không thay đổi giá trị của đối số, nhưng không muốn truyền giá trị (pass by value) vì vấn đề hiệu suất, giải pháp tốt nhất là truyền tham chiếu hằng( pass by const reference)
//+ Tham chiếu hằng (const reference) là một tham chiếu mà không cho phép biến được tham chiếu thay đổi thông qua biến tham chiếu. Đối số của tham chiếu hằng có thể là biến số, hằng số hoặc biểu thức.
//VD
void printValue(const int& value)
{
	value = 69;
	cout << value << endl;
}
int main() {
	int x(1);
	printValue(x);
	return 0;
}