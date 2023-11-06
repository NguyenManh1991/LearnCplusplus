// Tổng quan về hàm(functions overview)
// Giả sử có  một chương trình yêu cầu tính tuổi của người dùng từ năm sinh được nhập từ bàn phím.
#include<iostream>

using namespace std;

//int main() {
//	int year;
//	cout << "Nhap vao nam sinh:";
//	cin >> year;
//
//	int age;
//	age = 2023 - year;
//
//	cout << "tuoi cua nguoi do la:" << " " << age << endl;
//	return 0;
//}
/*Chương trình bên trên là tính tuổi của 1 người giả sử bây giờ bài toán cần được mở rộng thêm yêu cầu tính tuổi của 3 người hoặc nhiều hơn
* Vấn đề phát sinh từ đây, ta phát hiện ra mình phải viết những dòng code tương tự bên trên để tính tuổi cho những người tiếp theo
* dẫn đến tình trạng trùng lặp code và mất rất nhiều thời gian xây dựng chương trình. Để khắc phục nhược điểm đó , khái niệm hàm(function) được ra đời
* +Hàm(function) là một dãy các câu lệnh có thể tái sử dụng, được thiết kế để thực hiện 1 công việc cụ thể trong chương trình
* Cú pháp của hàm (function) trong C++
* <Kiểu trả về><Tên Hàm>([danh sách các tham số])
* {
* <các câu lệnh>
* [return<giá trị>;]
* }
* *Trong đó:
* <Kiểu trả về>:Kiểu bất kì của C++(int,float,double,char...).Nếu không trả về thì là void
* <Tên Hàm>:Theo quy tắc đặt tên định danh.
* <danh sách các tham số>: Tham số hình thức đầu vào giống khai báo biến, cách nhau bằng dấu ,(có thể không có)
* <giá trị>:trả về cho hàm thông qua lệnh return(có thể không có).
* Mỗi chương trình đều có 1 hàm là hàm main(), hàm này là nơi bắt đầu chương trình. Trong thực tế 1 chương trình có rất nhiều hàm bên trong.
* Ví dụ về chương trình có 2 hàm :main() ,sayhello()	
*/
//void sayhello() {
//	cout << "Hello world" << endl;
//}
//int main() {
//	cout << "start main:" << endl;
//	sayhello();
//	cout << "end main:" << endl;
//	return 0;
//}
/*Chương trình sẽ thực thi các câu lệnh 1 cách tuần tự bên trong hàm. Khi 1 lời gọi hàm, CPU sẽ gián đoạn hàm hiện tại để thực hiện các câu lệnh bên trong hàm được gọi
* Khi hàm được gọi kết thúc, CPU sẽ tiếp tục thực thi các câu lệnh của hàm hiện tại
* *CHÚ Ý: HÀm có thể được gọi nhiều lần trong 1 chương  trình(Tính tái sử dụng), và bất kì hàm nào cũng có thể gọi hàm khác
*/
/*+Giá Trị TRả Về(return values)
* Hàm main() có kiểu int nên bắt buộc phải có một câu lệnh return giá trị kiểu int. Khi chương trình kết thúc , hàm main() sẽ ruturn một giá trị cho hệ điều hành, để thông báo nó chạy thành công hay không.
* Khi tạo ra 1 hàm mới, tùy vào mục đích của hàm mà bạn có thể quyết định hàm đó có trả về 1 giá trị nào đó hay không.
* Để tạo ra 1 hàm có giá trị trả về, ta cân:
* 1: Thiết lập kiểu trả về trong định nghĩa của hàm 
* 2: Sử dụng câu lệnh return để trả về 1 giá trị.
* CHÚ Ý: Khi gặp câu lệnh return, hàm sẽ trả về ngay tại thời điểm đó. Tất cả các câu lệnh trong hàm sau câu lệnh return sẽ được bỏ qua
* VÍ DỤ về trương trình có hàm trả về số nguyên
*/


int return69() {
	return 69;
}
int main() {
	cout << return69() << endl;
	int sum = return69() + 1;
	cout << sum << endl;
	return 0;
}