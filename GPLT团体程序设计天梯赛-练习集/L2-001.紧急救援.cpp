/*
	Name:L2-001紧急救援 
	Author: spencercjh
	Date:2017年11月15日15:41:14 
	Description:团体程序设计天梯赛-练习集
	reference:算法笔记 P380 
	key word:Dijkstra Dfs 
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
const int MAXV=510;
const int INF=0x3f3f3f3f;
int n,m,st,ed,G[MAXV][MAXV],weight[MAXV];
int d[MAXV],w[MAXV],num[MAXV],pre[MAXV];
bool vis[MAXV]= {false};
vector<int> ans;
void Dijkstra(int s) {
	//初始化边权、点权、边数数组 
	fill(d,d+MAXV,INF);
	fill(num,num+MAXV,0);
	fill(w,w+MAXV,0);
	//设置起点数据 
	d[s]=0;
	w[s]=weight[s];
	num[s]=1;
	//初始化路径数组 
	for(int i=0; i<n; i++) {
		pre[i]=i;
	}
	//Dijkstra外层循环 
	for(int i=0; i<n; i++) {
		int u=-1,MIN=INF;//u使d[u]最小，MIN存放该最小的d[u] 
		for(int j=0; j<n; j++) {//找到未访问的顶点中d[u]最小的 
			if(vis[j]==false&&d[j]<MIN) {
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) {//找不到小于INF的d[u],说明剩下的顶点和起点s不连通 
			return;
		}
		vis[u]=true;
		for(int v=0; v<n; v++) {
			if(vis[v]==false&&G[u][v]!=INF) {
				if(d[u]+G[u][v]<d[v]) {
					d[v]=d[u]+G[u][v];
					w[v]=w[u]+weight[v];
					num[v]=num[u];
					pre[v]=u;
				} else if(d[u]+G[u][v]==d[v]) {
					if(w[u]+weight[v]>w[v]) {
						w[v]=w[u]+weight[v];
						pre[v]=u;
					}
					num[v]+=num[u];
				}
			}
		}
	}
}
void DFS_Path(int s,int v) {
	if(v==s) {
		ans.push_back(s);
		return;
	}
	DFS_Path(s,pre[v]);
	ans.push_back(v);
}
int main() {
	scanf("%d %d %d %d",&n,&m,&st,&ed);
	for(int i=0; i<n; i++) {
		scanf("%d",&weight[i]);
	}
	fill(G[0],G[0]+MAXV*MAXV,INF);
	for(int i=0; i<m; i++) {
		int u,v;
		scanf("%d %d",&u,&v);
		scanf("%d",&G[u][v]);
		G[v][u]=G[u][v];
	}
	Dijkstra(st);
	printf("%d %d\n",num[ed],w[ed]);
	DFS_Path(st,ed);
	for(unsigned i=0;i<ans.size();i++){
		if(i!=ans.size()-1){
			printf("%d ",ans[i]);	
		}else{
			printf("%d",ans[i]);
		}
	}
	return 0;
}
