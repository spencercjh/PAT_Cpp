/*
	Name:1062. 最简分数(20)
	Author: spencercjh
	Date:2017年9月5日 12:48:30 
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
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if(n1 * m2 > n2 * m1)
	{
		swap(n1, n2);
		swap(m1, m2);
	}
	int num = 1;
	bool flag = false;
	while(n1 * k >= m1 * num) 
		num++;
	while(n1 * k < m1 * num && m2 * num < n2 * k)
	{
		if(gcd(num, k) == 1)
		{
			if(!flag)
				flag = true;
			else
				printf(" ");
			printf("%d/%d", num, k);
		}
		num++;
	}
	return 0;
}
