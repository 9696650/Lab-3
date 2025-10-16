#include <iostream>

using namespace std;

int main() {
	unsigned short a;	
	int b;
	float c;
	double d;

	unsigned short* pa;		
	int* pb;
	float* pc;
	double* pd;

	void* pv;	

	pa = &a;	
	pb = &b;
	pc = &c;
	pd = &d;

	*pa = 9040;
	*pb = -267;
	*pc = 0.007642;
	*pd = -1.11e99;

	cout << "Variables size :"<<endl;			
	cout << "unsigned short a: " << sizeof(a) << endl;
	cout << "int b: " << sizeof(b) << endl;
	cout << "float c: " << sizeof(c) << endl;
	cout << "double d: " << sizeof(d) << endl;
	cout << "unsigned short* pa: " << sizeof(pa) << endl;
	cout << "int* pb: " << sizeof(pb) << endl;
	cout << "float* pc: " << sizeof(pc) << endl;
	cout << "double* pd: " << sizeof(pd) << endl;
	cout << "void* pv: " << sizeof(pv) << endl;

	pv = pa;	
	pv = pb;
	pv = pc;
	pv = pd;

	return 0;
}
