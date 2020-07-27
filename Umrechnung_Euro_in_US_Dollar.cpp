#include <iostream>
using namespace std;
double euro;
double dollar;

int main()
{
	cout << "Bitte geben Sie diee Geldmenge in Euro ein: ? ";
	cin >> euro;
	dollar = euro * 1.2957;
	cout << "Die Geldmenge in US Dollar lautet: " << dollar << endl;
	system("PAUSE");
	return 0;
}