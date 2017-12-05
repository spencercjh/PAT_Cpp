/*
	Name:L2-002. 链表去重
	Author: spencercjh
	Date:2017年11月15日22:36:50 
	Description:团体程序设计天梯赛-练习集
	reference:1075. 链表元素分类(25) PAT Basic Level C/C++
	key word:static linked list,stl_vector
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
const int move=10000;
struct node{
	int Address,Key,Next;
};
int main(){
	int begin,N;
	scanf("%d %d",&begin,&N);
	bool Table[10010];
	fill(Table,Table+10010,false);
	node HashTable[100010];
	node* A=new node[N];
	vector<node> V;
	for(int i=0;i<N;i++){
		scanf("%d %d %d",&A[i].Address,&A[i].Key,&A[i].Next);
		HashTable[A[i].Address]=A[i];
	}
	for(int address=begin;address!=-1;address=HashTable[address].Next){
		V.push_back(HashTable[address]);
	}
	vector<node> ans1;
	vector<node> ans2;
	for(int i=0;i<V.size();i++){
		if(Table[abs(V[i].Key)]==false){
			Table[abs(V[i].Key)]=true;
			ans1.push_back(V[i]);
		}else{
			ans2.push_back(V[i]);
		}
	}
	for(int i=0;i<ans1.size();i++){
		if(i!=ans1.size()-1){
			ans1[i].Next=ans1[i+1].Address;
			printf("%05d %d %05d\n",ans1[i].Address,ans1[i].Key,ans1[i].Next);
		}else{
			printf("%05d %d %d\n",ans1[i].Address,ans1[i].Key,-1);
		}
	}
	for(int i=0;i<ans2.size();i++){
		if(i!=ans2.size()-1){
			ans2[i].Next=ans2[i+1].Address;
			printf("%05d %d %05d\n",ans2[i].Address,ans2[i].Key,ans2[i].Next);
		}else{
			printf("%05d %d %d\n",ans2[i].Address,ans2[i].Key,-1);
		}
	}
}

