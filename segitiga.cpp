#include <iostream>
using namespace std;
int main() 
{
    int s1,s2,s3,bentuk;
    cout<<"Masukan Sisi 1 : ";
    cin>>s1;
    cout<<"Masukan Sisi 2 : ";
    cin>>s2;
    cout<<"Masukan Sisi 3 : ";
    cin>>s3;


    cout<<"Pilihlah Nomor Yang Menurut Anda Tepat"<<endl;

    
    cout<<"1. Segitiga Sama Sisi"<<endl;
    cout<<"2. Segitiga Sama Kaki"<<endl;
    cout<<"3. Segitiga Sembarang"<<endl;
    cout<<"Bentuk Segitiga Ini adalah : ";
    cin>>bentuk;

    switch(bentuk)
    {

    case 1 :
            if(s1==s2 && s1==s3)
    {
        cout<<"Benar, Ini Segitiga sama sisi"<<endl;
    }
    else if(s1==s2 || s1==s3)
    {
        if(s1!=s2 || s1!=s3)
        {
            cout<<"Maaf Anda Salah"<<endl;
        }
    }
    else
    cout<<"Maaf Anda Salah"<<endl;

            break;
    case 2 :
                 if(s1==s2 && s1==s3)
    {
        cout<<"Maaf Anda Salah"<<endl;
    }
    else if(s1==s2 || s1==s3)
    {
        if(s1!=s2 || s1!=s3)
        {
            cout<<"Good Job... Ini adalah Segitiga sama kaki"<<endl;
        }
    }
    else
    cout<<"Maaf Anda Salah"<<endl;

            break;
     case 3 :
    if(s1==s2 && s1==s3)
    {
        cout<<"Maaf Anda Salah"<<endl;
    }
    else if(s1==s2 || s1==s3)
    {
        if(s1!=s2 || s1!=s3)
        {
            cout<<"Maaf Anda Salah"<<endl;
        }
    }
    else
    cout<<"Yups... Ini adalah Segitiga sembarang"<<endl;

            break;



    default :
        cout<<"Anda salah input";
    };

return (0);
}
