/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 5 kasus 7
Tilling Problem
*/

#include <iostream>
using namespace std;

int hitung(int a, int b);

int main()
{
    int a, b;
    cout << "Masukkan angka 1:"; cin>> a;
    cout << "Masukkan angka 2:"; cin>>b;
    cout << "Maka caranya ada "<< hitung(a, b)<<endl;

    return 0;
}

int hitung(int a, int b)
{

    int count[a + 1];
    count[0] = 0;

    for (int i = 1; i <= a; i++) {
        if (i > b)
            count[i] = count[i - 1] + count[i - b];
        else if (i < b)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[a];
}
