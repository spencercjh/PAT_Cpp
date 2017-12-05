/*
	Name:L2-020. ������
	Author: spencercjh
	Date:2017��11��16��22:56:14
	Description:����������������-��ϰ��
	Reference:
	Key Word:DFS
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
vector<int> child[100005];      //����ͽ�ܵ�����
double z,r,sum=0;
double val[100005];        //�ж��Ƿ�õ��ߺʹ���õ��߱���
void f(int id,double w) { //��ʾ��id���ˣ�w��ʾ���������Ĺ���ֵ
	if(val[id]) {     //��������Ϊ0�����ǵõ��ߣ����Ա����ӵ�sum
		sum=sum+w*val[id];
	} else {
		for(int i=0; i<child[id].size(); i++) {
			f(child[id][i],w*r);              //��ÿ��ͽ�����µݹ飬���ڸ�ͽ�ܵĹ���ֵΪw*r
		}
	}
}
int main() {
	fill(val,val+100004,0);    //��ʼ������
	int n,m,k;
	scanf("%d %lf %lf",&n,&z,&r);
	r=(100-r)/100;                //��ĿΪ����r%,����ֱ���滻����
	for (int i = 0; i < n; i++) {
		scanf("%d",&m);          //m���ж��Ƿ�Ϊ�õ���
		if (!m) {                //�õ��ߣ����Ա������浽val[]��
			scanf("%lf",&val[i]);
		} else {
			for (int j = 0; j <m; j++) {    //���ǵõ��ߣ����򴢴浽child[]������
				scanf("%d",&k);
				child[i].push_back(k);
			}
		}
	}
	f(0,z);       //�ݹ����,��0����ʦү��ʼ������Ϊz
	printf("%d\n",(int)sum);     //�����������
	return 0;
}
