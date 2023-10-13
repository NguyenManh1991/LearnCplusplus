#include<iostream>

using namespace std;

int main() {
	char n;
	cin >> n;
	if((n>='a'&&n<='z')||(n>='A'&&n<='Z')){cout<<"YES"<<endl; }
	else{cout<<"NO"<<endl; }
	return 0;
}