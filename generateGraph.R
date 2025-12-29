# Grafik Perbandingan Waktu Algoritma
# Iteratif vs Rekursif (dalam mikrodetik)

# Load libraries
library(ggplot2)
library(dplyr)
library(tidyr)
library(scales)

# Data dari tabel laporan (mikrodetik)
data <- data.frame(
  n = c(1000, 5000, 10000, 25000, 50000, 100000),
  Iteratif_us = c(5.5, 26.7, 53.1, 133, 263.4, 606),
  Rekursif_us = c(9.1, 44.6, 85.3, 214, 418.5, 844.4)
)

# Ubah ke format long
plot_data <- data %>%
  pivot_longer(
    cols = c(Iteratif_us, Rekursif_us),
    names_to = "Algoritma",
    values_to = "Waktu_us"
  ) %>%
  mutate(
    Algoritma = factor(
      Algoritma,
      levels = c("Iteratif_us", "Rekursif_us"),
      labels = c("Iteratif", "Rekursif")
    )
  )

# Plot grafik
ggplot(plot_data, aes(x = n, y = Waktu_us, color = Algoritma, group = Algoritma)) +
  geom_line(size = 1) +
  geom_point(size = 2) +
  scale_x_log10(
    breaks = data$n,
    labels = comma
  ) +
  labs(
    title = "Perbandingan Waktu Eksekusi Algoritma",
    subtitle = "Algoritma Iteratif vs Rekursif pada Perhitungan Total Saldo Transaksi SeaBank",
    x = "Jumlah Transaksi (N)",
    y = "Waktu Eksekusi (mikrodetik)",
    color = "Algoritma"
  ) +
  theme_minimal(base_size = 12) +
  theme(
    plot.title = element_text(hjust = 0.5, face = "bold"),
    plot.subtitle = element_text(hjust = 0.5),
    legend.position = "top"
  )
