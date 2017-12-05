#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace::std;
double function(set<int> a, set<int> b) {
	vector<int>::iterator it;
	vector<int> uSet(a.size()+b.size());
	it=set_union(a.begin(), a.end(), b.begin(), b.end(), uSet.begin());
	int NT = int(it - uSet.begin());
	vector<int> ncset(min(a.size(),b.size()));
	it=set_intersection(a.begin(), a.end(), b.begin(), b.end(), ncset.begin());
	int NC =int(it-ncset.begin());
	return 100.0*NC/NT;
}
int main() {
	int N;
	cin >> N;
	if (N>50 || N <= 0)
		return 0;
	set<int> *sett = new set<int>[N + 1];
	for (int i = 1; i <= N; i++) {
		int M;
		cin >> M;
		//sett[i].clear();
		for (int j = 0; j<M; j++) {
			int a;
			cin >> a;
			sett[i].insert(a);
		}
	}
	int K;
	cin >> K;
	double *res = new double[K];
	for (int i = 0; i<K; i++) {
		int a, b;
		cin >> a >> b;
		res[i] = function(sett[a], sett[b]);
	}
	for (int i = 0; i < K; i++) {
		printf("%.2f%%\n",res[i]);
	}
	delete[] res;
	delete[] sett;
	return 0;
}

