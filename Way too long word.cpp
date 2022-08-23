#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		str.size() > 10 ? cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl : cout << str << endl;
	}
	return 0;
}