#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N,count=0;
	long long int  p,array[100010];
	scanf("%d %lld",&N,&p);
	for(int i=0; i<N; i++)
		scanf("%lld",&array[i]);
	sort(array,array+N);
	for(int i=0; i<N; i++)          //��������a[i]��Ϊ��С��
		for(int j=i+count; j<N; j++) //j��ΪҪ������Ը������г��ȵ�ֵ������ѭ������
		{
			if(array[j]>array[i]*p) //��������������ˣ�����һ��Ԫ����Ϊ��Сֵ
				break;
			if(j-i+1>count)         //����˴εĳ��ȴ�����һ�Σ��������г���
				count=j-i+1;
		}
	printf("%d",count);
	return 0;
}
