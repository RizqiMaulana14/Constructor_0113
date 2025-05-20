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
    barang brg("Laptop", 101);
    brg.cetak();
    return 0;
}