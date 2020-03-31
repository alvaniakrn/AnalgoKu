/*
Alvina Vania Kirana
140810180010
Praktikum Analisis Algoritma
Worksheet 5 kasus 6
Algoritma Karatsuba
*/

#include <iostream>
using namespace std;

int makeEqualLength(string &a, string &b);
string addBitStrings( string first, string second );
int multiplyiSingleBit(string a, string b);
long int multiply(string X, string Y);

int main()
{
	printf ("%ld\n", multiply("1110", "1010"));
	printf ("%ld\n", multiply("100", "1010"));
	printf ("%ld\n", multiply("11", "1010"));
	printf ("%ld\n", multiply("0", "1010"));
	printf ("%ld\n", multiply("1", "1010"));
	printf ("%ld\n", multiply("101", "111"));
	printf ("%ld\n", multiply("11", "11"));
}

int makeEqualLength(string &a, string &b){
	int p1 = a.size();
	int p2 = b.size();
	if (p1 < p2)
	{
		for (int i = 0 ; i < p2 - p1 ; i++)
			a = '0' + a;
		return p2;
	}
	else if (p1 > p2)
	{
		for (int i = 0 ; i < p1 - p2 ; i++)
			b = '0' + b;
	}
	return p1;
}

string addBitStrings( string first, string second ){
	string result;

	int length = makeEqualLength(first, second);
	int carry = 0;

	for (int i = length-1 ; i >= 0 ; i--)
	{
		int firstBit = first.at(i) - '0';
		int secondBit = second.at(i) - '0';

		int sum = (firstBit ^ secondBit ^ carry)+'0';

		result = (char)sum + result;

		carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
	}

	if (carry) result = '1' + result;

	return result;
}

int multiplyiSingleBit(string a, string b){
	return (a[0] - '0')*(b[0] - '0');
}

long int multiply(string X, string Y){

	int n = makeEqualLength(X, Y);

	if (n == 0) return 0;
	if (n == 1) return multiplyiSingleBit(X, Y);

	int fh = n/2;
	int sh = (n-fh);

	string Xl = X.substr(0, fh);
	string Xr = X.substr(fh, sh);

	string Yl = Y.substr(0, fh);
	string Yr = Y.substr(fh, sh);

	long int P1 = multiply(Xl, Yl);
	long int P2 = multiply(Xr, Yr);
	long int P3 = multiply(addBitStrings(Xl, Xr), addBitStrings(Yl, Yr));

	return P1*(1<<(2*sh)) + (P3 - P1 - P2)*(1<<sh) + P2;
}
