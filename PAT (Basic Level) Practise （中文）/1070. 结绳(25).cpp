/*
	Name: 1070. 结绳(25)
	Author: spencercjh
	Date: 2017年9月6日 15:24:43 
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
using namespace::std;
int main()
{
	int N;
	scanf("%d",&N);
	vector<int> V(N);
	for(int i=0;i<N;i++)
		scanf("%d",&V[i]);
	sort(V.begin(),V.end());
	int result=V[0];
	for(int i=1;i<N;i++)
		result=(result+V[i])/2;
	printf("%d",result);
	return 0;
}
