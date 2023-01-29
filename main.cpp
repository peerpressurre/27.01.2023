#include <iostream>
using namespace std;

template<typename T>
T USD(T val,T usd)
{
	return val / usd;
}
//double USD(int val, double usd)
//{
//	return val / usd;
//}
//double USD(double val, double usd)
//{
//	return val / usd;
//}
template<typename T>
T EUR(T val, T eur)
{
	return val / eur;
}
//double EUR(double val, double eur)
//{
//	return val / eur;
//}
template<typename T>
T PLN(T val, T pln)
{
	return val / pln;
}
//double PLN(double val, double pln)
//{
//	return val / pln;
//}


int main()
{
	int currency;
	double val, usd = 39.7540, eur = 42.87690, pln = 8.6383;

	cout << "------------MENU------------" << endl;
	cout << "|----USD----------39.7540--|" << endl;
	cout << "|----EUR----------42.87690-|" << endl;
	cout << "|----PLN----------8.6383---|" << endl;
	cout << "----------------------------" << endl;

	cout << "Enter GRN-> ";
	cin >> val;

	cout << "USD -> 1 " << endl;
	cout << "EUR -> 2 " << endl;
	cout << "PLN -> 3 " << endl;
	cout << "Choose currency to convert to:" << endl;
	cout << "-> ";
	cin >> currency;
	system("cls");
	switch (currency)
	{

	case 1:
	{
		cout << val << "GRN -> ";
		cout << USD<double>(val, usd) << "USD";
	}break;

    case 2:
	{
			cout << val << "GRN -> ";
			cout << EUR<double>(val, eur) << "EUR";
	}break;

	case 3:
	{
		cout << val << "GRN -> ";
		cout << PLN<double>(val, pln) << "PLN";
	}break;
	}

	return 0;
}