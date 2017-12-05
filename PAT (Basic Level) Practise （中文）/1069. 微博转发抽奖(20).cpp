/*
	Name: 1069. 微博转发抽奖(20)
	Author: spencercjh
	Date: 2017年9月5日 14:57:19
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace::std;
int main()
{
	int m, n, s;
	scanf("%d%d%d", &m, &n, &s);
	string str;
	map<string, bool> mapp;
	bool flag = false;
	for (int i = 1; i <= m; i++)
	{
		cin >> str;
		if (mapp[str] == true) 
			s = s + 1;
		if (i == s && mapp[str] == false)
		{
			mapp[str] = true;
			cout << str << endl;
			flag = true;
			s = s + n;
		}
	}
	if (flag == false) 
		cout << "Keep going...";
	return 0;
}
