#include<iostream>
using namespace std;

class barang{
    private:
    string namaBarang;
    int kodeBarang;
    public:
    barang(string nBarang, int nKode);
    void cetak();
};

barang:: barang(string nBarang, int nKode){
    namaBarang = nBarang;
    kodeBarang = nKode;
}

void barang::cetak(){
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

int main(){
    barang brg1("Laptop", 101);
    barang brg2("Komputer", 111);
    brg1.cetak();
    brg2.cetak();
    return 0;
}