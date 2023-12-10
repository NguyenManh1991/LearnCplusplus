#include<iostream>
#include<algorithm>


//THuật Toán Tìm kiếm tuyến tính linear search
// Thuật toán sẽ duyệt tất cả các phần tử trong mảng để tìm kiếm đối tượng

bool ls(int a[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] = x) {
			return true;
		}
		else return false;
	}
	
}

int main() {
	int a[5] = { 1,2,3,4,5 };
	ls(a, 5, 2); std::cout << *ls << std::endl;
	return 0;
}

// Binary search : Thuật toán tìm kiếm nhị phân
// Điều kiện là các phần tử trong mảng hoặc vector đều đã được sắp xếp!