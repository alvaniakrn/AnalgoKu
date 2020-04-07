/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 6 Soal 1
Adjacency Matriks
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int matrix[20][20];
int count = 0;

void cetakMatrix(int m);
void add_edge(int x, int y);

int main(int argc, char *argv[]){
    int m=8;

    add_edge(1, 2);
    add_edge(1, 3);
    add_edge(2, 1);
    add_edge(2, 3);
    add_edge(2, 4);
    add_edge(2, 5);
    add_edge(3, 1);
    add_edge(3, 2);
    add_edge(3, 5);
    add_edge(3, 7);
    add_edge(3, 8);
    add_edge(4, 2);
    add_edge(4, 5);
    add_edge(5, 2);
    add_edge(5, 3);
    add_edge(5, 4);
    add_edge(5, 6);
    add_edge(6, 5);
    add_edge(7, 3);
    add_edge(7, 8);
    add_edge(8, 3);
    add_edge(8, 7);
    cout<<"Maka Adjacency Matrixnya: "<<endl;
    cetakMatrix(m);
}

void cetakMatrix(int m){
    int i, j;
    for (i = 1; i <= m; i++){
        for (j = 1; j<=m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int x, int y){
    matrix[x][y] = 1;
    matrix[y][x] = 1;
}

