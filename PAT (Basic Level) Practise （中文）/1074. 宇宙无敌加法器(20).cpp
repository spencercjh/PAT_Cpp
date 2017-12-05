/*
	Name: 1074. 宇宙无敌加法器(20)
	Author: spencercjh
	Date: 2017年9月18日 08:25:17
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
	int t[20],jc[20];
	char ic;
	int N=0;
	while(ic!='\n')
	{
		scanf("%c",&ic);
		if(ic!='\n')
			jc[N++]=ic-'0';
	}
	for(int i=0; i<N; i++)
	{
		if(jc[i]==0)
			jc[i]=10;
	}
	/*for(int i=0;i<N;i++)
	     printf("%d",jc[i]);
	printf("\n");*/
	int* n1=new int[N];
	int* n2=new int[N];
	int N1=0,N2=0;
	for(int i=0; i<N; i++)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
			n1[i]=c-'0';
			N1++;
		}
		else
			break;
	}
	getchar();
	for(int i=0; i<N; i++)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
			n2[i]=c-'0';
			N2++;
		}
		else
			break;
	}
	int* num1=new int[N];
	int* num2=new int[N];
	if(N1!=N)
	{
		int move=N-N1;
		for(int i=0; i<move; i++)
		{
			num1[i]=0;
		}
		for(int i=move,t=0; i<N; i++,t++)
		{
			num1[i]=n1[t];
		}
	}
	else
	{
		for(int i=0; i<N; i++)
			num1[i]=n1[i];
	}
	if(N2!=N)
	{
		int move=N-N2;
		for(int i=0; i<move; i++)
		{
			num2[i]=0;
		}
		for(int i=move,t=0; i<N; i++,t++)
		{
			num2[i]=n2[t];
		}
	}
	else
	{
		for(int i=0; i<N; i++)
			num2[i]=n2[i];
	}
	/*for(int i=0;i<N;i++)
	{
	    printf("%d",num1[i]);
	}
	printf("\n");
	for(int i=0;i<N;i++)
	{
	    printf("%d",num2[i]);
	}
	printf("\n"); */
	int jw=0;
	for(int i=N-1; i>=0; i--)
	{
		//printf("%d+%d+%d=",num1[i],num2[i],jw);
		num2[i]+=num1[i]+jw;
		//printf("%d\n",num2[i]);
		if(num2[i]>jc[i])
		{
			jw=1;
			num2[i]=num2[i]-jc[i];
		}
		else if(num2[i]==jc[i])
		{
			jw=1;
			num2[i]=0;
		}
		else
			jw=0;
	}
	bool flag=false;
	for(int i=0; i<N; i++)
	{
		if(num2[i]==0&&flag==false)
			continue;
		else
		{
			printf("%d",num2[i]);
			flag=true;
		}
	}
	printf("\n");
	return 0;
}
