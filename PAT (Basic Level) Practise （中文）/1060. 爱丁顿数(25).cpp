/*
	Name: 1060. 爱丁顿数(25)
	Author: spencercjh
	Date: 2017年9月4日 18:01:21 
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
	int N;
	scanf("%d",&N);
	int* array=new int[N+1];
	for(int i=1;i<=N;i++)
		scanf("%d",&array[i]);
	sort(array+1,array+N+1);
	reverse(array+1,array+N+1);
	int ans=0,p=1;
	while(ans<=N&&array[p]>p)
	{
		ans++;
		p++;
	}
	printf("%d",ans);
	return 0;
}
	
