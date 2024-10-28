#include <iostream>
using namespace std;

int main() {
	string kata1;
	cout << "Check Kata" << endl;
	cout << "Input Kata: ";
	cin >> kata1;

	string kata2 = kata1;
	reverse(begin(kata1), end(kata1));
	if (kata1 == kata2) {
		cout << "Hasil: True";
	} else {
		cout << "Hasil: False";
	}
}