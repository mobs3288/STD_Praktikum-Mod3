#include "catalog.h"

int main()
{
    //Inisiasi Varabel
    Catalog storage;
    storage.max = 8;
    storage.num = -1;

    //Menambahkan data & Output
    cout << "Fungsi Add_Data" << endl;
    add_data_1301204289(storage, 6);
    view_data_1301204289(storage);

    add_data_1301204289(storage, 4);
    view_data_1301204289(storage);

    add_data_1301204289(storage, 8);
    view_data_1301204289(storage);

    add_data_1301204289(storage, 2);
    view_data_1301204289(storage);

    cout << endl;

    cout << "Fungsi Cari Data" << endl;;
    int i;
    i = search_data_1301204289(storage, 8);
    cout << i <<endl;

    i = search_data_1301204289(storage, 5);
    cout << i << endl << endl;

    cout << "Fungsi Membalikkan data" << endl;
    reversed_view_1301204289(storage);
    add_data_1301204289(storage, 5);
    reversed_view_1301204289(storage);

    cout << endl;

    cout << "Fungsi Hapus Data" << endl;
    view_data_1301204289(storage);
    delete_data_1301204289(storage);
    view_data_1301204289(storage);

    return 0;
}
