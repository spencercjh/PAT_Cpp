#include<cstdio>
using namespace::std;
int main()
{
	int number1,number2,sum1=0,sum2=0;
	scanf("%d%d",&number1,&number2);
	int countt=number2-number1+1;
	for(int i=number1;i<=number2;i++)
	{
		printf("%5d",i);
		countt--;
		sum1++;
		sum2+=i;
		//printf("COUNTT:%d\n",countt);
		if(countt==0)
		{
			printf("\n");
			break;
		}
		if(sum1%5==0)
			printf("\n");
		if(i==number2)
			printf("\n");
	}
	printf("Sum = %d",sum2);
	return 0;
}
