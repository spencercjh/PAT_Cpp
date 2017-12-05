/*
	Name: 1054. 求平均值 (20)
	Author: spencercjh
	Date: 2017年9月4日 14:57:07
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int n;
	char a[20];
	int h;	//小数点数量 
	int h1;	//小数点位置 
	bool k;	//判断是否非法 
	double p;
	int n1=0;	//合法数字数量 
	double sum;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s",a);
		k = false;
		h = 0;
		for(int j=0; j<strlen(a); j++)
		{
			//既不是数字也不是负号和小数点，肯定是非法的。
			if((a[j]<'0'||a[j]>'9')&&a[j]!='-'&&a[j]!='.')
			{
				k = true;
				break;
			}
			//是负号但负号不位于第一位
			else if(a[j]=='-')
			{
				if(j!=0)
				{
					k = true;
					break;
				}
			}
			//是小数点，但小数点位于第一位，或者第一位是负号，第二位是小数点
			//注意不要考虑最后一位是小数点的情况否则最后一个测试点不通过
			else if(a[j]=='.')
			{
				if(a[0]=='-'&&j==1)
				{
					k = true;
				}
				if(j==0)
				{
					k = true;
					break;
				}
			}
			//有两位及两位以上的小数点
			if(a[j]=='.')
			{
				h++;
				h1 = j;
				if(h>1)
				{
					k = true;
					break;
				}
			}
		}
		if(k)
		{
			printf("ERROR: %s is not a legal number\n",a);
		}
		else
		{
			p = atof(a);
			if(p>1000||p<-1000)
				printf("ERROR: %s is not a legal number\n",a);
			//小数点后有两位以上
			else if(h==1&&(strlen(a)-h1)>3)
			{
				printf("ERROR: %s is not a legal number\n",a);
			}
			else
			{
				n1++;
				sum = sum+p;
			}
		}
	}
	if(n1>1)
	{
		printf("The average of %d numbers is %.2lf",n1,sum/n1);
	}
	else if(n1==0)
		printf("The average of 0 numbers is Undefined");
	else if(n1==1)
		printf("The average of 1 number is %.2lf",sum/n1);
	return 0;
}
