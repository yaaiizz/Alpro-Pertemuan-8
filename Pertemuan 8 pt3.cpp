#include<iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int umur;
};

const int JUMLAH_MAHASISWA = 3;
void isiDataMahasiswa(Mahasiswa arr[],int size){
    for(int i = 0;i < size; ++i){
        cout << "Masukkan nama mahasiswa ke- "<< i+1 << ": ";
        cin >> arr[i].nama;
        cout << "Masukkan umur mahasiswa ke- " << i+1 << ": ";
        cin >> arr[i].umur;
    }
}

void tampilkanDataMahasiswa(Mahasiswa arr[], int size){
    cout << "\nData Mahasiswa: \n";
    for(int i =0;i < size; ++i){
        cout << "Nama: " << arr[i].nama << "\nUmur: " << arr[i].umur << endl << endl;
    }
}

int main(){
    Mahasiswa daftarMahasiswa[JUMLAH_MAHASISWA];

    isiDataMahasiswa(daftarMahasiswa, JUMLAH_MAHASISWA);

    tampilkanDataMahasiswa(daftarMahasiswa, JUMLAH_MAHASISWA);

    return 0;
}
