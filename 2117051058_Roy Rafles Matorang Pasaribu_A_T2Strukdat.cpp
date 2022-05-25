#include <iostream>
#include "mahasiswa.h"
using namespace std;

int main(){
    maha mahasiswa;
    mahasiswa.set_nama("Roy Rafles Matorang Pasaribu");
    mahasiswa.set_npm(2117051058);
    mahasiswa.set_nilaiUts(80.0);
    mahasiswa.set_nilaiUas(90.0);
    
    cout<<"Nama\t\t : " << mahasiswa.get_nama()<<endl;
    cout<<"NPM\t\t : " << mahasiswa.get_npm()<<endl;
    cout<<"Nilai Akhir\t : " << mahasiswa.nilaiAkhir()<<endl;
    cout<<"Huruf Mutu\t : " << mahasiswa.hurufMutu(mahasiswa.nilaiAkhir())<<endl;

    return 0;
}
