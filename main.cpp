#include <iostream>
using namespace std;

// 문자 개수 계산
int CountText(char* Tx)
{
	int Count = 0;

	for (; ; )
	{
		if (*Tx == '\0')
		{
			return Count;
		}
		Count++;
		Tx++;
	}
}

// 특정 문자 위치 찾기
int SearchText(char* Tx, char FindTx)
{
	int Loc = 1;

	for (; ;)
	{
		if (*Tx == '\0')
		{
			return 0;
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
void ChangeText(char *Tx, char ChangeTx, char ChangeToTx)
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
	char Text[10] = "Hello";
	int TextLength = 0;

	TextLength = CountText(Text);

	char FindTx = 'e';
	char ChangeTx = 'l';
	char ChangeToTx = 'x';

	cout << "Text Length : " << TextLength << endl;

	cout << " e is " << SearchText(Text, FindTx) << endl;

	ChangeText(Text, ChangeTx, ChangeToTx);

	cout << "Change l -> x : " << Text << endl;

	return 0;
}