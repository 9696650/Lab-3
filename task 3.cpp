#include <iostream>;

using namespace std;

int main() {

	int var1;		
	float var2;
	unsigned short var3;

	var1 = 31765;
	var2 = -7.293e3;
	var3 = 26543;

	double var4;
	int var5;
	char var6;	

	var4 = var1;		
	var5 = int(var2);
	var6 = *(char*)&var3;

	return 0;
}
