/*
	Name:L2-016. 愿天下有情人都是失散多年的兄妹
	Author: spencercjh
	Date:2017年11月15日22:20:38
	Description:团体程序设计天梯赛-练习集
	reference:http://blog.csdn.net/liuchuo/article/details/52270273?locationNum=5
	key word:BFS
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
	int f, m, sex;
};
node v[100010];
int level[100010];
bool exist[100010];
int main() {
	int n, m, id, father, mother, a, b;
	scanf("%d", &n);
	char c;
	for(int i = 0; i < n; i++) {
		scanf("%d %c %d %d", &id, &c, &father, &mother);
		v[id].f = father, v[id].m = mother;
		if(c == 'M')
			v[id].sex = 0;
		else
			v[id].sex = 1;
		exist[id] = true;
		v[father].sex = 0;
		v[mother].sex = 1;
	}
	scanf("%d", &m);
	for(int i = 0; i < m; i++) {
		fill(level, level + 100010, 0);
		scanf("%d%d", &a, &b);
		if(v[a].sex == v[b].sex) {
			printf("Never Mind\n");
			continue;
		}
		queue<int> q;
		q.push(a);
		q.push(b);
		level[a] = 1;
		level[b] = 1;
		set<int> s;
		int flag = 0;
		while(!q.empty()) {
			int top = q.front();
			q.pop();
			int size = s.size();
			s.insert(top);
			if(size == s.size()) {
				printf("No\n");
				flag = 1;
				break;
			}
			if(exist[top] == false)
				continue;
			if(level[top] <= 4) {
				int fa = v[top].f;
				int mo = v[top].m;
				if(fa != -1) {
					q.push(fa);
					level[fa] = level[top] + 1;
				}
				if(mo != -1) {
					q.push(mo);
					level[mo] = level[top] + 1;
				}
			}
		}
		if(flag == 0)
			printf("Yes\n");
	}
	return 0;
}
