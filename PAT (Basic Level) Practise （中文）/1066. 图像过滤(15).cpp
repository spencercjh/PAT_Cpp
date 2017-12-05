/*
	Name: 1066. 图像过滤(15)
	Author: spencercjh
	Date: 2017年9月5日 13:57:34 
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
	int row,col,A,B,R;
	scanf("%d %d %d %d %d",&row,&col,&A,&B,&R);
	int** P=new int*[row];
	for(int i=0;i<row;i++)
		P[i]=new int[col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			scanf("%d",&P[i][j]);
			if(P[i][j]>=A&&P[i][j]<=B)
				P[i][j]=R;
		}
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			if(j!=col-1)
				printf("%03d ",P[i][j]);
			else
				printf("%03d\n",P[i][j]);
	return 0;
}
