/*
	Name: 1067. ÊÔÃÜÂë(20)
	Author: spencercjh
	Date: 2017Äê9ÔÂ5ÈÕ 14:14:51
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	string password, temp;
	int n, cnt = 0;
	cin >> password >> n;
	getchar();
	while(true)
	{
		getline(cin, temp);
		if (temp != "#")
			cnt++;
		else
			break;
		if (cnt <= n && temp == password)
		{
			cout << "Welcome in";
			break;
		}
		else if (cnt <= n && temp != password)
		{
			cout << "Wrong password: " << temp << endl;
			if (cnt == n)
			{
				cout << "Account locked";
				break;
			}
		}
	}
	return 0;
}
