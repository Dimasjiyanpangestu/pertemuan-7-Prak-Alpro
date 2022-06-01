#include <iostream>

using namespace std;

class cari {
   public:
    void input ();
    void proses ();
    void output();

  private:
    int id [20];
    string nama [20];
    string jabatan [20];
    int notelp [20];
    int jumlah, i;
};

void cari::input(){
cout<<"====DATA KARYAWAN PT.QUAIRO======"<<endl;
cout<<"Masukkan jumlah karyawan : "<<jumlah<<endl;
for(i=0; i <= jumlah; i++){
cout<<"Silahkan masukkan id karyawan : "<<id<<endl;
cout<<"Silahkan masukkan nama karyawan : "<<nama<<endl;
cout<<"Silahkan masukkan jabatan karyawan : "<<jabatan<<endl;
cout<<"Silahkan masukkan nomor telepon : "<<notelp<<endl;
  }
}
void cari::proses(){
  
}


int main(){
  cari input;
  return;
}