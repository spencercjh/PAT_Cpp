/*
	Name:L2-021. 点赞狂魔
	Author: spencercjh
	Date:2017年4月25日 
	Description:团体程序设计天梯赛-练习集
	Reference:
	Key Word:stl
	Score:24/25 
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
	string name;
	vector<long long int>type;
	int nn;
	int number;
	bool operator <(const node &a) const {

		if(number==a.number) {
			int delta1,delta2;
			delta1=nn-number;
			delta2=a.nn-a.number;
			return delta1<delta2;
		}
		return number>a.number;
	}
};
int main() {
	node user[100];
	int N;
	cin>>N;
	if(N<=0||N>100)
		return 0;
	for(int i=0; i<N; i++) {
		cin>>user[i].name;
		int n;
		cin>>n;
		user[i].nn=n;
		if(n>1000)
			return 0;
		for(int j=0; j<n; j++) {
			long long int a;
			cin>>a;
			user[i].type.push_back(a);
		}
	}
	for(int i=0; i<N; i++) {
		sort(user[i].type.begin(),user[i].type.end());
		auto it=unique(user[i].type.begin(),user[i].type.end());
		user[i].type.erase(it,user[i].type.end());
		user[i].number=user[i].type.size();
	}
	sort(user,user+N);
	if(N>=3) {
		for(int i=0; i<3; i++) {
			if(i!=2)
				cout<<user[i].name<<" ";
			else if(i==2)
				cout<<user[i].name;
		}
	} else {
		cout<<user[0].name<<" "<<user[1].name<<" -";
	}
	return 0;
}

