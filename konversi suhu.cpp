#include <iostream>
using namespace std; 

int main() {

    cout << "Konversi Suhu\n";
    int pilihan, ulang;
    float c1, f1, c2, f2;
    
    menu:
    cout << "1. celcius ke fahrenheit\n";
    cout << "2. fahrenheit ke celcius\n";
    cout << "3. keluar\n";
    cout << "masukkan pilihan Anda : ";
    cin >> pilihan; 
    
    if (pilihan == 1) {
        cout << "masukkan suhu dalam satuan celcius : ";
        cin >> c1;
        f1 = (c1*9)/5+32;
        cout << "suhu dalam satuan fahrenheit adalah : " << f1 << "°F\n\n";
        cout << "apakah anda ingin konversi lagi? [ketika 1 jika iya/ketik sembarang jika tidak]\n";
        cin >> ulang;
        if (ulang == 1)
        goto menu;
        else goto end;
    } else if (pilihan == 2) {
        cout << "masukkan suhu dalam satuan fahrenheit : ";
        cin >> f2;
        c2 = (f2-32)*5/9;
        cout << "suhu dalam satuan celcius adalah : " << c2 << "°C\n\n";  
        cout << "Apakah anda ingin konversi lagi? [ketika 1 jika iya/ketik sembarang jika tidak]\n";
        cin >> ulang;
        if (ulang == 1)
        goto menu;
        else goto end;
    } else if (pilihan == 3) {
        end:
        cout << "Terima kasih sudah menggunakan program ini.";
    } else {
        cout << "Maaf, pilihan tidak tersedia.\n\n";
        goto menu;
    }
    
    return 0;
}