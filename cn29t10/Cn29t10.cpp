#include<iostream>
#include<iomanip>
#include<cstring>
#include<math.h>

using namespace std;
// 
//int main() {
//	char GD[15];
//	cout << "Xin Moi Nhap Ten GD: " << " ";
//
//	cin.getline(GD, 15);
//	cout << endl;
//	_strlwr_s(GD); cout <<"DOi Sang CHuoi ki Tu thuong la:"<< GD << endl;
//	cout << GD << " " << "co" <<" " << sizeof(GD) << " " << "Phan Tu Trong Mang." << endl;
//	cout << GD << " " << "Co" <<" " << strlen(GD) << " " << "KI TU." << endl;
//	_strupr_s(GD); cout << "DOi Sang CHuoi Ki Tu Hoa La:" << GD << endl;
//
//	return 0;
//
//}

//int main() {
//	char HP[20];
//	cout << "XIn Moi Nhap Vao DIeu Kien Cua Hanh Phuc:" << " " << endl;
//	cin.getline(HP, 20);
//	_strlwr_s(HP); cout << "Dieu Kien Hanh Phuc Duoc Ha Xuong Thuong:" << HP << endl;
//	_strupr_s(HP); cout << "Dieu Kien Hanh Phuc Duoc Nang Len HOa :" << HP << endl;
//	cout << "HAnh Phuc Co So Luong Ki Tu La:" << " " << strlen(HP) << endl;
//	cout << "Hanh Phuc Co So Luong Phan Tu La:" << " " << sizeof(HP) << endl;
//	char HP1[25];
//	strcpy_s(HP1, HP);
//	cout << "Toi Da copy Hanh Phuc Va Chuyen No Sang Cho Ban Roi NAy:" << HP1 << endl;
//	return 0;
//
////	 }
//
//int main() {
//	char A[10];
//	char B[20];
//	cin.getline(A, 10); cout << endl;
//	cin.getline(B, 20); cout << endl;
//	//Noi 2 Mang
//	strcat_s(B, 20, " ");
//	strcat_s(B, 20, A);
//	cout << B << endl;
//	return 0;
//
//}

//int main() {
//	char qw[15];
//	char as[30];
//	cout << "Xin Moi Nhap Ten:";
//	cin.getline(qw, 15);
//	cout << "Xin Moi Nhap Cau Noi:";
//	cin.getline(as, 20);
//	_strlwr_s(qw); cout << "Da Chuyen Thanh Ki Tu In Thuong:" << qw << endl;
//	_strupr_s(as); cout << "Da Chuyen Thanh Ki Tu In Hoa:" << as << endl;
//	strcat_s(as, 30, " ");
//	strcat_s(as, 30, qw);
//	cout << "Sau Khi Noi 2 Chuoi Se Ra Nhu Sau:" << as << endl;
//	cout << "SO Luong Ki Tu Trong Chuoi la:" << strlen(as) << endl;
//	cout << "So Luong Phan Tu Mang La:" << sizeof(as) << endl;
//	return 0;
//
//}

//int main() {
//	char szstring1[] = "NguyenManh.dz";
//	char szstring2[] = "ManhNguyen.dz";
//
//	cout << "s1:" << szstring1 << endl;
//	cout << "s2:" << szstring2 << endl;
//
//	int result = strcmp(szstring1, szstring2);
//	if (result < 0) { cout << "s1>s2" << endl; }
//	else if (result > 0) { cout << "s1<s2" << endl; }
//	else cout << "s1==s2" << endl;
//	return 0;
//}

//int main() {
//	char szstr1[] = "TheGioiTroChoi";
//	char szstr2[] = "TheGioiTroChoi";
//
//	cout << "s1:" << szstr1 << endl;
//	cout << "s2:" << szstr2 << endl;
//	int ss = strcmp(szstr1, szstr2);
//	if (ss < 0) { cout << "s1 < s2" << endl; }
//	else if (ss > 0) { cout << "s1>s2" << endl; }
//	else cout << "s1==s2";
//	return 0;
//
//
//}
//int main() {
//	char gm[] = "ANhYeuEm";
//	char gm1[] = "EmYeuAnh";
//
//	cout << "s1:" << gm << endl;
//	cout << "s2:" << gm1 << endl;
//
//	int qq = strcmp(gm, gm1);
//	if (qq > 0) { cout << "s1>s2" << endl; }
//	else if (qq < 0) { cout << "s1<s2" << endl; }
//	else cout << "s1=s2" << endl;
//	return 0;
//}

int main() {
	char km[] = "ThoiCungDuoc";
	char km1[] = "Thoi";

	cout << "s1:" << km << endl;
	cout << "s2:" << km1 << endl;

	if (strstr(km, km1) != 0) { cout << "tim thay " << km1 << "trong" << km << endl;}
	else { cout << "KHong Tim Thay" << endl; }
	return 0;
}