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
}