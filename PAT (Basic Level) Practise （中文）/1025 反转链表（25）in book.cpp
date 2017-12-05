/*
	Name: 1025 反转链表（25）
	Author: spencercjh
	Date: 2017年9月11日 21:17:10 
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
const int maxn=100010;
struct node
{
	int address,data,next;
	int order=maxn;
	bool operator<(const node& a) const
	{
		return order>a.order;
	}
}node[maxn];
int main()
{
	int begin,n,k,address;
	scanf("%d %d %d",&begin,&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&address);
		scanf("%d %d",&node[address].data,&node[address].next);
		node[address].address=address;
	}
	int p=begin,count=0;
	while(p!=-1)
	{
		node[p].order=count++;
		p=node[p].next;
	}
	sort(node,node+maxn);
	reverse(node,node+maxn);
	n=count;
	for(int i=0;i<n/k;i++)
	{
		for(int j=(i+1)*k-1;j>i*k;j--)
			printf("%05d %d %05d\n",node[j].address,node[j].data,node[j-1].address);
		printf("%05d %d ",node[i*k].address,node[i*k].data);
		if(i<n/k-1)
			printf("%05d\n",node[(i+2)*k-1].address);
		else
		{
			if(n%k==0)
				printf("-1\n");
			else
			{
				printf("%05d\n",node[(i+1)*k].address);
				for(int i=n/k*k;i<n;i++)
				{
					printf("%05d %d ",node[i].address,node[i].data);
					if(i<n-1)
						printf("%05d\n",node[i+1].address);
					else
						printf("-1\n");
				}
			}
		}
	}
	return 0;
}
	
			
