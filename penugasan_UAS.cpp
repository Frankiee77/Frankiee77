#include<iostream>
#include<string>
using namespace std;

void menu(){
    cout << "=============================" << endl;
    cout << "==\tPESANMUDAH.COM\t   ==" << endl;
    cout << "=============================" << endl << endl;
    cout << "Pilihan menu : " << endl;
    for (int i = 0; i < 3; i++){
        if (i==0){
            cout << "1. Pesawat" << endl;
        }
        else if (i==1){
            cout << "2. Kereta" << endl;
        }
        else if (i==2){
            cout << "3. Kapal laut" << endl << endl;
        }    
    }               
}

void pilih(){
    kembali:
    int pilihan;
    cout << "Pilihan Anda : ";
    cin >> pilihan;
    if (pilihan==1){
        short kelasA[3] = {1, 2, 3};
        string kelasB[3] = {". First class", ". Bussiness class", ". Economy class"};
        string dari, ke;
        short kelas;
        unsigned short tgl1, tgl3;
        string tgl2;
        short penumpang1, penumpang2, penumpang3;
        system ("cls");
        cout << "<><><><><><><><><><><><><>" << endl;
        cout << "<>  MENU TIKET PESAWAT  <>" << endl;
        cout << "<><><><><><><><><><><><><>" << endl << endl;
        cout << "Tujuan" << endl;
            cout << "Perjalanan dari : "; 
            cin >> dari;
            cout << "Menuju ke \t: ";
            cin >> ke; cout << "\n";
        cout << "Keberangkatan" << endl;
            cout << "Tentukan tanggalnya : ";
            cin >> tgl1; cout <<" "; cin >> tgl2; cout << " "; cin >> tgl3;
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << kelasA[i] << kelasB[i] << endl;
            }
            cout << "Pilih kelas mana yang akan dipilih : ";
            cin >> kelas; cout << endl;
        cout << "Penumpang" << endl;
            cout << "Dewasa \t: "; cin >> penumpang1;
            cout << "Anak \t: "; cin >> penumpang2;
            cout << "Balita \t: "; cin >> penumpang3;
    }
    else if(pilihan==2){
        short kelasA[2] = {1, 2};
        string kelasB[2] = {". Express class", ". Reguler class"};
        string dari, ke;
        short kelas;
        unsigned short tgl1, tgl3;
        string tgl2;
        short penumpang1, penumpang2, penumpang3;
        system ("cls");
        cout << "<><><><><><><><><><><><><><><>" << endl;
        cout << "<>  MENU TIKET KAPAL LAUT   <>" << endl;
        cout << "<><><><><><><><><><><><><><><>" << endl << endl;
        cout << "Tujuan" << endl;
            cout << "Perjalanan dari : "; 
            cin >> dari;
            cout << "Menuju ke \t: ";
            cin >> ke; cout << "\n";
        cout << "Keberangkatan" << endl;
            cout << "Tentukan tanggalnya : ";
            cin >> tgl1; cout <<" "; cin >> tgl2; cout << " "; cin >> tgl3;
            cout << endl;
            for (int i = 0; i < 2; i++)
            {
                cout << kelasA[i] << kelasB[i] << endl;
            }
            cout << "Pilih kelas mana yang akan dipilih : ";
            cin >> kelas; cout << endl;
        cout << "Penumpang" << endl;
            cout << "Dewasa \t: "; cin >> penumpang1;
            cout << "Anak \t: "; cin >> penumpang2;
            cout << "Balita \t: "; cin >> penumpang3;
    }
    else if(pilihan==3){
        short kelasA[3] = {1, 2, 3};
        string kelasB[3] = {". First class", ". Bussiness class", ". Economy class"};
        string dari, ke;
        short kelas;
        unsigned short tgl1, tgl3;
        string tgl2;
        short penumpang1, penumpang2, penumpang3;
        system ("cls");
        cout << "<><><><><><><><><><><><><><><><>" << endl;
        cout << "<>    MENU TIKET KERETA API   <>" << endl;
        cout << "<><><><><><><><><><><><><><><><>" << endl << endl;
        cout << "Tujuan" << endl;
            cout << "Perjalanan dari : "; 
            cin >> dari;
            cout << "Menuju ke \t: ";
            cin >> ke; cout << "\n";
        cout << "Keberangkatan" << endl;
            cout << "Tentukan tanggalnya : ";
            cin >> tgl1; cout <<" "; cin >> tgl2; cout << " "; cin >> tgl3;
            cout << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << kelasA[i] << kelasB[i] << endl;
            }
            cout << "Pilih kelas mana yang akan dipilih : ";
            cin >> kelas; cout << endl;
        cout << "Penumpang" << endl;
            cout << "Dewasa \t: "; cin >> penumpang1;
            cout << "Anak \t: "; cin >> penumpang2;
            cout << "Balita \t: "; cin >> penumpang3;
    }
    else{
        cout << "Mohon maaf, pilihan tidak tersedia." << endl << endl;
        goto kembali;
    }
}

void akhir(string terimakasih){
    cout << terimakasih;
}

struct datadiri{
    string nama;
    unsigned long NIK;
    int hp;
}data1;

int main(){
    char ulang;
        do{
        menu();
        pilih();
        cout << endl;
        cout << "Data diri" << endl;
            cout << "Nama \t : ";
            cin.ignore();
            getline (cin, data1.nama);
            cout << "NIK \t : ";
            cin >> data1.NIK;
            cout << "Nomor Hp : "; 
            cin >> data1.hp;
        cout << endl;
        akhir("Terimakasih telah memesan di aplikasi kami.");

        cout << endl;
        cout << "Kembali ke menu awal? (y/n): ";
        cin >> ulang;
        system("CLS");
        }while (ulang == 'Y' || ulang == 'y');
    
    
    return 0; 
}