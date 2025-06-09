#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    //operasi file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membaca
    outfile.open("contohfile.txt");

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
    infile.open("contohfile.txt");
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
}