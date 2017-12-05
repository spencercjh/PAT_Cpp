/*
	Name:L2-023. 图着色问题 
	Author: spencercjh
	Date:2017年11月16日22:39:50 
	Description:团体程序设计天梯赛-练习集 
	Reference:
	Key Word:DFS
	Score:AC
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
int v, e, k;
int map[501][501] = {0};
int color[501] = {0};
bool flag = true;
bool vis[501];
void DFS(int i) {
	if (vis[i] || flag == false) {
		return;
	}
	vis[i] = true;
	for (int j = 0; j < v; j++) {
		if (color[i] == color[j] && map[i][j] == 1) {
			flag = false;
			return;
		} else if (map[i][j] == 1 && vis[j] == false) {
			DFS(j);
		}
	}
}
int main() {
	scanf("%d %d %d",&v,&e,&k); 
	for (int i = 0; i < e; i++) {
		int x, y;
		scanf("%d %d",&x,&y);
		map[--x][--y] = 1;
		map[y][x] = 1;
	}
	int m;
	scanf("%d",&m);
	for (int i = 0; i < m; i++) {
		set<int> s;
		for (int j = 0; j < v; j++) {
			int c;
			scanf("%d",&c);
			s.insert(c);
			color[j] = c;
		}
		if (s.size() != k) {
			flag = false;
		} else {
			fill(vis,vis+500,false);
			flag = true;
			for (int j = 0; j < v; j++) {
				DFS(j);
				if (flag == false) {
					break;
				}
			}
		}
		if (flag) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
