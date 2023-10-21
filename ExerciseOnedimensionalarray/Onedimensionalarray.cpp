#include<iostream>
#include<map>

using namespace std;

using ll = long long;


//int main() {
//	int TC; cin >> TC;
//
//	while (TC--) {
//		int n; cin >> n;
//		map < ll, bool > mp;
//		for (int i = 0; i < n; i++) {
//			ll x; cin >> x;
//			mp[x] = true;
//		}
//		for (int i = 0; i < n; i++) {
//			if (mp[i]) {
//				cout << i << " ";
//			}
//			else cout << "-1";
//		}
//		cout << endl;
//	}
//	return 0;
//}

int cnt[1000002];

int main() {
	int TC; cin >> TC;
	while (TC--) {
		int n; cin >> n;
		memset(cnt, 0, sizeof(cnt));
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x > 0) cnt[x] = 1;

		}
		for (int i = 1; i <= 1000001; i++) {
			if (cnt[i] == 0) {
				cout << i << endl;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}
