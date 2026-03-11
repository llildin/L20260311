#include <iostream>
#include "StringUtil.h"
using namespace std;

int main()
{
	int A;
	char Temp[100] = "Hello World";

	int StringLength = Length(Temp, 100);
	cout << "Length : " << StringLength << endl;

	Replace(Temp, 100, 'l', 'x');
	cout << Temp << endl;

	return 0;
}