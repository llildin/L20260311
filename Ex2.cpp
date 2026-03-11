#include <iostream>
using namespace std;

int main()
{
	// 숫자 입력 받아서 그걸 크기로 배열을 만들어서
	// 1부터 크기까지 초기화 하고 출력하는 프로그램

	int Size = 0;
	cin >> Size;

	int* Numbers = new int[Size];
	
	for (int i = 0; i < Size ; i++)
	{
		Numbers[i] = i + 1;
		cout << Numbers[i] << " ";
	}

	delete[] Numbers;
	Numbers = nullptr;

	return 0;
}