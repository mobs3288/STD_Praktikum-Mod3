#include "catalog.h"

// Fungsi untuk menambah data soal nomor 8
void add_data_1301204289(Catalog &C, int x) {
    if (C.num < C.max) { // Tidak dapat mengisi apabila index total sudah berjumlah 8 dengan dimulai dari 0
        C.num = C.num + 1;
        C.data[C.num] = x;
    }
}

// Fungsi untuk melihat/menampilkan data soal nomor 8
void view_data_1301204289(Catalog C) {
    for (int i = 0; i <= C.num; i++) {
        cout << C.data[i] << " ";
    }
    cout << endl;
}

// Fungsi Untuk mencari data soal nomor 8
int search_data_1301204289(Catalog C, int x) {
    for (int i = 0; i < C.max; i++) {
        if (C.data[i] == x) {
            return i;
        }
    }
    return -1;
}

// Fungsi untuk membalikkan Data yg ada soal mandiri nomor 1
void reversed_view_1301204289(Catalog C) {
    for (int i = C.num; i >= 0; i--) {
        cout << C.data[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk menghapus data soal mandiri no 1
void delete_data_1301204289(Catalog &C) {
    C.num = C.num -1;
}
