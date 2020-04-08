#include <cstdlib>    
#include <iostream>    
using namespace std;
void succesor(int board[3][3]) {
	int row, col = 0;
	int temp[3][3];
	int t = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == 0) {
				row = i;
				col = j;
			}
		}
	}
	int count = 0;
	if (row != 0)
		count++;
	if (row != 2)
		count++;
	if (col != 0)
		count++;
	if (col != 2)
		count++;
	cout << count << "\n";
	if (row != 0)
	{
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				temp[i][j] = board[i][j];
			}
		}
		cout << "move 0 to up\n";
		t = temp[row - 1][col];
		temp[row - 1][col] = temp[row][col];
		temp[row][col] = t;
		cout << "[";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 2 && j == 2)
					cout << temp[i][j];
				else
					cout << temp[i][j] << " ";
			}
		}
		cout << "]\n";
	}
	if (row != 2)
	{
		cout << "move 0 to down\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				temp[i][j] = board[i][j];
			}
		}
		t = temp[row + 1][col];
		temp[row + 1][col] = temp[row][col];
		temp[row][col] = t;
		cout << "[";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 2 && j == 2)
					cout << temp[i][j];
				else
					cout << temp[i][j] << " ";
			}
		}
		cout << "]\n";
	}
	if (col != 0)
	{
		cout << "move 0 to left\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				temp[i][j] = board[i][j];
			}
		}
		t = temp[row][col - 1];
		temp[row][col - 1] = temp[row][col];
		temp[row][col] = t;
		cout << "[";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 2 && j == 2)
					cout << temp[i][j];
				else
					cout << temp[i][j] << " ";
			}
		}
		cout << "]\n";
	}
	if (col != 2)
	{
		cout << "move 0 to right\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				temp[i][j] = board[i][j];
			}
		}
		t = temp[row][col + 1];
		temp[row][col + 1] = temp[row][col];
		temp[row][col] = t;
		cout << "[";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 2 && j == 2)
					cout << temp[i][j];
				else
					cout << temp[i][j] << " ";
			}
		}
		cout << "]\n";
	}
}
int main() {
	int n = 0;
	cin >> n;
	int board[3][3];
	int t = 0;
	for (int i = 0; i < n; i++) {
		cin.ignore(100000, '[');
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> board[j][k];
			}
		}
		cin.ignore(1000000, '\n');
		succesor(board);
	}
	return 0;
}