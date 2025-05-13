#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        //constructor berparameter
        mahasiswa(int nim, string nama);
};

//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Nama  :" << nama << endl;
}

int main(){
    //Memanggil Constructor Dengan Parameter
    mahasiswa mhs(12345, "Pascal");
    return 0;
}