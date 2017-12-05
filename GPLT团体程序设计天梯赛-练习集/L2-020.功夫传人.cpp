/*
	Name:L2-020. 功夫传人
	Author: spencercjh
	Date:2017年11月16日22:56:14
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
vector<int> child[100005];      //储存徒弟的容器
double z,r,sum=0;
double val[100005];        //判断是否得道者和储存得道者倍数
void f(int id,double w) { //表示第id个人，w表示传承下来的功力值
	if(val[id]) {     //当倍数不为0，即是得道者，乘以倍数加到sum
		sum=sum+w*val[id];
	} else {
		for(int i=0; i<child[id].size(); i++) {
			f(child[id][i],w*r);              //把每个徒弟往下递归，传授给徒弟的功力值为w*r
		}
	}
}
int main() {
	fill(val,val+100004,0);    //初始化部分
	int n,m,k;
	scanf("%d %lf %lf",&n,&z,&r);
	r=(100-r)/100;                //题目为削弱r%,所以直接替换掉了
	for (int i = 0; i < n; i++) {
		scanf("%d",&m);          //m来判断是否为得道者
		if (!m) {                //得道者，所以倍数储存到val[]里
			scanf("%lf",&val[i]);
		} else {
			for (int j = 0; j <m; j++) {    //不是得道者，依序储存到child[]容器里
				scanf("%d",&k);
				child[i].push_back(k);
			}
		}
	}
	f(0,z);       //递归遍历,从0号祖师爷开始，功力为z
	printf("%d\n",(int)sum);     //保留整数输出
	return 0;
}
