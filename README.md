**📊 Analisis Perbandingan Efisiensi Algoritma Iteratif dan Rekursif pada Perhitungan Total Saldo Transaksi Nasabah SeaBank**

Tugas Besar Mata Kuliah Analisis Kompleksitas Algoritma (AKA)
Program Studi Informatika
Semester Ganjil 2025/2026

**🎯 Tujuan**

Membandingkan efisiensi algoritma iteratif dan rekursif dalam menghitung total saldo transaksi nasabah SeaBank. Analisis meliputi perhitungan kompleksitas waktu (Big-O), pengukuran running time pada berbagai ukuran input, serta visualisasi perbandingan performa melalui grafik.

**📌 Studi Kasus**

Dalam sistem perbankan digital SeaBank, setiap transaksi nasabah dicatat berupa setor tunai, transfer masuk, transfer keluar, dan pembayaran. Nilai transaksi positif menandakan saldo bertambah, sedangkan nilai negatif menandakan saldo berkurang. Tujuan utama sistem adalah menghitung total saldo akhir dari N transaksi. Proses perhitungan dilakukan dengan dua pendekatan: iteratif dengan perulangan, dan rekursif dengan pemanggilan fungsi berulang.

**⚙️ Implementasi**

Aplikasi dikembangkan menggunakan C++. Program menerima input jumlah transaksi, menghasilkan data transaksi secara acak, kemudian menghitung total saldo menggunakan kedua algoritma, sekaligus mengukur waktu eksekusi masing-masing metode.

**📂 Struktur Proyek**
seabank-total-saldo/

├── src/

│   └── seabank.cpp

├── hasil.csv

├── grafik.R

├── grafik_perbandingan.png

└── README.md

**📈 Visualisasi**

Grafik dibuat menggunakan R / RStudio untuk menampilkan hubungan antara jumlah transaksi (N) dan waktu eksekusi, sehingga memudahkan perbandingan performa algoritma iteratif dan rekursif.

**📚 Analisis Utama**

Secara teoretis, kedua algoritma memiliki kompleksitas waktu O(N). Namun hasil pengujian menunjukkan bahwa secara praktik algoritma iteratif lebih efisien, lebih stabil pada ukuran data besar, dan tidak menimbulkan risiko stack overflow, sedangkan algoritma rekursif memiliki overhead dari pemanggilan fungsi.

**👥 Anggota Kelompok**

-YOHANNA PURNOMO
-YOHANA SINAGA
-LAURA CHYNDEARNI SARAGIH
