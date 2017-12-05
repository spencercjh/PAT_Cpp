#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<iostream>
using namespace::std;
struct node {
	int index;
	int amount;
	int money;
	bool operator < (const node& a) const {
		if(money!=a.money) {
			return money>a.money;
		}
		return amount>a.amount||(index<a.index);
	}
};
int main() {
	node people[10000];
	int n,i,j,k;
	//printf("请输入参与发红包和抢红包的总人数：\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		people[i].index=i;
		people[i].money=0;
		people[i].amount=0;
	}
	for(i=1; i<=n; i++) {
		//printf("请输入第%d个人发出去的红包个数：\n",i);
		scanf("%d",&k);
		people[i].amount=k;
		for(j=1; j<=k; j++) {
			//printf("请输入第%d个红包是谁抢的，金额为多少：\n",j);
			int a,b;
			scanf("%d%d",&a,&b);
			people[a].money+=b;
			people[i].money-=b;
		}
	}
	sort(people+1,people+n+1);
	for(i=1; i<=n; i++)
		//cout<<people[i].index<<" "<<setprecision(3)<<0.01*people[i].money<<endl;
		printf("%d %.2f\n",people[i].index,0.01*people[i].money);
	return 0;
}

