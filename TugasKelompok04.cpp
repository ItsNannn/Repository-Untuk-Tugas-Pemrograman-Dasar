/*
* Anggota Kelompok 1:
* 1. Achmad Ferdinand (24104410058)
* 2. Shella Alrantisi (24104410060)
* 3. Sahila Fauza (24104410056)
* 4. Salis muna (24104410090)
* 5. Anisaturrohmah (24104410044)
*/

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