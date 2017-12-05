/*
	Name:L2-018. 多项式A除以B
	Author: spencercjh
	Date:2017年11月17日09:26:38 
	Description:团体程序设计天梯赛-练习集
	Reference:http://blog.csdn.net/silence401/article/details/68961133
	Key Word:Maths
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
const int maxn = 1000000;
int x, lena, lenb, maxa, maxb, cntc, cnta;
double y, a[maxn + 5], b[maxn + 5], c[maxn + 5];
void input(int len, double *arr, int *maxx) {
	for (int i = 0; i < len; i++) {
		scanf("%d%lf", &x, &y);
		arr[x] = y;
		*maxx = max(*maxx, x);
	}
}
void clearzero(int &cnt, int be, double *arr) {
	cnt = 0;
	for (int i = be; i >= 0; i--) {
		if (!(fabs(arr[i]) < 1e-8)) {
			fabs(arr[i]) < 0.05 ? arr[i] = 0.0 : cnt++;
		}
	}
}
void output(int cnt, int be, double *arr) {
	if (cnt == 0) {
		puts("0 0 0.0");
	} else {
		printf("%d", cnt);
		for (int i = be; i >= 0; i--) {
			if (!(fabs(arr[i]) < 1e-8)) {
				printf(" %d %.1f", i, arr[i]);
			}
		}
		puts("");
	}
}
int main() {
	maxa = maxb = -1;
	scanf("%d", &lena);
	input(lena, a, &maxa);
	scanf("%d", &lenb);
	input(lenb, b, &maxb);
	for (int i = maxa; i >= maxb; i--) {
		c[i - maxb] = a[i] / b[maxb];
		for (int j = maxb; j >= 0; j--) {
			a[j + i - maxb] -= b[j] * c[i - maxb];
		}
	}
	clearzero(cntc, maxa - maxb, c);
	clearzero(cnta, maxb, a);
	output(cntc, maxa - maxb, c);
	output(cnta, maxb - 1, a);
	return 0;
}
