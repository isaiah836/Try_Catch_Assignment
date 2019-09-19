#include <iostream>
#include <string>

using namespace std;

void Main()
{
	try
	{
		cout << "/n/n/t/t*** Exceptions are Fun ***/n";
		int firstnumber = 21;
		int secondNumber = 0;
		int answer = 0;

		answer = firstnumber / secondNumber;
	}
	catch (const std::exception&)
	{

	}
}