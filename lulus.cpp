#include <iostream>
using namespace std;
int main()
{
    int nilai;

    cout<<"Silahkan Maasukkan nilai yang Anda peroleh: ";
    cin>>nilai;
    if (nilai<75){
        cout<<"\nAnda Belum Lulus\n";
    } else {
        cout<<"\nSelamat Anda Lulus\n";
    }
    return 0;
}
