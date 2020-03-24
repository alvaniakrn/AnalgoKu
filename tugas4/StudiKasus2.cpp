/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 4 kasus 2
Selection sort
*/

#include <iostream>
using namespace std;

int x[50],x2[50];
int n;

void tukar(int a, int b)
{
	int t;
	t = x[b];
	x[b] = x[a];
	x[a] = t;
}
void selectionSort()
{
	int pos,i,j;
	for(i=1; i<=n-1; i++)
	{
	    pos = i;
	    for(j=i+1; j<=n; j++)
	    {
		   if(x[j] < x[pos]) pos=j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main()
{
    cout<< "Selection Sort"<<endl;
	cout<<"Masukkan Jumlah Data : ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>x[i];
		x2[i]=x[i];
	}

	selectionSort();
	cout<<"Hasil Sorting: "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<x[i];
	}
	cout<<endl;
}
