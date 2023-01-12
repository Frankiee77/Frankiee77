#include<iostream>
using namespace std;

int main(){
    string nama, prodi, fakultas;
    int nim;
    
    for (int i = 0; i <= 3; i++)
    {
        getline (cin,nama);
        cout << nama << " ";
        getline (cin,prodi);
        cout << prodi << " ";
    }
    
return 0;
}
