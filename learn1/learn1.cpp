#include<iostream>
#include<cstring>
#include<math.h>
#include<iomanip>

using namespace std;
 

int main() {
	char a[20];
	char b[40];
	cout << "XIn Moi Nhap:";
	cin.getline(a, 20);
	strcpy_s(b, 40, a);
	cout << b << endl;
	strcat_s(b, 40, " ");
	strcat_s(b, 40, a);
	cout << "b+a:" << b << endl;
	cout << "so ki tu cua chuoi la:" << strlen(b) << " " << "Ki Tu" << endl;
	cout << "Chuoi co so phan tu la:" << sizeof(b) << " " << "phan tu" << endl;
	_strupr_s(a); cout << "Chuyen Tat Ca Ki Tu Thanh In Hoa:" << " " << a << endl;
	_strlwr_s(b); cout << "Chuyen Ta Ca Ki Tu Thanh In Thuong:" << " " << b << endl;
	int c = strcmp(a, b);
	if (c < 0) { cout << "a<b" << endl; }
	else if (c > 0) { cout << "a>b" << endl; }
	else cout << "a=b" << endl;
	if (strstr(a, b) != NULL) cout << "Tim Thay a Trong b" << endl;
	else cout << "Khong tim thay a trong b" << endl;
	return 0;
		
}
//int main() {
//	char mb[] = "yeungaytudau";
//	char mc[] = "tudau";
//	if (strstr(mb, mc) != NULL) cout << "Tìm thay mc trong mb" << endl;
//	else cout << "Khong tim thay mc trong mb" << endl;
//	return 0;
//}