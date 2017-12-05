/*
	Name: 1046. »®È­(15)
	Author: spencercjh
	Date: 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
struct node
{
	int han;
	int hua;
};
int main()
{
	int N,ansJ=0,ansY=0;
	scanf("%d",&N);
	node J,Y;
	for(int i=0;i<N;i++)
	{
		scanf("%d %d %d %d",&J.han,&J.hua,&Y.han,&Y.hua);
		if(J.hua==J.han+Y.han&&Y.hua==J.han+Y.han)
			continue;
		else if(J.hua==J.han+Y.han)
			ansY++;
		else if(Y.hua==J.han+Y.han)
			ansJ++;
	}
	printf("%d %d",ansJ,ansY);
	return 0;
}
