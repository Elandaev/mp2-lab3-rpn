#include "iostream"
#include "string"
#include "stack"
#include "stdlib.h"
#include "RPL.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	

	while (cin) {
		try {
			string expression;
			cout << "������� �������������� ���������: ";
			getline(cin, expression);
			RPL line(expression);
			cout << "��������� �����: " << line.GetInfix() << endl;
			line.Perv();
			cout << "����������� �����: " << line.GetPostfix() << endl;
			cout << "�����: " << line.calculate() << endl;
		}
		catch (const char* n) {
			cout << n << endl;
		}
	}

	system("pause");
	return 0;
}