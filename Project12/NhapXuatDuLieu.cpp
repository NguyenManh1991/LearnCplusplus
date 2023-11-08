/*Xuất dữ liệu với std::cout trong C++
* Đối tượng std::cout là một đối tượng được định nghĩa trong iostream library thuộc namespace std, dùng để hiển thị 1 đối tượng nào đó lên thiết bị xuất chuẩn( mặc định là màn hình). Toán tử <<(insertion operator) được dùng chung với std::cout, cho biết hướng đi của r-value đến màn hình console.
* Vd: std::cout<<"Hello Viet Nam";
* Ta có thể dùng toán tử <<(insertion operator) nhiều lần để in thông tin trên cùng một dòng 
* VD: std::cout<<"Anh"<<"Yêu"<<"Em"<<endl;
* newline "\n" và std::endl
* -Trong C++, output stream thường dung buffer, nghĩa là output data sẽ được lưu vào 1 vùng nhớ đệm, và output data sẽ được gửi vào output device vào thời điểm thích hợp (vì lí do hiệu suất). Với output std::endl sẽ xóa output buffer mỗi khi nó được gọi còn \n thì không
+ Nên sử dụng std::endl khi ta cần đảm bảo có output ngay lập tức. Nhưng nên hạn chế sử dụng std::endl khi làm việc với file I/O để tránh việc phải flush buffẻ liên tục dẫn đến việc phải truy cập các file I/O thường xuyên gây giảm hiệu suất Ngoài ra những trường hợp khác nên dùng \n.
	
*/
/*NHập dữ liệu với std::cin trong C++
* Đối tượng std::cin là một đối tượng định nghĩa trong iostream library thuộc namespace std, dùng để đọc 1 thông tin nào đó từ thiết bị nhập chuẩn(mặc định là bàn phím), sau đó lưu thông tin đó vào 1 biến. Toán tử >>(extraction operator) được dùng với std::cin, cho biết hướng đi của data từ màn hình console vào 1 biến 
* VD:
* int main(){
* int value;
* std::cin>>value;
* Giống như std::cout, ta có thể nhập giá trị cho nhiều biến bằng cách sử dụng nhiều toán tử >>(extraction operator) trong 1 câu lệnh. Đối tượng std::cin sẽ lấy giá trị theo kí tự khoảng trắng, hoặc kí tự xuống dòng từ trái qua phải và từ trên xuống dưới 
* 
*/
/*Định dạng dữ liệu nhập xuất trong C++
* Trong C++, ta có thể định dạng dữ liệu cho thiết bị nhập xuất cho thiết bị nhập xuất chuẩn(bàn phím, màn hình console), hoặc có thể định dạng dữ liệu nhập xuất cho file văn bản.
* Để định dạng dữu liệu, ta cần thêm chỉ thị #include<iomanip> vào đầu chương trình. Thư viện này chứa các toán tử định dạng(manipulator).
* -Toán tử std::setw(n): xác định độ rộng dành cho của dữ liệu xuất. Khi sử dụng setw(n), các khoảng trắng sẽ được thêm vào bên trái hoặc bên phải dữ liệu xuất(để tổng số kí tự là n). Dữ liệu khi in ra sẽ được canh trái hoặc canh phải .
* -toán tử std::left và std::right dùng chung với toán tử setw(n) để canh lề trái hoặc lề phải.
* -Toán tử std::setfill(ch) dùng chung với std::setw(n) để quy  định kí tự được thêm vào thay vì dùng khoảng trắng mặc định VD:
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cout << "Danh sach lop hoc lap trinh" << endl << endl;

	cout << setw(5) << left << "Id";
	cout << setw(30) << left << "Name";
	cout << setw(20) << right << "adress" << endl;
	cout << setfill('_')<< setw(60) << "_" << endl;
	
	cout << setfill(' ');

	cout << setw(5) << left << 1 << setw(30) << left << "Nguyen Van Manh" << setw(20) << right << "Hai Duong" << endl;
	cout << setw(5) << left << 2 << setw(30) << left << "Nguyen Van Hong" << setw(20) << right << "Kinh Mon" << endl;
	cout << setw(5) << left << 3 << setw(30) << left << "Dinh Thu Phuong" << setw(20) << right << "Nam Dinh" << endl;
	cout << setw(5) << left << 4 << setw(30) << left << "Nguyen Van Dung" << setw(20) << right << "Kinh Mon" << endl;
	cout << setw(5) << left << 5 << setw(30) << left << "Nguyen Thi Luu" << setw(20) << right << "Kinh Mon" << endl;


}