#include <iostream>
using namespace std;

int main() {
    int n;
    long long first = 0, second = 1, next, sum = 0;

    // Input jumlah suku Fibonacci
    cout << "Masukkan jumlah suku Fibonacci (n >= 2): ";
    cin >> n;

    // Seleksi untuk memastikan inputnya valid
    if (n < 2) {
        cout << "Jumlah suku minimal 2!" << endl;
        return 1;
    }

    // Cetak dua suku pertama
    cout << "Deret Fibonacci: " << first << " " << second;
    sum = first + second;

    // Iterasi untuk menghasilkan dan menjumlahkan deret Fibonacci
    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << " " << next;
        sum += next;
        first = second;
        second = next;
    }

    cout << "\nJumlah deret Fibonacci: " << sum << endl;

    return 0;
}
