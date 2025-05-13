#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
        string setget(string jdl){
            //Nilai parameter 'judul' untuk member cariabel 'judul'
            this -> judul = jdl;
            //return variabel judul.
            return this -> judul;
        }
};

int main(){
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}