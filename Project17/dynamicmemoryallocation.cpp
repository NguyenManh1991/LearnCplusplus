//Cấp phát bộ nhớ trong C++
//Ngôn ngữ C++ hỗ trợ 3 loại cấp phát bộ nhớ cơ bản.
// +Cấp phát bộ nhớ tĩnh (Static memory allocation):
// -Xảy ra trên các biến tĩnh và biến toàn cục.
// -Vùng nhớ của các loại biến này được cấp phát 1 lần khi chương trình bắt đầu chạy và vẫn tồn tại trong suốt thời gian tồn tại của chương trình
// -kích thước của biến, mảng phải được biết tại thời điểm biên dịch chương trình.
// +Cấp phát bộ nhớ tự động(Automatic memory allocation)
// -Xảy ra trên các tham số hàm và biến cục bộ
// -Vùng nhớ của các loại biến này được cấp phát khi chương trình  đi vào khối lệnh	và được giải phóng khi khối lệnh bị thoát
// -Kích thước của biến/ mảng phải được biết tại thời điểm biên dịch chương trình.
// +Cấp phát bộ nhớ động(Dynamic memory allocation)
// -Trong hầu hết các trường hợp cấp phát bộ nhớ tĩnh và tự động có thể đáp ứng tốt các yêu cầu của chương trình. Tuy nhiên có những trường hợp 2 laoị cấp phát bộ nhớ trên sẽ không đáp ứng được yêu cầu. VD
// *vd:Chúng ta cần 1 chuỗi để lưu tên người dùng, nhưng chúng ta không biết tên của họ dài bao nhiêu cho đến khi họ nhập tên. Hoặc chúng ta cần lưu trữ danh sách nhân viên
// trong 1 công ty, nhưng chúng ta không biết trước được công ty đó có bao nhiêu nhân viên.
// -Đối với cấp phát bộ nhớ tĩnh và tự động, kích thước của biến mảng phải được biết tại thời điểm biên dịch chương trình. Vì vậy điều tốt nhất chúng ta
// có thể làm là cố gắng đoán một kích thước tối đa của các biến đó:
// VD: char name[30]; Tên không quá 30 kí tự
//     Staff staff[500];  Công ty không vượt quá 500 nhân viên!
// -Khuyết điểm của khai báo trên: 
// 1: Gây lãng phí bộ nhớ nếu các biến không thực sự sử dụng hết kích thước khi khai báo. Ví dụ: Nếu cty chỉ có 100 nhân viên, chúng ta có 400 vùng nhớ nhân viên không được dùng tới.
// 2: Hầu hết các biến thông thường(Bao gồm mảng tĩnh) được cấp phát trong 1 phần bộ nhớ gọi là ngăn xếp(stack). Kích thước bộ nhớ stack cho 1 chương trình khá nhỏ
// (khoảng 1Mb với visual studio), nếu yêu cầu cấp phát vùng nhớ vượt quá con số này, chương trình sẽ bị đóng bởi hệ điều hành với lỗi stack overflow.
// vd: char byte[1000000*2]; Khoảng 2Mb bộ nhớ dẫn đến lỗi stack overflow.
// 3:Điều gì xảy ra nếu cty có 600 nhân viên, trong khi mảng stack cihr có 500 phần tử. Lúc này chương trình sẽ bị giới hạn bởi kích thước được khai báo ban đầu.
// +Để giải quyết những hạn chế trên, cấp phát bộ nhớ động được ra đời.
// **** Cấp phát động trong C++
// +Cấp phát bộ nhớ động (dynamic memory allocation) là cách yêu cầu bộ nhớ từ hệ điều hành khi cần thiết(Thời điểm chạy chương trình đang chạy)
// Cấp phát bộ nhớ động sử dụng vùng nhớ được quản lí bởi hệ điều hành gọi là heap. Ngày nay, bộ nhớ heap có thể có kích thước gigabyte.
// +Cấp phát động cho các biến đơn (Dynamically allocating single variables)
// -Để cấp phát động cho 1 biến ta sử dụng toán tử new:
// VD: new int;// Cấp phát động 1 số nguyên (kiểu dữ liệu có thể thay đổi)
// Trong ví dụ trên, chương trình yêu cầu cấp phát vùng nhớ của 1 số nguyên từ hệ điều hành. Toán tử new tạo đối tượng sử dụng vùng nhớ đó và sau đó trả về 1 con trỏ chứa địa chỉ của vùng nhớ đã được cấp phát.
// Thông thường, để truy cập vào vùng nhớ được cấp phát, chúng ta dùng con trỏ để lưu trữ địa chỉ được trả về bởi toán tử new
// VD: int *ptr= new int; // Cấp phát động 1 số nguyên và gán địa chỉ cho con trỏ ptr nắm giữ.
// Sau đó chúng ta có thể thao tác trên vùng nhớ vừa được cấp phát thông qua con trỏ.
// VD: int *ptr=new int;
//         *ptr=10;// Gán 10 cho vùng nhớ vừa được cấp phát.
// Khi cấp phát động cho 1 biến ta có thể cùng lúc khởi tạo giá trị cho biến đó:
// VD: int *ptr= new int(10); double *ptr1=new double(6.3);
// +Xóa các biến đơn (deleting single variables)
// Khi  chúng ta không còn sử dụng 1 biến được cấp phát động, chúng ta cần trao quyền quản lí vùng nhó đó lại cho hệ điều hành. Đối với các biến đơn(không phải mảng) điều này được thông qua toán tử delete
// VD: int *ptr= new int;
//        delete ptr;// Trả lại vùng nhớ đang trỏ đến cho hệ điều hành
//        ptr=nullptr;// gán ptr thành con trỏ null
// Toán tử delete không thật sự xóa bất cứ điều gì. Nó chỉ đơn giản là trao lại quyền sử dụng vùng nhớ được cấp phát cho hệ điều hành. Sau đó hệ điều hành được tự do gán lại vùng nhớ đó cho 1 ứng dụng khác hoặc ứng dụng này
// =CHÚ Ý: Mặc dù câu lệnh "delete ptr" giống như xóa 1 biến , nhưng thực tế không phải! Biến con trỏ vẫn có thể sử dụng như trước và có thể gán 1 giá trị mới giống như bất kì biến nào khác.
// 
// + COn trỏ lơ lửng(dangling pointers)
// Thông thường khi delete 1 con trỏ, vùng nhớ được trả lại cho hệ điều hành sẽ chứa cùng giá trị mà nó có trước đó. Lúc này, con trỏ đang trỏ sang 1 vùng nhớ chưa được cấp phát(hệ điều hành quản lý).
// Con trỏ trỏ đến vùng nhớ chưa được cấp phát gọi là 1 con trỏ lơ lửng (dangling pointers). Truy cập vào vung nhớ(dereferencing pointer) hoặc xóa 1 con trỏ lơ lửng sẽ dẫn đến lỗi undefined behavior.
// VD:
//
#include<iostream>

using namespace std;



/*int main() {
	int* ptr = new int;// cấp phát động 1 số nguyên và gán địa chỉ cho con trỏ ptr nắm giữ

	*ptr = 10;// gán 10 vào vùng nhớ được cấp phát
	 
	delete ptr;// giải phóng vùng nhớ cho hệ điều hành, ptr đang là con trỏ lơ lửng

	cout << *ptr << endl;// truy cập vào vùng nhớ con trỏ đang trỏ tới =>> lỗi inderfined behavior	

	delete ptr;// giải phóng vùng nhớ con trỏ đã được giải phóng từ trước đó=>> lỗi underfined behavior

	return 0;
}*/
//
// * Việc giải phóng 1 vùng nhớ cũng có thể tạo ra nhiều con trỏ lơ lửng(dangling pointers)
// VÍ DỤ;
//

/*int main() {
	int* ptr = new int;// cấp phát động một số nguyen và gán địa chỉ vùng  nhớ cho con trỏ ptr nắm giữ!
	int* otherPtr = ptr;// otherPtr và ptr đag cùng trỏ đến 1 vùng nhớ!
	
	delete ptr;// giải phóng vùng nhớ cho hệ điều hành, ptr và otherPtr đag là con trỏ lơ lửng

	ptr = nullptr; // ptr đang là con trỏ null
	//Tuy nhiên otherPtr vẫn đang là con trỏ lơ lửng!
	return 0;
}*/

// CHú Ý: Tránh sử dụng nhiều con trỏ vào 1 vùng nhớ
//        Khi xóa 1 con trỏ, nếu chương trình không ra khỏi phạm vi của con trỏ ngay sau đó, hãy gán con trỏ thành 0(hoặc nullptr trong C++11)
// * COn trỏ null và cấp phát động
//-Con trỏ null đặc biệt hữu ích trong cấp phát bộ nhớ động. Trong cấp phát bộ nhớ động con trỏ null có ý nghĩa "Không có vùng nhớ nào cấp phát cho con trỏ này"

/*int main() {

	int* ptr = new int;
	*ptr = 10;
	delete ptr;
	ptr = nullptr;

	if (!ptr)//Kiểm tra con trỏ trước khi cấp phát nếu ptr null(chưa được cấp phát), cấp phát ptr
		ptr = new int;

	*ptr = 20;
	// Không cần kiểm tra con trỏ khi xóa
	//nếu ptr không null, biến được cấp phát động sẽ bị xóa.
	// NẾu ptr là null, không có gì sẽ xảy ra.

	delete ptr;

	return 0;

}*/
//-Rò rỉ bộ nhớ trong C++(Memory leaks)
//Vd :void doSomething(){int *ptr=new int);}
// Trong hàm doSomething() cấp phát động 1 số nguyên, nhưng không sử dụng toán tử delete để giải phóng vung nhớ đó. Vì con trỏ tuân theo các quy tắc
//giống như các biến thông thường, khi hàm kết thúc, ptr sẽ bị huỷ. Mặt khac ptr là biến duy nhất giữ địa chỉ của số nguyên được cấp phát động. Nghĩa là chương trình
// đã mất địa chỉ của bộ nhớ được cấp phát động trong hàm doSomething(). Kết quả chươg trình sẽ không thể giải phóng vùng nhơs được cấp phát động
// Vấn đề trên được gọi làrò rỉ bộ nhớ(memory leaks). Rò rỉ bộ nhớ xảy ra khi chương trình mất địa chỉ của một số vùng nhớ được cấp phát động trước 
// khi giải phóng cho hệ điều hành.
// KHi rò rỉ bộ nhớ, chương trình của bạn không thể xóa bộ nhớ được cấp phát động, bởi vì chương trình không còn nắm giữ vùng nhớ đó. Hệ điều hành cũng
// không thể dùng vùng nhớ này, vì vùng nhớ đó vẫn nằm trong quyền sử dụng của chương trình.
// Các chương trình gặp vấn đề rò rỉ bộ nhớ nghiêm trọng có thể sẽ lấy hết bộ nhớ có sẵn, làm cho hệ điều hành chạy chậm thậm chí bị crash. CHỉ sau khi chương trình tắt
// hệ điều hành mới có thể dọn dẹp và đòi lại tất cả vùng nhớ bị rò rỉ.
//--- Một số trường hợp khác gây rò rỉ bộ nhớ trong C++
//-Con trỏ giữ địa chỉ của bộ nhớ được cấp phát động được gán 1 giá trị khác gây rò rỉ bộ nhớ!

void doSomthing() {
	int value = 10;
	int* ptr = new int;//Cấp phát vùng nhớ
	ptr = &value;// Địa chỉ vùng nhớ cấp phát trước đó bị mất, rò rỉ bộ nhớ.

}

//Cấp phát vùng nhớ liên tục nhiều lần

void doSomething1() {
	int* ptr = new int;
	ptr = new int;// địa chỉ vùng nhớ cấp phát trước đó bị mất, rò rỉ bộ nhớ

}
// Để khắc phục vấn đề rò rỉ bộ nhớ (memory leaks) trong C++, chúng ta cần giải phóng vùng nhớ khi ra khỏi phạm vi con trỏ, hoặc trước khi gán, cấp phát 1 con trỏ.
