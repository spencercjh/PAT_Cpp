/*
	Name: 1071. 小赌怡情(15)
	Author: spencercjh
	Date: 2017年9月18日 08:24:00 
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
#include<numeric>
using namespace::std;
int main()
{

	int T,K;
	scanf("%d %d",&T,&K);
	for(int i=0; i<K; i++)
	{
		int n1,b,t,n2;
		scanf("%d %d %d %d",&n1,&b,&t,&n2);
		if(t>T)
		{
			printf("Not enough tokens.  Total = %d.\n",T);
			continue;
		}
		if(b==0&&n2<n1||b==1&&n2>n1)
		{
			T+=t;
			printf("Win %d!  Total = %d.\n",t,T);
			continue;
		}
		else
		{
			T-=t;
			printf("Lose %d.  Total = %d.\n",t,T);
		}
		if(T==0)
		{
			printf("Game Over.\n");
			break;
		}
	}
	return 0;
}
