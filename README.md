## **📊 Analisis Perbandingan Efisiensi Algoritma Iteratif dan Rekursif pada Perhitungan Total Saldo Transaksi Nasabah SeaBank**

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

**📄 Referensi**

Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). *Introduction to Algorithms* (3rd ed.). MIT Press.

Sedgewick, R., & Wayne, K. (2011). *Algorithms* (4th ed.). Addison-Wesley Professional.

Nurhayati, O. D. (2010). *Kompleksitas Algoritma dan Pemrograman*. Universitas Diponegoro.

Munir, R. (2009). *Kompleksitas dari Algoritma-Algoritma untuk Menghitung Bilangan Fibonacci*. Institut Teknologi Bandung.

Ramadhani, F., & Wijaya, A. (2019). *Analisis Perbandingan Kinerja Metode Rekursif dan Metode Iteratif pada Algoritma Binary Search*. Seminar Nasional APTIKOM.

GeeksforGeeks. (2025). *Measure Execution Time of a Function in C++.*

Bank Indonesia. (2021). *Blue Print Sistem Pembayaran Indonesia 2025. Bank Indonesia.*

Otoritas Jasa Keuangan. (2018). Peraturan OJK No. 12/POJK.03/2018 *tentang Penyelenggaraan Layanan Perbankan Digital oleh Bank Umum. OJK.*

**📄 Lisensi**
Proyek ini dibuat untuk keperluan akademik Tugas Besar AKA Telkom University Surabaya dan **tidak untuk tujuan komersial**.
