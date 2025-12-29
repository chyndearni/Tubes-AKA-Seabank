Analisis Kompleksitas Algoritma Iteratif dan Rekursif pada Perhitungan Total Saldo Transaksi Nasabah SeaBank

Tugas Besar Mata Kuliah Analisis Kompleksitas Algoritma (AKA)
Program Studi Informatika
Semester Ganjil 2025/2026

🎯 Tujuan

Laporan ini bertujuan untuk:

Membandingkan efisiensi algoritma iteratif dan algoritma rekursif

Menghitung total saldo transaksi pada akun nasabah SeaBank

Menganalisis:

Kompleksitas waktu (Big-O)

Running time aktual pada berbagai ukuran input (N)

Performa kedua algoritma melalui grafik

📌 Studi Kasus

SeaBank menampung riwayat transaksi nasabah berupa:

setor tunai

transfer masuk

transfer keluar

pembayaran

Setiap transaksi direpresentasikan sebagai nilai integer:

nilai positif → saldo bertambah

nilai negatif → saldo berkurang

Tujuan sistem:

Menghitung total saldo akhir dari N transaksi.

Dua pendekatan digunakan:

1️⃣ Iteratif — menggunakan perulangan for
2️⃣ Rekursif — memanggil fungsi berulang hingga transaksi terakhir

⚙️ Deskripsi Algoritma
1️⃣ Algoritma Iteratif

Logika:

mulai dari saldo = 0

tambahkan nilai transaksi satu per satu

Kompleksitas:

Waktu: O(N)

Memori: O(1)
(tidak memakai stack tambahan)

2️⃣ Algoritma Rekursif

Logika:

total transaksi ke-N = transaksi[N-1] + total transaksi sebelumnya

Kompleksitas:

Waktu: O(N)

Memori: O(N)
(setiap pemanggilan fungsi disimpan di stack)

⚠️ Risiko:

Bila N terlalu besar, dapat terjadi stack overflow.

💻 Implementasi Aplikasi

Bahasa: C++ (C++17)

Fitur:

Input jumlah transaksi (N)

Generate transaksi otomatis

Menghitung saldo secara iteratif & rekursif

Mengukur running time (microseconds)

Data pengujian dicatat dalam tabel

Hasil divisualisasikan dalam grafik

🔎 Pengujian & Ukuran Input

Variasi N yang digunakan:

1000
5000
10000
25000
50000
100000


Pemilihan ini bertujuan agar:

✔️ cukup besar untuk melihat tren
✔️ tidak memicu error stack (untuk iteratif aman)
✔️ realistis dengan studi kasus bank digital

📊 Tabel Hasil Pengujian (Contoh)
N	Waktu Iteratif (μs)	Waktu Rekursif (μs)
1.000	45	72
5.000	80	140
10.000	120	260
25.000	290	510
50.000	560	980
100.000	1120	1985

(nilai dapat disesuaikan dengan hasil real di komputer kamu)

📈 Grafik Perbandingan

Grafik menampilkan hubungan:

X-axis → jumlah transaksi (N)
Y-axis → waktu eksekusi (microseconds)

Hasil utama:

garis iteratif naik lebih landai

garis rekursif naik lebih curam

kedua grafik tetap linear (O(N))

🔍 Analisis
1️⃣ Secara Teoretis
Algoritma	Kompleksitas Waktu	Kompleksitas Memori
Iteratif	O(N)	O(1)
Rekursif	O(N)	O(N)
2️⃣ Secara Praktis

✔️ Iteratif lebih cepat
✔️ Rekursif mengalami overhead stack
⚠️ Rekursif tidak aman pada input besar

✅ Kesimpulan

1️⃣ Kedua algoritma memiliki kompleksitas waktu O(N)
2️⃣ Iteratif lebih efisien karena:

lebih sedikit overhead

konsumsi memori lebih kecil

stabil untuk input besar (hingga 100.000+)

3️⃣ Rekursif tidak disarankan untuk aplikasi finansial
karena berpotensi memicu stack overflow.

👥 Anggota Kelompok

Silakan isi sesuai kelompokmu:

1. Yohanna Purnomo (103072400127)
2. Yohana Sinaga (103072400009)
3. Laura Chyndearni Saragih (103072400049)

📚 Referensi

Cormen, T. H. — Introduction to Algorithms

Sedgewick, R. — Algorithms in C++

Dokumentasi C++ Std Library

Artikel analisis iteratif vs rekursif (GeeksForGeeks)
