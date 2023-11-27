#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class School {
private:
	string name, age, address;
public:
	School() {
		name = age = address = " ";
	}
	School(string name, string age, string address) {
		this->name = name;
		this->age = age;
		this->address = address;
	}
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	string getAge() {
		return age;
	}

	void setName(string name ) {
		this->name = name;

	}
	void setAge(string age) {
		this->age = age;
	}
	void setAddress(string address) {
		this->address = address;
	}

	friend  ostream& operator <<(ostream& out, School a) {
		out << a.name << " " << a.age << " " << a.address << endl;
		return out;
	}
	friend istream& operator>>(istream& in, School& a) {
		//in.ignore();
		getline(in,a.name);
		in >> a.age;
		//in.ignore();
		getline(in, a.address);
		return in;
	}
};

int main() {
	School a;
	cin >> a;
	cout << a;
	return 0;
}