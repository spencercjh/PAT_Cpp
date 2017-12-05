/*
	Name:L2-012. 关于堆的判断
	Author: spencercjh
	Date:2017年11月14日16:01:27
	Description:GPLT团体程序设计天梯赛-练习集
	reference:stl_heap:https://www.cnblogs.com/coderyoyo/archive/2011/01/21/stl_heap.html
	key word:stl_vector,stl_heap
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
int main() {
	int N,M;
	scanf("%d %d",&N,&M);
	vector<int> heap;
	for(int i=0; i<N; i++) {
		int t;
		scanf("%d",&t);
		heap.push_back(t);
		make_heap(heap.begin(),heap.end(),greater<int>());
	}
	for(int i=0; i<M; i++) {
		int x,y;
		char cmd[20],tmp[20];
		scanf("%d%s",&x,cmd);
		if(cmd[0]=='a') {
			//A和B是不是兄弟节点即判断A和B的父亲节点相不相等
			scanf("%d%s%s",&y,cmd,tmp);
			int index_x=-distance(find(heap.begin(),heap.end(),x),heap.begin());
			int index_y=-distance(find(heap.begin(),heap.end(),y),heap.begin());
			if((index_x+1)/2==(index_y+1)/2) {
				printf("T\n");
			} else {
				printf("F\n");
			}
		} else {
			scanf("%s%s",tmp,cmd);
			if(cmd[0]=='r') {
				//A 是不是堆的根
				if(x==heap[0]) {
					printf("T\n");
				} else {
					printf("F\n");
				}
			} else if(cmd[0]=='p') {
				//A是不是B的父节点
				scanf("%s%d",tmp,&y);
				int index_x=-distance(find(heap.begin(),heap.end(),x),heap.begin());
				int index_y=-distance(find(heap.begin(),heap.end(),y),heap.begin());
				if(2*index_x+1==index_y||2*index_x+2==index_y) {
					printf("T\n");
				} else {
					printf("F\n");
				}
			} else if(cmd[0]=='c') {
				//A是不是B的孩子节点
				scanf("%s%d",tmp,&y);
				int index_x=-distance(find(heap.begin(),heap.end(),x),heap.begin());
				int index_y=-distance(find(heap.begin(),heap.end(),y),heap.begin());
				if(2*index_y+1==index_x||2*index_y+2==index_x) {
					printf("T\n");
				} else {
					printf("F\n");
				}
			}
		}
	}
}
