/*
	Name:L2-004. 这是二叉搜索树吗？
	Author: spencercjh
	Date:2017年11月17日09:13:23
	Description:团体程序设计天梯赛-练习集
	reference:http://blog.csdn.net/dengkuomin/article/details/61916165
	key word:
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
const int maxn=100001;
int a[maxn],t;
bool f(int left,int right,int situation) { ///遍历
	if(left>=right)
		return true;///数组出界
	int s=a[left],i;
	bool p,q;
	for(i=left+1; i<=right+1; i++) {
		p=q=true;
		for(int j=i; j<=right; j++)///左子树
			if(situation?s>a[j]:s<=a[j]) {
				p=false;
				break;
			}
		for(int j=i-1; j>left; j--) { ///右子树
			if(situation?s<=a[j]:s>a[j]) {
				q=false;
				break;
			}
		}
		if(q&&p)
			break;
	}
	if(p&&q)
		return f(left+1,i-1,situation)&&f(i,right,situation);///进一步遍历左右子树
	else
		return false;
}
void shuchu(int left,int right,int situation) {
	if(left>right)
		return;
	if(left==right) {
		printf(++t==1 ? "%d" :" %d",a[left]);
		return;
	}
	int s=a[left],i;
	bool p,q;
	for(i=left+1; i<=right+1; i++) {
		p=q=true;
		for(int j=i; j<=right; j++)///左子树
			if(situation?s>a[j]:s<=a[j]) {
				p=false;
				break;
			}
		for(int j=i-1; j>left; j--)///右子树
			if(situation?s<=a[j]:s>a[j]) {
				q=false;
				break;
			}
		if(q&&p)
			break;
	}
	shuchu(left+1,i-1,situation);
	shuchu(i,right,situation);
	printf(++t==1 ? "%d" :" %d",s);
}
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	int t=0;
	if(f(0,n-1,1)) {
		printf("YES\n");
		shuchu(0,n-1,1);
	} else if(f(0,n-1,0)) {
		printf("YES\n");
		shuchu(0,n-1,0);
	} else
		printf("NO");
	printf("\n");
	return 0;
}
