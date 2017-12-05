#include<cstdio>
#include<algorithm>
using namespace::std;
int main() {
	int N,K,M;
	scanf("%d%d%d",&N,&K,&M);
	int score[10000][10];
	float answer[10000];
	for(int i=0; i<N; i++)
		for(int j=0; j<K; j++)
			scanf("%d",&score[i][j]);
	for(int i=0; i<N; i++) {
		int sum=0;
		float ave=0;
		int maxx=*max_element(score[i],score[i]+K);
		int minn=*min_element(score[i],score[i]+K);
		for(int j=0; j<K; j++)
			sum+=score[i][j];
		sum=sum-maxx-minn;
		ave=1.000*sum/(K-2);
		answer[i]=ave;
	}
	sort(answer,answer+N);
	for(int i=N-M; i<=N-1; i++) {
		if(i!=N-1)
			printf("%.3f ",answer[i]);
		else
			printf("%.3f",answer[i]);
	}
	return 0;
}
