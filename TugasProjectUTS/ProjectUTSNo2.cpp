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
	double motor, mobil, jamMasuk, jamKeluar;

	cout << "Masukkan jumlah motor: ";
	cin >> motor;
	cout << "Masukkan jumlah mobil: ";
	cin >> mobil;
	cout << "Input jam masuk (format 24 jam): ";
	cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam): ";
	cin >> jamKeluar;
	cout << endl;

	int totalJam = 0;
	if (jamKeluar < jamMasuk) {
		totalJam = (24 - jamMasuk) + jamKeluar;
	} else {
		totalJam = jamKeluar - jamMasuk;
	}
	int biayaParkirMotor_perJam = 2000;
	int biayaParkirMobil_perJam = 5000;
	int totalBiayaParkir = (motor * totalJam * biayaParkirMotor_perJam) + (mobil * totalJam * biayaParkirMobil_perJam);
	cout << "Total biaya parkir: " << totalBiayaParkir << " (" << totalJam << " jam)";
	return 0;
}