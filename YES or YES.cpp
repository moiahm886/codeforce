#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str[0] == 'y' || 'Y' && str[1] == 'e' || str[1] == 'E' && str[2] == 's' || str[2] == 'S')cout << "YES\n";
		else cout << "NO\n";
	}

}