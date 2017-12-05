/*
	Name:L2-013. 红色警报
	Author: spencercjh
	Date:2017年11月15日20:13:28
	Description:团体程序设计天梯赛-练习集
	reference:http://blog.csdn.net/johsnows/article/details/62039389
	key word:DFS
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
const int MAXN=600;
int G[MAXN][MAXN];
int N,M;
int book[MAXN];
int top=0;
void DFS(int x) {
	book[x]=top;
//    printf("%d\N", x);
	for(int i=0; i<N; i++) {
		if(book[i]==0 && G[x][i]) {
			DFS(i);
		}
	}
	return;
}
int main() {
	scanf("%d %d",&N,&M);
	for(int i=0; i<M; i++) {
		int x,y;
		scanf("%d %d", &x, &y);
		G[x][y]=G[y][x]=1;
	}
	int K;
	scanf("%d",&K);
	for(int j=0; j<N; j++) {
		if(book[j]==0) {
			++top;
			DFS(j);
		}
	}
	int num=top;
	fill(book,book+MAXN,0);
	int sum=0;
	for(int k=0; k<K; k++) {
		int x;
		scanf("%d", &x);
		sum++;
		book[x]=-1;
		for(int i=0; i<N; i++)
			G[x][i]=G[i][x]=0;
		top=0;
		for(int j=0; j<N; j++) {
			if(book[j]==0) {
				++top;
				DFS(j);
			}
		}
		if(num<top) {
			printf("Red Alert: City %d is lost!\n", x);
		} else
			printf("City %d is lost.\n", x);
		num=top;   //记录上一次的连通分量
		for(int i=0; i<N; i++) {
			if(book[i]>0)
				book[i]=0;
		}  //将还没被进攻的访问过的城市初始化
	}
	if(sum==N) {
		printf("Game Over.\n");
	}
	return 0;
}
