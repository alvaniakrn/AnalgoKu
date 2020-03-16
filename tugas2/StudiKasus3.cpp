/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Tugas 2 studi kasus 3
*/
#include<iostream>


using namespace std;
int main()
{
	int n, i, x[100], c;
	int a, b, t;

	cout<<"Masukkan banyak data: ";cin>>n;
	cout<< endl;

	for (i=0; i<n; i++)
	{
		cout<<"Data ke-"<<i+1<<" :";
		cin>>x[i];
	}
	cout<<"\nMasukkan data yang akan di cari :"; cin>>c;
	a = 0;
	b = n-1;
	cout << endl;

	while (a <= b)
	{
		t = (a+b)/2;
		if(x[t]<c)
		{
			a=t+1;

		}
		else if(x[t] == c)
		{
			cout<<c<<" ditemukan pada data ke-"<<t+1<<"\n";
			break;
		}
		else
		{
			 b=t-1;
		}
		t=(a+b)/2;
	}

	if(a>b)
	{
		cout<<c<<" Tidak ada";
	}
	cout <<endl;
}
