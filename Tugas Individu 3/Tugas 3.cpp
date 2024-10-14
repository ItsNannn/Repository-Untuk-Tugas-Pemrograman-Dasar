#include <iostream>
using namespace std;

int main() {
    int data, input, jumlah_genap = 0, jumlah_ganjil = 0;
    cout << "Masukkan jumlah data: ";
    cin >> input;

    for (data = 0; data <= input; data++) {
        if (data % 2 == 0)
            jumlah_genap += data;
        else
            jumlah_ganjil += data;
    }
    cout << "Jumlah total bilangan ganjil: " << jumlah_ganjil << endl;
    cout << "Jumlah total bilangan genap: " << jumlah_genap << endl;
}