#include<cstdio>
#include <algorithm>
using namespace::std;
int main() {
	int number[100000],n,sum1=0,sum2=0,introverted=0,outgoing=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&number[i]);
	sort(number,number+n);
	introverted=n/2;
	outgoing=n-introverted;
	for(int i=0; i<introverted; i++)
		sum1+=number[i];
	for(int i=introverted; i<n; i++)
		sum2+=number[i];
	printf("Outgoing #: %d\n",outgoing);
	printf("Introverted #: %d\n",introverted);
	printf("Diff = %d\n",sum2-sum1);
	return 0;
}
