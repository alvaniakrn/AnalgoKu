/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Tugas 2 studi kasus 5
*/
#include <iostream>

using namespace std;

int x[100],x2[100];
int n;

void tukar(int a, int b)
{
	int t;
	t = x[b];
	x[b] = x[a];
	x[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(x[j] < x[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main()
{
	cout<<"\nMasukkan Jumlah Data : ";cin>>n;
	cout<< endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>x[i];
		x2[i]=x[i];
	}

	selection_sort();
	cout<< endl;
	cout<<"Data Setelah di Sort :"<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<x[i];
	}
    cout<< endl;
}
