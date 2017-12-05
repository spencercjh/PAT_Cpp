#include<cstdio>
int main()
{
	int r;
	long long number,number1;
	double digit=1.0,n2=0,s=1.0;
	scanf("%lld",&number);
	if (number<0)
		{
			s=s*1.5;
			number=number*(-1);
		}
	if (number%2==0)
		s=s*2;
	number1=number;
	while(number=number/10)
		{
			digit++;
		}
	while(number1)
	{
		r=number1%10;
		number1=number1/10;
		if (r==2)
			n2++;
		else 
			continue;
	}
	s*=n2/digit;
	printf("%.2f\%%\n",s*100);
	return 0;
} 
