/*
	Name: 1047. 编程团体赛(20)
	Author: spencercjh
	Date: 2017年9月3日 13:15:48 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
typedef struct node
{
	int team;
	int code;
	int score;
}student;
int main()
{
	int N;
	scanf("%d",&N);
	int hash[1001]={0};
	for(int i=0;i<N;i++)
	{
		student input;
		scanf("%d-%d %d",&input.team,&input.code,&input.score);
		hash[input.team]+=input.score;
	}
	int* max=max_element(hash+1,hash+1000);
	cout<<max-hash<<" "<<*max;
	return 0;
}
