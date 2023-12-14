#include<iostream>	
#include<iomanip>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<array>


using namespace std;

//int main() {
//	array<int, 5> arr;
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//	}
//	for (int x : arr) {
//		cout << x << " ";
//	}
//	return 0;
//}

//int main() {
//	array<string, 10> arr1;
//	
//	for (int i = 0; i < 10; i++) {
//		cin >> arr1[i];
//	}
//	for (string x : arr1) {
//		cout << x << " ";
//	}
//	return 0;
//
//}

// Cấu trúc dữ liệu danh sách liên kết:
// Mỗi phần tử của danh sách liên kết là 1 nood được cấp phát động và có thể nằm dải rác không nhất thiết phải nằm liền kề nhau
// Mỗi nood trong danh sách liên kết gồm 2 phần chính 1 là phần dữ liệu 2 là phần tham chiếu lưu địa chỉ của nood nằm ngay phía sau nó!
// Để xây dựng 1 nood trong danh sách liên kết ta sử dụng 1 struct hoặc 1 class
// Trong 1 struct nood của danh sách liên kết sẽ có 2 phần : 1 là phần dữ liệu: 2 là node* nex: là phần tham chiếu lưu địa chỉ của node tiếp theo
// Mỗi node trong danh sách liên kết được cấp phát động nên nó sẽ là 1 con trỏ kiểu node vậy nên ta nên typedef struct node* listNode; 
// Khi đó mỗi khi ta khai báo 1 node mới trong danh sách liên kết ta chỉ cần sd listNode 
// Với mỗi 1 danh sách liên kết sẽ có 1 node đầu tiên gọi là HEAD và node cuối chỉ vào null

//struct Node{
//	int data;
//	Node* next;
//};
//typedef struct Node* node;
//
//// Xây dựng 1 hàm để tạo 1 node mới trong danh sách liên kết: Có tác dụng cấp phát động 1 node mới với dữ liệu là số nguyên x
//
//node makeNote(int x) {
//	node tmp =new Node();// Do đã typedef struct Note* note rồi nên k cần phải khai báo Node* tmp nữa!
//	tmp->data = x;// Vì tmp đang là 1 con trỏ nên ta phải dùng -> để truy cập vào data và next chứ k thể dùng dấu . được
//	tmp->next = NULL;// Mỗi khi cấp phát 1 node mới phần con trỏ bao h cũng chỉ vào NULL
//	return tmp;
//}
//// Xây dựng 1 hàm để kiểm tra xem node này có rỗng hay không?
//bool empty(node a) {
//	return a == NULL;
//}
//// Xây dụng hàm đếm xem danh sách liên kết có bao nhiêu phần tử
//
//int size(node){
//
//}
//int main() {
//	node head = NULL;
//	cout << sizeof(Node) << endl;	
//}

//int main() {
//	int arr[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j <3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//bool snt(int n) 
int main() {
	int n; cin >> n;
	for (int i = 0; i < sqrt(n); i++) {
		if (i == 0 || i == 1) { return false; cout << "false" << endl; }
		if (i == 2) { return  true; cout << "true" << endl; }
		if (n % i == 0) { return false; cout << false << endl; }
		else {
			return true; cout << "true" << endl;
		}
	}
}

//int main() {
//	int n; cin >> n;
//	snt(n);
//	return 0;
//}