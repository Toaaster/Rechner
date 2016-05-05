#include <iostream>
#include <string>
using namespace std;
int ErsteZahl, ZweiteZahl, Ergebnis, Rest;
string Zeichen;
bool i, h = false;
int main()
{
	cout << "Geben sie die erste Zahl ein " << endl;
	cin >> ErsteZahl;
	cout << endl;

	cout << "Geben sie die Zweite Zahl ein " << endl;
	cin >> ZweiteZahl;
	cout << endl;

	cout << "Geben sie nun + fuer eine Addition, - fuer eine Subtraktion, * fuer eine Multiplikation, / fuer eine Division oder % fuer eine Division mit Rest ein. " << endl;
	cin >> Zeichen;
	cout << endl;

	if (Zeichen == "+")
	{
		Ergebnis = ErsteZahl + ZweiteZahl;
		i = true;
	}

	else if (Zeichen == "-")
	{
		Ergebnis = ErsteZahl - ZweiteZahl;
		i = true;
	}

	else if (Zeichen == "*")
	{
		Ergebnis = ErsteZahl * ZweiteZahl;
		i = true;
	}
	else if (Zeichen == "/")
	{
		Ergebnis = ErsteZahl / ZweiteZahl;
		i = true;
	}
	else if (Zeichen == "%")
	{
		Ergebnis = ErsteZahl / ZweiteZahl;
		Rest = ErsteZahl % ZweiteZahl;
		i = true;
		h = true;
	}

	if (i == false)
		cout << "Fehler!" << endl;
	if (i == true)
		cout << "Ergebnis = " << Ergebnis << endl;
	if (h == true)
		cout << "Rest = " << Rest << endl;
}