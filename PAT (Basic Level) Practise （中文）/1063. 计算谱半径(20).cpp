/*
	Name: 1063. �����װ뾶(20)
	Author: spencercjh
	Date: 2017��9��5�� 12:50:32 
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
	int a;
	int b;
};
int main()
{
	int N;
	scanf("%d",&N);
	double* M=new double[N];
	for(int i=0;i<N;i++)
	{
		node input;
		scanf("%d %d",&input.a,&input.b);
		M[i]=sqrt(double(input.a*input.a+input.b*input.b));
	}
	printf("%.2lf",*max_element(M,M+N));
	return 0;
}
