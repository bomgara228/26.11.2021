#include <iostream>
using namespace std;
int main() {
	int const  n = 3;
	char field[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t = rand() % 2;
			if (t == 0) field[i][j] = 'x';
			else field[i][j] = 'o';
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "|---|---|---|" << endl;
		for (int j = 0; j < n; j++) {
			cout << "| " << field[i][j] << ' ';
		}

		cout << "|" << endl;
	}
	cout << "|---|---|---|";
	//krestiki
	if (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') {
		cout << "x wins" << endl;
	}
	if (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') {
		cout << "x wins" << endl;
	}
	if (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x') {
		cout << "x wins" << endl;
	}
	// nuli
	if (field[0][0] == 'o' && field[0][1] == 'o' && field[0][2] == 'o') {
		cout << "o wins" << endl;
	}
	if (field[1][0] == 'o' && field[1][1] == 'o' && field[1][2] == 'o') {
		cout << "o wins" << endl;
	}
	if (field[2][0] == 'o' && field[2][1] == 'o' && field[2][2] == 'o') {
		cout << "o wins" << endl;
	}
	//stolbi nuli
	if (field[0][2] == 'o' && field[1][2] == 'o' && field[2][2] == 'o') {
		cout << "o wins" << endl;
	}
	if (field[0][1] == 'o' && field[1][1] == 'o' && field[2][1] == 'o') {
		cout << "o wins" << endl;
	}
	if (field[0][0] == 'o' && field[0][1] == 'o' && field[0][2] == 'o') {
		cout << "o wins" << endl;
	}
	//stolbi krestiki
	if (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x') {
		cout << "x wins" << endl;
	}
	if (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') {
		cout << "x wins" << endl;
	}
	if (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') {
		cout << "x wins" << endl;
	}
	// poperek
	if (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') {
		cout << "x wins" << endl;
	}
	if (field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x') {
		cout << "x wins" << endl;
	}
}