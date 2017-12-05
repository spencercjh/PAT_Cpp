#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct node
{
	int code;
	int de;
	int cai;
	int zong;
	int kind;
	bool operator<(const node& a)const
	{
		if(kind==a.kind)
			if(zong==a.zong)
				if(de==a.de)
					return code<a.code;
				else
					return de>a.de;
			else
				return zong>a.zong;
		else
			return kind<a.kind;
	}
};
int N,L,H,M=0;
vector<node> V;	//应该用4个vector！！！解决超时问题！ 
int main()
{
	scanf("%d %d %d",&N,&L,&H);
	for(int i=0; i<N; i++)
	{
		node input;
//		cin>>input.code>>input.de>>input.cai;
//		cin>>input.code;
		scanf("%d %d %d",&input.code,&input.de,&input.cai);
		input.zong=input.de+input.cai;
		if(input.de>=H&&input.cai>=H)
		{
			input.kind=1;
			M++;
		}
		else if(input.de>=H&&input.cai<H&&input.cai>=L)
		{
			input.kind=2;
			M++;
		}
		else if(input.de<H&&input.cai<H&&input.de>=input.cai&&input.de>=L&&input.cai>=L)
		{
			input.kind=3;
			M++;
		}
		else if(input.de>=L&&input.cai>=L)
		{
			input.kind=4;
			M++;
		}
		else
			input.kind=5;
		V.push_back(input);
	}
	sort(V.begin(),V.end());
	cout<<M<<endl;
	for(int i=0;i<M;i++)
		cout<<V[i].code<<" "<<V[i].de<<" "<<V[i].cai<<endl;
	return 0;
}
