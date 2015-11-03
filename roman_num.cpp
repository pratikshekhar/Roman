#include<iostream>
#include <iomanip> 
#include <vector> 
#include<string>


using namespace std;

int convertRomanNumber(string number);
int convert_letter(string number);

int main()
{
	string number;
	int a = 0;
	cout << "Please enter roman numbers :" << endl;
	cin >> number;
	a = convertRomanNumber(number);
	cout << " It is :" << a << endl;
	
	return 0;

}
int convertRomanNumber(string number)
{
	int len, t1, t2;
	int sum = 0;
	len = number.length();

	for (int i = 0; i < len; i++)
	{
		t1 = convert_letter(number.substr(i, 1));
		t2 = convert_letter(number.substr(i + 1, 1));
		if (t1 < t2)
		{
			sum = sum + (t2 - t1);
			i++;
		}
		else
		{
			sum = sum + t1;
		}
	}
	return sum;
}
int convert_letter(string number)
{
	int temp = 0;
	if (number == "I")
	{
		temp = 1;
	}
	else if (number == "V")
	{
		temp = 5;
	}
	else if (number == "X")
	{
		temp = 10;
	}
	else if (number == "L")
	{
		temp = 50;
	}
	else if (number == "C")
	{
		temp = 100;
	}
	else if (number == "D")
	{
		temp = 500;
	}
	else if (number == "M")
	{
		temp = 1000;
	}
	
return temp;
}


