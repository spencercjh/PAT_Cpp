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
		else {	//S中只存放每个轨道中的最小的值
			auto it=S.lower_bound(t);//寻找一个不小于t的值的迭代器
			if(it == S.end())	//作为新的队伍。
				S.insert(t);
			else {	//插入最接近它车号的队伍的队尾
				S.erase(it);
				S.insert(t);
			}
		}
	}
	printf("%d\n",S.size());
	return 0;
}
