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
    string nama;
    int golongan;
    int jam;

    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan golongan anda: ";
    cin >> golongan;
    cout << "Masukkan jam kerja anda per minggu: ";
    cin >> jam;
    cout << endl;

    int gajiPerJam;
    switch (golongan) {
    case 1:
        gajiPerJam = 25000;
        break;
    case 2:
        gajiPerJam = 35000;
        break;
    case 3:
        gajiPerJam = 50000;
        break;
    }
    int totalGaji = 0;
    if (jam > 48) {
        totalGaji = (gajiPerJam * jam) + (jam - 48) * 10000;
    } else {
        totalGaji = gajiPerJam * jam;
    }
    cout << "Total gaji " << nama << " per minggu: " << totalGaji;
    return 0;
}
