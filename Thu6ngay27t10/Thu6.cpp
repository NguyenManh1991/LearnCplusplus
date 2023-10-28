#include<iostream>
#include<math.h>
#include<iomanip>
#include<cstring>
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	int h;
//	int a = 0;
//	int b = 1;
//	cout << "day so fibonaci n phan tu la:" << a <<" " << b<<" ";
//	for (int i = 1; i <= n-2; i++) {
//		for (int j = i + 2; j <= n; j++)
//			h = a + b;
//		cout << h<<" ";
//		a = b;
//		b = h;
//	}
//}

//int main() {
//	int a;
//	cin >> a;
//	int giaithua = 1;
//	for (int i = 1; i <= a; i++) {
//		giaithua = giaithua * i;
//
//
//	}
//	cout << giaithua << endl;
//	return 0;
//}

//int main() {
//	int a;
//	do {
//		cin >> a;
//	} while (a != 0);
//
//	cout << "ket thuc chuong trinh" << endl;
//	return 0;
//}

//int main() {
//	char TEN[20];
//	cout << "Xin Moi Nhap Ten Cua Ban";
//	cin >> TEN;// Cách này nhập sẽ khôn thể dùng kí tụ khoảng trắng. Khi nhập qua số lượng kí tự sẽ gây hiện tượng tràn mảng dẫn đến lỗi!
//	cout << TEN << endl;
//	return 0;
//}
//	

//Để khắc phục khuyết điểm trên ta nhập chuỗi bằng phương thức std::cin.getline()

//int main() {
//	char CNH[80];
//	cout << "Xin Moi Nhap Cau Noi Hay Cua Ban";
//	cin.getline(CNH, 80);
//	cout << "Cau Noi Y Nghia:" << CNH << endl;
//	return 0;
//}

//Các thao tác trên mảng kí tự 
//+ Xem độ dài mảng kí tự: Để xem độ dài mảng kí tự ta xem qua hàm strlen() vd:

//int main() {
	/*char NM[20] = "NGUYENMANH";
	cout << "TEN CUA TUI:" << NM << endl;
	cout << NM << "co" << strlen(NM) << "Ky Tu." << endl;
	cout << NM << "co" << sizeof(NM) << "Phan Tu Trong Mang."<<endl;*/

	/*char TY[15];
	cout << "XIN MOI NHAP TEN NGUOI YEU CUA BAN:" << " ";
	cin.getline(TY, 15);
	cout << "TEN NGUOI YEU CUA BAN LA:" << TY << endl;
	cout << "TEN NGUOI YEU CUA BAN CO SO KI TU LA:" << strlen(TY) << endl;
	cout << "TEN NGUOI YEU BAN CO SO PHAN TU MANG LA:" << sizeof(TY) << endl;





	return 0;

}*/
	// + Chuyển mảng kí tự trong c++
	// Để chuyển mảng kí tự từ chữ in thường sang chữ in hoa và ngược lại ta có thể dùng 2 hàm sau:
	//strlwr(): Chuyển chuỗi s thành chuỗi thường( vd A>>a,B>>b,b>>b)
	//strupr():Chuyển chuỗi s thành chuỗi hoa(vd A>>A,a>>A,)

	//int main() {
	//	char dp[20];
	//	cout << "xin moi nhap ten moi tinh don phuong cua ban:"<<" ";
	//	cin.getline(dp, 20);
	//	cout << "tinh don phuong cua ban ten la:" << " ";
	//	cout << dp << "co" << " " << strlen(dp) << "ky tu" << endl;
	//	cout << dp << "co" << " " << sizeof(dp) << "phan tu mang.";
	//	_strlwr_s(dp);
	//	

	//	cout << dp << endl;

	//	return 0;
	//}
//int main()
//{
//	char szstring1[] = "hello howkteam.com!";
//	char szstring2[] = "hello howkteam.com!";
//
//	cout << "s1: " << szstring1 << endl;
//	cout << "s2: " << szstring2 << endl;
//
//	_strlwr_s(szstring1);
//	_strupr_s(szstring2);
//	cout << "s1: " << szstring1 << endl;
//	cout << "s2: " << szstring2 << endl;
//
//	return 0;
//}

int main() {
	char NM1[10];
	char NM2[15];
	cout << "Xin MOi NHap Ten 1:" << " " << endl;
	cin.getline(NM1, 10);
	cout << "Xin Moi Nhap Ten 2:" << " " << endl;
	cin.getline(NM2, 15);
	_strlwr_s(NM1); cout << NM1 << endl;
	_strupr_s(NM2); cout << NM2 << endl;
	cout << NM1 << "CO" << " " << strlen(NM1) << " " << "KI TU." << endl;
	cout << NM2 << "CO" << " " << strlen(NM2) << " " << "KI TU." << endl;
	cout << "MAng MN1 co:" << " " << sizeof(NM1) << " " << "PHaN Tu." << endl;
	cout << "MAng MN1 co:" << " " << sizeof(NM1) << " " << "PHaN Tu." << endl;
}