/*
	Name:1055. 集体照 (25)
	Author: spencercjh
	Date:2017年9月4日 15:23:54 
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
struct node
{
	string name;
	int height;
};
int cmp(struct node a, struct node b)
{
	return a.height != b.height ? a.height > b.height : a.name < b.name;
}
int main()
{
	int n, k, m;
	cin >> n >> k;
	vector<node> stu(n);
	for(int i = 0; i < n; i++)
	{
		cin>>stu[i].name>>stu[i].height;
	}
	sort(stu.begin(), stu.end(), cmp);
	int t = 0, row = k;
	while(row)
	{
		if(row == k)
			m = n - n / k * (k - 1);
		else
			m = n / k;
		vector<string> stemp(m);
		stemp[m / 2] = stu[t].name;
		// 左边一列
		int j = m / 2 - 1;
		for(int i = t + 1; i < t + m; i = i + 2)
			stemp[j--] = stu[i].name;
		// 右边一列
		j = m / 2 + 1;
		for(int i = t + 2; i < t + m; i = i + 2)
			stemp[j++] = stu[i].name;
		// 输出当前排
		cout << stemp[0];
		for(int i = 1; i < m; i++)
			cout << " " << stemp[i];
		cout << endl;
		t = t + m;
		row--;
	}
	return 0;
}
