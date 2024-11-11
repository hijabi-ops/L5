#include <iostream>
using namespace std;
int main()
{
	int m1 = 0, m2 = 0, m3 = 0;
	cout << "enter marks of 1st subject" << endl;
	cin >> m1;
	cout << "enter marks of 2nd subject " << endl; 
	cin >> m2;
	cout << "enter marks of 3rd subject" << endl;
	cin >> m3;
	cout << "average = (m1+m2+m3)/3 " << (m1+m2+m3)/3<< endl;

	if(m1+m2+m3>=80)
	{
		cout << "you are above the standard!" << endl;
		cout << "admission granted" << endl;
	}
	cout << "task3" << endl;
	int n1=0, n2=0, n3=0;
	cout << "value of n1" << endl; cin >> n1;
	cout << "value of n2" << endl; cin >> n2;
	cout << "value of n3" << endl; cin >> n3;
	if (n1 > n2 && n3)
	{
		cout << "number is maximum" << endl;
	}
	else
		cout << "number is minimum" << endl;
	cout << "task2" << endl;
	char alphabet;
	cout << "enter a character" << endl;
	cin >> alphabet;
	if(alphabet>='A'&& alphabet<='Z')
	{
		cout << "alphabet is capital" << endl;
	}
	if(alphabet>='a'&&alphabet<='z')
	{
		cout << "alphabet is small" << endl;
	}
	cout << "TASK4" << endl;
	int number = 0;
	cout << "value of number" << endl; cin >> number;
	if(number >0 && number<99999)
	{
		cout << "number is positive" << endl;
	}
	if(number==0)
	{
		cout << "number is 0" << endl;
	}
	if(number<0)
	{
		cout << "number is negative" << endl;
	}
	cout << "task5" << endl;
	int marks = 0;
	cout << "value of marks" << endl;
	cin >> marks;
	if (marks >= 50)
	{
		cout << "you passed!" << endl;
	}
	if (marks < 50)
	{
		cout << "you failed! " << endl;
	}
	cout << "task6" << endl;
	int n01 = 0, n02 = 0;
	cout << "value of n01" << endl; cin >> n01;
	cout << "value of n02" << endl; cin >> n02;
	if (n01 % n02 == 0)
	{
		cout << "n1 is the multiple of no2" << endl;
	}
	if (n01 % n02 == n01)
	{
		cout << "n01 is not multiple of n02" << endl;
	}
	cout << "task11" << endl;
	int age = 0;
		cout << "value of age : " << endl; cin >> age;
		if (age >= 18)
			cout << "you are eligible" << endl;
		else
			cout << "you are not eligible" << endl;
	






	return 0;
}