/*
	Name: 1053. ס�������� (20)
	Author: spencercjh
	Date: 2017��9��4�� 13:53:18
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
	int N,D;
	double e;
	scanf("%d %lf %d",&N,&e,&D);
//	cin>>N>>e>>D;
	int perhaps_empty=0,empty=0;
	for(int i=0; i<N; i++)
	{
		int K,sum=0;
		scanf("%d",&K);
//		cin>>K;
		for(int j=0; j<K; j++)
		{
			double power; 
			scanf("%lf",&power);
			if(power<e)
				sum++;
		}
		if(sum>(K/2))
		{
			if(sum>D)
				empty++;
			else
				perhaps_empty++;
		}
	}
//	cout<<perhaps_empty<<" "<<empty<<endl;
	printf("%.1lf%% %.1lf%%\n",(double)perhaps_empty/N*100,(double)empty/N*100);
	return 0;
}
/*
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int N,D;
	double e;
	cin>>N>>e>>D;
	int n[N];
	double d;
	int possible=0;
	int must=0;
	for(int i=0; i<N; i++)
	{
		int day=0;
		cin>>n[i];                  //����۲������
		for(int j=0; j<n[i]; j++)   //����ÿ��۲���õ���
		{
			cin>>d;
			if(d<e)                 //����С��e������
				day++;
		}
		if(day>(n[i]/2))            //�������һ�������С��e����ܿ���
		{
			if(n[i]>D)              //����۲���������D��������һ������һ������
				must++;
			else possible++;        //�����ǿ��ܿ���
		}
	}                               //ע��Ҫ��ת����double��������100*possible/N�����possible=1��N=8����Ϊ12.0,������12.5
	printf("%.1lf%% %.1lf%%\n", (double)possible / N * 100, (double)must / N * 100);
	return 0;
}*/
