#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namaFile;

    cout << "Masukkan nama file: ";
    cin >> namaFile;  

    //operasi file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membaca
    outfile.open(namaFile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

//unlimited loop untuk menulis
while (true) {
    cout << "- ";
    //mendapatkan setiap karakter dalam satu baris
    getline(cin, baris);
    //loop akan berhenti jika anda memasukkan karakter q
    if (baris == "q") break;
    //menulis dan memasukkan nilai dari 'baris' ke dalam file
    outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //operasi file dalam mode membaca
    ifstream infile;
    infile.open(namaFile + ".txt");
    //menunjuk ke sebuah file untuk membuka
    cout << endl << ">= Membuka dan membaca file " << endl;
    //Jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulanga setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan disini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}