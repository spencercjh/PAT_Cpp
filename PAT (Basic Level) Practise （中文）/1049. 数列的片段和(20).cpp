/*
	Name: 1049. ���е�Ƭ�κ�(20)
	Author: spencercjh
	Date: 2017��9��3�� 14:38:35 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int n;
	double v,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&v);
		ans+=v*i*(n+1-i);
	}
	printf("%.2f\n",ans);
	return 0;
}
