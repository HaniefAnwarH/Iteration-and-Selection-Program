#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah bilangan adalah prima atau tidak
bool isPrime(int num) {
    if (num <= 1) return false; // Seleksi: bilangan <= 1 bukan prima
    for (int i = 2; i * i <= num; i++) { // Iterasi untuk cek pembagi
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    // Meminta input range bilangan
    cout << "Masukkan rentang awal (bilangan positif): ";
    cin >> start;
    cout << "Masukkan rentang akhir (lebih besar dari awal): ";
    cin >> end;

    // Seleksi untuk validasi input
    if (start < 0 || end <= start) {
        cout << "Input tidak valid! Pastikan start >= 0 dan end > start." << endl;
        return 1;
    }

    // Iterasi untuk memeriksa bilangan prima dalam rentang
    cout << "Bilangan prima dalam rentang " << start << " hingga " << end << ": ";
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }

    // Seleksi untuk menangani kasus tidak ada bilangan prima
    if (!found) {
        cout << "Tidak ada bilangan prima dalam rentang tersebut.";
    }
    cout << endl;

    return 0;
}
