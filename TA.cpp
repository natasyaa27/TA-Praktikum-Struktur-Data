#include <iostream>
using namespace std;

void menu() {
    cout << "\nPilih menu:"
         << "\n1. Tampilkan semua nilai"
         << "\n2. Tampilkan nilai tertinggi"
         << "\n3. Tampilkan nilai terendah"
         << "\n4. Keluar"
         << "\nMasukkan pilihan: ";
}

int main() {
    const int N = 4;
    string matkul[N] = {"Algoritma", "Struktur Data", "Basis Data", "Sistem Operasi"};
    int nilai[N] = {90, 80, 88, 70};

    cout << "Sistem Nilai Mata Kuliah";
    bool running = true;
    int choice;

    while (running) {
        menu();
        cin >> choice;

        if (choice == 1) {
            for (int i = 0; i < N; i++)
                cout << matkul[i] << " : " << nilai[i] << endl;
        } 
        else if (choice == 2) {
            int maxIdx = 0;
            for (int i = 1; i < N; i++)
                if (nilai[i] > nilai[maxIdx]) maxIdx = i;
            cout << "Nilai tertinggi: " << matkul[maxIdx] << " (" << nilai[maxIdx] << ")\n";
        } 
        else if (choice == 3) {
            int minIdx = 0;
            for (int i = 1; i < N; i++)
                if (nilai[i] < nilai[minIdx]) minIdx = i;
            cout << "Nilai terendah: " << matkul[minIdx] << " (" << nilai[minIdx] << ")\n";
        } 
        else if (choice == 4) {
            running = false;
            cout << "Sistem selesai.\n";


        }
    }
}

