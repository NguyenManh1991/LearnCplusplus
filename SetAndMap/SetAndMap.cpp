#include<set>
#include<iostream>
#include<map>
#include<string>
#include<unordered_map>



//CÁc hàm chính trong set:
//+Hàm insert : hàm giúp thêm 1 phần tử vào trong set
//+Hàm size: Kiểm tra số lượng phần tử trong set
//* Chú ý set không lưu các phần tử trùng nhau các phần tử trong set là riêng biệt
//+ sử dụng hàm find hoặc count để tìm kiếm trong set 
//+ Hàm erase :Dùng để xóa 1 phần tử trong set
// +muntiset: Có thể lưu trữ các phần tử giống nhau và có thể dùng các hàm insert ,size ,cout giống như set
// +unoder_ Giống như set nhưng nó không sắp xếp thứ tự từ bé đến lớn nữa
//
//int main() {
//	std::set<int> s;// Khai báo 
//	s.insert(100);// Thêm phần tử vào set ta dùng hàm insert
//	std::cout << s.size() << std::endl;// Kiểm tra số lượng phần tử trong set
//	std::set<int> a;
//	for (int i = 0; i < 10; i++) {
//		a.insert(i);
//	}
//	std::cout << a.size() << std::endl;
//	// Tìm kiếm xem 5 có phải phần tử trong set hay không
//	if (a.count(5) != 0) {
//		std::cout << "found" << std::endl;
//
//	}
//	else { std::cout << "not found" << std::endl; }
//	a.erase(5);// Xóa phần tử 5 khỏi set
//	// Dùng for-each để duyệt các phần tử của set
//	for (int x : a) {
//		std::cout << x << std::endl;
//	}
//	std::cout << *a.begin() << std::endl;// sử dụng begin() cùng giải tham chiếu để truy cập đến phần tử đầu tiên của set
//	std::cout << *a.rbegin() << std::endl;// Sử dung rbegin() cùng giản tham chiểu để truy cập đến phần tử cuối cùng của set
//}


// Map:: liên quan đến tần xuất suất xuất hiện các phần tử trong mảng nó lưu các cặp key -value value có thể lặp lại con key thì k
// CÁch khai báo map: map<datatype 1,datatype 2> mp;// datatype 1 kiểu dữ liệu cho kye và datatype 2: kiểu dữ liệu cho value
// Phù hợp với bài toán liên quan đến tần suẩt xuất hiện
// Ta cũng sử dung coutn hoặc find để tìm kiếm trong map

//int main() {
//	std::map<int, int> mp;
//	mp[10] = 20;// Thêm 1 cặp key value vào trong map
//	mp[20] = 30;
//	mp[30] = 40;
//	mp.insert({ 40,50 });//Thêm qua hàm insert
//	std::cout << mp.size() << std::endl;
//	mp[10] = 30;//Số lượng phần tử trong map không thay đổi do đã có kye là 10 rồi
//	// Dùng for-each để duyệt phần tử trong map
//	for (auto x : mp) {
//		std::cout << x.first<<" "<<x.second << std::endl;
//	}
//	// Dùng coutn để kiểm tra(tìm kiếm xem phần tử có trong map không)
//	if (mp.count(100) != 0) {
//		std::cout << "found" << std::endl;
//	}
//	else
//		std::cout << "Not found" << std::endl;
//	// Dùng hàm find để kiểm tra nó sẽ trả về 1 interrator 
//	if (mp.find(10) != mp.end()) {
//		std::cout << "found" << std::endl;
//	}
//	else
//		std::cout << "not found" << std::endl;
//	// Xóa 1 cặp kye value thông qua hàm erase
//	mp.erase(10);// erase sẽ xóa cả cặp kye value
//
//
//}


// Bài toán đếm số lần xuất hiện cuẩ các phần tử trong mảng, sau đó in ra theo tần suất xuất hiện của nó!

//

//int main() {
//	std::map<std::string, int> mp;
//	int n; std::cin >> n;
//	for (int i = 0; i < n; i++) {
//		std::string x; std::cin >> x;
//		mp[x]++;
//	}
//	for (auto it : mp) {
//		std::cout << it.first << " " << it.second << std::endl;
//	}
//	std::string s;
//	int r=0;
//	for(auto a:mp){
//		if (a.second > r) {
//			r = a.second;
//			s = a.first;
//		}	
//	}
//	std::cout << s << " " << r << std::endl;
//}

// Khi ta muốn lưu map có nhiều key giống nhau ta sử dụng multimap

//int main() {
//	std::multimap<int, int> mp;
//	//mp[1] = 100;// không thể sử dụng cách này để thêm cặp key value vào multimap do nó cho phép các key có thể trùng nhau
//	// Ta phải dùng insert để thêm các cặp key-value vào multimap
//	mp.insert({ 100,200 });
//	mp.insert({ 100,300 });
//	mp.insert({ 200,400 });
//	// Duyệt như duyệt map
//	for (auto it : mp) {
//		std::cout << it.first << " " << it.second << std::endl;
//	}
//	return 0;
//}

// unorderd_map các cặp key-value sẽ không được sắp xếp theo thứ tự nữa!


//int main() {
//	std::unordered_map<int, int> mp;
//	mp.insert({ 1,2 });
//	mp.insert({ 4,3 });
//	mp.insert({ 2,5 });
//	for (auto it : mp) {
//		std::cout << it.first << " " << it.second << std::endl;
//	}
//	return 0;
//}


//excrise 1

//int main() {
//	std::set<int> h;
//	int n; std::cin >> n;
//
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		int x; std::cin >> x;
//		h.insert(x);
//	}
//	
//	for (auto x : h) {
//		std::cout << x << std::endl;
//		++count;
//	}
//	std::cout << count << std::endl;
//}

//int main() {
//	int a; std::cin >> a;
//	while (a--)
//	{
//		int b; std::cin >> b;
//		std::set<int> ab;
//		for (int i = 0; i < b; i++) {
//			int x; std::cin >> x;
//			ab.insert(x);
//		}
//		std::cout << ab.size() << std::endl;
//	}
//	return 0;
//}

//int main() {
//	int a; std::cin >> a;
//	while (a--)
//	{
//		int b; std::cin >> b;
//		std::map<int, bool> ab;
//		for (int i = 0; i < b; i++) {
//			int x; std::cin >> x;
//			ab[x] = true;
//		}
//		for (auto h : ab) {
//			std::cout << h.first << " " << h.second << std::endl;
//		}
//		std::cout << ab.size() << std::endl;
//	}
//}


int main() {
	int a; std::cin >> a;
	while (a--)
	{
		int b; std::cin >> b;
		std::map<int, int> ab;
		for (int i = 0; i < b; i++) {
			int x; std::cin >> x;
			ab[x] = true;
		}
		std::cout << ab.size() << std::endl;
	}
}