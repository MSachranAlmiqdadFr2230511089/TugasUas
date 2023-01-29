#include<iostream>
using namespace std;

int main(){

    int pilihan, jml_makanan, harga, total, bayar, diskon;
    string item;

    cout << "                       KFC                  " << endl;
    cout << "               Kentucky Fried Chicken       " << endl;
   cout  << "============================================" << endl;
    cout << "============================================" << endl;
    cout << "                 DAFTAR MENU                " << endl << endl;
    cout << "1. Deluxe Burger      :  Rp 9.000           " << endl;
    cout << "2. Hot Crispy Chicken :  Rp 18.000          " << endl;
    cout << "3. Chicken Strips BBQ :  Rp 19.000          " << endl;
    cout << "4. Mini Chizza        :  Rp 20.000          " << endl;
    cout << "5. KFC Winger Spicy   :  Rp 24.000          " << endl;
    cout << "6. Selesai " << endl;
    cout << "============================================" << endl << endl;

    do{
        cout << "Masukan no pilihan : ";
        cin >> pilihan;

        switch(pilihan){
        case 1:
            item = "Deluxe Burger";
            harga = 9.000;
            cout << "jumlah makanan : ";
            cin >> jml_makanan;
            total += harga * jml_makanan;
            cout << jml_makanan << " " << item << " = Rp. " << harga * jml_makanan << endl << endl;
            break;
        case 2:
            item = "Hot Crispy Chicken";
            harga = 18.000;
            cout << "jumlah makanan : ";
            cin >> jml_makanan;
            total += harga * jml_makanan;
            cout << jml_makanan << " " << item << " = Rp. " << harga * jml_makanan << endl << endl;
            break;
        case 3:
            item = "Chicken Strips BBQ";
            harga = 19.000;
            cout << "jumlah makanan : ";
            cin >> jml_makanan;
            total += harga * jml_makanan;
            cout << jml_makanan << " " << item << " = Rp. " << harga * jml_makanan << endl << endl;
            break;
        case 4:
            item = "Mini Chizza";
            harga = 20.000;
            cout << "jumlah makanan : ";
            cin >> jml_makanan;
            total += harga * jml_makanan;
            cout << jml_makanan << " " << item << " = Rp. " << harga * jml_makanan << endl << endl;
            break;
        case 5:
            item = "KFC Winger Spicy";
            harga = 24.000;
            cout << "jumlah makanan : ";
            cin >> jml_makanan;
            total += harga * jml_makanan;
            cout << jml_makanan << " " << item << " = Rp. " << harga * jml_makanan << endl << endl;
            break;
        case 6:
            cout << endl << endl;
            cout << "Jumlah Bayar : " << total << endl;

            if(total >= 100000){
                diskon = 0.06 * total;
            }else if(total >= 50000){
                diskon = 0.04 * total;
            }else if(total >= 25000){
                diskon = 0.02 * total;
            }else{
                diskon = 0;
            }
            cout << "Diskon : " << diskon << endl;
            cout << "Total Bayar : " << total - diskon << endl;
            cout << "Bayar : ";
            cin >> bayar;
            cout << "Kembali : " << (bayar - (total-diskon)) << endl << endl;
            break;
        default :
            cout << "Pilihan anda salah!" << endl << endl;
            break;
        }
    } while(pilihan != 10);
    cout << "Terima Kasih " << endl;
}
