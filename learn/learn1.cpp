#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char ht[20];
	char gm[50];

	cout << "Xin Moi Nhap Vao Du Lieu:";
	cin.getline(ht, 20);
	cout << "Xin Moi Nhap Cau Noi:";
	cin.getline(gm, 50);
	strcat_s(gm, 50, " ");
	strcat_s(gm, 50, ht);
	cout << "Chuoi sau khi noi la:" << gm << endl;

}