#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat Belajar Di Prodi TI UMY" << endl;
        throw 0.5; "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(int a) {
        //blok ini akan dieksekusi 
        cout << "Pengecualian akan dieksekusi" << endl;
    }
}