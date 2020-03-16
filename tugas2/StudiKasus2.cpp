/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Tugas 2 studi kasus 2
*/
#include <iostream>
using namespace std;

int main()
{
    int n, c, x[100], index;
	bool found = false;

	cout << "\nMasukan banyak data =  "; cin >> n;
	cout << endl;

	for(int i=0; i<n; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> x[i];
	}

	cout << "Apa yang kamu cari?"; cin >> c;
	cout << endl;

	for(int i=0; i<n; i++){
	    if(x[i] == c){
	 	    found = true;
	        index = i;
	    	i = n;
	   }
	}
	if(found == true){
	   cout << "Data ditemukan pada data ke-" << index+1<<endl;
	}
	else{
	   cout << "Data tidak ditemukan"<<endl;
	}
}

