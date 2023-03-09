#include <iostream>
#include <cstdlib>
using namespace std;
struct trx{
int menu1;
}trx[100];
int main()
{
    int menuu;
    int menu1, yn, y, n, total, kembali;

    beranda:
    cout << "==========================================" << endl;
    cout << "SMKN 1 SAYUNG" << endl;
    cout << "TERESA" << endl;
    cout << "KEBERSHIAN SEBAGIAN DARI IMAN" << endl;
    cout << "==========================================" << endl;
    cout << "1. Info daftar obat yang tersedia (gratis)" << endl;
    cout << "2. Layanan obat dengan resep" << endl;
    cout << "==========================================" << endl;
    cout << "Pilih (1 atau 2) ? ";
    cin >> menuu;

    system("cls");
    if(menuu == 1){
    cout << "------------------------------------------" << endl;
    cout << "Berikut daftar obat yang tersedia (gratis)" << endl;
    cout << "------------------------------------------" << endl;
    cout << "> Pharacetamol "<< endl;
    cout << "> Cepalosporin" << endl;
    cout << "> Aminoglikosida" << endl;
    cout << "__" << endl;

        cout << "Kembali ke beranda? ketik 1" <<endl;
        cin >> yn;
         if (yn == 1){
                system("pause");
                system("cls");
                goto beranda;
    }else{
    exit(0);
    }
    }
    else if(menuu == 2);{
    cout << "==========================================" << endl;
    cout << "DAFTAR HARGA OBAT" << endl;
    cout << "==========================================" << endl;
    cout << "1. Cefadroxil   --- Rp. 15.000,-" << endl;
    cout << "2. Azythromicyn --- Rp. 18.000,-" << endl;
    cout << "3. Cefixime     --- Rp. 38.000,-" << endl;
    cout << "==========================================" << endl;
    cout << "Pilih pesanan Obat ? ";
    cin >> menu1;
    cout << "Anda memiliki kartu bpjs?dapatkan diskon 10%(1=ada/2=tidak) ";
    cin >> yn;
   if (yn==1){
            cout<<"anda mendapatkan diskon 10%"<<endl;
            if(menu1==1){
                    total=15000-15000*10/100;
                cout<<"total harga :"<<total<<endl;
            }else if (menu1==2){
                total=18000-18000*10/100;
                cout<<"total harga :"<<total<<endl;
            }else if(menu1==3){
                total=38000-38000*10/100;
                cout<<"total harga :"<<total<<endl;
            }else{
                cout<<"!"<<endl;
            }
    }else if(yn==2){
        if (menu1==1){
            cout<<"total harga:15000"<<endl;
        }else if(menu1==2){
                cout<<"total harga :18000"<<endl;
            }else if(menu1==3){
                cout<<"total harga :38000"<<endl;
            }else{
                cout<<"!"<<endl;
            }
    }else{
        cout<<"!"<<endl;
    }
    }
    return 0;
}
