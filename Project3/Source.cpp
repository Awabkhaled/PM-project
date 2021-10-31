#include <iostream>
using namespace std;
int main()
{
	float sum=0,increase, sal[10];
	char k;
	int number_of_employees;
	cout << "                            -------------------------------------------------------------------------------------------------------------- \n";
	cout << "                            You will enter the salaries of some employees and the program will get the average and the sum of the salaries \n";
	cout << "                            -------------------------------------------------------------------------------------------------------------- \n\n\n";
	cout << "* please enter the number of the employees \: \n";
	cin >> number_of_employees;
	cout << "\n* If there is a certain percentage that you want to increase on salaries befor getting the average and the sum please enter it \: \n  \(If there is not please enter \"0\"\) \n";
	cin >> increase >> k;
	cout << "\n\n";
	for (int i = 0; i < number_of_employees; i++)
	{
		cout << "* Please enter the salary of embloyee number " << ++i << "\:\n";
		i--;
		cin >> sal[i];
		sal[i] = sal[i] + sal[i] * (increase/100);
	}
	for (int x = 0; x < number_of_employees; x++)
	{
		sum += sal[x];
	}
	cout << "\n\n\n>> the sum of the salaries= " << sum;
	cout << "\n>> The average of the saleries= " << sum / 10 << "\n\n\n";
	return 0 ;
}
