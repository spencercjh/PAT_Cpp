/*
	Name: L2-010. 排座位
	Author: spencercjh
	Date: 2017年10月22日 12:11:23
	Description:团体程序设计天梯赛-练习集 GPLT
				https://www.patest.cn/contests/gplt/L2-010
	ref:http://blog.csdn.net/lhrsdl/article/details/38119577
		http://www.cplusplus.com/reference/map/multimap/find/
		http://www.cnblogs.com/dongsheng/archive/2013/09/10/3311594.html
		http://www.cplusplus.com/reference/map/multimap/equal_range/
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
#include<stack>
using namespace::std;
int main()
{
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	multimap<int,int> Friend;
	multimap<int,int> Enemy;
	for(int i=1; i<=N; i++)	//初始化mutimap 
	{
		Friend.insert(pair<int,int>(i,i));
		Enemy.insert(pair<int,int>(i,i));
	}
	auto j=Friend.begin(),k=Friend.begin(),p=Enemy.begin(),q=Enemy.begin();
	for(int i=0; i<M; i++)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(c==1)	
		{
			j=Friend.find(a);
			k=Friend.find(b);
			if(j->first!=k->first)
			{
				Friend.insert(pair<int,int>(a,b));
				Friend.insert(pair<int,int>(b,a));
			}
		}
		else if(c==-1)
		{
			p=Enemy.find(a);
			q=Enemy.find(b);
			if(p->first!=q->first)
			{
				Enemy.insert(pair<int,int>(a,b));
				Enemy.insert(pair<int,int>(b,a));
			}
		}
	}
	for(int i=0; i<K; i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		bool friendflag=false,enemyflag=false,commonfriend=false;
		auto Friendbeg=Friend.lower_bound(a),Friendend=Friend.upper_bound(a);
		while(Friendbeg!=Friendend)
		{
			if(Friendbeg->second==b)
			{
				friendflag=true;
				break;
			}
			Friendbeg++;
		}
		auto Enemybeg=Enemy.lower_bound(a),Enemyend=Enemy.upper_bound(a);
		while(Enemybeg!=Enemyend)
		{
			if(Enemybeg->second==b)
			{
				enemyflag=true;
				break;
			}
			Enemybeg++;
		}
		auto commonbeg=Friend.lower_bound(b),commonend=Friend.upper_bound(b);
		if(enemyflag)	//双方有敌对关系，寻找双方的共同朋友
		{
			Friendbeg=Friend.lower_bound(a);	//之前Friendbeg已经经历过一个循环，在此规整
			while(Friendbeg!=Friendend)
			{
				commonbeg=Friend.lower_bound(b);	//之前commonbeg已经经历过一个循环，在此规整
				while(commonbeg!=commonend)
				{
					if(Friendbeg->second==commonbeg->second)
					{
						commonfriend=true;
						break;
					}
					commonbeg++;
				}
				Friendbeg++;
			}
		}
		if(friendflag)
			printf("No problem\n");
		else if(enemyflag)
		{
			if(commonfriend)
				printf("OK but...\n");
			else
				printf("No way\n");
		}
		else
			printf("OK\n");
	}
}
