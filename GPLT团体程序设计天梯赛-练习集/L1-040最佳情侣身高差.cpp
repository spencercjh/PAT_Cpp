#include<cstdio>
using namespace::std;
int main()
{
	//printf("�����һ�и���������N��<=10����Ϊǰ����ѯ���û���\n");
	int n;
	scanf("%d",&n);
	if(n<=0||n>10)
		return 0;
	//fflush(stdin);
	getchar();
	char sex;
	double height;
		for(int i=0;i<n;i++)
		{
			sex=getchar();
			scanf("%lf",&height); 
			//fflush(stdin);
			getchar();
			if(height<1.0||height>3.0)
				return 0;
			if(sex=='M')
				printf("%.2lf\n",height/1.09);
			else if(sex=='F')
				printf("%.2lf\n",height*1.09);
			else
				return 0;
		}
	return 0;
}
