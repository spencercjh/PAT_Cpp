/*
	Name: 1059. C语言竞赛(20)
	Author: spencercjh
	Date: 2017年9月4日 16:47:41
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
	int index=-1;
	bool check=false;
};
bool isPrime(int n)
{
	int i;
	if (n == 1 || n == 0)
		return false;
	else
	{
		for (i = 2; i <= sqrt((double)n); i++)
			if (n%i == 0)
				return false;
	}
	return true;
}
int main()
{
	int N;
	scanf("%d",&N);
	node ID[10001];
	for(int i=0; i<N; i++)
	{
		int id;
		scanf("%d",&id);
		ID[id].index=i+1;
	}
	int K;
	scanf("%d",&K);
	for(int i=0; i<K; i++)
	{
		int temp;
		scanf("%d",&temp);
		if(ID[temp].index==-1)
			printf("%04d: Are you kidding?\n",temp);
		else if(ID[temp].check==true)
			printf("%04d: Checked\n",temp);
		else if(ID[temp].check==false)
		{
			if(ID[temp].index==1)
				printf("%04d: Mystery Award\n",temp);
			else if(isPrime(ID[temp].index))
				printf("%04d: Minion\n",temp);
			else
				printf("%04d: Chocolate\n",temp);
			ID[temp].check=true;
		}
	}
	return 0;
}
