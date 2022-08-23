#include<iostream>
using namespace std;
bool prime(int n)
{
	if (n == 2)return 2;
	int count = 0;
	for (int i = 2; i < n / 2 + 1; i++)
	{
		if (n % i == 0)count++;
	}
	return count == 0;
}
bool hahaha(int n)
{
	int count = 0;
	for (int i = 2; i < n; i++)
	{
		if (prime(i)&&n%i==0)count++;
		if (count == 3)return false;
	}
	return count == 2;
}
int main()
{
	int number = 0;
	cin >> number;
	int count = 0;
	for (int i = 2; i <= number; i++)
	{
		if (hahaha(i))count++;
	}
	cout << count << endl;

}