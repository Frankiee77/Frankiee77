#include<iostream>
using namespace std;

int main(){
    char ulang;
    cout << "PROGRAM DATA MAHASISWA\n";
    
    do{
    int pilih, nim;
    string nama, prodi, fakultas;
    

        cout << "Pilihan Menu\n";
        cout << "1. Input data mahasiswa\n";
        cout << "2. Lihat data mahasiswa\n";
        cout << "3. Ubah data mahasiswa\n\n";
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih){
        case 1:
            system("CLS");
            cout << "Nama\t :";
            getline(cin, nama);
            cout << nama;
            break;
        
        case 2:
            
            break;
        }

    cout << endl;
    cout << "Kembali ke menu awal? (y/n): ";
    cin >> ulang;
    system("CLS");

    }while (ulang == 'y' | ulang == 'Y');
     cout << endl;
     cout << "Program telah selesai!";
     cout << endl;

return 0;
    
    
}
