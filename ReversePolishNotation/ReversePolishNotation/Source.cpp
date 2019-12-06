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
			cout << "Введите арифметическое выражение: ";
			getline(cin, expression);
			RPL line(expression);
			cout << "Инфиксная форма: " << line.GetInfix() << endl;
			line.Perv();
			cout << "Постфиксная форма: " << line.GetPostfix() << endl;
			cout << "Ответ: " << line.calculate() << endl;
		}
		catch (const char* n) {
			cout << n << endl;
		}
	}

	system("pause");
	return 0;
}