#include <iostream>
using namespace std;

// 문자 개수 계산
int CountText(char* Tx, int Length)
{
	int Count = 0;

	for (int i = 1; i < Length; i++)
	{
		Count++;
		Tx++;
	}
	return Count;
}

// 특정 문자 위치 찾기
int SearchText(char* Tx, char FindTx)
{
	int Loc = 1;

	for (; ;)
	{
		if (*Tx == '\0')
		{
			return -1;
		}
		else if (*Tx == FindTx)
		{
			return Loc;
		}
		Loc++;
		Tx++;
	}
}

// 특정 문자 바꾸기
void ChangeText(char* Tx, char ChangeTx, char ChangeToTx, int Length)
{
	for (; ;)
	{
		if (*Tx == '\0')
		{
			break;
		}
		else if (*Tx == ChangeTx)
		{
			*Tx = ChangeToTx;
		}
		Tx++;
	}
	return;
}

int main()
{
	char Text[6] = "Hello";
	int TextLength = 0;

	Text[5] = 1;

	int Length = sizeof(Text);

	TextLength = CountText(Text, Length);

	char FindTx = 'e';
	char ChangeTx = 'l';
	char ChangeToTx = 'x';

	cout << "Text Length : " << TextLength << endl;

	cout << " e is " << SearchText(Text, FindTx) << endl;

	ChangeText(Text, ChangeTx, ChangeToTx, Length);

	cout << "Change l -> x : " << Text << endl;

	return 0;
}