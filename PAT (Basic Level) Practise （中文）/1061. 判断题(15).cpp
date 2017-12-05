/*
	Name: 1061. 判断题(15)
	Author: spencercjh
	Date: 2017年9月5日 12:21:11 
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
	int points;
	int answer;
};
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	node* A=new node[M+1];
	int* score=new int[N]{0};
	for(int i=1;i<=M;i++)
		scanf("%d",&A[i].points);
	for(int i=1;i<=M;i++)
		scanf("%d",&A[i].answer);
	for(int i=0;i<N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			int inputans;
			scanf("%d",&inputans);
			if(inputans==A[j].answer)
				score[i]+=A[j].points;
		}
	}
	for(int i=0;i<N;i++)
		printf("%d\n",score[i]);
	return 0;
}
