#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class BangunDatar;

class PersegiPanjang{
    public:
        void inputData(BangunDatar &bD);
        void outputData(BangunDatar &bD);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        }
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        }
    public:
    //untuk mengakses panjang dan lebar
    friend void PersegiPanjang::inputData(BangunDatar &bD);
    //untuk mengakses fungsi
    friend void PersegiPanjang::outputData(BangunDatar &bD);
};

void PersegiPanjang::inputData(BangunDatar &bD){
    cout << "Masukkan Panjang : ";
    cin >> bD.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bD.lebar;
}

void PersegiPanjang::outputData(BangunDatar &bD){
    cout << "Luas : " << bD.hitungLuas() << endl;
    cout << "Keliling : " << bD.hitungKeliling() << endl;
};

int main(){
    PersegiPanjang pP;
    BangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);
}