/*
	Name:L2-007. 家庭房产
	Author: spencercjh
	Date:2017年11月17日09:10:43 
	Description:团体程序设计天梯赛-练习集
	Reference:http://www.cnblogs.com/yinzm/p/5520897.html
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
const int MAXN = 10000;
const int INF=0x3f3f3f3f;//http://blog.csdn.net/jiange_zh/article/details/50198097
bool vis[MAXN]= {false};
double house[MAXN],area[MAXN],sum_house, sum_area;
vector<int> v[MAXN];
int n, min_id, cnt;
struct Node {
	int id, sum_person;
	double avg_house, avg_area;
	Node() {}
	Node(int a, int b, double c, double d) {
		id = a;
		sum_person = b;
		avg_house = c;
		avg_area = d;
	}
};
vector<Node> ans;
bool cmp(Node A, Node B) {
	if(A.avg_area != B.avg_area)
		return A.avg_area > B.avg_area;
	else
		return A.id < B.id;
}
void dfs(int x) {
	vis[x] = false;
	min_id = min(min_id, x);
	cnt++;
	sum_house += house[x];
	sum_area += area[x];
	int len = v[x].size();
	for(int i = 0; i < len; i++) {
		if(vis[v[x][i]])
			dfs(v[x][i]);
	}
}
int main() {
	scanf("%d", &n);
	int id, father, mother, kidnum, kid;
	for(int i = 0; i < n; i++) {
		scanf("%d%d%d%d", &id, &father, &mother, &kidnum);
		vis[id] = true;
		if(father != -1) {
			v[id].push_back(father);
			v[father].push_back(id);
			vis[father] = true;
		}
		if(mother != -1) {
			v[id].push_back(mother);
			v[mother].push_back(id);
			vis[mother] = true;
		}
		for(int j = 0; j < kidnum; j++) {
			scanf("%d", &kid);
			v[id].push_back(kid);
			v[kid].push_back(id);
			vis[kid] = true;
		}
		scanf("%lf%lf", &house[id], &area[id]);
	}
	for(int i = 0; i < MAXN; i++) {
		if(vis[i]) {
			min_id = INF;
			cnt = 0;
			sum_house = sum_area = 0;
			dfs(i);
			Node node = Node(min_id, cnt, sum_house/cnt, sum_area/cnt);
			ans.push_back(node);
		}
	}
	sort(ans.begin(), ans.end(), cmp);
	int len = ans.size();
	printf("%d\n", ans.size());
	for(int i = 0; i < len; i++) {
		printf("%04d %d %.3lf %.3lf\n", ans[i].id, ans[i].sum_person, ans[i].avg_house,
		       ans[i].avg_area);
	}
	return 0;
}
