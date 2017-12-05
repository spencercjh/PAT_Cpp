/*
	Name:L2-022. 重排链表
	Author: spencercjh
	Date:2017年11月16日21:02:44 
	Description:团体程序设计天梯赛-练习集
	reference:
	key word:static linked list
	score:22/25 
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
struct node {
	int Address,Data,Next;
};
int main() {
	int begin,N;
	node Hashtable[100000];
	scanf("%d %d",&begin,&N);
	vector<node> V;
	vector<node> Ans(N);	//[]访问需要提前确定空间 
	for(int i=0; i<N; i++) {
		node input;
		scanf("%d %d %d",&input.Address,&input.Data,&input.Next);
		Hashtable[input.Address]=input;
	}
	for(int address=begin; address!=-1; address=Hashtable[address].Next) {
		V.push_back(Hashtable[address]);
	}
	for(int i=0,j=N-1,k=0; i<N; i++) {
		if(i%2==0) {
			Ans[i]=V[j--];
		} else {
			Ans[i]=V[k++];
		}
	}
	for(int i=0; i<N; i++) {
		if(i!=N-1) {
			Ans[i].Next=Ans[i+1].Address;
			printf("%05d %d %05d\n",Ans[i].Address,Ans[i].Data,Ans[i].Next);
		} else
			printf("%05d %d %d\n",Ans[i].Address,Ans[i].Data,-1);
	}
}
