#ifndef CATALOG_H_INCLUDED
#define CATALOG_H_INCLUDED
#include <iostream>

using namespace std;

// Soal no 4
const int nMax = 50;

struct Catalog {
    int data[nMax];
    int max; // Maks data
    int num; // Index ke sekian
};

// Soal no 5
void add_data_1301204289(Catalog &C, int x);
void view_data_1301204289 (Catalog C);
int search_data_1301204289(Catalog C, int x);

void reversed_view_1301204289(Catalog C);
void delete_data_1301204289(Catalog &C);


#endif // CATALOG_H_INCLUDED
