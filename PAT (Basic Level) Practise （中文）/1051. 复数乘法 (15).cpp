/*
	Name: 1051. 复数乘法 (15)
	Author: spencercjh
	Date: 2017年9月4日 13:32:13 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath> 
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#define EPSILON 0.01
using namespace::std;
int main()
{

	double r1, r2, p1, p2;
	double a, b;
	scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
	a = (r1 * r2) * cos(p1 + p2);
	b = (r1 * r2) * sin(p1 + p2);
	if(fabs(a) < EPSILON)
	{
		a = 0;
	}
	if(fabs(b) < EPSILON)
	{
		b = 0;
	}
	if(b < 0)
	{
		printf("%.2lf-%.2lfi", a, fabs(b));
	}
	else
	{
		printf("%.2lf+%.2lfi", a, b);
	}
	return 0;
}
