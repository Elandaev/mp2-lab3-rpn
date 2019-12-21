#pragma once
#include <string>
#include <stack>

using namespace std;

class RPL
{
	string Infix;
	string Postfix;
	int Priority(char a, char b);
	bool Is_num(char s);
	bool Is_operator(char s);
	void Space(string& l);

public:
	string GetInfix() {
		return Infix;
	}
	string GetPostfix() {
		return Postfix;
	}
	string Perv();
	double calculate();
	RPL(string tmp = "")	{
		Infix = tmp + " ";
		Postfix = "";
	}

	RPL(RPL& v)	{
		Infix = v.Infix;
		Postfix = v.Postfix;
	}
};

