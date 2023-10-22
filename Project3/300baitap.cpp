#include<iostream>

using namespace std;


//int main() {
//	int nums[4] = { 2,7,11,15 };
//	int a; cin >> a;
//	for(int i=0;i<4;i++){
//		for (int j = i + 1; j < 4; j++) {
//			if (nums[i] + nums[j] == a) {
//				cout << i << " " << j << endl;
//				break;
//			}
//			}
//			}
//			return 0;
//		}
//
//int main() {
//	int a[10];
//	for (int i = 0; i <= 9; i++) {
//		cin >> a[i];
//	}
//	int n; cin >> n;
//	for (int i = 0; i <= 9; i++) {
//		for (int j = i + 1; j <= 9; j++) {
//			if (a[i] + a[j] == n) { cout << i << " " << j << endl; }
//			
//		}
//	}
//	return 0;
//
////}
//int main() {
//	int a[4];
//	int n = 3;
//	for (int i = 0; i <= 3; i++) {
//		cin >> i;
//
//		{
//		
//			if (n == a[i]) { cout << i << endl; }
//			else cout << "-1" << endl;
//		}
//	}
//	return 0;
//}

//
//int main() {
//	int board[3][3] = { {0,0,0}, {0,0,0},{0,0,0} };
//
//	bool xTurn = true;
//
//	while (true) {
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				cout << board[i][j] << " ";
//			}
//			cout << endl;
//		}
//		int x, y;
//		cin >> x >> y;
//		if (xTurn) {
//			board[x][y] = 1;
//		}
//		else {
//			board[x][y] = 2;
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			int temp = board[i][0];
//			if (temp == 0)
//				continue;
//			bool isMatch = true;
//			for (int j = 1; j < 3; j++)
//			{
//				if (board[i][j] != temp)
//				{
//					isMatch = false;
//					break;
//				}
//			}
//
//			if (isMatch) {
//				if (xTurn) { cout << "X wwin" << endl; }
//				else cout << "y wwin" << endl;
//			}
//		}
//		for (int j = 0; j < 3; j++) {
//			int temp = board[0][j];
//			if (temp == 0)
//				continue;
//			bool isMatch = true;
//			for (int i = 1; i < 3; i++) {
//				if (board[i][j] != temp) {
//					isMatch = false;
//					break;
//				}
//			}
//			if (isMatch) {
//				if (xTurn) { cout << "X win" << endl; }
//				else { cout << "y win" << endl; }
//			}
//		}
//		if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != 0) {
//			if (xTurn) { cout << "X win" << endl; }
//			else { cout << "y win" << endl; }
//		}
//		if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != 0) {
//			if (xTurn) { cout << "X win" << endl; }
//			else { cout << "y win" << endl; }
//
//		}
//		xTurn = !xTurn;
//	}
//	return 0;
//
//
//
//}
//
//int main() {
//
//	int n; cin >> n;
//
//	int boardA[5] = { 2, 3 ,5 ,7,9 };
//
//	//for (int i = 0; i < 5; i++) {
//		//if (n == boardA[i]) { cout << i << endl; }
//
//	//}
//	//if (n != boardA[0] && n != boardA[1] && n != boardA[2] && n != boardA[3] && n != boardA[4]) { cout << "-1"<<endl; }
//	int i;
//	bool isMatch = true;
//	for (i = 0; i < 5; i++) {
//		if (n == boardA[i]) {
//			isMatch = false;
//			break;
//		}
//
//	}
//	if (isMatch) {
//		cout << "-1" << endl;
//	}
//	else {
//		cout << i << endl;
//	}
//	return 0;
//}