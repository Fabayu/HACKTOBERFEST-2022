#include<iostream>

using namespace std;

int main()
{
    const double milimeter = 384.9;
    int feet;
    double hasil;

    cout<<"Konversi Kaki (ft) ke Milimeter (mm)"<<endl;
    cout<<"Masukan satuan kaki (ft) : ";
    cin>>feet;

    hasil = feet * milimeter;

    cout<<"Hasil = "<<hasil<<" mm"<<endl;

    return 0;
}
