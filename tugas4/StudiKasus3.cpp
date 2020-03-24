/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 4 kasus 3
Insertion sort
*/

#include <iostream>
using namespace std;

int x[100],x2[100],n;

void insertionSort()
{
	int temp,i,j;
	for(i=1; i<=n; i++){
	    temp=x[i];
		j = i-1;
	    while(x[j]>temp && j>=0){
			x[j+1] = x[j];
	   	    j--;
	    }
	    x[j+1] = temp;
	}
}
int main()
{
    cout<< "INSERTION SORT"<<endl;
	cout<<"Masukkan Jumlah Data: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>x[i];
	  x2[i]=x[i];
	}
	insertionSort();
	cout<<"Hasil Sorting: "<<endl;
	for(int i=1; i<=n; i++)
	{
	  cout<<x[i]<<" ";
	}
	cout<<endl;
}
