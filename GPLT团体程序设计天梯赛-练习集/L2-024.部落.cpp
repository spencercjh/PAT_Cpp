/*
	Name:L2-024. 部落
	Author: spencercjh
	Date:2017年11月16日22:17:31 
	Description:http://blog.csdn.net/jelly_acm/article/details/70226350
	Reference:
	Key Word:并查集 
	Score:AC
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<functional>
#include<numeric>
#include<stack>
using namespace std;
int pre[10005];
int Hashtable[10005];
void init() {
	for(int i=0; i<10004; i++) {
		pre[i]=i;
		Hashtable[i]=0;
	}
}
int fin(int x) {
	if(pre[x]==x)
		return x;
	else{
		pre[x]=fin(pre[x]);
		return pre[x];
	}
}
int main() {
	init();
	int n,q,k,a,b;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>k;
		cin>>a;
		Hashtable[a]=1;
		for(int j=1; j<k; j++) {
			cin>>b;
			Hashtable[b]=1;
			int x=fin(a);
			int y=fin(b);
			if(x!=y)
				pre[x]=y;
		}
	}
	int cnt=0,tot=0;
	for(int i=0; i<10004; i++) {
		if(Hashtable[i]==1) {
			cnt++;
			if(pre[i]==i)
				tot++;
		}
	}
	printf("%d %d\n",cnt,tot);
	cin>>q;
	for(int i=0; i<q; i++) {
		cin>>a>>b;
		if(fin(a)==fin(b))
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
