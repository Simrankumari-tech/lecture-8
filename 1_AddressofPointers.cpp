#include <iostream>
using namespace std;

int main() {

	int a = 10;
	double d = 1.11;
	char ch = 'A';

	int *aptr = &a;
	double* dptr = &d;
	char* chptr = &ch;

	cout << "Address of a : " << &a << endl;
	cout << "aptr : " << aptr << endl;

	cout << "Address of d : " << &d << endl;
	cout << "dptr : " << dptr << endl;

	cout << "Address of ch   : " << (int*)&ch << endl;
	cout << "Address of chptr: " << (float*)&ch << endl;

	return 0;
}