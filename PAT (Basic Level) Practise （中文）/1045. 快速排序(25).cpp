/*
	Name: 1045. 快速排序(25)
	Author: spencercjh
	Date: 2017年9月3日 12:40:05 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
const int MAXN=100010;
const int INF=0x3fffffff;
int a[MAXN],leftmax[MAXN],rightmin[MAXN],ans[MAXN],num=0;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	leftmax[0]=0;
	for(int i=0;i<n;i++)
		leftmax[i]=max(leftmax[i-1],a[i-1]);
	rightmin[n-1]=INF;
	for(int i=n-2;i>=0;i--)
		rightmin[i]=min(rightmin[i+1],a[i+1]);
	for(int i=0;i<n;i++)
		if(leftmax[i]<a[i]&&rightmin[i]>a[i])
			ans[num++]=a[i];
	printf("%d\n",num);
	for(int i=0;i<num;i++)
	{
		printf("%d",ans[i]);
		if(i<num-1)
			printf(" ");
	}
	printf("\n");
	return 0;
}
