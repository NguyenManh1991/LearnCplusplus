#include<iostream>

using namespace std;

int main() {
	int const n = 10;
	int a[n];
	int tong = 0;

	int i = 0;
	for ( int i = 1; i <= 10; i++) {
		if (i % 5 == 0)
		{
			break;
		}
	}

	std::cout << i << endl;
		
	
	return 0;
}