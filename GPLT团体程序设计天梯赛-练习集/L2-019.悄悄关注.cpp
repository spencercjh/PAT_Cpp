/*
	Name:L2-019. 悄悄关注
	Author: spencercjh
	Date:2017年11月16日20:13:08
	Description:团体程序设计天梯赛-练习集
	reference:http://blog.csdn.net/dengkuomin/article/details/66479088
	key word:stl_sort
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
struct P {
	int x;
	char y[20];
} a[10001];
bool cmp(P a,P b) {
	if(strcmp(a.y,b.y)>0)
		return false;
	else return true;
}
int main() {
	int n,m,f=0;
	char s[20];
	map<string,int>M;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%s",s);
		M[s]=1;
	}
	double s1=0;
	scanf("%d",&m);
	for(int i=0; i<m; i++) {
		scanf("%s %d",&a[i].y,&a[i].x);
		s1+=a[i].x;
	}
	s1/=m;
	sort(a,a+m,cmp);
	for(int i=0; i<m; i++)
		if(a[i].x>s1&&!M[a[i].y]) {
			f=1;
			printf("%s\n",a[i].y);
		}
	if(!f)
		printf("Bing Mei You\n");
	return 0;
}
