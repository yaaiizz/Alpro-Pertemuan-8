#include<iostream>
using namespace std;

struct Warnet{

    string name;
    int hours;
    int price;
};

void displayData(Warnet);
int main(){

    Warnet w;
    int const ONEHOURSS = 5000;

    cout << "Masukkan Nama Lengap: ";
    getline(cin, w.name);

    cout << "Masukkan Jam: ";
    cin >> w.hours;

    w.price=w.hours*ONEHOURSS;
    displayData(w);

    return 0;
}

void displayData(Warnet w){

    cout << "\nInformation" << endl;

    cout << "Nama: " << w.name << endl;

    cout << "Jam: " << w.hours << endl;

    cout << "Harga: " << w.price;
}
