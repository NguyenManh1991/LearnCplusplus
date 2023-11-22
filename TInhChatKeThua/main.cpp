#include<iostream>
#include<iomanip>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

// Kế thừa là 1 tính chất rất quan trọng của ngôn ngữ C++ cho việc ta sẽ sử dụng lại phần mềm và tránh dư thừa khi nhiều class có chung thuộc tính
// bass class: Class cha
// Dirived class: class con
// class con có quan hệ is-a với class cha!
// Lớp con không thể trực tiếp truy cập vào các thuộc tính của lớp cha mà phải thông qua các hàm get và set
class Person {
private:
	string name;
	string address;
public:
	string getName() {
		return name;
	}
	string getAddress(){
		return address;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void in() {
		cout << name << " " << address<<" ";
	}
	void nhap() {
		getline(cin, name);
		getline(cin, address);
	}

};
// cách khai báo 1 class con:
class student : public Person {
private:
	float gpa;// Thuộc tính riêng của class con
public:
	float getGpa() {
		return gpa;
	}
	void setGpa(float gpa) {
		this->gpa = gpa;
	}
	void nhap() {
		Person::nhap();
		cin >> gpa;
	}
	void in() {
		Person::in();
			cout << gpa << endl;
	}

};

int main() {
	student s;
	s.nhap();
	s.in();
	return 0;
}