/*
	Name:L2-012. ���ڶѵ��ж�
	Author: spencercjh
	Date:2017��11��14��16:01:27
	Description:GPLT����������������-��ϰ��
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
			//A��B�ǲ����ֵܽڵ㼴�ж�A��B�ĸ��׽ڵ��಻���
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
				//A �ǲ��Ƕѵĸ�
				if(x==heap[0]) {
					printf("T\n");
				} else {
					printf("F\n");
				}
			} else if(cmd[0]=='p') {
				//A�ǲ���B�ĸ��ڵ�
				scanf("%s%d",tmp,&y);
				int index_x=-distance(find(heap.begin(),heap.end(),x),heap.begin());
				int index_y=-distance(find(heap.begin(),heap.end(),y),heap.begin());
				if(2*index_x+1==index_y||2*index_x+2==index_y) {
					printf("T\n");
				} else {
					printf("F\n");
				}
			} else if(cmd[0]=='c') {
				//A�ǲ���B�ĺ��ӽڵ�
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
