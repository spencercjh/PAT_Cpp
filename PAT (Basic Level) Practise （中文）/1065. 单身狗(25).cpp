/*
	Name: 1065. 单身狗(25)
	Author: spencercjh
	Date: 2017年9月5日 13:25:50
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
	int n, a, b, m;
	scanf("%d", &n);
	vector<int> couple(100000, -1);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		couple[a] = b;
		couple[b] = a;
	}
	scanf("%d", &m);
	vector<int> guest(m), isExist(100000);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &guest[i]);
		if (couple[guest[i]] != -1)
			isExist[couple[guest[i]]] = 1;
	}
	set<int> s;
	for (int i = 0; i < m; i++)
	{
		if (!isExist[guest[i]])
			s.insert(guest[i]);
	}
	printf("%d\n", s.size());
	for (auto it = s.begin(); it != s.end(); it++)
	{
		if (it != s.begin()) 
			printf(" ");
		printf("%05d", *it);
	}
	return 0;
}
