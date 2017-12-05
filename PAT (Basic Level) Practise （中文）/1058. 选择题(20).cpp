/*
	Name: 1058. 选择题(20)
	Author: spencercjh
	Date: 2017年9月4日 16:23:36
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
	int n, m, temp, k;
	scanf("%d%d", &n, &m);
	vector<set<char>> right(m);
	vector<int> total(m), wrongCnt(m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &total[i], &temp, &k);
		for(int j = 0; j < k; j++)
		{
			char c;
			scanf(" %c", &c);
			right[i].insert(c);
		}
	}
	for(int i = 0; i < n; i++)
	{
		int score = 0;
		scanf("\n");
		for(int j = 0; j < m; j++)
		{
			if(j != 0)
				scanf(" ");
			scanf("(%d", &k);
			set<char> st;
			char c;
			for(int l = 0; l < k; l++)
			{
				scanf(" %c", &c);
				st.insert(c);
			}
			scanf(")");
			if(st == right[j])
				score += total[j];
			else
				wrongCnt[j]++;
		}
		printf("%d\n", score);
	}
	int maxWrongCnt = 0;
	for(int i = 0; i < m; i++)
		if(wrongCnt[i] > maxWrongCnt)
			maxWrongCnt = wrongCnt[i];
	if(maxWrongCnt == 0)
		printf("Too simple");
	else
	{
		printf("%d", maxWrongCnt);
		for(int i = 0; i < m; i++)
			if(wrongCnt[i] == maxWrongCnt)
				printf(" %d", i + 1);
	}
	return 0;
}
