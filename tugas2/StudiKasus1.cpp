/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Tugas 2 studi kasus 1
*/

#include<iostream>
using namespace std;

int main(){
	int x[50];
	int n,i,nmaks;

	cout<<"Masukkan banyak angka: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Bilangan ke-" <<i+1<< "="; cin>>x[i];
	}

	nmaks = 0;

	for(int i=0;i<n;i++){
		if(x[i]>nmaks)
			nmaks=x[i];
	}
	cout<<"Maka nilai maksimumnya adalah "<<nmaks<<endl;
}
