/*
	Name: 1064. 朋友数(20)
	Author: spencercjh
	Date: 2017年9月5日 13:07:10 
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
int figuresum(int a)
{
	int sum=0;
	while(a!=0)
	{
		int r=a%10;
		sum+=r;
		a/=10;
	}
	return sum;
}
int main()
{
	int N;
	scanf("%d",&N);
	set<int> F;
	for(int i=0;i<N;i++)
	{
		int inputnum;
		scanf("%d",&inputnum);
		F.insert(figuresum(inputnum));
	}
	cout<<F.size()<<endl;
	auto it=F.begin();
	cout<<*it;
	it++;
	for(;it!=F.end();it++)
		cout<<" "<<*it;
	return 0;	
}
