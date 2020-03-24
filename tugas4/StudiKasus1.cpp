/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 4 kasus 1
Merge sort
*/

#include <iostream>
#include <chrono>
using namespace std;

void satu(int* in, int a, int b,int c){
    int n1 = b-a+1;
    int n2 = c-b;
    int L[n1+1];
    int R[n2+1];
    for (int i=1; i<=n1; i++){
        L[i-1] = in[(a-1)+i-1];
    }

    for (int j=1; j<=n2; j++){
        R[j-1] = in[(b-1)+j];
    }

    int i=0;
    int j=0;
    L[n1]=2147483647;
    R[n2]=2147483647;

    for (int k=(a-1); k<c; k++){
        if(L[i]<=R[j]){
            in[k]=L[i];
            i = i+1;
        }
        else{
            in[k]=R[j];
            j = j+1;
        }
    }
}

void msort(int* in, int a, int c){
    int b;
    if(a<c){
        b = (a+c)/2;
        msort(in, a, b);
        msort(in, b+1, c);

        satu(in, a, b, c);
    }
}

void input(int* x, int& n){
    cout<<"MERGE SORT"<<endl;
    cout << "Masukkan banyak data: "; cin >> n;
    for (int i=0; i<n; i++){
        cout<<"Masukkan data ke-"<<i<<" : "; cin >> x[i];
    }
}

int main(){
    int in[100];
    int n;
    input(in,n);
    auto start = chrono::steady_clock::now();
    msort(in,1,n);
    auto end = chrono::steady_clock::now();

    cout << "Hasil: ";
    for(int i=0; i<n; i++){
        cout << in[i] << " ";
    }

    cout<<endl;
    cout << "Elapsed time in nanoseconds : "
    << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
    << " ns" << endl;

    return 0;
}
