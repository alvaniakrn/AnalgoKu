/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 4 kasus 4
Bubble sort
*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Bubble Sort"<<endl;
	int n, x[100],i ,j ,temp;
	cout<<"Masukkan Jumlah Data: ";cin>>n;
	for(i=0; i<n; i++){
		cout<<"Masukan angka ke-"<<i+1<<": ";
		cin>>x[i];
	}

	for(i=0; i<(n-1); i++)	{
		for(j=0; j<(n-i-1); j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}

	cout<<"Hasil Sorting:"<<endl;
	for(i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
