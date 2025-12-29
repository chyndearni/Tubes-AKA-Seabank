#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;

//Iteratif

long long totalSaldoIteratif(const vector<int>& transaksi) {
    long long total = 0;
    for (int x : transaksi) {
        total += x;
    }
    return total;
}

//Rekursif 
long long totalSaldoRekursif(const vector<int>& transaksi, int left, int right) {
    if (left > right)
        return 0;
    if (left == right)
        return transaksi[left];

    int mid = (left + right) / 2;
    return totalSaldoRekursif(transaksi, left, mid)
         + totalSaldoRekursif(transaksi, mid + 1, right);
}

int main() {
    int n;

    cout << "Masukkan jumlah transaksi: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah transaksi harus lebih dari 0.\n";
        return 0;
    }

    vector<int> transaksi(n);

    // Generate data otomatis
    srand(time(0));
    for (int i = 0; i < n; i++) {
        transaksi[i] = rand() % 100000 + 1;
    }

//Iteratif
    auto startIter = chrono::high_resolution_clock::now();
    long long totalIter = totalSaldoIteratif(transaksi);
    auto endIter = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> waktuIter = endIter - startIter;

//Rekursif
    auto startRek = chrono::high_resolution_clock::now();
    long long totalRek = totalSaldoRekursif(transaksi, 0, n - 1);
    auto endRek = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> waktuRek = endRek - startRek;

    // Output
    cout << "\n=== HASIL PERHITUNGAN ===\n";
    cout << "Jumlah Transaksi      : " << n << endl;

    cout << "\nTotal Saldo Iteratif  : " << totalIter << endl;
    cout << "Waktu Iteratif        : " << waktuIter.count() << " mikrodetik\n";

    cout << "\nTotal Saldo Rekursif  : " << totalRek << endl;
    cout << "Waktu Rekursif        : " << waktuRek.count() << " mikrodetik\n";

    return 0;
}
