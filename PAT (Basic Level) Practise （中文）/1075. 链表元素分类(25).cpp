/*
	Name: 1075. 链表元素分类(25)
	Author: spencercjh
	Date: 2017年9月18日 08:26:56
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
struct node {
	int address;
	int data;
	int next;
};
int main() {
	int begin,N,K;
	node table[100000];
	scanf("%d %d %d",&begin,&N,&K);
	node* A=new node[N];
	vector<node> V;
	for(int i=0; i<N; i++) {
		scanf("%d %d %d",&A[i].address,&A[i].data,&A[i].next);
		table[A[i].address]=A[i];
	}
	for(int add=begin; add!=-1; add=table[add].next)
		V.push_back(table[add]);
	vector<node> ans;
	for(int i=0; i<V.size(); i++) {
		if(V[i].data<0) {
			ans.push_back(V[i]);
		}
	}
	for(int i=0; i<V.size(); i++) {
		if(V[i].data>=0&&V[i].data<=K) {
			ans.push_back(V[i]);
		}
	}
	for(int i=0; i<V.size(); i++) {
		if(V[i].data>K) {
			ans.push_back(V[i]);
		}
	}
	for(int i=0; i<ans.size(); i++) {
		if(i!=ans.size()-1) {
			ans[i].next=ans[i+1].address;
			printf("%05d %d %05d\n",ans[i].address,ans[i].data,ans[i].next);
		} else
			printf("%05d %d %d\n",ans[i].address,ans[i].data,-1);
	}
	return 0;
}

