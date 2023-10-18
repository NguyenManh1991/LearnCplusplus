//Dùng để chia nhỏ chương trình để tận dụng nhiều lần và de debug hơn!
//Định nghĩa là 1 khối lệnh và nó chỉ được chạy khi mình gọi nó!
//CÚ pháp Void myfunction(){Khối lệnh  trong hàm}
//KHi mà hàm không trả về giá trị gì thì kiểu trả về là void
//vd void xinchao() {cout <<"xin chao"<<endl;}
// Chúng ta có thể gọi hàm mình xây dựng 1 lần hoặc nhiều lần
// vd: 
#include<iostream>
#include<math.h>

using namespace std;

//void xinchao() {
	//cout << "xin chao" << endl;}
//int  main() {
	//for (int i = 1; i <= 10; i++) {
		//xinchao();}
	//return 0;
//}

//int main() {
	//xinchao(100);// 100 là đối số của tham số a trong hàm xinchao đối số phải cùng kiểu dữ liệu với tham số! 1 hàm có thể có nhiều tham số khác nhau và khi truyền đối số ta phải truyền đúng thứ tự!


	//return 0;
//}
//S=1+2+3+4+....+n
//int  tong(int n) { return n * (n + 1) / 2; }

//int main() {
	//int a = 10;
	//int s = tong(a);
	//cout << s << endl;
	//return 0;

//}
//S= 1/1+1/2+1/3+....+1/n
/*
double tong(int n) {
	double res = 0;
	for (int i = 0; i <= n; i++) {
		res += 1.0 / i;
	}
	return res;
}*/

// xây dựng hàm kiểm tra số nguyên tố, tham số là int(true/false)
/*bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++) { if (n % i == 0) return false; }
	return n > 1;

}*/
//int main() {
//	for (int i = 1; i <= 100; i++) {
	//	if (nt(i) == true) { cout << i << endl; }
	//}
	//return 0;
//}

// Các hàm có thể gọi lẫn nhau 
//Kiểm tra xem tổng các chữ số của 1 số có phải là số nguyên tố hay không?
/*int tong(int n) { int sum = 0;
while (n)
{
	sum += n % 10;
	n /= 10;

}
return sum;
}*/
/*int main() {
	int n = 124;
	int sum = tong(n);
	if (nt(sum)) { cout << 1 << endl; }
	else cout << 0 << endl;

	return 0;*/

//Khai báo nguyên mẫu hàm chỉ cần khai báo kiểu trả về tên hàm và kiểu dữ liệu của tham số vd: int tong(int), long long tich(int).... Khi khai báo nguyên mẫu hsm thì ta có thể gọi hàm trước sau tùy ý!

//Tham số và đối số có thể cùng tên hoặc khác tên!
// Khi muốn thay đổi giá trị của 1 đối số nào đó sau khi hàm kết thúc thì ta truyền kiểu tham chiếu là cho thêm dâu & vào trước tên biến! vd int tong(int &a)
/**int tang(int& n) { return  ++n; }

int main() {
	int a = 124;
	tang(a);
	cout << a << endl;
	return 0;
}*/
//funciton overloading (Nạp chồng): Khi ta muốn xây dựng các hàm có cùng tên nhưng nó khác danh sách tham số hoặc khác kiểu trả về vd:
int tong(int a, int b) {
	return a + b;
}
float tong(float a, float b) {
	return a + b;
}
int main() {
	//int n = 100, m = 200;
	float n = 100.3, m = 200.1;
	cout << tong(n, m) << endl;
	return 0;
}