#include <iostream>
using namespace std;

int main() {
    int n;
    int tinggi[100];

    cout << "Masukkan jumlah teman: ";
    cin >> n;

    cout << "Masukkan tinggi badan teman (cm):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tinggi[i];
    }

    for (int i = 1; i < n; i++) {
        int temp = tinggi[i];
        int j = i - 1;

        while (j >= 0 && tinggi[j] > temp) {
            tinggi[j + 1] = tinggi[j];
            j--;
        }
        tinggi[j + 1] = temp;
    }

    cout << "Urutan tinggi badan dari yang terpendek sampai tertinggi:" << endl;
    for (int i = 0; i < n; i++) {
        cout << tinggi[i] << " ";
    }
    cout << endl;

    return 0;
}
