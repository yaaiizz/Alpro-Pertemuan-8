#include<iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    char jk;
};

int main()
{
    Mahasiswa mhs1;

    cout << "Masukkan Nama Lengkap: ";
    getline(cin, mhs1.nama);

    cout << "Masukkan Umur: ";
    cin >> mhs1.umur;

    cout << "Masukkan Jenis Kelamin(p/l): ";
    cin >> mhs1.jk;

    cout << "\nInformasi." << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;

    if(mhs1.jk=='p'||mhs1.jk=='P'){
        cout << "Jenis Kelamin: Perempuan" << endl;
    }else if(mhs1.jk=='l'||mhs1.jk=='L'){
    cout << "Jenis Kelamin: Laki-Laki" << endl;
    }

    return 0;
}
