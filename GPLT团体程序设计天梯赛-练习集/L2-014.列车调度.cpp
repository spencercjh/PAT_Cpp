//ref:http://blog.csdn.net/liuchuo/article/details/51957816
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	int t,n;
	set<int> S;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&t);
		if(S.empty())
			S.insert(t);
		else {	//S��ֻ���ÿ������е���С��ֵ
			auto it=S.lower_bound(t);//Ѱ��һ����С��t��ֵ�ĵ�����
			if(it == S.end())	//��Ϊ�µĶ��顣
				S.insert(t);
			else {	//������ӽ������ŵĶ���Ķ�β
				S.erase(it);
				S.insert(t);
			}
		}
	}
	printf("%d\n",S.size());
	return 0;
}
