#include "FunctionTemplate.h"

int main()
{
	cout << "Hello C++ Template!" << endl;

	int a = 1;
	int b = 2;
	int c = Max(a, b);
	cout << "c = " << c << endl;

	float f_a = 10.0f;
	float f_b = 20.0f;
	float f_c = Max(f_a, f_b);
	cout << "f_c = " << f_c << endl;

	getchar();
	return 0;
}