/*
	Name:L2-003. 月饼
	Author: spencercjh
	Date:2017年11月15日23:24:40
	Description:团体程序设计天梯赛-练习集
	reference:
	key word:Greedy Algorithm
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
	int stock;
	int money;
	double price;
	bool operator <(const node&a) const {
		return price>a.price;
	}
};
int main() {
	node mk[1000];
	int N,D;
	scanf("%d %d",&N,&D);
	for(int i=0; i<N; i++) {
		scanf("%d",&mk[i].stock);
	}
	for(int i=0; i<N; i++) {
		scanf("%d",&mk[i].money);
		mk[i].price=1.00*mk[i].money/mk[i].stock;
	}
	sort(mk,mk+N);
	double sum=0;
	for(int i=0; i<N; i++) {
		if(D<=0)
			break;
		if(D>=mk[i].stock) {
			D=D-mk[i].stock;
			sum+=mk[i].money;
		} else if(D<mk[i].stock) {
			sum+=D*mk[i].price;
			D=0;
		}
	}
	printf("%.2lf\n",sum);
	return 0;
}
